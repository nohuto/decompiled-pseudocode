/*
 * XREFs of PspSetJobIoAttribution @ 0x1406D4A68
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspSetJobIoRateControl @ 0x1406D4808 (PspSetJobIoRateControl.c)
 * Callees:
 *     IoStartDiskIoAttributionForContext @ 0x14024F7C8 (IoStartDiskIoAttributionForContext.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PspIsSetJobIoAttribution @ 0x1406D4C5C (PspIsSetJobIoAttribution.c)
 *     PspRemoveIoAttribution @ 0x1406D4CBC (PspRemoveIoAttribution.c)
 *     IoDiskIoAttributionAllocate @ 0x1406D4D48 (IoDiskIoAttributionAllocate.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetJobIoAttribution(_DWORD *Object, char a2, char a3, unsigned int a4)
{
  char v4; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // esi
  const EVENT_DESCRIPTOR *v17; // rbx
  REGHANDLE v18; // rdi
  int v20; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h] BYREF
  __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v26; // [rsp+70h] [rbp+7h]
  int v27; // [rsp+78h] [rbp+Fh]
  int v28; // [rsp+7Ch] [rbp+13h]
  unsigned int *v29; // [rsp+80h] [rbp+17h]
  int v30; // [rsp+88h] [rbp+1Fh]
  int v31; // [rsp+8Ch] [rbp+23h]

  v4 = 0;
  v24 = 0LL;
  *(_OWORD *)v23 = 0LL;
  if ( !a2 )
  {
    if ( a3 )
    {
      v13 = Object[384];
      if ( v13 < a4 )
      {
        v12 = 0LL;
        v16 = -1073741811;
        goto LABEL_24;
      }
      v14 = v13 - a4;
      Object[384] = v14;
      if ( v14 )
      {
        v12 = *((_QWORD *)Object + 193);
        goto LABEL_16;
      }
    }
    v15 = Object[385];
    v12 = *((_QWORD *)Object + 193);
    if ( v15 > a4 )
    {
      Object[385] = v15 - a4;
    }
    else
    {
      PspRemoveIoAttribution(Object);
      Object[385] = 0;
    }
    goto LABEL_16;
  }
  if ( (unsigned __int8)PspIsSetJobIoAttribution((__int64)Object) )
  {
    v12 = 0LL;
    v16 = -1073741637;
    goto LABEL_24;
  }
  if ( a3 )
  {
    v9 = Object[384];
    if ( v9 + a4 < v9 )
    {
      v12 = 0LL;
      v16 = -1073741670;
      goto LABEL_24;
    }
    if ( v9 )
    {
      Object[384] = v9 + a4;
      goto LABEL_18;
    }
    Object[384] = a4;
    v4 = 1;
  }
  v10 = Object[385];
  if ( v10 + a4 >= v10 )
  {
    if ( !v10 )
    {
      v11 = IoDiskIoAttributionAllocate(Object, 0LL);
      v12 = v11;
      if ( v11 )
      {
        IoStartDiskIoAttributionForContext(v11);
        v23[0] = v12;
        LOBYTE(v24) = 1;
        v23[1] = (__int64)Object;
        PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v23, 5);
        Object[385] = a4;
        *((_QWORD *)Object + 193) = v12;
LABEL_16:
        v16 = 0;
        goto LABEL_24;
      }
      v16 = -1073741801;
      goto LABEL_22;
    }
    Object[385] = v10 + a4;
LABEL_18:
    v12 = *((_QWORD *)Object + 193);
    goto LABEL_16;
  }
  v16 = -1073741670;
LABEL_22:
  v12 = 0LL;
  if ( v4 )
    Object[384] -= a4;
LABEL_24:
  v20 = Object[357];
  v17 = (const EVENT_DESCRIPTOR *)PsDiskIoAttributionStart;
  v22 = v12;
  v18 = EtwpPsProvRegHandle;
  if ( !a2 )
    v17 = &PsDiskIoAttributionStop;
  v21 = v16;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, v17) )
  {
    UserData.Reserved = 0;
    v28 = 0;
    v31 = 0;
    UserData.Ptr = (ULONGLONG)&v20;
    UserData.Size = 4;
    v26 = &v22;
    v30 = 4;
    v29 = &v21;
    v27 = 8;
    EtwWrite(v18, v17, 0LL, 3u, &UserData);
  }
  return v16;
}

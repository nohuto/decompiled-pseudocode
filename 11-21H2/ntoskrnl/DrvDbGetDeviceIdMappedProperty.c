/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x140785234
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1407880F0 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140698FBC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbOpenObjectRegKey @ 0x1407827F0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140788D90 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140A2EE50 (DrvDbGetObjectDatabaseNodeName.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140A2F540 (DrvDbOpenDeviceIdRegKey.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  __int64 *v10; // r13
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // di
  __int64 *v15; // r15
  int v16; // eax
  __int64 v17; // rcx
  int RegValueMappedProperty; // ebx
  char v19; // al
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // ecx
  __int64 v24; // rax
  int ObjectDatabaseNodeName; // eax
  __int64 v26; // rax
  wchar_t *v27; // rax
  wchar_t *v28; // rax
  HANDLE v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-40h]
  __int64 v33; // [rsp+28h] [rbp-38h]
  unsigned int v34; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-Ch]
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF
  char v37; // [rsp+A8h] [rbp+48h]

  Handle = 0LL;
  v10 = (__int64 *)a1;
  v34 = 0;
  *a5 = 0;
  *a8 = 0;
  v11 = *(_DWORD *)(a4 + 16);
  v35 = 0;
  v37 = 0;
  if ( v11 != 2 )
  {
    if ( v11 == 3 )
    {
      a1 = 0xBADB47CC74A2E194uLL;
      v12 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
      if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
        v12 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v12 )
      {
        v13 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
        if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
          v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        v14 = 1;
        if ( !v13 )
          goto LABEL_9;
        goto LABEL_46;
      }
    }
LABEL_64:
    if ( *((_DWORD *)&DEVPKEY_DeviceId_DriverInfMatches + 4) == v11 )
    {
      v31 = DEVPKEY_DeviceId_DriverInfMatches - *(_QWORD *)a4;
      if ( DEVPKEY_DeviceId_DriverInfMatches == *(_QWORD *)a4 )
        v31 = *(&DEVPKEY_DeviceId_DriverInfMatches + 1) - *(_QWORD *)(a4 + 8);
      if ( !v31 && &off_14000AE78 )
      {
        if ( !a3 )
        {
          RegValueMappedProperty = DrvDbOpenDeviceIdRegKey((_DWORD)v10, a2, 1, 0, (__int64)&Handle, 0LL);
          if ( RegValueMappedProperty < 0 )
            goto LABEL_19;
          a3 = Handle;
        }
        RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v31, a3, &off_14000AE78, a5, a6, a7, a8);
        goto LABEL_19;
      }
    }
    return (unsigned int)-1073741802;
  }
  v24 = *(_QWORD *)a4 - DEVPKEY_NODE;
  if ( *(_QWORD *)a4 == DEVPKEY_NODE )
    v24 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
  if ( !v24 )
  {
    *a5 = 18;
    ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(a1, 5LL, a2, a6, a7 >> 1, a8);
    RegValueMappedProperty = ObjectDatabaseNodeName;
    if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
      *a8 *= 2;
    goto LABEL_19;
  }
  v26 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
    v26 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v26 )
    goto LABEL_64;
LABEL_46:
  v14 = 0;
LABEL_9:
  if ( (*(_WORD *)a2 != 64
     || (v27 = wcschr((const wchar_t *)(a2 + 2), 0x3Au)) == 0LL
     || (v28 = v27 + 1) == 0LL
     || v28 == (wchar_t *)a2)
    && !v10[6] )
  {
    v15 = (__int64 *)v10[2];
    if ( v15 == v10 + 2 )
    {
LABEL_18:
      RegValueMappedProperty = -1073741772;
      goto LABEL_19;
    }
    while ( 1 )
    {
      LOBYTE(v33) = 0;
      LODWORD(v32) = 1;
      v16 = DrvDbOpenObjectRegKey(v10, v15, 5u, a2, v32, v33, &Handle, 0LL, 0LL);
      RegValueMappedProperty = v16;
      if ( v16 >= 0 )
      {
        v37 = 1;
        RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(
                                   v17,
                                   (__int64)Handle,
                                   a6 + v35,
                                   (a7 - v35) >> 1,
                                   &v34,
                                   v14);
        ZwClose(Handle);
        Handle = 0LL;
        if ( RegValueMappedProperty >= 0 )
          goto LABEL_23;
        if ( RegValueMappedProperty != -1073741275 )
        {
          if ( RegValueMappedProperty != -1073741789 )
          {
LABEL_52:
            v19 = v37;
            goto LABEL_53;
          }
LABEL_23:
          v21 = 2 * v34 - 2;
          if ( 2 * v34 <= 2 )
            v21 = 2 * v34;
          if ( a6 )
          {
            v22 = v35;
            if ( v21 + v35 < a7 )
              v22 = v21 + v35;
            v35 = v22;
          }
          *a8 += v21;
          goto LABEL_15;
        }
      }
      else if ( v16 != -1073741772 )
      {
        goto LABEL_52;
      }
      RegValueMappedProperty = 0;
LABEL_15:
      v15 = (__int64 *)*v15;
      if ( v15 == v10 + 2 )
      {
        v19 = v37;
        if ( RegValueMappedProperty >= 0 )
          goto LABEL_17;
LABEL_53:
        if ( RegValueMappedProperty != -1073741789 )
          goto LABEL_19;
LABEL_17:
        if ( !v19 )
          goto LABEL_18;
        if ( *a8 )
        {
          *a5 = 8210;
          v23 = *a8 + 2;
          *a8 = v23;
          if ( a6 && v23 <= a7 )
            *(_WORD *)(a6 + 2 * ((unsigned __int64)v23 >> 1) - 2) = 0;
          else
            RegValueMappedProperty = -1073741789;
        }
        else
        {
          RegValueMappedProperty = -1073741275;
        }
        goto LABEL_19;
      }
    }
  }
  v29 = 0LL;
  if ( a3 != (HANDLE)-1LL )
    v29 = a3;
  if ( !v29 )
  {
    RegValueMappedProperty = DrvDbOpenDeviceIdRegKey((_DWORD)v10, a2, 1, 0, (__int64)&Handle, 0LL);
    if ( RegValueMappedProperty < 0 )
      goto LABEL_19;
    v29 = Handle;
  }
  RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(a1, (__int64)v29, a6, a7 >> 1, &v34, v14);
  if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
  {
    v30 = 2 * v34;
    *a5 = 8210;
    *a8 = v30;
  }
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}

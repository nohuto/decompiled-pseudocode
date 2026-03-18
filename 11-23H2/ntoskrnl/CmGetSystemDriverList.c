/*
 * XREFs of CmGetSystemDriverList @ 0x140B3E4A0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140B3CA80 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14022E640 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwOpenKey @ 0x14041AFA0 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x14041B860 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041D6E0 (ZwQueryDirectoryObject.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     memset @ 0x140435A00 (memset.c)
 *     RtlEqualUnicodeString @ 0x1406DA2F0 (RtlEqualUnicodeString.c)
 *     CmpLockRegistryExclusive @ 0x1407691EC (CmpLockRegistryExclusive.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140B3F9E4 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpSortDriverList @ 0x140B59238 (CmpSortDriverList.c)
 *     CmpFindDrivers @ 0x140B5A8DC (CmpFindDrivers.c)
 *     CmpFreeDriverList @ 0x140B68118 (CmpFreeDriverList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B71B08 (CmpOpenSystemDriverHiveContext.c)
 *     CmpCloseSystemDriverHiveContext @ 0x140B75548 (CmpCloseSystemDriverHiveContext.c)
 */

__int64 __fastcall CmGetSystemDriverList(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // r13
  UNICODE_STRING *v3; // rsi
  __int64 v4; // r14
  char v5; // r15
  BOOLEAN v6; // r12
  int DirectoryObject; // eax
  const UNICODE_STRING *k; // rdi
  PVOID *i; // rbx
  __int64 *v10; // rax
  int j; // edx
  __int64 v12; // rbx
  unsigned int v13; // edi
  PVOID **v14; // rdi
  PVOID **v15; // rcx
  __int64 result; // rax
  int v17; // eax
  _DWORD *v18; // rax
  _DWORD *v19; // rbx
  PVOID *v20; // rax
  __int64 v21; // rax
  PVOID *v22; // rcx
  PVOID *v23; // rax
  PVOID *v24; // rbx
  PVOID *v25; // rbx
  int v26; // [rsp+40h] [rbp-C8h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  __int64 v29[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  __int64 v32; // [rsp+88h] [rbp-80h] BYREF
  PVOID v33; // [rsp+90h] [rbp-78h] BYREF
  PVOID *v34; // [rsp+98h] [rbp-70h]
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *Pool2; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v40; // [rsp+F8h] [rbp-10h] BYREF
  ULONG_PTR v41[8]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v42[8]; // [rsp+148h] [rbp+40h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v43; // [rsp+188h] [rbp+80h] BYREF

  v37 = a1;
  v1 = a1;
  v32 = 0LL;
  v40 = 0LL;
  v2 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&v43, 0, sizeof(v43));
  memset(v41, 0, sizeof(v41));
  LODWORD(v41[7]) = -1;
  memset(v42, 0, sizeof(v42));
  LODWORD(v42[7]) = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  v3 = 0LL;
  v4 = 0LL;
  v34 = &v33;
  v5 = 0;
  v6 = 0;
  v33 = &v33;
  CmpInitializeThreadInfo((__int64)&v40);
  v29[1] = (__int64)v29;
  v29[0] = (__int64)v29;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString) >= 0 )
  {
    if ( !CmStateSeparationEnabled
      || (v17 = CmpOpenSystemDriverHiveContext(&CmpDevicesHiveNameString), (int)(v17 + 0x80000000) < 0)
      || v17 == -1073741772 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes) >= 0 )
      {
        Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, 0x400uLL, 0x20204D43u);
        v3 = Pool2;
        if ( Pool2 )
        {
          DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
          if ( DirectoryObject == -2147483622 )
          {
LABEL_12:
            v6 = CmpAcquireShutdownRundown();
            if ( v6 )
            {
              CmpAttachToRegistryProcess((__int64)&v43);
              v2 = 1;
              CmpLockRegistryExclusive();
              v5 = 1;
              if ( (int)CmpAcquireSystemDriverHiveContext(v41) >= 0
                && (!v42[4] || (int)CmpAcquireSystemDriverHiveContext(v42) >= 0) )
              {
                for ( i = (PVOID *)P; i != &P; i = (PVOID *)*i )
                {
                  if ( (int)CmpAcquireSystemDriverHiveContext(i) >= 0 )
                  {
                    v21 = ExAllocatePool2(256LL, 0x30uLL, 0x20204D43u);
                    v22 = (PVOID *)v21;
                    if ( !v21 )
                      goto LABEL_28;
                    *(_OWORD *)(v21 + 16) = *((_OWORD *)i + 1);
                    *(_QWORD *)(v21 + 32) = i[6];
                    *(_DWORD *)(v21 + 40) = *((_DWORD *)i + 14);
                    v23 = v34;
                    if ( *v34 != &v33 )
                      goto LABEL_60;
                    v22[1] = v34;
                    *v22 = &v33;
                    *v23 = v22;
                    v34 = v22;
                  }
                }
                if ( (unsigned __int8)CmpFindDrivers(
                                        v41[6],
                                        (__int64)&v33,
                                        (int)&v32 + 4,
                                        (__int64)&v32,
                                        v26,
                                        (__int64)v29,
                                        v27,
                                        v1,
                                        v28)
                  && (unsigned __int8)CmpSortDriverList(v41[6]) )
                {
                  CmpUnlockRegistry();
                  v10 = (__int64 *)v29[0];
                  v5 = 0;
                  for ( j = 0; v10 != v29; ++j )
                    v10 = (__int64 *)*v10;
                  v4 = ExAllocatePool2(64LL, 8LL * (unsigned int)(j + 1), 0x32384D43u);
                  if ( !v4 )
                    KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                  v12 = v29[0];
                  v13 = 0;
                  if ( (__int64 *)v29[0] != v29 )
                  {
                    do
                    {
                      ObjectAttributes.Length = 48;
                      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 32);
                      ObjectAttributes.RootDirectory = 0LL;
                      ObjectAttributes.Attributes = 576;
                      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                      if ( ZwOpenKey((PHANDLE)(v4 + 8LL * v13), 0x2001Fu, &ObjectAttributes) >= 0 )
                        ++v13;
                      v12 = *(_QWORD *)v12;
                    }
                    while ( (__int64 *)v12 != v29 );
                    v3 = Pool2;
                  }
                  *(_QWORD *)(v4 + 8LL * v13) = 0LL;
                }
              }
            }
          }
          else
          {
            while ( DirectoryObject >= 0 )
            {
              for ( k = v3; k->Length; k += 2 )
              {
                if ( !RtlEqualUnicodeString(k, &CmpSystemFileName, 1u) )
                {
                  v18 = (_DWORD *)ExAllocatePool2(256LL, 0x40uLL, 0x20204D43u);
                  v19 = v18;
                  if ( !v18 )
                    goto LABEL_28;
                  memset(v18, 0, 0x40uLL);
                  v19[14] = -1;
                  if ( (int)CmpOpenSystemDriverHiveContext(k) >= 0 )
                  {
                    v20 = p_P;
                    if ( *p_P != &P )
LABEL_60:
                      __fastfail(3u);
                    *((_QWORD *)v19 + 1) = p_P;
                    *(_QWORD *)v19 = &P;
                    *v20 = v19;
                    p_P = (PVOID *)v19;
                  }
                  else
                  {
                    ExFreePoolWithTag(v19, 0);
                  }
                }
              }
              DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v3);
              if ( DirectoryObject == -2147483622 )
              {
                v1 = v37;
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  if ( (__int64 *)v29[0] != v29 )
    CmpFreeDriverList(v41[6], v29);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess(&v43);
  if ( v6 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v41);
  if ( v42[4] )
    CmpCloseSystemDriverHiveContext(v42);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v14 = (PVOID **)P;
  if ( P != &P )
  {
    do
    {
      v24 = *v14;
      CmpCloseSystemDriverHiveContext(v14);
      ExFreePoolWithTag(v14, 0);
      v14 = (PVOID **)v24;
    }
    while ( v24 != &P );
  }
  v15 = (PVOID **)v33;
  if ( v33 != &v33 )
  {
    do
    {
      v25 = *v15;
      ExFreePoolWithTag(v15, 0);
      v15 = (PVOID **)v25;
    }
    while ( v25 != &v33 );
  }
  result = v4;
  *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex = v40;
  return result;
}

/*
 * XREFs of CmGetSystemDriverList @ 0x140B3E4A0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140B3CA80 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x14041BBF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041DA70 (ZwQueryDirectoryObject.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
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
  NTSTATUS v7; // eax
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
  int Context; // [rsp+30h] [rbp-D8h]
  PULONG ReturnLength; // [rsp+38h] [rbp-D0h]
  int v28; // [rsp+40h] [rbp-C8h]
  __int64 v29; // [rsp+50h] [rbp-B8h]
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  ULONG v34; // [rsp+88h] [rbp-80h] BYREF
  ULONG v35; // [rsp+8Ch] [rbp-7Ch] BYREF
  PVOID v36; // [rsp+90h] [rbp-78h] BYREF
  PVOID *v37; // [rsp+98h] [rbp-70h]
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *Pool2; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v43; // [rsp+F8h] [rbp-10h] BYREF
  ULONG_PTR v44[8]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v45[8]; // [rsp+148h] [rbp+40h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v46; // [rsp+188h] [rbp+80h] BYREF

  v40 = a1;
  v1 = a1;
  v35 = 0;
  v34 = 0;
  v43 = 0LL;
  v2 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&v46, 0, sizeof(v46));
  memset(v44, 0, sizeof(v44));
  LODWORD(v44[7]) = -1;
  memset(v45, 0, sizeof(v45));
  LODWORD(v45[7]) = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  v3 = 0LL;
  v4 = 0LL;
  v37 = &v36;
  v5 = 0;
  v6 = 0;
  v36 = &v36;
  CmpInitializeThreadInfo((__int64)&v43);
  v31[1] = (__int64)v31;
  v31[0] = (__int64)v31;
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
          v7 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, 0x400u, 1u, 1u, &v35, &v34);
          if ( v7 == -2147483622 )
          {
LABEL_12:
            v6 = CmpAcquireShutdownRundown();
            if ( v6 )
            {
              CmpAttachToRegistryProcess((__int64)&v46);
              v2 = 1;
              CmpLockRegistryExclusive();
              v5 = 1;
              if ( (int)CmpAcquireSystemDriverHiveContext(v44) >= 0
                && (!v45[4] || (int)CmpAcquireSystemDriverHiveContext(v45) >= 0) )
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
                    v23 = v37;
                    if ( *v37 != &v36 )
                      goto LABEL_60;
                    v22[1] = v37;
                    *v22 = &v36;
                    *v23 = v22;
                    v37 = v22;
                  }
                }
                if ( (unsigned __int8)CmpFindDrivers(
                                        v44[6],
                                        (__int64)&v36,
                                        Context,
                                        (__int64)ReturnLength,
                                        v28,
                                        (__int64)v31,
                                        v29,
                                        v1,
                                        v30)
                  && (unsigned __int8)CmpSortDriverList(v44[6]) )
                {
                  CmpUnlockRegistry();
                  v10 = (__int64 *)v31[0];
                  v5 = 0;
                  for ( j = 0; v10 != v31; ++j )
                    v10 = (__int64 *)*v10;
                  v4 = ExAllocatePool2(64LL, 8LL * (unsigned int)(j + 1), 0x32384D43u);
                  if ( !v4 )
                    KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                  v12 = v31[0];
                  v13 = 0;
                  if ( (__int64 *)v31[0] != v31 )
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
                    while ( (__int64 *)v12 != v31 );
                    v3 = Pool2;
                  }
                  *(_QWORD *)(v4 + 8LL * v13) = 0LL;
                }
              }
            }
          }
          else
          {
            while ( v7 >= 0 )
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
              v7 = ZwQueryDirectoryObject(DirectoryHandle, v3, 0x400u, 1u, 0, &v35, &v34);
              if ( v7 == -2147483622 )
              {
                v1 = v40;
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  if ( (__int64 *)v31[0] != v31 )
    CmpFreeDriverList(v44[6], v31);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess(&v46);
  if ( v6 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v44);
  if ( v45[4] )
    CmpCloseSystemDriverHiveContext(v45);
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
  v15 = (PVOID **)v36;
  if ( v36 != &v36 )
  {
    do
    {
      v25 = *v15;
      ExFreePoolWithTag(v15, 0);
      v15 = (PVOID **)v25;
    }
    while ( v25 != &v36 );
  }
  result = v4;
  *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex = v43;
  return result;
}

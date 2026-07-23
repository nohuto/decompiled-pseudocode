/*
 * XREFs of sub_1406F0614 @ 0x1406F0614
 * Callers:
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14041C080 (ZwQueryVolumeInformationFile.c)
 *     sub_1406EF58C @ 0x1406EF58C (sub_1406EF58C.c)
 *     ?Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z @ 0x1406F09A8 (-Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z.c)
 *     sub_1406F0C9C @ 0x1406F0C9C (sub_1406F0C9C.c)
 *     sub_1406F0FCC @ 0x1406F0FCC (sub_1406F0FCC.c)
 *     sub_1406F1AC4 @ 0x1406F1AC4 (sub_1406F1AC4.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall sub_1406F0614(CEnumMediaTypes *this, char a2, _DWORD *a3)
{
  struct _SECURITY_CLIENT_CONTEXT *ClientContext; // r15
  volatile signed __int64 *v6; // r14
  char *v7; // r13
  __int64 v8; // r8
  int v9; // r12d
  int v10; // eax
  bool v11; // r12
  int v12; // eax
  void *v13; // rsi
  NTSTATUS v14; // r15d
  bool v15; // r15
  unsigned int v16; // edx
  unsigned int *v17; // r9
  void *v18; // r12
  bool v19; // zf
  int v20; // r13d
  __int128 v22; // xmm1
  UNICODE_STRING v23; // xmm1
  bool v24; // [rsp+40h] [rbp-79h]
  char v25; // [rsp+41h] [rbp-78h]
  _DWORD v26[3]; // [rsp+44h] [rbp-75h] BYREF
  int v27; // [rsp+50h] [rbp-69h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-61h] BYREF
  struct _SECURITY_CLIENT_CONTEXT *v29; // [rsp+68h] [rbp-51h]
  _DWORD *v30; // [rsp+70h] [rbp-49h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK v32; // [rsp+88h] [rbp-31h] BYREF
  __int128 FsInformation; // [rsp+98h] [rbp-21h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-11h]
  _OWORD FileInformation[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v36; // [rsp+D0h] [rbp+17h]

  v30 = a3;
  v25 = 0;
  v29 = 0LL;
  v36 = 0LL;
  memset(v26, 0, sizeof(v26));
  ClientContext = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  v32 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*((_DWORD *)this + 204) & 4) == 0 )
    return 0LL;
  _InterlockedAnd((volatile signed __int32 *)this + 206, 0xFFFFFFFC);
  if ( !*((_QWORD *)this + 20) && !*((_QWORD *)this + 24) )
    return 0LL;
  v6 = (volatile signed __int64 *)((char *)this + 688);
  v7 = (char *)this + (*((_QWORD *)this + 24) != 0LL ? 184LL : 152LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)this + 688, 0LL);
  if ( (*((_DWORD *)this + 204) & 2) != 0 )
    v8 = *((unsigned int *)this + 74);
  else
    v8 = 0LL;
  sub_1406F0FCC(0LL, v7, v8, (char *)this + 136, *((_QWORD *)this + 137) == qword_140D05008);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((char *)this + 688);
  sub_1402AFC00((ULONG_PTR)this + 688);
  v9 = *((_DWORD *)this + 3);
  v24 = (v9 & 4) != 0;
  v10 = *((_DWORD *)this + 204) >> 1;
  LOBYTE(v10) = (*((_DWORD *)this + 204) & 2) != 0;
  v27 = v10;
  if ( a2 && *((_QWORD *)this + 90) )
  {
    ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)((char *)this + 704);
    v29 = (struct _SECURITY_CLIENT_CONTEXT *)((char *)this + 704);
  }
  v11 = (v9 & 0x4000000) == 0;
  while ( 1 )
  {
    v34 = 0LL;
    FsInformation = 0LL;
    IoStatusBlock = 0LL;
    v12 = sub_1406F0C9C((__int64)&v26[1], 0, v10, ClientContext);
    v13 = *(void **)&v26[1];
    v14 = v12;
    if ( v12 < 0 )
      goto LABEL_41;
    v14 = ZwQueryVolumeInformationFile(*(HANDLE *)&v26[1], &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
    if ( v14 < 0 )
      goto LABEL_41;
    v15 = v24;
    v26[0] = HIDWORD(v34);
    if ( !v24 && v11 && ((HIDWORD(v34) - 1) & *((_DWORD *)this + 1)) != 0 )
    {
      if ( (*((_DWORD *)this + 3) & 0x400) == 0 && (*((_DWORD *)this + 204) & 2) == 0 )
      {
        v14 = -1073741306;
LABEL_41:
        v20 = v26[0];
LABEL_32:
        if ( v13 )
        {
          ZwClose(v13);
          if ( *((_QWORD *)this + 100) && DestinationString.Buffer )
          {
            ExAcquirePushLockExclusiveEx((ULONG_PTR)this + 688, 0LL);
            v23 = DestinationString;
            *(_OWORD *)((char *)this + 184) = *(_OWORD *)((char *)this + 152);
            *(UNICODE_STRING *)((char *)this + 152) = v23;
            if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((char *)this + 688);
            sub_1402AFC00((ULONG_PTR)this + 688);
            RtlInitUnicodeString(&DestinationString, 0LL);
          }
        }
        goto LABEL_22;
      }
      v11 = 0;
      ZwClose(v13);
      v13 = 0LL;
      *(_QWORD *)&v26[1] = 0LL;
    }
    if ( v13 )
      break;
    LOBYTE(v10) = v27;
    ClientContext = v29;
  }
  LODWORD(v36) = 0x2000;
  ZwSetInformationFile(v13, &v32, FileInformation, 0x28u, FileBasicInformation);
  if ( *((_QWORD *)this + 100) )
  {
    sub_1406F1AC4(this, 0LL);
    v18 = (void *)*((_QWORD *)this + 100);
  }
  else
  {
    v25 = 1;
    v18 = 0LL;
  }
  v19 = *((_QWORD *)this + 24) == 0LL;
  *((_QWORD *)this + 100) = v13;
  if ( !v19 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)this + 688, 0LL);
    v22 = *(_OWORD *)((char *)this + 184);
    DestinationString = *(UNICODE_STRING *)((char *)this + 152);
    *(_OWORD *)((char *)this + 152) = v22;
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((char *)this + 688);
    sub_1402AFC00((ULONG_PTR)this + 688);
    RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 184), 0LL);
    v15 = v24;
    v13 = *(void **)&v26[1];
  }
  v20 = v26[0];
  LOBYTE(v16) = v15;
  v14 = CEnumMediaTypes::Next(this, v16, (struct _AMMediaType **)v26[0], v17);
  if ( v14 < 0 )
  {
    *((_QWORD *)this + 100) = v18;
    goto LABEL_32;
  }
  if ( !v25 )
    sub_1406EF58C((__int64)this, 1u, 0);
  v13 = 0LL;
  *(_QWORD *)&v26[1] = 0LL;
  if ( v18 )
  {
    ZwClose(v18);
    goto LABEL_32;
  }
LABEL_22:
  if ( v30 )
    *v30 = v20;
  RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 184));
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v14;
}

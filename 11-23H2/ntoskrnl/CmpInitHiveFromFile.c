/*
 * XREFs of CmpInitHiveFromFile @ 0x14068B418
 * Callers:
 *     CmpCmdHiveOpen @ 0x14068B2C0 (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 * Callees:
 *     CmSiAllocateMemory @ 0x1402089E0 (CmSiAllocateMemory.c)
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     SetFailureLocation @ 0x1402F6C80 (SetFailureLocation.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B310 (ZwQueryInformationFile.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpOpenHiveFiles @ 0x14068B784 (CmpOpenHiveFiles.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpLogEvent @ 0x140A0FE84 (CmpLogEvent.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AF5008 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AF502C (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140AF506C (CmpIsHiveLoadUnloadRundownActive.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        unsigned __int16 *a1,
        unsigned int a2,
        _QWORD *a3,
        char *a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  char UnloadRundown; // r15
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // ebx
  char v18; // r13
  int v19; // r14d
  int Hive; // eax
  ULONG_PTR v21; // rcx
  int v22; // ebx
  __int64 i; // [rsp+30h] [rbp-D0h]
  __int64 v24; // [rsp+40h] [rbp-C0h]
  char v25[8]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v26; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v27; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  char *v30; // [rsp+80h] [rbp-80h]
  HANDLE Handle[2]; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v32[2]; // [rsp+98h] [rbp-68h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  _QWORD *v35; // [rsp+B8h] [rbp-48h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-40h] BYREF
  __int128 FileInformation; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-10h]
  _OWORD v40[3]; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41[2]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int *v42; // [rsp+150h] [rbp+50h]
  int v43; // [rsp+158h] [rbp+58h]
  int v44; // [rsp+15Ch] [rbp+5Ch]
  __int64 v45; // [rsp+160h] [rbp+60h]
  _DWORD v46[2]; // [rsp+168h] [rbp+68h] BYREF

  v28 = 0;
  v26 = 0LL;
  UnloadRundown = 0;
  v33 = a9;
  v30 = a4;
  v35 = a3;
  v27 = a2;
  v34 = a6;
  FileInformation = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  IoStatusBlock = 0LL;
  memset(v40, 0, sizeof(v40));
  *(_OWORD *)Handle = 0LL;
  *(_OWORD *)v32 = 0LL;
  if ( (unsigned int)dword_140C04390 > 4 && tlgKeywordOn((__int64)&dword_140C04390, 8LL) )
  {
    v44 = 0;
    v46[1] = 0;
    v42 = v46;
    v45 = *((_QWORD *)a1 + 1);
    v46[0] = *a1;
    v43 = 2;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)byte_140037E8D, 0LL, 0LL, 4u, v41);
  }
  v14 = a2;
  v24 = (__int64)a10;
  v25[0] = *a4;
  for ( i = a6; ; i = v34 )
  {
    v29 = 0LL;
    v15 = CmpOpenHiveFiles(
            (_DWORD)a1,
            v14,
            a5,
            (unsigned int)&v28,
            (__int64)v25,
            (__int64)Handle,
            i,
            (__int64)&v29,
            v24);
    v16 = v15;
    if ( v15 < 0 )
    {
      SetFailureLocation((__int64)a10, 0, 28, v15, 16);
      goto LABEL_7;
    }
    if ( !UnloadRundown )
      break;
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive() )
    {
      v16 = -1073741431;
LABEL_8:
      CmpReleaseHiveLoadUnloadRundown();
      goto LABEL_9;
    }
LABEL_21:
    v18 = v25[0];
    v19 = v25[0] == 0 ? 5 : 0;
    memset(a10, 0, 0x1B0uLL);
    Hive = CmpCreateHive(
             (unsigned int)&v26,
             v19,
             v27,
             v28,
             0LL,
             (__int64)Handle,
             (__int64)a1,
             a5,
             0LL,
             0LL,
             v33,
             (__int64)a10);
    v16 = Hive;
    if ( Hive != -1073741267 )
    {
      if ( Hive < 0 )
      {
        SetFailureLocation((__int64)a10, 0, 28, Hive, 32);
      }
      else
      {
        if ( v19 )
        {
          if ( (*(_DWORD *)(v26 + 4112) & 0x800) != 0 )
          {
            CmpAttachToRegistryProcess(v40);
            v22 = CmpFlushHive(v26);
            CmpDetachFromRegistryProcess(v40);
            if ( v22 < 0 )
              SetFailureLocation((__int64)a10, 1, 28, v22, 48);
          }
        }
        *(_QWORD *)(v26 + 1848) = CmSiAllocateMemory(*a1, 0x624E4D43u);
        v21 = v26;
        if ( *(_QWORD *)(v26 + 1848) )
        {
          *(_WORD *)(v26 + 1840) = *a1;
          *(_WORD *)(v26 + 1842) = *a1;
          memmove(*(void **)(v26 + 1848), *((const void **)a1 + 1), *a1);
          v21 = v26;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v21 + 64) + 4088LL) & 4) != 0 )
          CmpLogEvent(&REG_EVENT_SELFHEAL);
        if ( ZwQueryInformationFile(Handle[0], &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
          *(_QWORD *)(v26 + 4184) = v38;
        v16 = 0;
        *(_DWORD *)(v26 + 188) = HIDWORD(v29);
        *v35 = v26;
        *v30 = v18;
      }
LABEL_7:
      if ( !UnloadRundown )
        goto LABEL_9;
      goto LABEL_8;
    }
    ZwClose(Handle[0]);
    if ( Handle[1] )
      ZwClose(Handle[1]);
    if ( v32[0] )
      ZwClose(v32[0]);
    v14 = v27;
    v24 = (__int64)a10;
    v25[0] = *v30;
  }
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
    goto LABEL_21;
  v16 = -1073741431;
LABEL_9:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( Handle[1] )
    ZwClose(Handle[1]);
  if ( v32[0] )
    ZwClose(v32[0]);
  if ( (unsigned int)dword_140C04390 > 4 && tlgKeywordOn((__int64)&dword_140C04390, 8LL) )
  {
    v44 = 0;
    v42 = &v27;
    v27 = v16;
    v43 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)qword_140037EB8, 0LL, 0LL, 3u, v41);
  }
  return v16;
}

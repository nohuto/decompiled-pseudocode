/*
 * XREFs of CmpInitHiveFromFile @ 0x1407122B0
 * Callers:
 *     CmpCmdHiveOpen @ 0x14070AAD0 (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 * Callees:
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x140742D8C (CmpQueryFileSecurityDescriptor.c)
 *     CmpLogEvent @ 0x140911974 (CmpLogEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AB4138 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AB4178 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140AB419C (CmpIsHiveLoadUnloadRundownActive.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        const UNICODE_STRING *a1,
        int a2,
        _QWORD *a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  _QWORD *v10; // r10
  __int64 v11; // r8
  HANDLE v14; // rsi
  unsigned int v15; // ecx
  HANDLE v16; // r14
  int v17; // edi
  signed int v18; // eax
  unsigned int v19; // ebx
  int v21; // r13d
  signed int v22; // eax
  signed int v23; // eax
  unsigned int v24; // ebx
  HANDLE v25; // r13
  signed int v26; // eax
  char v27; // bl
  ULONG_PTR v28; // rcx
  signed int FileSecurityDescriptor; // eax
  signed int v30; // eax
  signed int v31; // ebx
  char v32; // [rsp+60h] [rbp-A0h]
  char v33; // [rsp+61h] [rbp-9Fh]
  char UnloadRundown; // [rsp+62h] [rbp-9Eh]
  ULONG_PTR v35; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+78h] [rbp-88h]
  int v38; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+88h] [rbp-78h]
  int v41; // [rsp+8Ch] [rbp-74h]
  HANDLE v42; // [rsp+90h] [rbp-70h]
  HANDLE FileHandle; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  _QWORD *v45; // [rsp+A8h] [rbp-58h]
  int v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B4h] [rbp-4Ch]
  __int64 v48; // [rsp+B8h] [rbp-48h] BYREF
  char *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int128 v51; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v52; // [rsp+E0h] [rbp-20h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-10h] BYREF
  __int128 FileInformation; // [rsp+100h] [rbp+0h] BYREF
  __int128 v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+20h]
  _OWORD v57[3]; // [rsp+128h] [rbp+28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58[2]; // [rsp+160h] [rbp+60h] BYREF
  int *v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  wchar_t *Buffer; // [rsp+190h] [rbp+90h]
  _DWORD v62[2]; // [rsp+198h] [rbp+98h] BYREF

  v50 = a9;
  v45 = a3;
  v10 = a3;
  v11 = a6;
  v49 = a4;
  v38 = a2;
  v39 = a6;
  v51 = 0LL;
  v41 = 0;
  v52 = 0LL;
  v47 = 0;
  v35 = 0LL;
  v40 = 0;
  FileInformation = 0LL;
  v56 = 0LL;
  v55 = 0LL;
  IoStatusBlock = 0LL;
  memset(v57, 0, sizeof(v57));
  if ( (unsigned int)dword_140C03868 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03868, 8LL) )
    {
      v60 = 2LL;
      v59 = v62;
      Buffer = a1->Buffer;
      v62[0] = a1->Length;
      v62[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03868,
        (unsigned __int8 *)&byte_140028C77,
        0LL,
        0LL,
        4u,
        v58);
      a4 = v49;
      v10 = v45;
    }
    v11 = v39;
  }
  v33 = 0;
  v14 = 0LL;
  v15 = (a5 >> 19) & 0x40;
  UnloadRundown = 0;
  FileHandle = 0LL;
  v46 = a2 & 0x8000;
  v16 = 0LL;
  Handle = 0LL;
  v42 = 0LL;
  v32 = 1;
  P = 0LL;
  if ( (a2 & 0x8000) != 0 )
  {
    v32 = 0;
    v17 = v15 | ((a2 & 0x40000 | 0x10000u) >> 11);
  }
  else
  {
    v17 = v15 | 2;
    if ( (a5 & 0x40000000) == 0 )
      v17 = (a5 >> 19) & 0x40;
    if ( *a4 )
      v17 |= 1u;
  }
  while ( 1 )
  {
    *v10 = 0LL;
    v48 = 0LL;
    v18 = CmpOpenHiveFile(a1, v17, v11, (__int64)&v48, 0LL, 0LL, (__int64)a10);
    v19 = v18;
    if ( v18 < 0 )
    {
      SetFailureLocation((__int64)a10, 0, 28, v18, 0x10u);
LABEL_9:
      if ( !UnloadRundown )
        goto LABEL_10;
LABEL_47:
      CmpReleaseHiveLoadUnloadRundown();
      goto LABEL_10;
    }
    v21 = v17;
    if ( v40 == 2 )
    {
      v21 = v17 | 0x10;
      v33 = 1;
    }
    if ( !v46 )
    {
      FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(FileHandle);
      v19 = FileSecurityDescriptor;
      if ( FileSecurityDescriptor < 0 )
      {
        SetFailureLocation((__int64)a10, 0, 28, FileSecurityDescriptor, 0x20u);
        goto LABEL_9;
      }
    }
    if ( (a5 & 0x10000000) != 0 )
    {
      v37 = 1;
      v30 = CmpOpenHiveFile(a1, v21, v39, 0LL, (__int64)P, 0LL, (__int64)a10);
      v19 = v30;
      if ( v30 < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v32 )
        {
          SetFailureLocation((__int64)a10, 0, 28, v30, 0x30u);
          goto LABEL_9;
        }
      }
      else
      {
        v14 = Handle;
      }
    }
    else
    {
      v37 = 2;
      v22 = CmpOpenHiveFile(a1, v21, v39, 0LL, (__int64)P, 0LL, (__int64)a10);
      v19 = v22;
      if ( v22 < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v32 )
        {
          SetFailureLocation((__int64)a10, 0, 28, v22, 0x40u);
          goto LABEL_9;
        }
      }
      else
      {
        v14 = Handle;
      }
      v23 = CmpOpenHiveFile(a1, v21, v39, 0LL, (__int64)P, 0LL, (__int64)a10);
      v19 = v23;
      if ( v23 < 0 )
      {
        v16 = 0LL;
        v42 = 0LL;
        if ( v32 )
        {
          SetFailureLocation((__int64)a10, 0, 28, v23, 0x50u);
          goto LABEL_9;
        }
      }
      else
      {
        v16 = v42;
      }
    }
    v24 = v37;
    if ( !v32 )
    {
      if ( v37 == 2 )
      {
        if ( v14 )
        {
          if ( v16 )
            goto LABEL_34;
          ZwClose(v14);
          v14 = 0LL;
          Handle = 0LL;
        }
        if ( v16 )
        {
          ZwClose(v16);
          v16 = 0LL;
          v42 = 0LL;
        }
        v24 = 0;
      }
      else if ( v37 == 1 )
      {
        v24 = v14 != 0LL;
      }
    }
LABEL_34:
    if ( !UnloadRundown )
      break;
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive() )
    {
      v19 = -1073741431;
      goto LABEL_47;
    }
LABEL_36:
    v25 = FileHandle;
    *(_QWORD *)&v51 = FileHandle;
    *((_QWORD *)&v51 + 1) = v14;
    v52 = (unsigned __int64)v16;
    memset(a10, 0, 0x1B0uLL);
    v26 = CmpCreateHive(&v35, v33 == 0 ? 5 : 0, v38, v24, 0LL, &v51, (__int64)a1, a5, 0LL, 0LL, v50, (__int64)a10);
    v19 = v26;
    if ( v26 != -1073741267 )
    {
      if ( v26 < 0 )
      {
        SetFailureLocation((__int64)a10, 0, 28, v26, 0x60u);
      }
      else
      {
        v27 = v33;
        if ( !v33 && (*(_DWORD *)(v35 + 4112) & 0x800) != 0 )
        {
          CmpAttachToRegistryProcess(v57);
          v31 = CmpFlushHive(v35, 0xCu);
          CmpDetachFromRegistryProcess(v57);
          if ( v31 < 0 )
            SetFailureLocation((__int64)a10, 1, 1, v31, 0xE6u);
          v27 = 0;
        }
        *(_QWORD *)(v35 + 1848) = ExAllocatePoolWithTag(PagedPool, a1->Length, 0x624E4D43u);
        v28 = v35;
        if ( *(_QWORD *)(v35 + 1848) )
        {
          *(_WORD *)(v35 + 1840) = a1->Length;
          *(_WORD *)(v35 + 1842) = a1->Length;
          memmove(*(void **)(v35 + 1848), a1->Buffer, a1->Length);
          v28 = v35;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v28 + 64) + 4088LL) & 4) != 0 )
          CmpLogEvent(&REG_EVENT_SELFHEAL);
        if ( ZwQueryInformationFile(v25, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
          *(_QWORD *)(v35 + 4184) = v55;
        *(_DWORD *)(v35 + 188) = HIDWORD(v48);
        *v45 = v35;
        *v49 = v27;
        v19 = 0;
      }
      goto LABEL_9;
    }
    ZwClose(v25);
    FileHandle = 0LL;
    if ( v14 )
    {
      ZwClose(v14);
      v14 = 0LL;
      Handle = 0LL;
    }
    v11 = v39;
    v10 = v45;
    if ( v16 )
    {
      ZwClose(v16);
      v11 = v39;
      v16 = 0LL;
      v10 = v45;
      v42 = 0LL;
    }
  }
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
    goto LABEL_36;
  v19 = -1073741431;
LABEL_10:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v14 )
    ZwClose(v14);
  if ( v16 )
    ZwClose(v16);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (unsigned int)dword_140C03868 > 4 && tlgKeywordOn((__int64)&dword_140C03868, 8LL) )
  {
    v38 = v19;
    v59 = &v38;
    v60 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03868, (unsigned __int8 *)byte_140028C4D, 0LL, 0LL, 3u, v58);
  }
  return v19;
}

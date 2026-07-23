/*
 * XREFs of MiRelocateImage @ 0x1406A9460
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MiCreateNewSection @ 0x1407466E0 (MiCreateNewSection.c)
 * Callees:
 *     PsSetSystemPagePriorityThread @ 0x14020EBFC (PsSetSystemPagePriorityThread.c)
 *     MiLegacyImageArchitecture @ 0x14020EC68 (MiLegacyImageArchitecture.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140210190 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14021020C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     PsRevertToUserPagePriorityThread @ 0x14021075C (PsRevertToUserPagePriorityThread.c)
 *     MiOffsetToProtos @ 0x1402887D0 (MiOffsetToProtos.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiSetDeleteOnClose @ 0x14062633C (MiSetDeleteOnClose.c)
 *     RtlGetFunctionOverrideRelocationMaxVpn @ 0x14067C2D4 (RtlGetFunctionOverrideRelocationMaxVpn.c)
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MiScanRelocationPage @ 0x1406A9BD0 (MiScanRelocationPage.c)
 *     MiUpdateImageSystemWideBitmaps @ 0x1406AAA00 (MiUpdateImageSystemWideBitmaps.c)
 *     MiSelectImageBase @ 0x1406AAA28 (MiSelectImageBase.c)
 *     MiCompressRelocations @ 0x1406AB550 (MiCompressRelocations.c)
 *     MiLogRelocationFaults @ 0x1406AB91C (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406ACB70 (MiUnmapImageInSystemSpace.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A33C8C (MiCreateFileOnlyImageFixupList.c)
 *     MiFreeRelocations @ 0x140A48368 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x140A4A594 (MiFreeImageLoadConfig.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r11
  unsigned int v11; // edx
  __int64 v12; // r12
  size_t v13; // r10
  ULONG_PTR v14; // r13
  unsigned int v15; // r15d
  unsigned __int64 v16; // r9
  __int16 v17; // cx
  unsigned int v18; // eax
  unsigned int v19; // esi
  unsigned int v20; // r8d
  _QWORD *Pool; // rax
  _QWORD *v22; // r14
  _QWORD *v23; // rcx
  void *v24; // rsi
  int Config; // esi
  __int64 v26; // rax
  _QWORD *v27; // rdx
  unsigned int *v28; // r9
  int v29; // ecx
  __int64 v30; // r15
  unsigned int v31; // esi
  unsigned int v32; // r12d
  unsigned int v33; // edx
  unsigned __int64 v34; // r8
  unsigned int v35; // ecx
  unsigned __int64 v36; // rsi
  __int64 *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // r15
  unsigned int SessionId; // r12d
  __int64 v42; // rcx
  unsigned int v43; // r8d
  unsigned __int64 v44; // rdx
  unsigned int v45; // eax
  unsigned __int64 v46; // rdx
  unsigned __int16 v47; // r8
  _WORD *v48; // r9
  unsigned int v49; // eax
  __int64 v50; // rcx
  unsigned int v51; // [rsp+30h] [rbp-138h]
  unsigned int v52; // [rsp+34h] [rbp-134h]
  int v54; // [rsp+3Ch] [rbp-12Ch]
  unsigned int v55; // [rsp+40h] [rbp-128h]
  unsigned int v56; // [rsp+44h] [rbp-124h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-120h]
  unsigned int *v59; // [rsp+50h] [rbp-118h]
  __int64 v60; // [rsp+58h] [rbp-110h] BYREF
  unsigned int v61; // [rsp+60h] [rbp-108h]
  __int64 v62; // [rsp+68h] [rbp-100h]
  __int64 v63; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v64; // [rsp+78h] [rbp-F0h]
  PVOID P; // [rsp+80h] [rbp-E8h] BYREF
  unsigned __int64 v66; // [rsp+88h] [rbp-E0h] BYREF
  size_t Size; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v68; // [rsp+98h] [rbp-D0h]
  struct _KTHREAD *v69; // [rsp+A0h] [rbp-C8h]
  _QWORD *v70; // [rsp+A8h] [rbp-C0h]
  ULONG_PTR v71; // [rsp+B0h] [rbp-B8h]
  __int64 v72; // [rsp+B8h] [rbp-B0h]
  __int64 v73; // [rsp+C0h] [rbp-A8h]
  _QWORD v74[10]; // [rsp+D0h] [rbp-98h] BYREF

  v64 = a1;
  memset(v74, 0, sizeof(v74));
  v63 = 0LL;
  v8 = 2;
  P = 0LL;
  v73 = *(_QWORD *)(v64 + 56);
  if ( MiLegacyImageArchitecture(*(_WORD *)(v73 + 48)) )
  {
    v8 = 66;
    if ( (*(_BYTE *)(v9 + 44) & 1) != 0 )
      return 0LL;
    v11 = (*(_WORD *)(v9 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    v11 = -1073741701;
  }
  v51 = v11;
  v12 = *(unsigned int *)(a2 + 88);
  LODWORD(v63) = v12;
  v13 = *(unsigned int *)(a2 + 92);
  v56 = *(_DWORD *)(a2 + 92);
  HIDWORD(v63) = v56;
  if ( (_DWORD)v12 )
  {
    if ( !(_DWORD)v13 )
      return v11;
  }
  else
  {
    if ( (_DWORD)v13 )
      return v11;
    v8 &= ~2u;
  }
  if ( (*(_BYTE *)(v10 + 15) & 1) != 0 )
    return 0LL;
  v14 = *(_QWORD *)v10;
  v71 = v14;
  v72 = *(_QWORD *)(v14 + 96);
  v15 = a3 + ((*(_BYTE *)(v10 + 14) & 0x40) != 0 ? 52 : 48);
  if ( (((*(_BYTE *)(v10 + 14) & 0x40) != 0 ? 3 : 7) & v15) != 0 )
    return v11;
  v16 = *(_QWORD *)(v10 + 32);
  v68 = v16;
  if ( !a4 && v8 >= 0x40 )
  {
    v17 = *(_WORD *)(v9 + 46);
    if ( (v17 & 0x40) == 0 && MmRegistryState != -1 && (v17 & 0x1000) == 0 )
      return 0LL;
  }
  v18 = *(_DWORD *)(v10 + 8);
  v19 = v18;
  if ( (v8 & 2) == 0 )
    v19 = (v15 >> 12) + 1;
  v61 = v18 << 12;
  v20 = v13 + v12;
  if ( (int)v13 + (int)v12 > v18 << 12
    || (v8 & 2) != 0 && (v20 <= (unsigned int)v12 || v16 + v12 <= v16 || v16 + v20 <= v16) )
  {
    return v11;
  }
  v66 = v19;
  Size = v13;
  v60 = 0LL;
  v62 = 0LL;
  v54 = 0;
  CurrentThread = KeGetCurrentThread();
  v69 = CurrentThread;
  Pool = MiAllocatePool(256, v13 + 104 + 8LL * v19, 0x65526D4Du);
  v22 = Pool;
  v70 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v23 = Pool;
  do
    v23 += 512;
  while ( v23 < (_QWORD *)((char *)&Pool[v19 + 13] + Size) );
  *((_BYTE *)Pool + 64) = 0;
  *((_DWORD *)Pool + 14) = v19;
  Pool[3] = 0LL;
  if ( (v8 & 2) == 0 )
    goto LABEL_24;
  if ( (int)MiMapImageInSystemSpace(v14, 3LL, v74) < 0 )
  {
    ExFreePoolWithTag(v22, 0);
    MiSetDeleteOnClose(v14, 0);
    return 0LL;
  }
  v24 = (void *)v74[0];
  v62 = v74[0];
  v54 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
  v8 |= 1u;
  Config = MiParseImageLoadConfig((_QWORD *)v14, v24, a2, LODWORD(v74[2]) << 12, (__int64)(v22 + 9));
  if ( Config < 0 )
  {
    ExFreePoolWithTag(v22, 0);
    goto LABEL_69;
  }
LABEL_24:
  Config = MiSelectImageBase(v64, (_DWORD)v22, a4, a6, (__int64)&v60);
  if ( Config < 0 )
  {
    MiFreeImageLoadConfig(v22 + 9);
    ExFreePoolWithTag(v22, 0);
    if ( !a4 )
      Config = v51;
    goto LABEL_69;
  }
  Config = MiUpdateImageSystemWideBitmaps(v14, v60, v22 + 9);
  if ( Config < 0 )
    goto LABEL_130;
  *((_DWORD *)v22 + 15) = v15;
  v22[5] = v60 - v68;
  v26 = a5 - v68;
  if ( a5 == -1 )
    v26 = 0LL;
  v22[6] = v26;
  v27 = v22 + 13;
  *v22 = v22 + 13;
  v28 = (unsigned int *)&v22[v66 + 13];
  v59 = v28;
  v22[4] = v28;
  v29 = v8 | (v22[11] != 0LL ? 24 : 16);
  v8 = v29 | 0x80;
  if ( !v22[12] )
    v8 = v29;
  if ( (v8 & 2) == 0 )
    goto LABEL_56;
  memmove(v28, (const void *)(v62 + v12), Size);
  LODWORD(v30) = 0;
  if ( (v8 & 8) != 0 )
  {
    v42 = v22[11];
    if ( v42 )
    {
      LODWORD(v30) = v74[2] & 0xFFFFF;
      while ( (_DWORD)v30 )
      {
        v30 = (unsigned int)(v30 - 1);
        if ( *(_QWORD *)(v42 + 8 * v30 + 56) )
          goto LABEL_32;
      }
    }
    LODWORD(v30) = 0;
  }
LABEL_32:
  if ( v8 >= 0x80 && (unsigned int)v30 <= (unsigned int)RtlGetFunctionOverrideRelocationMaxVpn(v22[12]) )
    LODWORD(v30) = RtlGetFunctionOverrideRelocationMaxVpn(v50);
  v31 = v56;
  v32 = v56;
  v33 = 0;
  if ( v56 )
  {
    v34 = (unsigned __int64)v59;
    while ( v32 >= 0xA )
    {
      v35 = *(_DWORD *)(v34 + 4);
      v55 = v35;
      if ( v35 > v32 || (v35 & 1) != 0 || v35 < 8 )
        goto LABEL_92;
      v36 = *(unsigned int *)v34;
      if ( (v36 & 0xFFF) != 0 )
        v8 &= ~0x10u;
      if ( (int)v36 + 4096 < (unsigned int)v36 || (int)v36 + 4096 > v61 || (unsigned int)v36 < v33 )
        goto LABEL_92;
      if ( v35 == 8 )
      {
        v32 -= 8;
        v8 &= ~0x10u;
      }
      else
      {
        if ( (MiFlags & 0x20000) != 0 && (*(_DWORD *)(v14 + 92) & 0xC0000) != 0 )
        {
          v66 = 0LL;
          if ( (MiOffsetToProtos(v14, v36, &v66)[8] & 4) != 0 )
          {
            Config = -1073741701;
            goto LABEL_68;
          }
          v35 = v55;
          v34 = (unsigned __int64)v59;
        }
        if ( (unsigned int)v36 >> 12 > (unsigned int)v30 )
          LODWORD(v30) = (unsigned int)v36 >> 12;
        v22[(v36 >> 12) + 13] |= v34;
        v52 = (v36 & 0xFFFFF000) + 4096;
        v32 -= v35;
        Config = MiScanRelocationPage(v62, v36, (v35 - 8) >> 1, (int)v34 + 8, v14, (__int64)v22);
        if ( Config < 0 )
        {
          if ( Config == -1073741207 )
          {
            Config = 0;
          }
          else if ( Config == -1073741701 )
          {
            Config = v51;
          }
          goto LABEL_68;
        }
        v8 |= 4u;
        v35 = v55;
        v33 = v52;
        v34 = (unsigned __int64)v59;
      }
      v34 += v35;
      v59 = (unsigned int *)v34;
      if ( !v32 )
      {
        v31 = v56;
        goto LABEL_52;
      }
    }
    if ( v32 != 8 )
      goto LABEL_92;
    v31 = v56 - 8;
  }
LABEL_52:
  MiUnmapImageInSystemSpace(v74);
  PsRevertToUserPagePriorityThread((__int64)CurrentThread, v54);
  LOBYTE(v8) = v8 & 0xFE;
  v37 = (__int64 *)v22[2];
  if ( !v37 )
  {
LABEL_53:
    MiLogRelocationFaults(v14, &v63, v22);
    *((_DWORD *)v22 + 14) = v30 + 1;
    if ( (v8 & 0x14) == 0x14 )
      v22 = (_QWORD *)MiCompressRelocations(v22, v31);
    v27 = v22 + 13;
LABEL_56:
    v27[(unsigned __int64)*((unsigned int *)v22 + 15) >> 12] |= 1uLL;
    if ( (*(_BYTE *)(v14 + 62) & 0xC) != 4 || (Config = MiCreateFileOnlyImageFixupList(v14, v22, &P), Config >= 0) )
    {
      LOBYTE(v8) = v8 | 0x20;
      MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v22);
      v38 = v72;
      *(_QWORD *)(v72 + 32) = v22;
      *(_QWORD *)(v64 + 32) = v60;
      v39 = v73;
      *(_QWORD *)v73 += v22[5];
      *(_DWORD *)(v14 + 92) |= 0x400000u;
      if ( (*(_DWORD *)(v14 + 56) & 0x800) != 0 )
        MiSetDeleteOnClose(v14, 0);
      if ( (*(_DWORD *)(v14 + 92) & 0xC0000) == 0
        || (MiFlags & 0x2000) == 0
        || (qword_140C379C0
          ? (Config = qword_140C379C0(*(_QWORD *)(v38 + 40) & 0xFFFFFFFFFFFFFFF8uLL))
          : (Config = -1073741637),
            Config >= 0) )
      {
        if ( a4 )
          SessionId = -1;
        else
          SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( !a6 || (v8 & 0x88) != 0 )
        {
          if ( (*(_BYTE *)(v14 + 62) & 0xC) != 4
            || (Config = MiWalkEntireImage(v14, (ULONG_PTR)P, 8u, SessionId), Config >= 0) )
          {
            Config = MiWalkEntireImage(v14, 0LL, 2u, SessionId);
          }
        }
        else
        {
          Config = 0;
        }
      }
      MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v22);
      if ( Config >= 0 && !a6 )
        *(_BYTE *)(v39 + 51) |= 4u;
    }
    goto LABEL_68;
  }
  while ( 1 )
  {
    v43 = *((_DWORD *)v37 + 3);
    v44 = v22[((unsigned __int64)v43 >> 12) + 13];
    v45 = v43 >> 12;
    if ( v43 >> 12 <= (unsigned int)v30 )
      v45 = v30;
    LODWORD(v30) = v45;
    if ( v44 > 1 )
    {
      v46 = v44 & 0xFFFFFFFFFFFFFFFEuLL;
      v47 = v43 & 0xFFF;
      v48 = (_WORD *)(v46 + 8);
      v49 = (unsigned int)(*(_DWORD *)(v46 + 4) - 8) >> 1;
      if ( v49 )
        break;
    }
LABEL_90:
    v37 = (__int64 *)*v37;
    if ( !v37 )
      goto LABEL_53;
  }
  while ( *v48 < 0x1000u || (unsigned __int16)(*v48 & 0xFFF) >= v47 )
  {
    ++v48;
    if ( !--v49 )
      goto LABEL_90;
  }
LABEL_92:
  Config = v51;
LABEL_68:
  if ( (v8 & 0x20) == 0 )
LABEL_130:
    MiFreeRelocations(v14, v22);
LABEL_69:
  if ( (v8 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(v74);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v54);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Config;
}

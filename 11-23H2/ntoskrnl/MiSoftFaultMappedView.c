/*
 * XREFs of MiSoftFaultMappedView @ 0x140217E90
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     MiImagePageOk @ 0x14021858C (MiImagePageOk.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiVadMapsLargeImage @ 0x14027D1D0 (MiVadMapsLargeImage.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E30E0 (MiCompleteRestrictedImageFault.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiUnlockFaultWorkingSet @ 0x1403625E4 (MiUnlockFaultWorkingSet.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall MiSoftFaultMappedView(__int64 a1)
{
  int v1; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r12
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rdi
  __int64 v12; // r15
  ULONG_PTR v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  _DWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rbx
  volatile signed __int64 *v20; // r15
  unsigned __int64 v21; // rbx
  unsigned int v22; // ecx
  ULONG_PTR v23; // r15
  __int64 v24; // rbx
  int v25; // ebx
  unsigned int v26; // edi
  ULONG_PTR v27; // r15
  __int64 v28; // rcx
  unsigned __int8 v30[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-CCh]
  __int64 v32; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v33; // [rsp+40h] [rbp-C0h]
  __int128 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v37; // [rsp+68h] [rbp-98h]
  _QWORD v38[16]; // [rsp+70h] [rbp-90h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v35 = 0LL;
  LODWORD(CurrentThread) = v1 & 0xF80;
  v34 = 0LL;
  if ( (_DWORD)CurrentThread == 128 )
    return (char)CurrentThread;
  if ( (v1 & 0x200000) == 0 )
  {
    LOBYTE(CurrentThread) = v1 & 0x70;
    if ( (v1 & 0x70) == 0x20 && (v1 & 0x400000) != 0 )
      return (char)CurrentThread;
  }
  LODWORD(CurrentThread) = MiVadMapsLargeImage();
  if ( (_DWORD)CurrentThread )
    return (char)CurrentThread;
  CurrentThread = *(struct _KTHREAD **)(v4 + 72);
  v5 = *(_QWORD *)&CurrentThread->Header.Lock;
  if ( (*(_DWORD *)(*(_QWORD *)&CurrentThread->Header.Lock + 56LL) & 0x8000000) != 0 )
    return (char)CurrentThread;
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(v5 + 32);
  v7 = 0;
  v8 = (__int64)&CurrentThread->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v31 = 0;
  v33 = 0LL;
  v36 = v8;
  if ( !v6 )
    return (char)CurrentThread;
  v9 = *(unsigned __int8 *)(a1 + 32);
  v10 = *(unsigned int *)(a1 + 24);
  v11 = *(_BYTE **)(a1 + 80);
  v12 = 0LL;
  v32 = 0LL;
  v30[0] = 17;
  v13 = 8 * ((v10 | (v9 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v14 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL;
  BYTE13(v34) |= 4u;
  v15 = 8 * v14 - 0x98000000000LL;
  v37 = v15;
  *(_QWORD *)&v34 = v8;
  BYTE12(v34) = MiLockWorkingSetShared(v8);
  if ( v13 > v15 )
    goto LABEL_64;
  while ( 1 )
  {
    if ( (unsigned __int64)v11 > *(_QWORD *)(a1 + 88) || !v6 )
    {
      v24 = v32;
LABEL_58:
      v26 = v31;
      goto LABEL_59;
    }
    if ( v7
      && (v7 & 8) == 0
      && ((*(_BYTE *)(v36 + 184) & 7) == 2 ? (v16 = &unk_140C6A180) : (v16 = (_DWORD *)(v36 + 192)),
          (*v16 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
    {
      v25 = 1;
    }
    else
    {
      if ( v35 && (v13 & 0xFFF) != 0 )
        goto LABEL_19;
      v25 = 2;
    }
    if ( v12 )
    {
      MiUnlockProtoPoolPage(v12, v30[0]);
      v12 = 0LL;
      v32 = 0LL;
    }
    if ( v31 )
    {
      if ( (unsigned int)MiCompleteRestrictedImageFault(&v34, v33, v38, v31) )
      {
        v31 = 0;
        goto LABEL_48;
      }
      v24 = v32;
      v26 = 0;
LABEL_59:
      v27 = v33;
      goto LABEL_60;
    }
LABEL_48:
    if ( v35 )
    {
      MiUnlockPageTableInternal(v36, v35);
      v35 = 0LL;
    }
    if ( v25 == 1 )
    {
      MiUnlockFaultWorkingSet(&v34);
      MiLockWorkingSetShared(v36);
    }
    MiMakeSystemAddressValid(v13, 0);
    v35 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_19:
    ++v7;
    if ( *(_QWORD *)v13 )
      goto LABEL_36;
    if ( ((unsigned __int16)v11 & 0xFFF) != 0 )
    {
      if ( v12 )
        goto LABEL_22;
LABEL_38:
      v24 = v32;
      goto LABEL_39;
    }
    if ( !v12 )
      goto LABEL_38;
    MiUnlockProtoPoolPage(v12, v30[0]);
    v24 = 0LL;
LABEL_39:
    if ( !v31 )
      goto LABEL_40;
    v27 = v33;
    if ( !(unsigned int)MiCompleteRestrictedImageFault(&v34, v33, v38, v31) )
      break;
    v31 = 0;
LABEL_40:
    v32 = MiLockProtoPoolPage(v11, v30);
    if ( !v32 )
    {
      v28 = (4096 - ((unsigned __int16)v11 & 0xFFF)) & 0xFFFFFFF8;
      v11 += v28;
      v13 += v28;
      if ( v35 && v35 != ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        MiUnlockPageTableInternal(v36, v35);
        v35 = 0LL;
      }
      goto LABEL_37;
    }
LABEL_22:
    if ( (*v11 & 1) == 0 )
      goto LABEL_36;
    v17 = MiLockLeafPage(v11, 0LL);
    v19 = v17;
    if ( !v17 )
      goto LABEL_36;
    v20 = (volatile signed __int64 *)(v17 + 24);
    if ( (*v11 & 1) == 0
      || (--v6, (*(_DWORD *)(v17 + 16) & 0x400LL) == 0)
      || (*(_BYTE *)(v17 + 35) & 0x40) != 0
      || !(unsigned int)MiImagePageOk((__int64)(v13 << 25) >> 16, v17, v18, a1) )
    {
      _InterlockedAnd64(v20, 0x7FFFFFFFFFFFFFFFuLL);
LABEL_36:
      v11 += 8;
      v13 += 8LL;
LABEL_37:
      v24 = v32;
      goto LABEL_34;
    }
    v21 = 0xAAAAAAAAAAAAAAABuLL * ((v19 + 0x220000000000LL) >> 4);
    *v20 ^= (*v20 ^ (*v20 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64(v20, 0x7FFFFFFFFFFFFFFFuLL);
    if ( v21 == -1LL )
      goto LABEL_32;
    v22 = v31;
    v23 = v13;
    if ( v31 )
      v23 = v33;
    v38[v31] = v21;
    v33 = v23;
    v31 = v22 + 1;
    if ( v22 == 15 )
    {
      MiUnlockProtoPoolPage(v32, v30[0]);
      v24 = 0LL;
      v32 = 0LL;
      if ( !(unsigned int)MiCompleteRestrictedImageFault(&v34, v23, v38, 16LL) )
        goto LABEL_64;
      v31 = 0;
      v33 = v23;
    }
    else
    {
LABEL_32:
      v24 = v32;
    }
    v11 += 8;
    v13 += 8LL;
LABEL_34:
    if ( v13 > v37 )
      goto LABEL_58;
    v12 = v32;
  }
  v26 = 0;
LABEL_60:
  if ( v24 )
    MiUnlockProtoPoolPage(v24, v30[0]);
  if ( v26 )
    MiCompleteRestrictedImageFault(&v34, v27, v38, v26);
LABEL_64:
  if ( v35 )
  {
    MiUnlockPageTableInternal(v36, v35);
    v35 = 0LL;
  }
  LOBYTE(CurrentThread) = MiUnlockFaultWorkingSet(&v34);
  return (char)CurrentThread;
}

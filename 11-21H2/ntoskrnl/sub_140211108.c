/*
 * XREFs of sub_140211108 @ 0x140211108
 * Callers:
 *     sub_140210EA0 @ 0x140210EA0 (sub_140210EA0.c)
 * Callees:
 *     sub_1402171FC @ 0x1402171FC (sub_1402171FC.c)
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140580FA4 @ 0x140580FA4 (sub_140580FA4.c)
 *     sub_140581158 @ 0x140581158 (sub_140581158.c)
 */

__int64 __fastcall sub_140211108(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int8 v6; // al
  char v7; // al
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ecx
  bool v32; // zf
  unsigned __int64 OldIrql; // rbx
  bool v34; // cc
  struct _KPRCB *v35; // r9
  __int64 v36; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int16 v38; // [rsp+38h] [rbp-20h] BYREF
  char v39; // [rsp+3Ah] [rbp-1Eh]
  char v40; // [rsp+3Bh] [rbp-1Dh]
  int v41; // [rsp+3Ch] [rbp-1Ch]
  _QWORD v42[3]; // [rsp+40h] [rbp-18h] BYREF
  char v43; // [rsp+A0h] [rbp+48h] BYREF
  int v44; // [rsp+A8h] [rbp+50h]
  int v45; // [rsp+B0h] [rbp+58h] BYREF
  int v46; // [rsp+B8h] [rbp+60h] BYREF

  v1 = a1 + 1664;
  v40 = 0;
  v43 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = sub_140282AD0(a1 + 1664);
  v4 = v3;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x40u);
  if ( (*(_BYTE *)(v1 + 187) & 0x60) == 0x20 )
  {
    sub_140581158(a1);
  }
  else if ( (*(_BYTE *)(v1 + 187) & 0x60) == 0x40 && *(_QWORD *)(*(_QWORD *)(v3 + 32) + 40LL) )
  {
    sub_140580FA4(a1);
  }
  result = *(_QWORD *)(v1 + 144);
  if ( result != 1 || (*(_BYTE *)(v1 + 187) & 2) != 0 )
    return result;
  v38 = 263;
  v42[1] = v42;
  v39 = 6;
  v42[0] = v42;
  v41 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  while ( 1 )
  {
    v6 = *(_BYTE *)(v1 + 185);
    if ( (v6 & 6) == 0 )
      break;
    v7 = v6 >> 4;
LABEL_27:
    if ( v7 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = (unsigned int)dword_140D06B08;
      OldIrql = LockHandle.OldIrql;
      if ( !dword_140D06B08 )
        goto LABEL_65;
      if ( (dword_140D06B08 & 1) == 0 )
        goto LABEL_65;
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result > 0xFu )
        goto LABEL_65;
      v34 = LockHandle.OldIrql <= 0xFu;
      goto LABEL_61;
    }
    *(_QWORD *)(v1 + 104) = &v38;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v18 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v21 = *((_QWORD *)CurrentPrcb + 4375);
          v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v32 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
          *(_DWORD *)(v21 + 20) &= v22;
          if ( v32 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
    sub_140217454(&v38, 18LL);
    KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
    *(_QWORD *)(v1 + 104) = 0LL;
  }
  v7 = v6 >> 4;
  if ( v7 )
    goto LABEL_27;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x80u);
  v8 = (_QWORD *)(v1 + 24);
  v9 = *(_QWORD *)(v1 + 24);
  v10 = *(_QWORD **)(v1 + 32);
  if ( *(_QWORD *)(v9 + 8) != v1 + 24 || (_QWORD *)*v10 != v8 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v12 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = *((_QWORD *)v14 + 4375);
        v11 = -1LL << (LockHandle.OldIrql + 1);
        v16 = ~(unsigned __int16)v11;
        v32 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v32 )
          sub_140418E4C(v14);
      }
    }
  }
  __writecr8(v12);
  v17 = *(_QWORD *)(v4 + 40);
  if ( v17 )
  {
    sub_140334400(v17, v11);
    *(_QWORD *)(v4 + 40) = 0LL;
  }
  v45 = 0;
  while ( !(unsigned int)KeIsEmptyAffinityEx(a1 + 368) )
    sub_1402F32E0(&v45);
  sub_1402171FC(*(_QWORD *)(a1 + 40));
  if ( *(_QWORD *)(a1 + 1928) )
    sub_1402171FC(*(_QWORD *)(a1 + 904));
  v23 = *(_QWORD *)(a1 + 40) >> 12;
  v24 = 48 * v23 - 0x220000000000LL;
  v25 = (__int64 *)(sub_1402CC7C0(v23, &v43, 0x80000000LL) + 8LL * ((*(_DWORD *)(v24 + 8) >> 3) & 0x1FF));
  v26 = sub_1402E4D28(v23, 4LL);
  v44 = 0;
  v27 = v26;
  v28 = v26;
  if ( (unsigned int)sub_140317A80(v25) )
  {
    if ( (unsigned int)sub_140229550(v30, v29) )
    {
      v31 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v32 = (v27 & 1) == 0;
LABEL_42:
        if ( !v32 )
          v28 |= 0x8000000000000000uLL;
      }
    }
    else
    {
      v31 = v44;
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v32 = (v27 & 1) == 0;
        goto LABEL_42;
      }
    }
  }
  else
  {
    v31 = v44;
  }
  *v25 = v28;
  if ( v31 )
    sub_1402294F0(v25, v28);
  LOBYTE(v29) = v43;
  sub_1402BEDD0(v25, v29, 0x80000000LL);
  sub_140228660(v24, 0LL);
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  v46 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v46);
    while ( *(__int64 *)(v24 + 24) < 0 );
  }
  *(_QWORD *)(v24 + 8) = a1 + 1432;
  *(_QWORD *)(a1 + 1432) = v27;
  *(_QWORD *)(v1 + 128) = 0LL;
  *(_QWORD *)(v1 + 136) = 0LL;
  *(_QWORD *)(v1 + 144) = 0LL;
  *(_QWORD *)(v1 + 152) = 0LL;
  sub_140273FD0(v24);
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu )
      {
        v34 = LockHandle.OldIrql <= 0xFu;
LABEL_61:
        if ( v34 && (unsigned __int8)result >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = *((_QWORD *)v35 + 4375);
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v32 = ((unsigned int)result & *(_DWORD *)(v36 + 20)) == 0;
          *(_DWORD *)(v36 + 20) &= result;
          if ( v32 )
            result = sub_140418E4C(v35);
        }
      }
    }
  }
LABEL_65:
  __writecr8(OldIrql);
  return result;
}

/*
 * XREFs of sub_14021119C @ 0x14021119C
 * Callers:
 *     sub_1403C6D20 @ 0x1403C6D20 (sub_1403C6D20.c)
 * Callees:
 *     sub_1402112F8 @ 0x1402112F8 (sub_1402112F8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_14036C428 @ 0x14036C428 (sub_14036C428.c)
 *     sub_14036C804 @ 0x14036C804 (sub_14036C804.c)
 *     sub_14036C868 @ 0x14036C868 (sub_14036C868.c)
 *     sub_14036DAE4 @ 0x14036DAE4 (sub_14036DAE4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_140580DB8 @ 0x140580DB8 (sub_140580DB8.c)
 *     sub_140581434 @ 0x140581434 (sub_140581434.c)
 *     sub_14062DB60 @ 0x14062DB60 (sub_14062DB60.c)
 */

__int64 __fastcall sub_14021119C(_QWORD *a1, _QWORD *a2, int a3, __int64 a4)
{
  _QWORD *v5; // rdi
  int v6; // eax
  unsigned __int8 v7; // bl
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  int v14; // r12d
  __int64 *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  int v25; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  __int64 v29; // r9
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  int v33; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  char v35; // [rsp+90h] [rbp+40h] BYREF
  __int64 v36; // [rsp+98h] [rbp+48h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+50h]

  do
  {
    v5 = a1 - 45;
    a1 = (_QWORD *)*a1;
    _InterlockedXor((volatile signed __int32 *)v5 + 210, 6u);
    v36 = 0LL;
    v6 = *((_DWORD *)v5 + 281);
    v35 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( (v6 & 0x80u) == 0 )
      goto LABEL_2;
    v36 = sub_1405803C8((_DWORD)v5, (_DWORD)a2, a3, a4, *((unsigned __int16 *)v5 + 418));
    v12 = v36;
    v13 = ((unsigned __int64)sub_140317A10(&v36) >> 12) & 0xFFFFFFFFFFLL;
    v37 = sub_1402CC7C0(v13, &v35, 0x80000000LL);
    v14 = 0;
    v15 = (__int64 *)(v37 + 3944);
    if ( (unsigned int)sub_140317A80(v37 + 3944) )
    {
      if ( (unsigned int)sub_140229550(v17, v16) )
      {
        v14 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v18 = (v12 & 1) == 0;
          goto LABEL_22;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v18 = (v12 & 1) == 0;
LABEL_22:
        if ( !v18 )
          v12 |= 0x8000000000000000uLL;
      }
    }
    *v15 = v12;
    if ( v14 )
      sub_1402294F0(v15, v12);
    LOBYTE(v16) = v35;
    sub_1402BEDD0(v37, v16, 0x80000000LL);
    v19 = 48 * v13 - 0x220000000000LL;
    v20 = (unsigned __int8)sub_1402F2700(v19);
    *(_QWORD *)(v19 + 24) ^= ((*(_QWORD *)(v19 + 24) + 1LL) ^ *(_QWORD *)(v19 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    sub_14033C3E0(v19, v13);
    sub_14036C868(v21, v5, 1LL);
    *(_QWORD *)(v19 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_BYTE *)v19 & 1) == 0 )
      sub_14036C804(48 * v13 - 0x220000000000LL, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v24 = *((_QWORD *)CurrentPrcb + 4375);
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
          v18 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
          *(_DWORD *)(v24 + 20) &= v25;
          if ( v18 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v20);
    v5[226] = 1LL;
    v5[227] = 1LL;
    v5[5] = sub_14036C428(v13 << 12);
    KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
    if ( (*((_DWORD *)v5 + 281) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFF7FFFFF);
      sub_140581434(v5);
    }
    sub_14036DAE4(v5 + 208, 0LL);
    _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFFFFFF7F);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = *((_QWORD *)v28 + 4375);
          v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v30;
          if ( v18 )
            sub_140418E4C(v28);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (WORD2(xmmword_140D06900) & 0x800) != 0 )
      sub_14062DB60(v5);
LABEL_2:
    _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFFFFFFBF);
    if ( (*((_BYTE *)v5 + 1851) & 0x60) == 0x40 )
      sub_140580DB8(v5);
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v7 <= 0xFu )
    {
      v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v11 + 20) |= (-1 << (v7 + 1)) & 4;
    }
    sub_1402F3290(v5);
    v8 = v5 + 43;
    v9 = v5[43];
    if ( (_QWORD *)v9 == v5 + 43 )
    {
      v9 = 0LL;
    }
    else
    {
      a2 = (_QWORD *)v5[44];
      if ( *(_QWORD **)(v9 + 8) != v8 || (_QWORD *)*a2 != v8 )
        __fastfail(3u);
      *a2 = v9;
      *(_QWORD *)(v9 + 8) = a2;
      v5[44] = v5 + 43;
      *v8 = v8;
    }
    _InterlockedXor((volatile signed __int32 *)v5 + 210, 4u);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    if ( v9 )
    {
      LOBYTE(a2) = v7;
      result = sub_1402112F8(v9, a2);
    }
    else
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && v7 <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            a2 = (_QWORD *)(-1LL << (v7 + 1));
            a4 = *((_QWORD *)v32 + 4375);
            v33 = ~(unsigned __int16)a2;
            v18 = (v33 & *(_DWORD *)(a4 + 20)) == 0;
            a3 = v33 & *(_DWORD *)(a4 + 20);
            *(_DWORD *)(a4 + 20) = a3;
            if ( v18 )
              sub_140418E4C(v32);
          }
        }
      }
      result = v7;
      __writecr8(v7);
    }
  }
  while ( a1 );
  return result;
}

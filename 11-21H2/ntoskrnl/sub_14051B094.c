/*
 * XREFs of sub_14051B094 @ 0x14051B094
 * Callers:
 *     sub_1403BB7AC @ 0x1403BB7AC (sub_1403BB7AC.c)
 *     sub_14051B384 @ 0x14051B384 (sub_14051B384.c)
 *     sub_14051B4F4 @ 0x14051B4F4 (sub_14051B4F4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140517C90 @ 0x140517C90 (sub_140517C90.c)
 *     sub_1405298F8 @ 0x1405298F8 (sub_1405298F8.c)
 */

__int64 __fastcall sub_14051B094(__int64 a1, __int64 a2, char a3, char a4, __int64 *a5)
{
  __int64 *v5; // r14
  __int64 v7; // rbx
  int v8; // esi
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  _QWORD *i; // rax
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  KSPIN_LOCK *SpinLock; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  char v27; // [rsp+88h] [rbp+20h]

  v27 = a4;
  v26 = 0LL;
  v5 = a5;
  SpinLock = (KSPIN_LOCK *)(a1 + 32);
  v7 = 0LL;
  v8 = 0;
  v11 = (_QWORD *)(a1 + 16);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
  {
    v7 = (__int64)i;
    if ( i[3] == a2 )
      break;
  }
  if ( i != v11 )
  {
    if ( a1 != qword_140C4BC80 && v27 )
      ++*(_QWORD *)(v7 + 16);
    goto LABEL_20;
  }
  if ( !a3 )
  {
LABEL_20:
    *v5 = v7;
    goto LABEL_21;
  }
  v15 = (void *)sub_1403B1F04(v12, 152LL);
  v7 = (__int64)v15;
  if ( v15 )
  {
    memset(v15, 0, 0x98uLL);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 16) = 1LL;
    *(_DWORD *)(v7 + 32) = 1;
    v16 = *(_QWORD *)(a1 + 40);
    if ( v16 )
    {
      v8 = sub_1405298F8(v16, (unsigned int)((unsigned __int8)HIBYTE(*(_WORD *)(a2 + 472)) >> 5) + 1, &v26);
      if ( v8 < 0 )
        goto LABEL_16;
      *(_QWORD *)(v7 + 72) = v26;
    }
    *(_DWORD *)(v7 + 36) = *(_DWORD *)(a1 + 12);
    v8 = sub_140517C90(a2, v7 + 32);
    if ( v8 >= 0 )
    {
      v18 = *(__int64 **)(a1 + 24);
      if ( (_QWORD *)*v18 != v11 )
        __fastfail(3u);
      *(_QWORD *)v7 = v11;
      *(_QWORD *)(v7 + 8) = v18;
      *v18 = v7;
      *(_QWORD *)(a1 + 24) = v7;
      goto LABEL_20;
    }
LABEL_16:
    sub_1403B1B5C(v17, v7);
    goto LABEL_21;
  }
  v8 = -1073741670;
LABEL_21:
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v23 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v13);
  return (unsigned int)v8;
}

/*
 * XREFs of sub_14067F34C @ 0x14067F34C
 * Callers:
 *     sub_14067F280 @ 0x14067F280 (sub_14067F280.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14067F788 @ 0x14067F788 (sub_14067F788.c)
 *     sub_14067F7A4 @ 0x14067F7A4 (sub_14067F7A4.c)
 *     sub_14067F804 @ 0x14067F804 (sub_14067F804.c)
 *     sub_1406E4D24 @ 0x1406E4D24 (sub_1406E4D24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14067F34C(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned __int64 v5; // rbp
  int v9; // r15d
  unsigned int v10; // edi
  __int64 v11; // rax
  signed __int64 v13; // rax
  _QWORD *v14; // rsi
  signed __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v17; // rdi
  _QWORD *v18; // rax

  v5 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = 0;
  v10 = sub_14067F7A4();
  if ( (v10 & 0x80000000) != 0 )
    return v10;
  v11 = *(_QWORD *)(v5 + 16);
  if ( v11 )
  {
    *a4 = v11;
    v10 = 0;
    goto LABEL_4;
  }
  if ( !a3 )
  {
    v10 = -1072103422;
    goto LABEL_4;
  }
  v13 = sub_1406E4D24(a1, 0LL, 0LL, a2);
  v14 = (_QWORD *)v13;
  if ( !v13 )
  {
    v10 = -1073741670;
    goto LABEL_4;
  }
  v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), v13, 0LL);
  CurrentThread = KeGetCurrentThread();
  v17 = v15;
  if ( v15 )
  {
    --*((_WORD *)CurrentThread + 242);
    v9 = 1;
    ExAcquireFastMutexUnsafe(&stru_140C49100);
    v10 = (unsigned int)sub_14067F804(a2, v17) != 0 ? -1072103421 : -1072103423;
    ExFreePoolWithTag(v14, 0x72544D43u);
LABEL_4:
    if ( a1 )
      sub_14067F788(a1);
    if ( !v9 )
      return v10;
LABEL_18:
    ExReleaseFastMutexUnsafe(&stru_140C49100);
    KeLeaveCriticalRegion();
    return v10;
  }
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C49100);
  if ( (v14[6] & 7) != 0 )
  {
    v10 = -1072103422;
    goto LABEL_18;
  }
  *((_DWORD *)v14 + 12) = 128;
  v18 = (_QWORD *)qword_140C49148;
  if ( *(__int64 **)qword_140C49148 != &qword_140C49140 )
    __fastfail(3u);
  *v14 = &qword_140C49140;
  v14[1] = v18;
  *v18 = v14;
  qword_140C49148 = (__int64)v14;
  ExReleaseFastMutexUnsafe(&stru_140C49100);
  KeLeaveCriticalRegion();
  v10 = 0;
  *a4 = v14;
  return v10;
}

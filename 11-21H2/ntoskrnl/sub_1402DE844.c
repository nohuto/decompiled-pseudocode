/*
 * XREFs of sub_1402DE844 @ 0x1402DE844
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_14066044C @ 0x14066044C (sub_14066044C.c)
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_1406E60B0 @ 0x1406E60B0 (sub_1406E60B0.c)
 *     sub_140749294 @ 0x140749294 (sub_140749294.c)
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_14074B420 @ 0x14074B420 (sub_14074B420.c)
 *     sub_140765370 @ 0x140765370 (sub_140765370.c)
 *     sub_140768EA8 @ 0x140768EA8 (sub_140768EA8.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14076F8AC @ 0x14076F8AC (sub_14076F8AC.c)
 *     sub_1407730FC @ 0x1407730FC (sub_1407730FC.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 *     sub_140862BA0 @ 0x140862BA0 (sub_140862BA0.c)
 *     sub_140947628 @ 0x140947628 (sub_140947628.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_140959F9C @ 0x140959F9C (sub_140959F9C.c)
 *     sub_14095A388 @ 0x14095A388 (sub_14095A388.c)
 *     sub_14095B398 @ 0x14095B398 (sub_14095B398.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402DEAB0 @ 0x1402DEAB0 (sub_1402DEAB0.c)
 *     sub_1402DEB00 @ 0x1402DEB00 (sub_1402DEB00.c)
 *     sub_1403A6D44 @ 0x1403A6D44 (sub_1403A6D44.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 */

__int64 __fastcall sub_1402DE844(__int64 a1, int a2)
{
  int v4; // r15d
  int v5; // esi
  char v6; // r14
  KIRQL v7; // al
  unsigned int v8; // r8d
  unsigned __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r8d
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  bool v19; // zf

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C44A50);
  v8 = *(_DWORD *)(a1 + 300);
  v9 = v7;
  if ( v8 != a2 )
  {
    v4 = sub_1402DEB00(v8, *(unsigned int *)(a1 + 304));
    v10 = sub_1402DEAB0(a1);
    v11 = *(unsigned int *)(a1 + 388);
    v5 = v10;
    *(_DWORD *)(a1 + 304) = v12;
    *(_DWORD *)(a1 + 300) = a2;
    v6 = 1;
    *(_DWORD *)(a1 + 4 * v11 + 308) = v12;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v19 = ((unsigned int)result & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= result;
        if ( v19 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( (unsigned int)sub_1402DEB00(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304)) != v4
        || (result = sub_1402DEAB0(a1), (_DWORD)result != v5) )
      {
        sub_140772044(v14, v15, 11LL);
        result = sub_1402DEAB0(a1);
        if ( (_DWORD)result != v5 )
          result = sub_140772044(v16, *(_QWORD *)(a1 + 48), 26LL);
      }
    }
  }
  if ( a2 == 790 )
    return sub_1403A6D44(*(_QWORD *)(a1 + 32));
  return result;
}

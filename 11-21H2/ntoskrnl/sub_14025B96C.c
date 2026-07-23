/*
 * XREFs of sub_14025B96C @ 0x14025B96C
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_140765370 @ 0x140765370 (sub_140765370.c)
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 *     sub_1409473F0 @ 0x1409473F0 (sub_1409473F0.c)
 *     sub_140959B60 @ 0x140959B60 (sub_140959B60.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402DEAB0 @ 0x1402DEAB0 (sub_1402DEAB0.c)
 *     sub_1402DEB00 @ 0x1402DEB00 (sub_1402DEB00.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 */

__int64 __fastcall sub_14025B96C(__int64 a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ebp
  int v4; // eax
  __int64 v5; // rcx
  int v6; // esi
  int v7; // r8d
  int v8; // r9d
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  bool v15; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C44A50);
  v3 = sub_1402DEB00(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304));
  v4 = sub_1402DEAB0(a1);
  v5 = *(unsigned int *)(a1 + 388);
  v6 = v4;
  *(_DWORD *)(a1 + 300) = v7;
  *(_DWORD *)(a1 + 4 * v5 + 308) = v8;
  *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v15 = ((unsigned int)result & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= result;
        if ( v15 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( (unsigned int)sub_1402DEB00(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304)) != v3
      || (result = sub_1402DEAB0(a1), (_DWORD)result != v6) )
    {
      sub_140772044(v10, v11, 11LL);
      result = sub_1402DEAB0(a1);
      if ( (_DWORD)result != v6 )
        return sub_140772044(v12, *(_QWORD *)(a1 + 48), 26LL);
    }
  }
  return result;
}

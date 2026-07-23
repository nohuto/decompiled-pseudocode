/*
 * XREFs of sub_140521310 @ 0x140521310
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405213F0 @ 0x1405213F0 (sub_1405213F0.c)
 */

__int64 __fastcall sub_140521310(_QWORD *a1)
{
  int v2; // esi
  KIRQL v3; // al
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf

  v2 = sub_1405213F0(a1);
  if ( v2 >= 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C4A410);
    v4 = (_QWORD *)a1[1];
    v5 = v3;
    v6 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v4 != a1 )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    KeReleaseSpinLockFromDpcLevel(&qword_140C4A410);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = (unsigned int)(v5 + 1);
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    sub_1403B1B5C(v7, (__int64)a1);
  }
  return (unsigned int)v2;
}

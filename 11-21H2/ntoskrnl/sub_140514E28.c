/*
 * XREFs of sub_140514E28 @ 0x140514E28
 * Callers:
 *     sub_1403B2614 @ 0x1403B2614 (sub_1403B2614.c)
 *     sub_1403CD4E0 @ 0x1403CD4E0 (sub_1403CD4E0.c)
 *     sub_1403CD570 @ 0x1403CD570 (sub_1403CD570.c)
 *     sub_140511760 @ 0x140511760 (sub_140511760.c)
 *     sub_140511BD0 @ 0x140511BD0 (sub_140511BD0.c)
 *     sub_140514560 @ 0x140514560 (sub_140514560.c)
 *     sub_140514920 @ 0x140514920 (sub_140514920.c)
 *     sub_140514A70 @ 0x140514A70 (sub_140514A70.c)
 *     sub_140515358 @ 0x140515358 (sub_140515358.c)
 *     sub_14051541C @ 0x14051541C (sub_14051541C.c)
 *     sub_1405158A0 @ 0x1405158A0 (sub_1405158A0.c)
 *     sub_140515B80 @ 0x140515B80 (sub_140515B80.c)
 *     sub_1405160A0 @ 0x1405160A0 (sub_1405160A0.c)
 *     sub_140516290 @ 0x140516290 (sub_140516290.c)
 *     sub_1405164D0 @ 0x1405164D0 (sub_1405164D0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140514E28(__int64 *BugCheckParameter3)
{
  char v2; // bp
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 **v16; // rax

  v2 = 0;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C4BD30);
  v5 = (__int64 *)qword_140C4BD40;
  v6 = v4;
  while ( v5 != &qword_140C4BD40 )
  {
    if ( BugCheckParameter3 == v5 )
    {
      v12 = (*((_DWORD *)BugCheckParameter3 + 28))-- == 1;
      v3 = 1;
      if ( v12 )
      {
        v15 = *BugCheckParameter3;
        v16 = (__int64 **)BugCheckParameter3[1];
        if ( *(__int64 **)(*BugCheckParameter3 + 8) != BugCheckParameter3 || *v16 != BugCheckParameter3 )
          __fastfail(3u);
        *v16 = (__int64 *)v15;
        v2 = 1;
        *(_QWORD *)(v15 + 8) = v16;
      }
      break;
    }
    v5 = (__int64 *)*v5;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BD30);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = -1LL << ((unsigned __int8)v6 + 1);
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)v7;
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( v2 )
  {
    v13 = sub_14042A5E0(BugCheckParameter3[5], v7);
    if ( v13 < 0 )
      KeBugCheckEx(0x1D9u, 0LL, v13, (ULONG_PTR)BugCheckParameter3, 0LL);
    sub_1403B1B5C(v14, (__int64)BugCheckParameter3);
  }
  return v3 == 0 ? 0xC000000D : 0;
}

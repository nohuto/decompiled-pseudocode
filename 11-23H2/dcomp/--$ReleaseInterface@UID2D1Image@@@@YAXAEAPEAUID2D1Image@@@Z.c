/*
 * XREFs of ??$ReleaseInterface@UID2D1Image@@@@YAXAEAPEAUID2D1Image@@@Z @ 0x1800389B0
 * Callers:
 *     ?EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x180038924 (-EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 *     ?ResumeDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x1800393DC (-ResumeDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<ID2D1Image>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}

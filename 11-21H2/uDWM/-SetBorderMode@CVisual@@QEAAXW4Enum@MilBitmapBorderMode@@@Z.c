/*
 * XREFs of ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180037D1C
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001C938 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x1800374F8 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetBorderMode(unsigned int *a1)
{
  __int64 result; // rax

  result = a1[51];
  if ( (result & 8) == 0 || a1[53] )
  {
    a1[53] = 0;
    a1[51] = result | 8;
    return (*(__int64 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)a1 + 24LL))(a1, 64LL);
  }
  return result;
}

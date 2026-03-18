/*
 * XREFs of ?GetSize@CColorKeyBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180136650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CColorKeyBitmap::GetSize(CColorKeyBitmap *this, __int64 a2)
{
  (***((void (__fastcall ****)(_QWORD))this + 4))(*((_QWORD *)this + 4));
  return (struct D2D_SIZE_U)a2;
}

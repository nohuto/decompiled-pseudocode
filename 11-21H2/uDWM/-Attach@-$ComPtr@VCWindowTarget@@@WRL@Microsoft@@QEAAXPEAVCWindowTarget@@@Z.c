/*
 * XREFs of ?Attach@?$ComPtr@VCWindowTarget@@@WRL@Microsoft@@QEAAXPEAVCWindowTarget@@@Z @ 0x180107388
 * Callers:
 *     ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1801074F0 (-Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1801075E4 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CWindowTarget>::Attach(CBaseObject **a1, CBaseObject *a2)
{
  CBaseObject *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = CBaseObject::Release(v4);
  *a1 = a2;
  return result;
}

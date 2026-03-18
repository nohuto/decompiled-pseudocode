/*
 * XREFs of ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x1800D0F20
 * Callers:
 *     ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x1800D0EE0 (-HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasAntialiasedContent(CVisual *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 32);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 200LL))(v1) != 0;
  return v2;
}

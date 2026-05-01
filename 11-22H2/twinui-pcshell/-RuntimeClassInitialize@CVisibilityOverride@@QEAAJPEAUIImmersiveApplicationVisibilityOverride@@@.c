/*
 * XREFs of ?RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x180104B90
 * Callers:
 *     ??$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x18010401C (--$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVis.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisibilityOverride::RuntimeClassInitialize(
        CVisibilityOverride *this,
        struct IImmersiveApplicationVisibilityOverride *a2)
{
  __int64 v4; // rcx

  CVisibilityOverride::s_checkOcclusion = GetShellWindow();
  if ( *((struct IImmersiveApplicationVisibilityOverride **)this + 10) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveApplicationVisibilityOverride *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return CVisibilityOverride::_SubscribeToWNF(this);
}

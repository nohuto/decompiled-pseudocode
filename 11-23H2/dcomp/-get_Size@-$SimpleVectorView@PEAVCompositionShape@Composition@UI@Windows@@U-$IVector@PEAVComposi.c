/*
 * XREFs of ?get_Size@?$SimpleVectorView@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x180144DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::CompositionShape *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  int v2; // ebx

  *a2 = 0;
  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 >= 0 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 56LL))(*(_QWORD *)(a1 + 40));
  else
    RoOriginateError((unsigned int)v2, 0LL);
  return (unsigned int)v2;
}

/*
 * XREFs of ?GetAt@?$SimpleVectorView@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUICompositionShape@Composition@UI@5@@Z @ 0x1801A0D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::CompositionShape *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::GetAt(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v3; // ebx

  *a3 = 0LL;
  v3 = *(_DWORD *)(a1 + 48);
  if ( v3 >= 0 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(*(_QWORD *)(a1 + 40));
  else
    RoOriginateError((unsigned int)v3, 0LL);
  return (unsigned int)v3;
}

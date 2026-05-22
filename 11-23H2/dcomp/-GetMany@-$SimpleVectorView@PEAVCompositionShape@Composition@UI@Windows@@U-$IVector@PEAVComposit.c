/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUICompositionShape@Composition@UI@5@PEAI@Z @ 0x1801A0FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::CompositionShape *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 i; // r10
  int v6; // ebx

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    *(_QWORD *)(a4 + 8 * i) = 0LL;
  *a5 = 0;
  v6 = *(_DWORD *)(a1 + 48);
  if ( v6 >= 0 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 128LL))(
                           *(_QWORD *)(a1 + 40),
                           a2);
  else
    RoOriginateError((unsigned int)v6, 0LL);
  return (unsigned int)v6;
}

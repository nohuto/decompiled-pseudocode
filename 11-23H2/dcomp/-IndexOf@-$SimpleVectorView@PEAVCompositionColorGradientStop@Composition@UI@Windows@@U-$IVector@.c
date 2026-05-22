/*
 * XREFs of ?IndexOf@?$SimpleVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAUICompositionColorGradientStop@Composition@UI@5@PEAIPEAE@Z @ 0x180173C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::CompositionColorGradientStop *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  int v4; // ebx

  *a3 = 0;
  *a4 = 0;
  v4 = *(_DWORD *)(a1 + 48);
  if ( v4 >= 0 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 72LL))(*(_QWORD *)(a1 + 40));
  else
    RoOriginateError((unsigned int)v4, 0LL);
  return (unsigned int)v4;
}

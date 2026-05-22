/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUICompositionColorGradientStop@Composition@UI@5@@Z @ 0x180174690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Composition::CompositionColorGradientStop *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::get_Current(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // ebx

  *a2 = 0LL;
  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 >= 0 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(a1 + 32) + 48LL))(
                           *(_QWORD *)(a1 + 32),
                           *(unsigned int *)(a1 + 40),
                           a2);
  else
    RoOriginateError((unsigned int)v2, 0LL);
  return (unsigned int)v2;
}

/*
 * XREFs of ??_E?$SimpleVectorIterator@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x180170470
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180141404 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@PEAVComposi.c)
 */

_QWORD *__fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::`vector deleting destructor'(
        _QWORD *a1,
        volatile int *a2)
{
  char v3; // di
  __int64 v4; // rcx

  v3 = (char)a2;
  v4 = a1[4];
  if ( v4 )
  {
    a1[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::UI::Composition::CompositionColorGradientStop *>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::UI::Composition::CompositionColorGradientStop *>>(
    (__int64)a1,
    a2);
  if ( (v3 & 1) != 0 )
    operator delete(a1);
  return a1;
}

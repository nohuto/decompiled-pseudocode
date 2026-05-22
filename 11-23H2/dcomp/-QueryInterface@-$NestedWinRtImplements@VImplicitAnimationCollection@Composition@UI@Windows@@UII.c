/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI@Windows@@UIImplicitAnimationCollection@234@U?$IMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@784@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007CCA0
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI@Windows@@UIImplicitAnimationCollection@234@U?$IMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@784@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEAD0 (-QueryInterface@-$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI_ea_1800AEAD0.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI@Windows@@UIImplicitAnimationCollection@234@U?$IMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@784@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEAF0 (-QueryInterface@-$NestedWinRtImplements@VImplicitAnimationCollection@Composition@UI_ea_1800AEAF0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::ImplicitAnimationCollection,Windows::UI::Composition::IImplicitAnimationCollection,Windows::Foundation::Collections::IMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *> *>>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 *i; // r9
  __int64 v8; // r10
  _DWORD *v9; // r8

  v3 = a1 - 128;
  v4 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data2, 2097779811)
      && a2[2] == *(_DWORD *)GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4
      && a2[3] == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4[4] )
    {
      *a3 = v3;
    }
    else
    {
      for ( i = *(__int64 **)(v3 + 8); ; i = (__int64 *)*i )
      {
        if ( !i )
          return (*(unsigned int (__fastcall **)(__int64, _DWORD *, _QWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2, a3);
        v8 = *((unsigned int *)i + 4);
        v9 = (_DWORD *)i[1];
        if ( *((_DWORD *)i + 4) )
          break;
LABEL_18:
        ;
      }
      while ( *v9 != *a2 || v9[1] != a2[1] || v9[2] != a2[2] || v9[3] != a2[3] )
      {
        v9 += 6;
        if ( !--v8 )
          goto LABEL_18;
      }
      *a3 = v3 + (unsigned int)v9[4];
    }
    if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 16)) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v4;
}

/*
 * XREFs of ?AreWindowsInSameCompositeApp@CUIHierarchy@@AEAA_N_K0@Z @ 0x180084D0C
 * Callers:
 *     _lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator() @ 0x1800849A8 (_lambda_e08e03aa5b167d5be50e1fd6214815c7_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindTopLevelWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x180084D8C (-FindTopLevelWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 */

char __fastcall CUIHierarchy::AreWindowsInSameCompositeApp(CUIHierarchy *this, __int64 a2, __int64 a3)
{
  bool v6; // bl
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 == a3 )
    return 1;
  CUIHierarchy::FindTopLevelWindow(this, &v8, a2);
  CUIHierarchy::FindTopLevelWindow(this, &v7, a3);
  v6 = 0;
  if ( v8 )
  {
    if ( v7 )
      v6 = *(_QWORD *)(v8 + 16) == *(_QWORD *)(v7 + 16);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v7);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v8);
  return v6;
}

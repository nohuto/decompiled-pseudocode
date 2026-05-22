/*
 * XREFs of _lambda_66b71e0fbdc67b4ac52304c75f4bce4c_::operator() @ 0x1800783D4
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x18007867C (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 */

bool __fastcall lambda_66b71e0fbdc67b4ac52304c75f4bce4c_::operator()(__int64 a1)
{
  _QWORD *v1; // r9
  __int64 *v2; // r10
  __int64 **v3; // r11
  __int64 v4; // r8
  __int64 v5; // rcx
  bool v6; // bl
  __int64 v7; // rax

  if ( IsEqualGUID(*(_QWORD **)(a1 + 8), &GUID_NULL) || (v4 = *v2) == 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = **v3;
    if ( !v5 || (v6 = 1, *(_DWORD *)(v5 + 20) != 1) || *(_DWORD *)(v5 + 28) != 115 )
    {
      v7 = *(_QWORD *)(v4 + 84) - *v1;
      if ( !v7 )
        v7 = *(_QWORD *)(v4 + 92) - v1[1];
      v6 = v7 == 0;
    }
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v2);
  return v6;
}

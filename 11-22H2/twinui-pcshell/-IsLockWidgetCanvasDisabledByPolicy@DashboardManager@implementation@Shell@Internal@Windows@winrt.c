/*
 * XREFs of ?IsLockWidgetCanvasDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18023F338
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_180242400.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800A3348 (--1-$unique_storage@U-$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1-PolicyManager_F.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::IsLockWidgetCanvasDisabledByPolicy(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  bool v1; // bl
  LSTATUS ValueW; // eax
  int v3; // ecx
  bool v4; // dl
  bool v5; // zf
  bool v6; // sf
  __m128i si128; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+10h] BYREF
  DWORD v10; // [rsp+68h] [rbp+18h] BYREF
  int v11; // [rsp+70h] [rbp+20h] BYREF

  HIDWORD(v9) = HIDWORD(this);
  v10 = 4;
  v1 = 0;
  LODWORD(v9) = 0;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Policies\\Microsoft\\Dsh",
             L"DisableWidgetsOnLockScreen",
             0x10000012u,
             (LPDWORD)&v9,
             &v11,
             &v10);
  v3 = ValueW;
  if ( !ValueW )
  {
    v3 = 13;
    if ( (_DWORD)v9 == 4 )
    {
      if ( !v11 || (v4 = 1, v11 == 1) )
      {
        v5 = v11 == 1;
LABEL_10:
        v3 = 0;
        v4 = !v5;
      }
    }
    else
    {
      v4 = 1;
      if ( v10 == 4 )
      {
        if ( (_WORD)v11 == 48 || (v4 = 1, (_WORD)v11 == 49) )
        {
          v5 = (_WORD)v11 == 49;
          goto LABEL_10;
        }
      }
    }
LABEL_11:
    v6 = v3 < 0;
    if ( v3 <= 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v4 = 1;
  if ( ValueW != 234 )
    goto LABEL_11;
LABEL_12:
  v6 = 1;
LABEL_13:
  if ( !v6 )
    return v4;
  v9 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (int)PolicyManager_GetPolicy(L"NewsAndInterests", L"AllowNewsAndInterests", &si128, &v9) >= 0
    && *(_DWORD *)(v9 + 4) )
  {
    v1 = *(_DWORD *)(v9 + 16) != 1;
  }
  wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>(&v9);
  return v1;
}

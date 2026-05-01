/*
 * XREFs of ?UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801AECBC
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_d866c096dc72da78723f550d5b3c8da9__void___cdecl(void)_::operator() @ 0x18050D2A0 (wistd--__function--__func__lambda_d866c096dc72da78723f550d5b3c8da9__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?GetMdmIntPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SAHPEBGH@Z @ 0x1800A336C (-GetMdmIntPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SAHPEBGH@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::UpdateClipboardHistoryAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // bl
  DWORD v5; // [rsp+50h] [rbp+8h] BYREF

  v4 = 1;
  if ( !byte_18098D6E2 )
  {
    v5 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Clipboard",
      L"IsCloudAndHistoryFeatureAvailable",
      0x10010u,
      0LL,
      &dword_18098E968,
      &v5);
    byte_18098D6E2 = 1;
  }
  if ( !dword_18098E968
    || !(unsigned int)KeyboardHosting::TextInputMdmPolicyHelper::GetMdmIntPolicyValue(L"AllowClipboardHistory", 1u) )
  {
    v4 = 0;
  }
  LOBYTE(a3) = v4;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 73) + 48LL) + 176LL))(
    *(_QWORD *)(*((_QWORD *)this + 73) + 48LL),
    5LL,
    a3);
}

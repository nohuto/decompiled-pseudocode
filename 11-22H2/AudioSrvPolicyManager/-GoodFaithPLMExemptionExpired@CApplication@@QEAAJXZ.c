/*
 * XREFs of ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800272B0
 * Callers:
 *     ?ApplicationGoodFaithPLMExemptionExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18002C880 (-ApplicationGoodFaithPLMExemptionExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000BAC0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800122A0 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     WPP_SF_S @ 0x180023988 (WPP_SF_S.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x18002635C (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 */

__int64 __fastcall CApplication::GoodFaithPLMExemptionExpired(CApplication *this)
{
  CApplicationManager *v2; // rcx

  if ( *((_DWORD *)this + 155) == 2 )
  {
    *((_DWORD *)this + 155) = 0;
    *((_DWORD *)this + 156) = 0;
    *((_DWORD *)this + 157) = 0;
    *((_DWORD *)this + 158) = 0;
    *((_DWORD *)this + 159) = 0;
    *((_DWORD *)this + 160) = 0;
    *((_DWORD *)this + 161) = 1;
  }
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x15u,
      &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
      *((const wchar_t **)this + 3));
  }
  if ( (unsigned int)CApplication::Category((__int64)this) != 1 )
  {
    if ( !*((_DWORD *)this + 52) && *((_DWORD *)this + 155) != 1 )
    {
      *((_DWORD *)this + 157) = 0;
      *((_DWORD *)this + 159) = 0;
      *((_DWORD *)this + 155) = 1;
      *((_DWORD *)this + 156) = 1;
      *((_DWORD *)this + 158) = 1;
      *((_DWORD *)this + 160) = 1;
      *((_DWORD *)this + 161) = 1;
    }
    v2 = g_ApplicationManager;
    *((_DWORD *)this + 108) = 0;
    CApplicationManager::ApplyPBMPolicy(v2, this, 0xD1u, 0);
    CApplication::CleanupGoodFaithExemptionTimer((const wchar_t **)this);
  }
  return 0LL;
}

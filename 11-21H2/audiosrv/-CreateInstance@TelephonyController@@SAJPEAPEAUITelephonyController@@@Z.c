/*
 * XREFs of ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x1801603B8
 * Callers:
 *     ?Initialize@PhoneTopology@@MEAAJPEAUIMMDevice@@@Z @ 0x18004D1E0 (-Initialize@PhoneTopology@@MEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ @ 0x18004C2F0 (--1-$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ.c)
 *     ??0TelephonyController@@IEAA@XZ @ 0x18016000C (--0TelephonyController@@IEAA@XZ.c)
 *     ?GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ @ 0x1801607CC (-GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ.c)
 *     ?GetSupportedVolumeStepping@TelephonyController@@AEAAJXZ @ 0x180160A3C (-GetSupportedVolumeStepping@TelephonyController@@AEAAJXZ.c)
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x180160CDC (-Initialize@TelephonyController@@IEAAJXZ.c)
 *     ?ResetCallState@TelephonyController@@AEAAJXZ @ 0x180161A3C (-ResetCallState@TelephonyController@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TelephonyController::CreateInstance(struct ITelephonyController **a1)
{
  unsigned int v2; // ebx
  TelephonyController *v3; // rax
  __int64 v4; // rdx
  TelephonyController *v5; // rax
  struct ITelephonyController *v6; // rdi
  int SupportedCellularRoutingPairs; // eax
  TelephonyController *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( !a1 )
  {
    v2 = -2147467261;
    goto LABEL_13;
  }
  *a1 = 0LL;
  v3 = (TelephonyController *)operator new(0xE0uLL);
  v9 = v3;
  if ( !v3 )
  {
    v9 = 0LL;
    goto LABEL_12;
  }
  v5 = TelephonyController::TelephonyController(v3, v4);
  v6 = v5;
  v9 = v5;
  if ( !v5 )
  {
LABEL_12:
    v2 = -2147024882;
    goto LABEL_13;
  }
  SupportedCellularRoutingPairs = TelephonyController::Initialize(v5);
  if ( SupportedCellularRoutingPairs < 0
    || (SupportedCellularRoutingPairs = TelephonyController::GetSupportedCellularRoutingPairs(v6),
        SupportedCellularRoutingPairs < 0)
    || (SupportedCellularRoutingPairs = TelephonyController::GetSupportedVolumeStepping(v6),
        SupportedCellularRoutingPairs < 0)
    || (SupportedCellularRoutingPairs = TelephonyController::ResetCallState(v6), SupportedCellularRoutingPairs < 0) )
  {
    v2 = SupportedCellularRoutingPairs;
  }
  else
  {
    v9 = 0LL;
    *a1 = v6;
  }
LABEL_13:
  ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>((__int64 *)&v9);
  return v2;
}

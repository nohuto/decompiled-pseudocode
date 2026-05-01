/*
 * XREFs of ?get_DisplayName@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180014240
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_d5146fe69570c6dcc5cf92f3d06ab487_::operator() @ 0x1800142D8 (_lambda_d5146fe69570c6dcc5cf92f3d06ab487_--operator().c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::get_DisplayName(
        HSTRING *this,
        HSTRING *a2)
{
  HRESULT v4; // eax
  int v5[2]; // [rsp+20h] [rbp-18h] BYREF
  HSTRING **p_newString; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING *newString; // [rsp+48h] [rbp+10h] BYREF

  newString = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    p_newString = &newString;
    *(_QWORD *)v5 = this;
    if ( (int)lambda_d5146fe69570c6dcc5cf92f3d06ab487_::operator()(v5) < 0 )
    {
      v4 = WindowsDuplicateString(this[8], newString);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          245LL,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
          (const char *)(unsigned int)v4);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}

/*
 * XREFs of ?s_NotifyDeviceChanged@PenInterface@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1801A76C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___ @ 0x1801A647C (wil--ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___.c)
 */

__int64 __fastcall PenInterface::s_NotifyDeviceChanged(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  v5[0] = &v8;
  v5[1] = &v7;
  v3 = wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___((__int64)v5);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      190LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}

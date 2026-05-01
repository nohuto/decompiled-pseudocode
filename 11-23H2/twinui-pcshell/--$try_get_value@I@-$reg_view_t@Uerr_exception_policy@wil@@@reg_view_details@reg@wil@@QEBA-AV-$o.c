/*
 * XREFs of ??$try_get_value@I@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@I@std@@PEBG0K@Z @ 0x1801E7CEC
 * Callers:
 *     _lambda_9e570927e665d205f933b0ae213f3c70_::operator() @ 0x1801E932C (_lambda_9e570927e665d205f933b0ae213f3c70_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1801F0F3C (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 */

__int64 __fastcall wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::try_get_value<unsigned int>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        wil::reg::reg_view_details *a5)
{
  DWORD value_flags_from_value_type; // eax
  LPCWSTR v7; // r8
  HKEY v8; // r10
  LSTATUS ValueW; // eax
  unsigned __int64 v10; // r9
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF
  int pvData; // [rsp+60h] [rbp+18h] BYREF
  int v16; // [rsp+64h] [rbp+1Ch]

  v16 = HIDWORD(a3);
  pvData = 0;
  pcbData = 4;
  value_flags_from_value_type = wil::reg::reg_view_details::get_value_flags_from_value_type(
                                  (wil::reg::reg_view_details *)(unsigned int)a5,
                                  a2);
  ValueW = RegGetValueW(
             v8,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders",
             v7,
             value_flags_from_value_type,
             0LL,
             &pvData,
             &pcbData);
  v10 = (unsigned int)ValueW;
  if ( ValueW > 0 )
    v10 = (unsigned __int16)ValueW | 0x80070000;
  if ( (v10 & 0x80000000) != 0LL )
  {
    if ( (unsigned int)(v10 + 2147024894) > 1 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1815,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)v10,
        v12);
    *(_BYTE *)(a2 + 4) = 0;
  }
  else
  {
    *(_DWORD *)a2 = pvData;
    *(_BYTE *)(a2 + 4) = 1;
  }
  return a2;
}

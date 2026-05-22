/*
 * XREFs of wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___ @ 0x180051ECC
 * Callers:
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180039408 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x18003B678 (-Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___(__int64 a1, __int64 a2)
{
  char v2; // di
  const char *v3; // r9
  int v4; // eax
  int LastError; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+3Ch] [rbp+14h]

  v10 = HIDWORD(a2);
  v9 = 0;
  v2 = 0;
  if ( __std_init_once_begin_initialize(&stru_180269308, 0, &v9, 0LL) )
  {
    if ( !v9 )
    {
LABEL_5:
      LastError = 0;
      goto LABEL_6;
    }
    v4 = InputConfigContextProvider::Create(&qword_180269240);
    LastError = v4;
    if ( v4 >= 0 )
    {
      v2 = 1;
      InitOnceComplete(&stru_180269308, 0, 0LL);
      goto LABEL_5;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x258, (__int64)"wil", (const char *)(unsigned int)v4);
    InitOnceComplete(&stru_180269308, 4u, 0LL);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x253, (unsigned int)"wil", v3);
  }
LABEL_6:
  if ( LastError < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x266,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
      (const char *)(unsigned int)LastError,
      v7);
  return v2;
}

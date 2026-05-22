/*
 * XREFs of wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___ @ 0x1801BC8E0
 * Callers:
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801BCD64 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z @ 0x1801BCBFC (-Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  const char *v4; // r9
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+38h] [rbp+10h] BYREF

  fPending = 0;
  if ( a3 )
    *a3 = 0;
  if ( !__std_init_once_begin_initialize(&stru_180269818, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x253, (__int64)"wil", v4);
  if ( fPending )
  {
    v6 = DisplayOcclusionContextProvider::Create(&qword_180268EF0);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x258, (__int64)"wil", (const char *)(unsigned int)v6);
      InitOnceComplete(&stru_180269818, 4u, 0LL);
      return v7;
    }
    if ( a3 )
      *a3 = 1;
    InitOnceComplete(&stru_180269818, 0, 0LL);
  }
  return 0LL;
}

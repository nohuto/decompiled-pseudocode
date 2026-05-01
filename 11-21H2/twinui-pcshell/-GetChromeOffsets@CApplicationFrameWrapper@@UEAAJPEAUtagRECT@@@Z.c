/*
 * XREFs of ?GetChromeOffsets@CApplicationFrameWrapper@@UEAAJPEAUtagRECT@@@Z @ 0x18015B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetChromeOffsets(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( LOBYTE(this[4].left) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    result = 0LL;
    *a2 = this[5];
  }
  return result;
}

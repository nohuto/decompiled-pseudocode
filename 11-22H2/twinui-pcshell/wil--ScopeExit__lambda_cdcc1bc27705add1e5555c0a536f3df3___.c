/*
 * XREFs of wil::ScopeExit__lambda_cdcc1bc27705add1e5555c0a536f3df3___ @ 0x18020CAE8
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180526460 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ScopeExit__lambda_cdcc1bc27705add1e5555c0a536f3df3___(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  if ( (_QWORD *)a1 != a2 )
  {
    *(_QWORD *)a1 = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = a2[1];
  result = a1;
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}

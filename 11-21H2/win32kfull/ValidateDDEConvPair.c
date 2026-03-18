/*
 * XREFs of ValidateDDEConvPair @ 0x1C0217870
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     NtUserPostMessage @ 0x1C0054740 (NtUserPostMessage.c)
 *     _PostTransformableMessageIL @ 0x1C00A735C (_PostTransformableMessageIL.c)
 *     _PostMessageCheckIL @ 0x1C01DD244 (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0214F2C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

_BOOL8 __fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *v3; // rax

  v3 = (struct tagWND *)ValidateHwnd(a1);
  return v3 && FindDdeConv(v3, a2);
}

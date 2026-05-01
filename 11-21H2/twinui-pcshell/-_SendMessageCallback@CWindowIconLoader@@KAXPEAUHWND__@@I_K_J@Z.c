/*
 * XREFs of ?_SendMessageCallback@CWindowIconLoader@@KAXPEAUHWND__@@I_K_J@Z @ 0x18049E820
 * Callers:
 *     <none>
 * Callees:
 *     ?_SendMessageCallback@CWindowIconLoader@@IEAAXPEAUSendMessageCallbackInfo@1@PEAUHICON__@@@Z @ 0x18049E730 (-_SendMessageCallback@CWindowIconLoader@@IEAAXPEAUSendMessageCallbackInfo@1@PEAUHICON__@@@Z.c)
 */

void __fastcall CWindowIconLoader::_SendMessageCallback(HWND a1, __int64 a2, CWindowIconLoader **a3, HICON a4)
{
  CWindowIconLoader::_SendMessageCallback(*a3, (struct CWindowIconLoader::SendMessageCallbackInfo *)a3, a4);
  CWindowIconLoader::SendMessageCallbackInfo::`scalar deleting destructor'((CWindowIconLoader::SendMessageCallbackInfo *)a3);
}

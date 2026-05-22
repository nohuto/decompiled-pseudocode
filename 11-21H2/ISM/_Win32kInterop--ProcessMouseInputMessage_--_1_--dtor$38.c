/*
 * XREFs of _Win32kInterop::ProcessMouseInputMessage_::_1_::dtor$38 @ 0x180057CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::ProcessMouseInputMessage_::_1_::dtor_38(__int64 a1, __int64 a2)
{
  return std::function<void (IMPCInputProviderBase *)>::~function<void (IMPCInputProviderBase *)>(
           *(_QWORD *)(a2 + 112),
           a2);
}

/*
 * XREFs of ??1?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B0A1C
 * Callers:
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$13 @ 0x1800A9707 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$13.c)
 *     _InputProcess::InputProcess_::_1_::dtor$2 @ 0x1800D9B47 (_InputProcess--InputProcess_--_1_--dtor$2.c)
 *     _InputSystemInternalClientConnection::Create_::_1_::dtor$0 @ 0x18014A0FC (_InputSystemInternalClientConnection--Create_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::~ComPtr<InputSystemInternalClientConnection>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::InternalRelease(a1);
}

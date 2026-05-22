/*
 * XREFs of ??1?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x18009E4CC
 * Callers:
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$13 @ 0x180097067 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$13.c)
 *     _InputProcess::InputProcess_::_1_::dtor$2 @ 0x1800CA8EB (_InputProcess--InputProcess_--_1_--dtor$2.c)
 *     _InputSystemInternalClientConnection::Create_::_1_::dtor$0 @ 0x18013C14C (_InputSystemInternalClientConnection--Create_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::~ComPtr<InputSystemInternalClientConnection>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::InternalRelease(a1);
}

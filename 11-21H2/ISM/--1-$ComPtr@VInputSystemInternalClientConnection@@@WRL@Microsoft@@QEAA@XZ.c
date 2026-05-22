/*
 * XREFs of ??1?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x180087308
 * Callers:
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$12 @ 0x180080103 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$12.c)
 *     _InputProcess::InputProcess_::_1_::dtor$2 @ 0x1800B1773 (_InputProcess--InputProcess_--_1_--dtor$2.c)
 *     _InputSystemInternalClientConnection::Create_::_1_::dtor$0 @ 0x1801207FC (_InputSystemInternalClientConnection--Create_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::~ComPtr<InputSystemInternalClientConnection>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<AnimationDataProviderConnection>::InternalRelease(a1);
}

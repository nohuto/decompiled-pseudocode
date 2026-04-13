/*
 * XREFs of ?QueryInterface@UniqueExtendedExecutionSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6AF0
 * Callers:
 *     ?QueryInterface@UniqueExtendedExecutionSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6B00 (-QueryInterface@UniqueExtendedExecutionSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@UniqueExtendedExecutionSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6B20 (-QueryInterface@UniqueExtendedExecutionSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UniqueExtendedExecutionSession::QueryInterface(__int64 this, _DWORD *a2, __int64 *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}

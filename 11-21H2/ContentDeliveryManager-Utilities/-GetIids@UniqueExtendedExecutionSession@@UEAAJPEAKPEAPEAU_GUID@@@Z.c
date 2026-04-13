/*
 * XREFs of ?GetIids@UniqueExtendedExecutionSession@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B5310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UniqueExtendedExecutionSession::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::GetIids(
           this,
           a2,
           a3);
}

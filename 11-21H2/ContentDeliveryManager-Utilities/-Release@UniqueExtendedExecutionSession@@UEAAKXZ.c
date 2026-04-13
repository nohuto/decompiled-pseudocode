/*
 * XREFs of ?Release@UniqueExtendedExecutionSession@@UEAAKXZ @ 0x1800B6E60
 * Callers:
 *     ?Release@UniqueExtendedExecutionSession@@W7EAAKXZ @ 0x1800B6E70 (-Release@UniqueExtendedExecutionSession@@W7EAAKXZ.c)
 *     ?Release@UniqueExtendedExecutionSession@@WCI@EAAKXZ @ 0x1800B6E90 (-Release@UniqueExtendedExecutionSession@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UniqueExtendedExecutionSession::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::Release(this);
}

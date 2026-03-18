/*
 * XREFs of ?BoostFrameRate@CLegacyRenderTarget@@UEAA_N_N@Z @ 0x18019FC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::BoostFrameRate(CLegacyRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 88LL))(v1);
  else
    return 0;
}

/*
 * XREFs of ??B?$com_ptr_t@VCPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x1801AFDBC
 * Callers:
 *     ?PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1801B0070 (-PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::com_ptr_t<CPresentationBuffer,wil::err_returncode_policy>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}

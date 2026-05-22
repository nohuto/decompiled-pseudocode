/*
 * XREFs of _lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___ @ 0x1800DD488
 * Callers:
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800DE400 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___(
        _QWORD **a1,
        int **a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // rcx
  int v4; // edx

  v2 = (_DWORD *)(*a1)[1];
  v3 = (_DWORD *)**a1;
  if ( v3 == v2 )
    return 0;
  v4 = **a2;
  while ( *v3 != v4 )
  {
    if ( ++v3 == v2 )
      return 0;
  }
  return 1;
}

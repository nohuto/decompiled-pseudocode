/*
 * XREFs of ?InternalRelease@?$ComPtr@VMPCManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180055984
 * Callers:
 *     _dynamic_atexit_destructor_for__MPCManager::s_instance__ @ 0x180083AB0 (_dynamic_atexit_destructor_for__MPCManager--s_instance__.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCManager>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 8LL))(v2 + 16);
  }
  return result;
}

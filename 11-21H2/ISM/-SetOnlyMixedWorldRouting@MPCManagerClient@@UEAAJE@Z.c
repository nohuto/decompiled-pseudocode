/*
 * XREFs of ?SetOnlyMixedWorldRouting@MPCManagerClient@@UEAAJE@Z @ 0x18015E830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::SetOnlyMixedWorldRouting(MPCManagerClient *this, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 200) + 232LL);
  if ( !v2 )
    return 2147549443LL;
  LOBYTE(a2) = (_BYTE)a2 != 0;
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, a2);
}

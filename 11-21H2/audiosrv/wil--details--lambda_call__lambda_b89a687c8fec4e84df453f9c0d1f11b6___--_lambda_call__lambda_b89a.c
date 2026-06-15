/*
 * XREFs of wil::details::lambda_call__lambda_b89a687c8fec4e84df453f9c0d1f11b6___::_lambda_call__lambda_b89a687c8fec4e84df453f9c0d1f11b6___ @ 0x180125B10
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges_::_1_::dtor$2 @ 0x180128265 (_Sarm--CSpatialAudioResourceManager--RegisterForApplicationPolicyChanges_--_1_--dtor$2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_b89a687c8fec4e84df453f9c0d1f11b6___::_lambda_call__lambda_b89a687c8fec4e84df453f9c0d1f11b6___(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 552LL))(**a1, *a1[1]);
  }
  return result;
}

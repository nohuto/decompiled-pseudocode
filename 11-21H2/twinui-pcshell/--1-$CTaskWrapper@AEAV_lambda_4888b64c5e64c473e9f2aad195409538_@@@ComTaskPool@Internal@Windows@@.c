/*
 * XREFs of ??1?$CTaskWrapper@AEAV_lambda_4888b64c5e64c473e9f2aad195409538_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1801B5EB0
 * Callers:
 *     ??_G?$CTaskWrapper@AEAV_lambda_4888b64c5e64c473e9f2aad195409538_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801B6080 (--_G-$CTaskWrapper@AEAV_lambda_4888b64c5e64c473e9f2aad195409538_@@@ComTaskPool@Internal@Windows@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_4888b64c5e64c473e9f2aad195409538_ &>::~CTaskWrapper<_lambda_4888b64c5e64c473e9f2aad195409538_ &>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}

/*
 * XREFs of CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_92ff23739f2b9d0115d4f2c8a03d4246___ @ 0x18003B2A4
 * Callers:
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x1801575B0 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_92ff23739f2b9d0115d4f2c8a03d4246___(
        __int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 i; // rbx
  __int64 v4; // r14

  v1 = *(_QWORD *)(a1 + 176);
  for ( i = 0LL; i < v1; ++i )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * i);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4) )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 160LL))(v4, 0LL);
  }
}

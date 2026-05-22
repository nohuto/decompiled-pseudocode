/*
 * XREFs of ?OnMenuPressed@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@W4MPCSourceKind@@I@Z @ 0x18017F8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnMenuPressed(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 1608LL);
  result = 0LL;
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, a3, a4);
  return result;
}

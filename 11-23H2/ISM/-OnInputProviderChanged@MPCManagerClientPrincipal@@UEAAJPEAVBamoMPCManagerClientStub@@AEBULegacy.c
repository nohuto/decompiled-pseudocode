/*
 * XREFs of ?OnInputProviderChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18017F720
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnInputProviderChanged(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 56);
  memcpy_0((void *)(v4 + 56), a3, 0x60CuLL);
  v6 = *(_QWORD *)(v4 + 1608);
  result = 0LL;
  *(_DWORD *)(v4 + 1604) = a4;
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, v4 + 56, a4);
  return result;
}

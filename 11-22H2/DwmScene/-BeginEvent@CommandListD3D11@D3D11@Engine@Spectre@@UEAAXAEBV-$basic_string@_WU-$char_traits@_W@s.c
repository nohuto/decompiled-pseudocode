/*
 * XREFs of ?BeginEvent@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800CFBB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::D3D11::CommandListD3D11::BeginEvent(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 )
  {
    if ( a2[3] >= 8uLL )
      a2 = (_QWORD *)*a2;
    return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 24LL))(v2, a2);
  }
  return result;
}

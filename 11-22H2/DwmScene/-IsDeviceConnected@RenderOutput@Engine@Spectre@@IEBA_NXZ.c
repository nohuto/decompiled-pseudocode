/*
 * XREFs of ?IsDeviceConnected@RenderOutput@Engine@Spectre@@IEBA_NXZ @ 0x18002C4D4
 * Callers:
 *     ?IsValid@RenderOutput@Engine@Spectre@@UEBA_NXZ @ 0x18002C540 (-IsValid@RenderOutput@Engine@Spectre@@UEBA_NXZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall Spectre::Engine::RenderOutput::IsDeviceConnected(Spectre::Engine::RenderOutput *this)
{
  __int64 v1; // rcx
  bool v2; // bl
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)((*(__int64 (__fastcall **)(Spectre::Engine::RenderOutput *, _BYTE *))(*(_QWORD *)this + 376LL))(
                     this,
                     v4)
                 + 8);
  v2 = v1 && *(_DWORD *)(v1 + 8);
  if ( v5 )
    std::_Ref_count_base::_Decwref(v5);
  return v2;
}

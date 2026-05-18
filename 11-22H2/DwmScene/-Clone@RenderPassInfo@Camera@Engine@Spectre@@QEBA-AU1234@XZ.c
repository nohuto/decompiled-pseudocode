/*
 * XREFs of ?Clone@RenderPassInfo@Camera@Engine@Spectre@@QEBA?AU1234@XZ @ 0x18005AE58
 * Callers:
 *     ?CloneInternal@Camera@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18005AED0 (-CloneInternal@Camera@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0RenderPassInfo@Camera@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x18005962C (--0RenderPassInfo@Camera@Engine@Spectre@@QEAA@AEBU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Engine::Camera::RenderPassInfo *__fastcall Spectre::Engine::Camera::RenderPassInfo::Clone(
        const struct Spectre::Engine::Camera::RenderPassInfo *a1,
        Spectre::Engine::Camera::RenderPassInfo *a2)
{
  __int64 v3; // r9
  __int64 *v4; // rax
  _BYTE v6[8]; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v7; // [rsp+30h] [rbp-18h]

  Spectre::Engine::Camera::RenderPassInfo::RenderPassInfo(a2, a1);
  v4 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v3 + 32) + 8LL))(*(_QWORD *)(v3 + 32), v6);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)a2 + 4, v4);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a2;
}

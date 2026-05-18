/*
 * XREFs of ?CreateDeviceBufferHelper@ArrayBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088A38
 * Callers:
 *     ?AttachDevice@ArrayBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800888F0 (-AttachDevice@ArrayBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800294D0 (-AttachDevice@SharedResource@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 *     ?NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z @ 0x180029680 (-NotifyDeviceReady@SharedResource@Engine@Spectre@@IEAAXW4RenderDeviceID@23@@Z.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engi_ea_1800541F0.c)
 *     ?UpdateDeviceBuffer@ArrayBuffer@Engine@Spectre@@AEAAXAEAVRenderDevice@23@@Z @ 0x180088EEC (-UpdateDeviceBuffer@ArrayBuffer@Engine@Spectre@@AEAAXAEAVRenderDevice@23@@Z.c)
 *     ?Create@DeviceArrayBuffer@Engine@Spectre@@QEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x18008B3F8 (-Create@DeviceArrayBuffer@Engine@Spectre@@QEAAXPEBXIIW4Usage@23@W4Format@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ArrayBuffer::CreateDeviceBufferHelper(unsigned int **this, __int64 *a2)
{
  unsigned int *v4; // rax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned int ID; // esi
  __int64 v10; // rax
  unsigned int *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-20h]
  char v14[24]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF

  Spectre::Engine::SharedResource::AttachDevice((__int64)this, a2);
  (*((void (__fastcall **)(unsigned int **, __int64 *, __int64))*this + 7))(this, &v12, *a2);
  v4 = this[14];
  if ( v4 )
  {
    v5 = v4[5];
    v6 = v4[6];
    v7 = v4[4];
    v8 = v4[2];
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = 0LL;
    v8 = 0LL;
  }
  Spectre::Engine::DeviceArrayBuffer::Create(v12, this[17], v8, v7, v6, v5);
  ID = Spectre::Engine::RenderDevice::GetID(*a2);
  v15 = ID;
  v10 = std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
          (__int64 *)this + 15,
          (__int64)v14,
          &v15);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(*(_QWORD *)v10 + 40LL), &v12);
  v11 = this[14];
  if ( v11 && v11[6] == 2 )
    Spectre::Engine::ArrayBuffer::UpdateDeviceBuffer(
      (Spectre::Engine::ArrayBuffer *)this,
      (struct Spectre::Engine::RenderDevice *)*a2);
  Spectre::Engine::SharedResource::NotifyDeviceReady((__int64)this, ID);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
}

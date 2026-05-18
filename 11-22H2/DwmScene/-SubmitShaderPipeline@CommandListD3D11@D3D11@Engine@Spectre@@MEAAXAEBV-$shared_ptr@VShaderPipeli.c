/*
 * XREFs of ?SubmitShaderPipeline@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@Z @ 0x1800D1B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548 (--$_Find@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spect.c)
 *     ?GetDeviceShader@Shader@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x18008AF20 (-GetDeviceShader@Shader@Engine@Spectre@@QEAA-AV-$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@.c)
 *     ??$dynamic_pointer_cast@VDomainShaderD3D11@D3D11@Engine@Spectre@@VDeviceShader@34@@std@@YA?AV?$shared_ptr@VDomainShaderD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceShader@Engine@Spectre@@@0@@Z @ 0x1800CF5AC (--$dynamic_pointer_cast@VDomainShaderD3D11@D3D11@Engine@Spectre@@VDeviceShader@34@@std@@YA-AV-$s.c)
 *     ??$dynamic_pointer_cast@VGeometryShaderD3D11@D3D11@Engine@Spectre@@VDeviceShader@34@@std@@YA?AV?$shared_ptr@VGeometryShaderD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceShader@Engine@Spectre@@@0@@Z @ 0x1800CF614 (--$dynamic_pointer_cast@VGeometryShaderD3D11@D3D11@Engine@Spectre@@VDeviceShader@34@@std@@YA-AV-.c)
 *     ??$dynamic_pointer_cast@VHullShaderD3D11@D3D11@Engine@Spectre@@VDeviceShader@34@@std@@YA?AV?$shared_ptr@VHullShaderD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceShader@Engine@Spectre@@@0@@Z @ 0x1800CF67C (--$dynamic_pointer_cast@VHullShaderD3D11@D3D11@Engine@Spectre@@VDeviceShader@34@@std@@YA-AV-$sha.c)
 *     ??$dynamic_pointer_cast@VPixelShaderD3D11@D3D11@Engine@Spectre@@VDeviceShader@34@@std@@YA?AV?$shared_ptr@VPixelShaderD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceShader@Engine@Spectre@@@0@@Z @ 0x1800CF6E4 (--$dynamic_pointer_cast@VPixelShaderD3D11@D3D11@Engine@Spectre@@VDeviceShader@34@@std@@YA-AV-$sh.c)
 *     ??$dynamic_pointer_cast@VVertexShaderD3D11@D3D11@Engine@Spectre@@VDeviceShader@34@@std@@YA?AV?$shared_ptr@VVertexShaderD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceShader@Engine@Spectre@@@0@@Z @ 0x1800CF944 (--$dynamic_pointer_cast@VVertexShaderD3D11@D3D11@Engine@Spectre@@VDeviceShader@34@@std@@YA-AV-$s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitShaderPipeline(__int64 a1, __int64 *a2)
{
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rax
  std::_Ref_count_base **v6; // rax
  __int16 v7; // di
  std::_Ref_count_base *v8; // rsi
  _QWORD *v9; // rcx
  std::_Ref_count_base **DeviceShader; // rax
  std::_Ref_count_base *v11; // rcx
  __int16 v12; // bx
  __int16 v13; // bx
  _QWORD *v14; // rcx
  std::_Ref_count_base **v15; // rax
  std::_Ref_count_base *v16; // rcx
  __int16 v17; // di
  __int16 v18; // di
  _QWORD *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int16 v22; // bx
  __int16 v23; // bx
  _QWORD *v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int16 v27; // di
  __int16 v28; // di
  std::_Ref_count_base *v29; // r12
  _QWORD *v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int16 v33; // bx
  __int16 v34; // bx
  std::_Ref_count_base *v35; // rdi
  __int64 *v36; // rax
  __int64 v37; // rbx
  std::_Ref_count_base *v38; // rcx
  __int64 *v39; // rax
  std::_Ref_count_base *v40; // rdx
  std::_Ref_count_base *v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // r14
  std::_Ref_count_base *v44; // rcx
  __int64 *v45; // rax
  __int64 v46; // r15
  std::_Ref_count_base *v47; // rcx
  __int64 *v48; // rax
  __int64 v49; // r13
  std::_Ref_count_base *v50; // rsi
  std::_Ref_count_base *v51; // r12
  char v52; // al
  __int64 *v53; // rdi
  bool v54; // zf
  __int64 v55; // rax
  void (__fastcall *v56)(__int64 *, std::_Ref_count_base *, _QWORD, _QWORD); // rsi
  std::_Ref_count_base *v57; // rbx
  __int64 *v58; // rdi
  __int64 v59; // rax
  void (__fastcall *v60)(__int64 *, std::_Ref_count_base *, _QWORD, _QWORD); // rsi
  std::_Ref_count_base *v61; // rbx
  __int64 v62; // r14
  __int64 *v63; // rdi
  __int64 v64; // rax
  void (__fastcall *v65)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v66; // rbx
  __int64 *v67; // rdi
  __int64 v68; // rax
  void (__fastcall *v69)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v70; // rbx
  __int64 *v71; // rdi
  __int64 v72; // rax
  void (__fastcall *v73)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v74; // rbx
  std::_Ref_count_base *v75; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v76; // [rsp+38h] [rbp-C8h]
  __int64 v77; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v78; // [rsp+48h] [rbp-B8h]
  std::_Ref_count_base *v79[2]; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v80[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v81; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v82; // [rsp+78h] [rbp-88h]
  std::_Ref_count_base *v83[2]; // [rsp+80h] [rbp-80h] BYREF
  std::_Ref_count_base *v84[2]; // [rsp+90h] [rbp-70h] BYREF
  std::_Ref_count_base *v85; // [rsp+A0h] [rbp-60h] BYREF
  std::_Ref_count_base *v86; // [rsp+A8h] [rbp-58h]
  std::_Ref_count_base *v87; // [rsp+B0h] [rbp-50h] BYREF
  std::_Ref_count_base *v88; // [rsp+B8h] [rbp-48h]
  __int128 v89; // [rsp+C0h] [rbp-40h]
  __int128 v90; // [rsp+D0h] [rbp-30h]
  __int128 v91; // [rsp+E0h] [rbp-20h]
  __int128 v92; // [rsp+F0h] [rbp-10h]
  __int64 v93; // [rsp+100h] [rbp+0h] BYREF
  std::_Ref_count_base *v94; // [rsp+108h] [rbp+8h]
  std::_Ref_count_base *v95; // [rsp+110h] [rbp+10h]
  _QWORD v96[4]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v97; // [rsp+138h] [rbp+38h] BYREF
  std::_Ref_count_base *v98; // [rsp+140h] [rbp+40h]
  __int64 v99; // [rsp+1A0h] [rbp+A0h] BYREF
  std::_Ref_count_base *v100; // [rsp+1A8h] [rbp+A8h] BYREF
  std::_Ref_count_base *v101; // [rsp+1B0h] [rbp+B0h]
  std::_Ref_count_base *v102; // [rsp+1B8h] [rbp+B8h]

  v99 = a1;
  LODWORD(v100) = 0;
  v3 = *(_DWORD *)(a1 + 88);
  v4 = *a2;
  if ( *a2 )
  {
    LODWORD(v100) = *(_DWORD *)(a1 + 88);
    v5 = std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
           v4 + 480,
           (__int64)&v100);
    if ( v5 == *(_QWORD *)(v4 + 480) )
      *(_OWORD *)v80 = 0LL;
    else
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        v80,
        (_QWORD *)(v5 + 40));
    v6 = v80;
    v7 = 1;
    v8 = v80[0];
  }
  else
  {
    v79[1] = 0LL;
    v6 = v79;
    v7 = 2;
    v8 = 0LL;
  }
  v96[2] = v8;
  v95 = v6[1];
  v96[3] = v95;
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v79[1] )
      std::_Ref_count_base::_Decref(v79[1]);
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( v80[1] )
      std::_Ref_count_base::_Decref(v80[1]);
  }
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  *(_OWORD *)v79 = 0LL;
  if ( std::operator!=<Spectre::Engine::Scene>(a2) )
  {
    v9 = (_QWORD *)*((_QWORD *)v8 + 12);
    if ( v9 )
    {
      DeviceShader = (std::_Ref_count_base **)Spectre::Engine::Shader::GetDeviceShader(v9, &v81, v3);
      v11 = *DeviceShader;
      v12 = 4;
    }
    else
    {
      v88 = 0LL;
      DeviceShader = &v87;
      v11 = 0LL;
      v12 = 8;
    }
    v13 = v7 | v12;
    v84[0] = v11;
    v80[0] = DeviceShader[1];
    v84[1] = v80[0];
    *DeviceShader = 0LL;
    DeviceShader[1] = 0LL;
    if ( (v13 & 8) != 0 )
    {
      v13 &= ~8u;
      if ( v88 )
        std::_Ref_count_base::_Decref(v88);
    }
    if ( (v13 & 4) != 0 )
    {
      v13 &= ~4u;
      if ( v82 )
        std::_Ref_count_base::_Decref(v82);
    }
    v14 = (_QWORD *)*((_QWORD *)v8 + 14);
    if ( v14 )
    {
      v15 = (std::_Ref_count_base **)Spectre::Engine::Shader::GetDeviceShader(v14, &v93, v3);
      v16 = *v15;
      v17 = 16;
    }
    else
    {
      v86 = 0LL;
      v15 = &v85;
      v16 = 0LL;
      v17 = 32;
    }
    v18 = v13 | v17;
    v83[0] = v16;
    v87 = v15[1];
    v83[1] = v87;
    *v15 = 0LL;
    v15[1] = 0LL;
    if ( (v18 & 0x20) != 0 )
    {
      v18 &= ~0x20u;
      if ( v86 )
        std::_Ref_count_base::_Decref(v86);
    }
    if ( (v18 & 0x10) != 0 )
    {
      v18 &= ~0x10u;
      if ( v94 )
        std::_Ref_count_base::_Decref(v94);
    }
    v19 = (_QWORD *)*((_QWORD *)v8 + 16);
    if ( v19 )
    {
      v20 = Spectre::Engine::Shader::GetDeviceShader(v19, &v81, v3);
      v21 = *v20;
      v22 = 64;
    }
    else
    {
      v76 = 0LL;
      v20 = (__int64 *)&v75;
      v21 = 0LL;
      v22 = 128;
    }
    v23 = v18 | v22;
    v96[0] = v21;
    v85 = (std::_Ref_count_base *)v20[1];
    v96[1] = v85;
    *v20 = 0LL;
    v20[1] = 0LL;
    if ( (v23 & 0x80u) != 0 )
    {
      v23 &= ~0x80u;
      if ( v76 )
        std::_Ref_count_base::_Decref(v76);
    }
    if ( (v23 & 0x40) != 0 )
    {
      v23 &= ~0x40u;
      if ( v82 )
        std::_Ref_count_base::_Decref(v82);
    }
    v24 = (_QWORD *)*((_QWORD *)v8 + 18);
    if ( v24 )
    {
      v25 = Spectre::Engine::Shader::GetDeviceShader(v24, &v97, v3);
      v26 = *v25;
      v27 = 256;
    }
    else
    {
      v76 = 0LL;
      v25 = (__int64 *)&v75;
      v26 = 0LL;
      v27 = 512;
    }
    v28 = v23 | v27;
    v93 = v26;
    v29 = (std::_Ref_count_base *)v25[1];
    v94 = v29;
    *v25 = 0LL;
    v25[1] = 0LL;
    if ( (v28 & 0x200) != 0 )
    {
      v28 &= ~0x200u;
      if ( v76 )
        std::_Ref_count_base::_Decref(v76);
    }
    if ( (v28 & 0x100) != 0 )
    {
      v28 &= ~0x100u;
      if ( v98 )
        std::_Ref_count_base::_Decref(v98);
    }
    v30 = (_QWORD *)*((_QWORD *)v8 + 20);
    if ( v30 )
    {
      v31 = Spectre::Engine::Shader::GetDeviceShader(v30, &v77, v3);
      v32 = *v31;
      v33 = 1024;
    }
    else
    {
      v76 = 0LL;
      v31 = (__int64 *)&v75;
      v32 = 0LL;
      v33 = 2048;
    }
    v34 = v28 | v33;
    v81 = v32;
    v35 = (std::_Ref_count_base *)v31[1];
    v82 = v35;
    *v31 = 0LL;
    v31[1] = 0LL;
    if ( (v34 & 0x800) != 0 )
    {
      v34 &= ~0x800u;
      if ( v76 )
        std::_Ref_count_base::_Decref(v76);
    }
    if ( (v34 & 0x400) != 0 && v78 )
      std::_Ref_count_base::_Decref(v78);
    v36 = std::dynamic_pointer_cast<Spectre::Engine::D3D11::VertexShaderD3D11,Spectre::Engine::DeviceShader>(&v77, v84);
    v37 = *v36;
    v75 = (std::_Ref_count_base *)v36[1];
    v38 = v75;
    *v36 = 0LL;
    v36[1] = 0LL;
    *(_QWORD *)&v89 = v37;
    *((_QWORD *)&v89 + 1) = v38;
    if ( v78 )
      std::_Ref_count_base::_Decref(v78);
    v39 = std::dynamic_pointer_cast<Spectre::Engine::D3D11::PixelShaderD3D11,Spectre::Engine::DeviceShader>(&v77, v83);
    v101 = (std::_Ref_count_base *)*v39;
    v40 = v101;
    v102 = (std::_Ref_count_base *)v39[1];
    v41 = v102;
    *v39 = 0LL;
    v39[1] = 0LL;
    v79[0] = v40;
    v79[1] = v41;
    if ( v78 )
      std::_Ref_count_base::_Decref(v78);
    v42 = std::dynamic_pointer_cast<Spectre::Engine::D3D11::HullShaderD3D11,Spectre::Engine::DeviceShader>(&v77, v96);
    v43 = *v42;
    v84[0] = (std::_Ref_count_base *)v42[1];
    v44 = v84[0];
    *v42 = 0LL;
    v42[1] = 0LL;
    *(_QWORD *)&v90 = v43;
    *((_QWORD *)&v90 + 1) = v44;
    if ( v78 )
      std::_Ref_count_base::_Decref(v78);
    v45 = std::dynamic_pointer_cast<Spectre::Engine::D3D11::DomainShaderD3D11,Spectre::Engine::DeviceShader>(&v77, &v93);
    v46 = *v45;
    v83[0] = (std::_Ref_count_base *)v45[1];
    v47 = v83[0];
    *v45 = 0LL;
    v45[1] = 0LL;
    *(_QWORD *)&v91 = v46;
    *((_QWORD *)&v91 + 1) = v47;
    if ( v78 )
      std::_Ref_count_base::_Decref(v78);
    v48 = std::dynamic_pointer_cast<Spectre::Engine::D3D11::GeometryShaderD3D11,Spectre::Engine::DeviceShader>(
            &v77,
            &v81);
    v49 = *v48;
    v100 = (std::_Ref_count_base *)v48[1];
    v50 = v100;
    *v48 = 0LL;
    v48[1] = 0LL;
    *(_QWORD *)&v92 = v49;
    *((_QWORD *)&v92 + 1) = v50;
    if ( v78 )
      std::_Ref_count_base::_Decref(v78);
    if ( v35 )
      std::_Ref_count_base::_Decref(v35);
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
    if ( v85 )
      std::_Ref_count_base::_Decref(v85);
    if ( v87 )
      std::_Ref_count_base::_Decref(v87);
    if ( v80[0] )
      std::_Ref_count_base::_Decref(v80[0]);
    v51 = v100;
    if ( v37 )
    {
      v52 = 1;
      goto LABEL_83;
    }
  }
  else
  {
    v75 = (std::_Ref_count_base *)*((_QWORD *)&v89 + 1);
    v37 = v89;
    v84[0] = *((std::_Ref_count_base **)&v90 + 1);
    v43 = v90;
    v83[0] = *((std::_Ref_count_base **)&v91 + 1);
    v46 = v91;
    v51 = (std::_Ref_count_base *)*((_QWORD *)&v92 + 1);
    v49 = v92;
    v102 = v79[1];
    v101 = v79[0];
  }
  v52 = 0;
LABEL_83:
  v53 = *(__int64 **)(v99 + 144);
  v54 = v52 == 0;
  v55 = *v53;
  if ( v54 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v55 + 88))(*(_QWORD *)(v99 + 144), 0LL, 0LL, 0LL);
  }
  else
  {
    v56 = *(void (__fastcall **)(__int64 *, std::_Ref_count_base *, _QWORD, _QWORD))(v55 + 88);
    v57 = *(std::_Ref_count_base **)(v37 + 104);
    v100 = v57;
    if ( v57 )
      (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v57 + 8LL))(v57);
    v56(v53, v57, 0LL, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v100);
  }
  v58 = *(__int64 **)(v99 + 144);
  v59 = *v58;
  if ( v43 )
  {
    v60 = *(void (__fastcall **)(__int64 *, std::_Ref_count_base *, _QWORD, _QWORD))(v59 + 480);
    v61 = *(std::_Ref_count_base **)(v43 + 104);
    v100 = v61;
    if ( v61 )
      (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v61 + 8LL))(v61);
    v60(v58, v61, 0LL, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v100);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v59 + 480))(*(_QWORD *)(v99 + 144), 0LL, 0LL, 0LL);
  }
  v62 = v99;
  v63 = *(__int64 **)(v99 + 144);
  v64 = *v63;
  if ( v46 )
  {
    v65 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v64 + 512);
    v66 = *(_QWORD *)(v46 + 104);
    v99 = v66;
    if ( v66 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 8LL))(v66);
    v65(v63, v66, 0LL, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v99);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v64 + 512))(*(_QWORD *)(v99 + 144), 0LL, 0LL, 0LL);
  }
  v67 = *(__int64 **)(v62 + 144);
  v68 = *v67;
  if ( v49 )
  {
    v69 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v68 + 184);
    v70 = *(_QWORD *)(v49 + 104);
    v99 = v70;
    if ( v70 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70);
    v69(v67, v70, 0LL, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v99);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v68 + 184))(*(_QWORD *)(v62 + 144), 0LL, 0LL, 0LL);
  }
  v71 = *(__int64 **)(v62 + 144);
  v72 = *v71;
  if ( v101 )
  {
    v73 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v72 + 72);
    v74 = *((_QWORD *)v101 + 13);
    v99 = v74;
    if ( v74 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 8LL))(v74);
    v73(v71, v74, 0LL, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v99);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v72 + 72))(v71, 0LL, 0LL, 0LL);
  }
  if ( v102 )
    std::_Ref_count_base::_Decref(v102);
  if ( v51 )
    std::_Ref_count_base::_Decref(v51);
  if ( v83[0] )
    std::_Ref_count_base::_Decref(v83[0]);
  if ( v84[0] )
    std::_Ref_count_base::_Decref(v84[0]);
  if ( v75 )
    std::_Ref_count_base::_Decref(v75);
  if ( v95 )
    std::_Ref_count_base::_Decref(v95);
}

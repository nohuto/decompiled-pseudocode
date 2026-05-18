/*
 * XREFs of ?Render@Mesh@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x180048C04
 * Callers:
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?IsDeviceReady@SharedResource@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z @ 0x180029600 (-IsDeviceReady@SharedResource@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z.c)
 *     ?Draw@CommandList@Engine@Spectre@@QEAAXII@Z @ 0x18003927C (-Draw@CommandList@Engine@Spectre@@QEAAXII@Z.c)
 *     ?DrawIndexed@CommandList@Engine@Spectre@@QEAAXIII@Z @ 0x1800392DC (-DrawIndexed@CommandList@Engine@Spectre@@QEAAXIII@Z.c)
 *     ?SetIndexBuffer@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIndexBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800396F0 (-SetIndexBuffer@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIndexBuffer@Engine@Spectre@@@.c)
 *     ?SetPrimitiveType@CommandList@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z @ 0x180039708 (-SetPrimitiveType@CommandList@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z.c)
 *     ?SetVertexBuffer@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@III@Z @ 0x18003984C (-SetVertexBuffer@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VVertexBuffer@Engine@Spectre@.c)
 *     ?AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180047E90 (-AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z @ 0x180070AF0 (-IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::Mesh::Render(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int ID; // eax
  __int64 v7; // rcx
  int *v8; // rdi
  std::_Ref_count_base **v9; // rdx
  struct Spectre::Engine::PerformanceManager *v10; // rax
  struct Spectre::Engine::PerformanceManager *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-C8h]
  std::_Ref_count_base *v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  __int64 v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  __int64 v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  __int64 v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  __int64 v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+118h] [rbp+18h]
  __int64 v42; // [rsp+120h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 120) )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*a2 + 72, &v14);
    ID = Spectre::Engine::RenderDevice::GetID(v14);
    if ( !Spectre::Engine::SharedResource::IsDeviceReady(a1, ID) )
    {
      if ( !Spectre::Engine::RendererResource::GetOption(a1, 4) )
      {
LABEL_15:
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
        return;
      }
      Spectre::Engine::Mesh::AttachDevice(v7, &v14);
    }
    *(_OWORD *)v16 = 0LL;
    v18 = a1 + 144;
    v19 = 1LL;
    v20 = 0;
    v21 = a1 + 160;
    v22 = 2LL;
    v23 = 1;
    v24 = a1 + 176;
    v25 = 16LL;
    v26 = 4;
    v27 = a1 + 192;
    v28 = 4LL;
    v29 = 2;
    v30 = a1 + 240;
    v31 = 32LL;
    v32 = 5;
    v33 = a1 + 256;
    v34 = 64LL;
    v35 = 6;
    v36 = a1 + 208;
    v37 = 512LL;
    v38 = 9;
    v39 = a1 + 224;
    v40 = 1024LL;
    v41 = 10;
    v8 = &v20;
    do
    {
      v9 = (std::_Ref_count_base **)*((_QWORD *)v8 - 2);
      if ( !*v9 || (a3 & *((_QWORD *)v8 - 1)) == 0 )
        v9 = v16;
      Spectre::Engine::CommandList::SetVertexBuffer(*a2, v9);
      v8 += 6;
    }
    while ( v8 - 4 != (int *)&v42 );
    Spectre::Engine::CommandList::SetPrimitiveType(*a2);
    if ( *(_QWORD *)(a1 + 272) )
    {
      Spectre::Engine::CommandList::SetIndexBuffer(*a2);
      Spectre::Engine::CommandList::DrawIndexed((Spectre::Engine::CommandList *)*a2, *(_DWORD *)(a1 + 112));
      v10 = Spectre::Engine::PerformanceManager::Instance();
      Spectre::Engine::PerformanceManager::IncrementCounter(v10, 1LL, 1LL, *(unsigned int *)(a1 + 112));
    }
    else
    {
      v17 = 0LL;
      Spectre::Engine::CommandList::SetIndexBuffer(*a2);
      Spectre::Engine::CommandList::Draw((Spectre::Engine::CommandList *)*a2, *(_DWORD *)(a1 + 120));
    }
    v11 = Spectre::Engine::PerformanceManager::Instance();
    Spectre::Engine::PerformanceManager::IncrementCounter(v11, 0LL, 1LL, *(unsigned int *)(a1 + 120));
    Spectre::Engine::PerformanceManager::IncrementCounter(v13, 12LL, v12, 1LL);
    if ( v16[1] )
      std::_Ref_count_base::_Decref(v16[1]);
    goto LABEL_15;
  }
}

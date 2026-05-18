/*
 * XREFs of ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VArrayBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D27D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?GetCategory@RendererResource@Engine@Spectre@@QEBA?AW4Category@PerformanceManager@23@XZ @ 0x180029544 (-GetCategory@RendererResource@Engine@Spectre@@QEBA-AW4Category@PerformanceManager@23@XZ.c)
 *     ?GetType@RendererResource@Engine@Spectre@@QEBA?AW4EType@123@XZ @ 0x1800295F4 (-GetType@RendererResource@Engine@Spectre@@QEBA-AW4EType@123@XZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ?IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z @ 0x180070AF0 (-IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 *     ?GetDeviceBuffer@ArrayBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180088B9C (-GetDeviceBuffer@ArrayBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceArrayBuffer@Engine@Spect.c)
 *     ?GetBuffer@VertexBufferD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@XZ @ 0x1800D03CC (-GetBuffer@VertexBufferD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Buffer@@@WRL@Microsoft.c)
 *     ?UpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXPEAUID3D11Buffer@@PEBXI@Z @ 0x1800D3560 (-UpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXPEAUID3D11Buffer@@PEBXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitUpdateBuffer(
        Spectre::Engine::D3D11::CommandListD3D11 *this,
        __int64 *a2,
        const void *a3,
        unsigned int a4)
{
  __int64 *v8; // rdx
  int Category; // eax
  __int64 v10; // r10
  int Type; // eax
  _QWORD *v12; // rax
  __int64 v13; // r8
  struct ID3D11Buffer **Buffer; // rax
  __int64 *v15; // rcx
  struct ID3D11Buffer *v16; // rbx
  __int64 v17; // [rsp+30h] [rbp-69h] BYREF
  __int64 v18; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19; // [rsp+40h] [rbp-59h] BYREF
  std::_Ref_count_base *v20; // [rsp+48h] [rbp-51h]
  _QWORD v21[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v22[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  Spectre::Engine::PerformanceManager::Instance();
  Category = Spectre::Engine::RendererResource::GetCategory(*v8);
  Spectre::Engine::PerformanceManager::IncrementCounter(v10, Category, 4);
  Spectre::Engine::ArrayBuffer::GetDeviceBuffer(*a2, &v19, *((_DWORD *)this + 22));
  Type = Spectre::Engine::RendererResource::GetType(*a2);
  if ( Type == 8 )
  {
    Buffer = (struct ID3D11Buffer **)Spectre::Engine::D3D11::VertexBufferD3D11::GetBuffer(v19, &v17);
    v15 = &v17;
  }
  else
  {
    if ( Type != 11 )
    {
      std::string::string(v22, (__int64)"Invalid buffer type");
      v12 = std::string::string(
              v21,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
      Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v12, v13, (const char *)v22, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    Buffer = (struct ID3D11Buffer **)Spectre::Engine::D3D11::VertexBufferD3D11::GetBuffer(v19, &v18);
    v15 = &v18;
  }
  v16 = *Buffer;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v15);
  Spectre::Engine::D3D11::CommandListD3D11::UpdateBuffer(this, v16, a3, a4);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
}

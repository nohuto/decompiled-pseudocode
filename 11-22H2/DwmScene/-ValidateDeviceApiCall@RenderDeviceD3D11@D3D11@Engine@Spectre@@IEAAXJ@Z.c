/*
 * XREFs of ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0
 * Callers:
 *     ?Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x1800CA290 (-Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@.c)
 *     ?UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAB10 (-UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     ?UpdateBackBufferTexture@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAF50 (-UpdateBackBufferTexture@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@EEAA-AV-$ComPtr@UID3D11Textu.c)
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800CB930 (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 *     ?CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHAEBV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800CBB7C (-CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceFrameBuffer.c)
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 *     ?CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture2D@@II@Z @ 0x1800CDBD8 (-CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 *     ?CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture3D@@II@Z @ 0x1800CDE10 (-CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 *     ?GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@II@Z @ 0x1800CEC40 (-GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     ?Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z @ 0x1800CFED0 (-Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z.c)
 *     ?FinalizeSubmit@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800D01E0 (-FinalizeSubmit@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VCommandList@Engine.c)
 *     ?Internal_WaitForOperationHelper@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800D0624 (-Internal_WaitForOperationHelper@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 *     ?SubmitReadTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAXI@Z @ 0x1800D1170 (-SubmitReadTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@Engine.c)
 *     ?SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@IIIIPEBXIIII@Z @ 0x1800D2A20 (-SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@En.c)
 *     ?SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2F50 (-SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@Engi.c)
 *     ?UpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXPEAUID3D11Buffer@@PEBXI@Z @ 0x1800D3560 (-UpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXPEAUID3D11Buffer@@PEBXI@Z.c)
 *     ?Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT_DESC@@IAEBVShaderProgram@34@@Z @ 0x1800D3A4C (-Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT.c)
 *     ?Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D46B0 (-Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?CreateSampler@SamplerD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@USamplerStateDesc@Engine@Spectre@@@std@@@Z @ 0x1800D4950 (-CreateSampler@SamplerD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@USamplerStateDesc@Engine@Sp.c)
 *     ?Create@RenderStateD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@URenderStateDesc@Engine@Spectre@@@std@@@Z @ 0x1800D4D50 (-Create@RenderStateD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@URenderStateDesc@Engine@Spectr.c)
 *     ?Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D5540 (-Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 *     ?CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800D62DC (-CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceDepthBuffer@E.c)
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 *     ?Create@ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA_NPEBXIW4Usage@34@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800D7170 (-Create@ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA_NPEBXIW4Usage@34@AEBV-$basic_string@DU-$c.c)
 *     ?Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7400 (-Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D76A0 (-Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7950 (-Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Create@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAA_NAEAVRenderDevice@34@W4QueryType@GpuQuery@34@@Z @ 0x1800D7D30 (-Create@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAA_NAEAVRenderDevice@34@W4QueryType@GpuQuery@34@@Z.c)
 *     ?GetData@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA?AUGetDataResult@GpuQuery@34@W4FlushOption@634@@Z @ 0x1800D7F10 (-GetData@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA-AUGetDataResult@GpuQuery@34@W4FlushOption@634@.c)
 *     ?GetStatistics@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA?AUGetStatisticsResult@GpuQuery@34@W4FlushOption@634@@Z @ 0x1800D8130 (-GetStatistics@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA-AUGetStatisticsResult@GpuQuery@34@W4Flus.c)
 *     ?CreateBuffer@D3DBufferUtils@D3D11@Engine@Spectre@@SA?AV?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@PEBDAEAVRenderDeviceD3D11@234@AEAUArrayBufferDesc@34@PEBXW4D3D11_BIND_FLAG@@@Z @ 0x1800D8568 (-CreateBuffer@D3DBufferUtils@D3D11@Engine@Spectre@@SA-AV-$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@.c)
 *     ?RecoverBufferData@D3DBufferUtils@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@X@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@6@V?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@I@Z @ 0x1800D86DC (-RecoverBufferData@D3DBufferUtils@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@X@std@@AEBV-$shared_pt.c)
 * Callees:
 *     ??$?9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11ShaderResourceView@@@01@$$T@Z @ 0x18001070C (--$-9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11ShaderResourceView@@@01@.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?HandleDeviceLost@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXXZ @ 0x1800C5A84 (-HandleDeviceLost@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXXZ.c)
 *     ?HandleOutOfMemory@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAA_NXZ @ 0x1800C5B0C (-HandleOutOfMemory@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this,
        int a2)
{
  _QWORD *v3; // rcx
  int v4; // eax

  if ( !*((_DWORD *)this + 1062) )
  {
    *((_DWORD *)this + 1063) = a2;
    if ( a2 )
    {
      switch ( a2 )
      {
        case -2005270523:
          if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>((_QWORD *)this + 532) )
          {
            v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 312LL))(*v3);
            switch ( v4 )
            {
              case -2005270527:
                *((_DWORD *)this + 1062) = 5;
                Trace::LevelSettingsWrapper::Output(
                  &gTraceLevelsNativeRenderer_RendererD3D11,
                  3,
                  "ValidateDeviceAPICAll: Device removed because of invalid call. Likely error in our code.");
                break;
              case -2005270523:
                *((_DWORD *)this + 1062) = 2;
                Trace::LevelSettingsWrapper::Output(
                  &gTraceLevelsNativeRenderer_RendererD3D11,
                  3,
                  "ValidateDeviceAPICAll: Device removed. Possibly because new drivers were installed?");
                break;
              case -2005270522:
                *((_DWORD *)this + 1062) = 1;
                Trace::LevelSettingsWrapper::Output(
                  &gTraceLevelsNativeRenderer_RendererD3D11,
                  3,
                  "ValidateDeviceAPICAll: Device removed because it hung.");
                break;
              case -2005270521:
                *((_DWORD *)this + 1062) = 3;
                Trace::LevelSettingsWrapper::Output(
                  &gTraceLevelsNativeRenderer_RendererD3D11,
                  3,
                  "ValidateDeviceAPICAll: Device removed because it was reset.");
                break;
              case -2005270496:
                *((_DWORD *)this + 1062) = 4;
                Trace::LevelSettingsWrapper::Output(
                  &gTraceLevelsNativeRenderer_RendererD3D11,
                  3,
                  "ValidateDeviceAPICAll: Device removed because of driver internal error.");
                break;
              default:
                if ( v4 )
                {
                  *((_DWORD *)this + 1062) = 2;
                }
                else
                {
                  *((_DWORD *)this + 1062) = 0;
                  Trace::LevelSettingsWrapper::Output(
                    &gTraceLevelsNativeRenderer_RendererD3D11,
                    3,
                    "ValidateDeviceAPICAll: Device removed but reason was S_OK. Better device now available?");
                }
                break;
            }
          }
          else
          {
            *((_DWORD *)this + 1062) = 2;
            Trace::LevelSettingsWrapper::Output(
              &gTraceLevelsNativeRenderer_RendererD3D11,
              3,
              "ValidateDeviceAPICAll: Device removed and is now null so cannot be queried. Serious error.");
          }
          break;
        case -2005270521:
          *((_DWORD *)this + 1062) = 3;
          Trace::LevelSettingsWrapper::Output(
            &gTraceLevelsNativeRenderer_RendererD3D11,
            3,
            "ValidateDeviceAPICAll: Device was reset.");
          break;
        case -2147024882:
          Trace::LevelSettingsWrapper::Output(
            &gTraceLevelsNativeRenderer_RendererD3D11,
            3,
            "ValidateDeviceAPICAll: Device out of memory. Calling OOM callbacks.");
          Spectre::Engine::D3D11::RenderDeviceD3D11::HandleOutOfMemory(this);
          break;
      }
    }
    else
    {
      *((_DWORD *)this + 1062) = 0;
    }
    if ( *((_DWORD *)this + 1062) )
    {
      Trace::LevelSettingsWrapper::Output(
        &gTraceLevelsNativeRenderer_RendererD3D11,
        3,
        "ValidateDeviceAPICAll: Calling Device-lost callback to notify clients.");
      Spectre::Engine::D3D11::RenderDeviceD3D11::HandleDeviceLost(this);
    }
  }
}

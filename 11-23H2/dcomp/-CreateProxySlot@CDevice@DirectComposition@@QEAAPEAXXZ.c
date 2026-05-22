/*
 * XREFs of ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84
 * Callers:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x180060C30 (-RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z.c)
 *     ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704 (-OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z.c)
 *     ?RuntimeClassInitialize@InteropRemoteRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@@Z @ 0x180091814 (-RuntimeClassInitialize@InteropRemoteRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@InteropLegacyRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_N@Z @ 0x1800926B8 (-RuntimeClassInitialize@InteropLegacyRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@InteropDesktopTree@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@@Z @ 0x180093C58 (-RuntimeClassInitialize@InteropDesktopTree@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUI.c)
 *     ?RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x180197D74 (-RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x1801983E4 (-RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJP_ea_1801983E4.c)
 *     ?RuntimeClassInitialize@InteropRedirectVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180198848 (-RuntimeClassInitialize@InteropRedirectVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z @ 0x180198E8C (-RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z.c)
 *     ?RuntimeClassInitialize@InteropVisualReferenceController@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18019A7F0 (-RuntimeClassInitialize@InteropVisualReferenceController@Composition@UI@Windows@@QEAAJPEAVCompos.c)
 *     ?RuntimeClassInitialize@InteropVisualReference@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x18019A9E0 (-RuntimeClassInitialize@InteropVisualReference@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_.c)
 *     ?RuntimeClassInitialize@InteropDDisplayRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@I@Z @ 0x18019ACBC (-RuntimeClassInitialize@InteropDDisplayRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?CreateProxyTable@CProxyTable@DirectComposition@@SAJPEAVCDevice@2@PEAPEAV12@@Z @ 0x18003FF34 (-CreateProxyTable@CProxyTable@DirectComposition@@SAJPEAVCDevice@2@PEAPEAV12@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocateProxy@CProxyTable@DirectComposition@@QEAAPEAXXZ @ 0x180075A18 (-AllocateProxy@CProxyTable@DirectComposition@@QEAAPEAXXZ.c)
 *     ??_GCProxyTable@DirectComposition@@QEAAPEAXI@Z @ 0x18008551C (--_GCProxyTable@DirectComposition@@QEAAPEAXI@Z.c)
 */

void *__fastcall DirectComposition::CDevice::CreateProxySlot(DirectComposition::CDevice *this)
{
  __int64 v1; // rdi
  char *v2; // rbx
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edx
  DirectComposition::CProxyTable *v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = (char *)this + 384;
  v3 = 0LL;
  if ( !*((_DWORD *)this + 102) )
  {
LABEL_7:
    v13 = 0LL;
    if ( (int)DirectComposition::CProxyTable::CreateProxyTable(this, &v13) < 0 )
      return (void *)v1;
    v8 = *((_DWORD *)v2 + 6);
    v9 = v8 + 1;
    if ( (unsigned int)v9 < v8 )
    {
      v10 = -2147024362;
      v11 = 181;
    }
    else
    {
      if ( (unsigned int)v9 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v2 + 8LL * *((unsigned int *)v2 + 6)) = v13;
        *((_DWORD *)v2 + 6) = v9;
        return DirectComposition::CProxyTable::AllocateProxy(v13);
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8LL, v9, &v13);
      if ( v10 >= 0 )
        return DirectComposition::CProxyTable::AllocateProxy(v13);
      v11 = 192;
    }
    DoStackCaptureDirect(v10, v11);
    if ( v13 )
      DirectComposition::CProxyTable::`scalar deleting destructor'(v13, v12);
    return (void *)v1;
  }
  while ( 1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v3);
    v1 = *(_QWORD *)(v4 + 24);
    if ( v1 )
      break;
    v5 = *(unsigned int *)(v4 + 12);
    if ( v5 >= DirectComposition::CProxyTable::s_maxProxyTableSize )
    {
      v1 = 0LL;
    }
    else
    {
      ++*(_DWORD *)(v4 + 8);
      *(_DWORD *)(v4 + 12) = v5 + 1;
      v1 = v4 + 16 * (v5 + 2);
      if ( v1 )
        return (void *)v1;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *((_DWORD *)this + 102) )
      goto LABEL_7;
  }
  v7 = *(_QWORD *)(v1 + 8);
  ++*(_DWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 24) = v7;
  return (void *)v1;
}

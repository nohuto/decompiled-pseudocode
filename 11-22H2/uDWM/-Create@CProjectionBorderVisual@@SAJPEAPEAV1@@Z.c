/*
 * XREFs of ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800D028C
 * Callers:
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800301F4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800D3210 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3F64 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F46C (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectionBorderVisual::Create(struct CProjectionBorderVisual **a1)
{
  int v2; // edi
  CRenderDataVisual *v3; // rax
  CRenderDataVisual *v4; // rbx

  if ( a1 )
  {
    v3 = (CRenderDataVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                WPF::g_pProcessHeap,
                                312LL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x138uLL);
      CRenderDataVisual::CRenderDataVisual(v4);
      *(_QWORD *)v4 = &CProjectionBorderVisual::`vftable';
      *((_OWORD *)v4 + 18) = 0LL;
      *((_DWORD *)v4 + 77) = 0;
      *((_BYTE *)v4 + 304) = 1;
      v2 = ((__int64 (__fastcall *)(CRenderDataVisual *))*(&CProjectionBorderVisual::`vftable' + 1))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v4 = 0LL;
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x10u);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x10u);
  }
  return (unsigned int)v2;
}

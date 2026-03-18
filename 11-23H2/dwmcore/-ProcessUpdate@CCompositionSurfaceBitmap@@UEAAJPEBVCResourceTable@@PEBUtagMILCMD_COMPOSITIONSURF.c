/*
 * XREFs of ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180095110
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006BE74 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180094B98 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x180095210 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::ProcessUpdate(
        CCompositionSurfaceBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSURFACEBITMAP *a3)
{
  void *v3; // rbp
  int v4; // edi
  struct CCompositionSurfaceInfo *v5; // rbx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v12; // [rsp+30h] [rbp-48h] BYREF
  struct CCompositionSurfaceInfo *v13; // [rsp+38h] [rbp-40h] BYREF

  v3 = (void *)*((_QWORD *)a3 + 1);
  v4 = 0;
  v5 = 0LL;
  v12 = 0;
  v13 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Start);
  if ( !v3 )
    goto LABEL_8;
  v8 = 0LL;
  if ( g_pComposition )
    v8 = *((_QWORD *)g_pComposition + 28);
  v9 = CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo((CCompositionSurfaceManager *)(v8 + 16), v3, &v13);
  v12 = v9;
  v4 = v9;
  if ( v9 >= 0 )
  {
    v5 = v13;
LABEL_8:
    *((_BYTE *)this + 192) = *((_BYTE *)a3 + 16) != 0;
    *((_BYTE *)this + 193) = *((_BYTE *)a3 + 17) != 0;
    CCompositionSurfaceBitmap::SetSurfaceInfo(this, v5);
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3Du, 0LL);
LABEL_9:
  TranslateDXGIorD3DErrorInContext(v4, 10, &v12);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Stop);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v12;
}

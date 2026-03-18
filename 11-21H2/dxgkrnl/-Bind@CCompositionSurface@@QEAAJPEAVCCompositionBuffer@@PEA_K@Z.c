/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x1C0004A50
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z @ 0x1C0004950 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C008131C (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000668C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 */

__int64 __fastcall CCompositionSurface::Bind(
        CCompositionSurface *this,
        struct CCompositionBuffer *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rdx
  _QWORD *v4; // r8
  __int64 v5; // r9
  unsigned int v6; // r10d
  __int64 v7; // r11
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx

  if ( CCompositionSurface::GetActiveBuffer(this) )
  {
    return (unsigned int)-1073740528;
  }
  else
  {
    v8 = (_QWORD *)(v5 + 72);
    v9 = (_QWORD *)(v3 + 24);
    v10 = *(_QWORD *)(v5 + 72);
    if ( *(_QWORD *)(v10 + 8) != v5 + 72 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v8;
    *(_QWORD *)(v10 + 8) = v9;
    *v8 = v9;
    ++*(_DWORD *)(v5 + 88);
    v11 = ++*(_QWORD *)(v5 + 40);
    *(_QWORD *)(v7 + 8) = *(_QWORD *)(v5 - 16);
    *(_QWORD *)(v7 + 16) = v11;
    *(_BYTE *)(v7 + 40) = 1;
    *v4 = *(_QWORD *)(v5 + 40);
  }
  return v6;
}

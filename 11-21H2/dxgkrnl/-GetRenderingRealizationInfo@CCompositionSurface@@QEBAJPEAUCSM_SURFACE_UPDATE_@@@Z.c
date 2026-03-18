/*
 * XREFs of ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C0007370
 * Callers:
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C00050A0 (NtQueryCompositionSurfaceRenderingRealization.c)
 * Callees:
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C00055AC (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C00074C4 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::GetRenderingRealizationInfo(
        CCompositionSurface *this,
        struct CSM_SURFACE_UPDATE_ *a2)
{
  int v4; // edi
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v6; // rbx
  __int64 v7; // rax
  CBufferRealization *v8; // rcx
  CBufferRealization *v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = -1073741823;
  RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
  v6 = RenderingBuffer;
  if ( RenderingBuffer )
  {
    v7 = *(_QWORD *)RenderingBuffer;
    v10 = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, CBufferRealization **))(v7 + 224))(v6, &v10);
    if ( v4 >= 0 )
    {
      *(_DWORD *)a2 = 3
                    - ((*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 160LL))(v6) != 0);
      v8 = v10;
      *(_QWORD *)((char *)a2 + 4) = *((_QWORD *)this - 2);
      *((_QWORD *)a2 + 2) = *((_QWORD *)v6 + 2);
      *((_DWORD *)a2 + 6) = *((_DWORD *)v8 + 7);
      *((_DWORD *)a2 + 7) = *((_DWORD *)v6 + 69);
      CBufferRealization::OpenLifetimeDirtyRegion(v8, (HRGN *)a2 + 4);
      *((_DWORD *)a2 + 10) = 0;
      *(_OWORD *)((char *)a2 + 72) = *((_OWORD *)v6 + 3);
      *(_OWORD *)((char *)a2 + 88) = *((_OWORD *)v6 + 4);
      *(_OWORD *)((char *)a2 + 104) = *((_OWORD *)v6 + 5);
      *(_OWORD *)((char *)a2 + 120) = *((_OWORD *)v6 + 6);
      *(_OWORD *)((char *)a2 + 136) = *((_OWORD *)v6 + 7);
      *(_OWORD *)((char *)a2 + 152) = *((_OWORD *)v6 + 8);
      *(_OWORD *)((char *)a2 + 168) = *((_OWORD *)v6 + 9);
      *(_OWORD *)((char *)a2 + 184) = *((_OWORD *)v6 + 10);
      *(_OWORD *)((char *)a2 + 200) = *((_OWORD *)v6 + 11);
      *((_DWORD *)a2 + 54) = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 184LL))(v6);
      *((_DWORD *)a2 + 55) = *((_DWORD *)v10 + 20);
    }
  }
  else
  {
    *((_QWORD *)a2 + 2) = 0LL;
  }
  return (unsigned int)v4;
}

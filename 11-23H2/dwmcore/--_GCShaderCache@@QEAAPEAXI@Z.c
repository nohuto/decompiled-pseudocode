/*
 * XREFs of ??_GCShaderCache@@QEAAPEAXI@Z @ 0x18001BE88
 * Callers:
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800B93F8 (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1800BD55C (-GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1800F0D78 (-GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z @ 0x180101F58 (-EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ @ 0x18010E7A0 (--1-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ.c)
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180208C60 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1802B92F8 (-GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1802B983C (-GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCShaderCache@@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D0654 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CShaderCache *__fastcall CShaderCache::`scalar deleting destructor'(CShaderCache *this)
{
  int *v1; // rdi
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rax
  void *v6; // rcx

  v1 = (int *)((char *)this + 16);
  if ( *(_QWORD *)this )
  {
    v3 = 0;
    if ( *v1 > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *((_QWORD *)this + 1);
        if ( *(_QWORD *)(v4 + v5) )
        {
          *(_QWORD *)(v4 + v5) = 0LL;
          CMILRefCountBaseT<IMILRefCount>::InternalRelease();
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *v1 );
    }
    operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 1) = 0LL;
  }
  *v1 = 0;
  operator delete(this, 0x20uLL);
  return this;
}

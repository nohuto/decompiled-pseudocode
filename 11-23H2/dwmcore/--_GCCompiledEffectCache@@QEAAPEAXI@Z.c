/*
 * XREFs of ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x1801E5E40
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800F1834 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x1801E5D7C (--1CEffectCompilationTask@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D0654 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EC838 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CCompiledEffectCache *__fastcall CCompiledEffectCache::`scalar deleting destructor'(CCompiledEffectCache *this)
{
  int *v2; // rdi
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rax
  volatile signed __int32 *v6; // rcx
  void *v7; // rcx

  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 4);
  v2 = (int *)((char *)this + 16);
  if ( *(_QWORD *)this )
  {
    v3 = 0;
    if ( *v2 > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *((_QWORD *)this + 1);
        v6 = *(volatile signed __int32 **)(v4 + v5);
        if ( v6 )
        {
          *(_QWORD *)(v4 + v5) = 0LL;
          CMILRefCountBaseT<IMILRefCount>::InternalRelease(v6);
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *v2 );
    }
    operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 1) = 0LL;
  }
  *v2 = 0;
  operator delete(this);
  return this;
}

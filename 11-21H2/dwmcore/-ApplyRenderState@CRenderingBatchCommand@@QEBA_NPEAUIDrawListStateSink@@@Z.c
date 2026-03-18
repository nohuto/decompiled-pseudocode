/*
 * XREFs of ?ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x1801F13D8
 * Callers:
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180011480 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 * Callees:
 *     ?GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x1800A7724 (-GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CRenderingBatchCommand::ApplyRenderState(CRenderingBatchCommand *this, struct IDrawListStateSink *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct CDrawListPrimitive *Primitive; // rbx
  __int64 v7; // rdx

  if ( !*((_BYTE *)this + 92) )
  {
    Primitive = CRenderingBatchCommand::GetPrimitive(this);
    if ( !*((_DWORD *)Primitive + 2) )
      return 0;
    (*(void (__fastcall **)(struct IDrawListStateSink *, _QWORD))(*(_QWORD *)v3 + 8LL))(a2, *(unsigned int *)(v4 + 84));
    if ( *((_DWORD *)Primitive + 6) )
      LOBYTE(v7) = 2;
    else
      LOBYTE(v7) = *((_DWORD *)Primitive + 5) == 0;
    (*(void (__fastcall **)(struct IDrawListStateSink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v7);
  }
  return 1;
}

/*
 * XREFs of ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0005BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C00066AC (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::InFrame(CCompositionToken *this, struct CCompositionFrame *a2, bool *a3)
{
  unsigned int updated; // ebp
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rbx
  unsigned int (__fastcall *v9)(__int64, __int64); // rdi
  __int64 v10; // rax

  updated = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    Global = DXGGLOBAL_GetGlobal();
    v8 = *((_QWORD *)this + 8);
    v9 = *(unsigned int (__fastcall **)(__int64, __int64))(*((_QWORD *)Global + 38073) + 48LL);
    v10 = (*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
    if ( v9(v10, v8) )
    {
      ++*((_DWORD *)this + 7);
      *a3 = 0;
    }
    else
    {
      *((_DWORD *)this + 6) = 3;
      updated = CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
      *a3 = 1;
    }
  }
  return updated;
}

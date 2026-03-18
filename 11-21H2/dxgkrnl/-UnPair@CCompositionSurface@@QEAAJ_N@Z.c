/*
 * XREFs of ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0078444
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0354840 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C0004434 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C0077EE0 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::UnPair(CCompositionSurface *this)
{
  __int64 v2; // rcx
  CCompositionSurface *v3; // rbx
  CFlipExBuffer *v4; // rax

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    v3 = (CCompositionSurface *)*((_QWORD *)this + 9);
    if ( v3 != (CCompositionSurface *)((char *)this + 72) )
    {
      do
      {
        v4 = CFlipExBuffer::FromBuffer((CCompositionSurface *)((char *)v3 - 24));
        CFlipExBuffer::DisableCascadedSignaling(v4);
        v3 = *(CCompositionSurface **)v3;
      }
      while ( v3 != (CCompositionSurface *)((char *)this + 72) );
      v2 = *((_QWORD *)this + 13);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 8LL))(*((_QWORD *)this + 13), 0LL);
    *((_QWORD *)this + 13) = 0LL;
  }
  return 0LL;
}

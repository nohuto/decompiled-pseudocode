/*
 * XREFs of ?SetRoot@CBaseRenderTargetProxy@@UEAAJPEAVCVisualProxy@@@Z @ 0x1800A81D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseRenderTargetProxy::SetRoot(CBaseRenderTargetProxy *this, struct CVisualProxy *a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 624LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}

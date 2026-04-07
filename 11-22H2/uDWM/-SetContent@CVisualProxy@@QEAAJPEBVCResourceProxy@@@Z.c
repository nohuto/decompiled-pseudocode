/*
 * XREFs of ?SetContent@CVisualProxy@@QEAAJPEBVCResourceProxy@@@Z @ 0x180012628
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180012260 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180021050 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetContent(CVisualProxy *this, const struct CResourceProxy *a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 376LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}

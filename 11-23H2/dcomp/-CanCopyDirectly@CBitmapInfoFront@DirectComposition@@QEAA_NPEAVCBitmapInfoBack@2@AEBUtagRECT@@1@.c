/*
 * XREFs of ?CanCopyDirectly@CBitmapInfoFront@DirectComposition@@QEAA_NPEAVCBitmapInfoBack@2@AEBUtagRECT@@1@Z @ 0x1800EB2F0
 * Callers:
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CBitmapInfoFront::CanCopyDirectly(
        DirectComposition::CBitmapInfoFront *this,
        struct DirectComposition::CBitmapInfoBack *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rdx

  v4 = *((_QWORD *)a2 + 2);
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 16);
  else
    v6 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v4 + 64) == *(_QWORD *)(v6 + 64) )
  {
    if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 120LL) )
      return 0;
    if ( v4 == v6 && a3->left < a4->right && a3->top < a4->bottom && a3->right > a4->left )
      return a3->bottom <= a4->top;
  }
  return 1;
}

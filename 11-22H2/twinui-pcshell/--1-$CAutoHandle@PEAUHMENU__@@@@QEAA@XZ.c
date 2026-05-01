/*
 * XREFs of ??1?$CAutoHandle@PEAUHMENU__@@@@QEAA@XZ @ 0x1805864A8
 * Callers:
 *     _SwitchItemThumbnailElement::ShowContextMenu_::_1_::dtor$0 @ 0x1805870AF (_SwitchItemThumbnailElement--ShowContextMenu_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<HMENU__ *>::~CAutoHandle<HMENU__ *>(HMENU *a1)
{
  HMENU v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DestroyMenu(v1);
  return (int)v1;
}

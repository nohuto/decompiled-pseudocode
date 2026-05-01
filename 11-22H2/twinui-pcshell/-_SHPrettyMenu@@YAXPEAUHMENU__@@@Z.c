/*
 * XREFs of ?_SHPrettyMenu@@YAXPEAUHMENU__@@@Z @ 0x1805872EC
 * Callers:
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180586EA4 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     ?_SHIsMenuSeparator2@@YAHPEAUHMENU__@@HPEAH@Z @ 0x180587238 (-_SHIsMenuSeparator2@@YAHPEAUHMENU__@@HPEAH@Z.c)
 */

void __fastcall _SHPrettyMenu(HMENU hmenu)
{
  int v1; // esi
  int v3; // r14d
  signed int i; // ebx
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v3 = 1;
  for ( i = GetMenuItemCount(hmenu) - 1; i > 0; --i )
  {
    if ( (unsigned int)_SHIsMenuSeparator2(hmenu, i, &v5) )
    {
      if ( v1 )
      {
        if ( !v5 || v3 )
        {
          DeleteMenu(hmenu, i, 0x400u);
        }
        else
        {
          DeleteMenu(hmenu, i + 1, 0x400u);
          v3 = v5;
        }
      }
      else
      {
        v3 = v5;
        v1 = 1;
      }
    }
    else
    {
      v1 = 0;
    }
  }
  while ( (unsigned int)_SHIsMenuSeparator2(hmenu, 0, 0LL) )
    DeleteMenu(hmenu, 0, 0x400u);
}

/*
 * XREFs of sub_14051C060 @ 0x14051C060
 * Callers:
 *     sub_14051C010 @ 0x14051C010 (sub_14051C010.c)
 *     sub_14051C2D8 @ 0x14051C2D8 (sub_14051C2D8.c)
 *     sub_14051C4E0 @ 0x14051C4E0 (sub_14051C4E0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14051C060(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 == -1 )
    {
      ExFreePoolWithTag(a1, 0x61656857u);
    }
    else if ( *a1 == 1 )
    {
      *a1 = 0;
    }
  }
}

/*
 * XREFs of sub_140A7F0E0 @ 0x140A7F0E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045B94E @ 0x14045B94E (sub_14045B94E.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AA7018 @ 0x140AA7018 (sub_140AA7018.c)
 */

void __fastcall sub_140A7F0E0(__int64 a1, unsigned int a2)
{
  ULONG v4; // edx
  void *v5; // rcx

  if ( (unsigned int)sub_14045B94E() )
  {
    ExFreePoolWithTag(v5, v4);
  }
  else
  {
    if ( (dword_140C29FC0 & 1) != 0 )
      sub_140AA7018((ULONG_PTR)v5);
    sub_14042A5E0(a1, a2);
  }
}

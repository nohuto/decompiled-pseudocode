/*
 * XREFs of sub_140754758 @ 0x140754758
 * Callers:
 *     sub_1406647E0 @ 0x1406647E0 (sub_1406647E0.c)
 *     sub_140753F8C @ 0x140753F8C (sub_140753F8C.c)
 *     sub_140754718 @ 0x140754718 (sub_140754718.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140754758(_QWORD *P)
{
  PVOID *v1; // rbx
  unsigned int i; // ebp
  unsigned __int16 v4; // ax

  v1 = (PVOID *)P[1];
  for ( i = 0; i < *((_DWORD *)P + 1); ++i )
  {
    ExFreePoolWithTag(v1[5 * i + 1], 0);
    if ( LODWORD(v1[5 * i + 3]) )
    {
      v4 = (unsigned __int16)v1[5 * i + 2];
      if ( v4 )
      {
        if ( v4 <= 6u || v4 == 16 )
          ExFreePoolWithTag(v1[5 * i + 4], 0);
      }
    }
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  ExFreePoolWithTag(P, 0);
}

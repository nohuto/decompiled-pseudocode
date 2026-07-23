/*
 * XREFs of sub_1403D2D2C @ 0x1403D2D2C
 * Callers:
 *     sub_14084EA70 @ 0x14084EA70 (sub_14084EA70.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B23270 @ 0x140B23270 (sub_140B23270.c)
 *     sub_140B232DC @ 0x140B232DC (sub_140B232DC.c)
 * Callees:
 *     sub_1402088DC @ 0x1402088DC (sub_1402088DC.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403D2D2C(void *a1, __int64 a2, _DWORD *a3)
{
  int v4; // eax
  unsigned int *v5; // rcx
  unsigned int v6; // ebx

  *a3 = 0;
  v4 = sub_14067B838(a1);
  v5 = 0LL;
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( sub_1402088DC(0LL) )
      *a3 = *(unsigned int *)((char *)v5 + v5[2]);
    else
      v6 = -1073741271;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}

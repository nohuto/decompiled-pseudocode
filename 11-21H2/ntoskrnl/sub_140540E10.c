/*
 * XREFs of sub_140540E10 @ 0x140540E10
 * Callers:
 *     EmProviderDeregister @ 0x14092CA90 (EmProviderDeregister.c)
 *     EmProviderDeregisterEntry @ 0x14092CC40 (EmProviderDeregisterEntry.c)
 * Callees:
 *     sub_1403C45F0 @ 0x1403C45F0 (sub_1403C45F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140540E10(char *P)
{
  char *v1; // rax
  __int64 v3; // rcx
  char **v4; // rdx
  _QWORD **v5; // rdx
  PVOID *v6; // rcx
  _QWORD *i; // rdi

  if ( P )
  {
    v1 = P + 24;
    v3 = *((_QWORD *)P + 3);
    if ( *(char **)(v3 + 8) != v1
      || (v4 = (char **)*((_QWORD *)v1 + 1), *v4 != v1)
      || (*v4 = (char *)v3, *(_QWORD *)(v3 + 8) = v4, v5 = (_QWORD **)*((_QWORD *)P + 5), v5[1] != (_QWORD *)(P + 40))
      || (v6 = (PVOID *)*((_QWORD *)P + 6), *v6 != P + 40) )
    {
      __fastfail(3u);
    }
    *v6 = v5;
    v5[1] = v6;
    for ( i = *(_QWORD **)(*(_QWORD *)P + 72LL); i; i = (_QWORD *)*i )
      sub_1403C45F0(*(i - 1), 0LL);
    ExFreePoolWithTag(P, 0x72704D45u);
  }
}

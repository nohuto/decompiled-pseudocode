/*
 * XREFs of sub_1409289DC @ 0x1409289DC
 * Callers:
 *     sub_1406E9FB0 @ 0x1406E9FB0 (sub_1406E9FB0.c)
 *     sub_1409276D0 @ 0x1409276D0 (sub_1409276D0.c)
 *     sub_1409286EC @ 0x1409286EC (sub_1409286EC.c)
 *     sub_140928E80 @ 0x140928E80 (sub_140928E80.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402EEA18 @ 0x1402EEA18 (sub_1402EEA18.c)
 *     sub_140927964 @ 0x140927964 (sub_140927964.c)
 */

void __fastcall sub_1409289DC(char *P)
{
  int v1; // eax
  struct _EX_RUNDOWN_REF *v3; // rdi

  v1 = *((_DWORD *)P + 19);
  v3 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 8);
  if ( (v1 & 0x20) != 0 )
  {
    sub_1402EEA18(*((_QWORD *)P + 8), 0LL, 1u);
    v1 = *((_DWORD *)P + 19);
  }
  if ( (v1 & 8) != 0 )
  {
    sub_1402AD030(v3 + 169);
    v1 = *((_DWORD *)P + 19);
  }
  if ( (v1 & 2) != 0 )
    sub_140927964(P);
  else
    KeSetEvent((PRKEVENT)(P + 16), 0, 0);
}

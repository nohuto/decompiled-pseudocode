/*
 * XREFs of sub_140768E44 @ 0x140768E44
 * Callers:
 *     sub_140768D10 @ 0x140768D10 (sub_140768D10.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     sub_14076A0A8 @ 0x14076A0A8 (sub_14076A0A8.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140768E44(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rax

  if ( P )
  {
    v2 = *(void **)P;
    if ( v2 )
      sub_14077B394(v2);
    v3 = (void *)*((_QWORD *)P + 1);
    if ( v3 )
      sub_14077B394(v3);
    v4 = *((_QWORD *)P + 2);
    if ( v4 )
    {
      sub_14076A0A8(*(unsigned int *)(v4 + 28), *(_QWORD *)(v4 + 16));
      sub_14077B394(*((PVOID *)P + 2));
    }
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}

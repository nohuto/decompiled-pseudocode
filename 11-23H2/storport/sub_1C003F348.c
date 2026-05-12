/*
 * XREFs of sub_1C003F348 @ 0x1C003F348
 * Callers:
 *     sub_1C00173C4 @ 0x1C00173C4 (sub_1C00173C4.c)
 *     sub_1C003F2A4 @ 0x1C003F2A4 (sub_1C003F2A4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C003F348(__int64 a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rcx

  v2 = *(void **)(a1 + 40);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
  }
  v3 = *(struct _MDL **)(a1 + 16);
  if ( v3 )
  {
    IoFreeMdl(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

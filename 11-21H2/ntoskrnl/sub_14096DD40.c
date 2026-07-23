/*
 * XREFs of sub_14096DD40 @ 0x14096DD40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402075A4 @ 0x1402075A4 (sub_1402075A4.c)
 *     sub_140693EA8 @ 0x140693EA8 (sub_140693EA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14096DD40(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int16 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v2 + 4) & 0x40) != 0 )
    sub_140693EA8((_QWORD *)v2);
  v3 = *(unsigned __int16 **)(a1 + 32);
  if ( v3 )
  {
    sub_1402075A4(v3);
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0);
  }
}

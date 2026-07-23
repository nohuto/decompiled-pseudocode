/*
 * XREFs of sub_1405C041C @ 0x1405C041C
 * Callers:
 *     sub_140586E78 @ 0x140586E78 (sub_140586E78.c)
 *     sub_140589518 @ 0x140589518 (sub_140589518.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405C041C(__int64 a1)
{
  PVOID *v1; // rdi
  PVOID *v3; // rcx

  v1 = (PVOID *)(a1 + 16);
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
  {
    if ( *v1 != (PVOID)(a1 + 24) )
    {
      ExFreePoolWithTag(*v1, 0);
      *v1 = 0LL;
    }
  }
  else
  {
    v3 = *(PVOID **)(a1 + 8);
    if ( v3 != v1 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
}

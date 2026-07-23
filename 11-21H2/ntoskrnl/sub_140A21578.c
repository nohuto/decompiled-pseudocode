/*
 * XREFs of sub_140A21578 @ 0x140A21578
 * Callers:
 *     sub_14064D064 @ 0x14064D064 (sub_14064D064.c)
 *     sub_14064D1D4 @ 0x14064D1D4 (sub_14064D1D4.c)
 * Callees:
 *     sub_140A21954 @ 0x140A21954 (sub_140A21954.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A21578(__int64 a1, _BYTE *a2)
{
  int v3; // eax
  PVOID v4; // rcx
  unsigned int v5; // ebx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  *a2 = 0;
  v3 = sub_140A21954(a1, 0LL, 8LL, &P);
  v4 = P;
  v5 = v3;
  if ( v3 >= 0 && *((_DWORD *)P + 7) == 16 )
    *a2 = 1;
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}

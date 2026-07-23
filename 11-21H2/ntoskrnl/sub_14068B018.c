/*
 * XREFs of sub_14068B018 @ 0x14068B018
 * Callers:
 *     sub_14068AF4C @ 0x14068AF4C (sub_14068AF4C.c)
 *     sub_140715FA8 @ 0x140715FA8 (sub_140715FA8.c)
 *     sub_140B14B1C @ 0x140B14B1C (sub_140B14B1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14068B018(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 1880) = -1;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1872) = 0LL;
  v1 = (_QWORD *)(a1 + 1896);
  result = 64LL;
  do
  {
    v1[1] = v1;
    *v1 = v1;
    v1 += 2;
    --result;
  }
  while ( result );
  return result;
}

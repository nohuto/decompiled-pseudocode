/*
 * XREFs of sub_140A61CF4 @ 0x140A61CF4
 * Callers:
 *     sub_140A543D8 @ 0x140A543D8 (sub_140A543D8.c)
 * Callees:
 *     sub_140A61BE0 @ 0x140A61BE0 (sub_140A61BE0.c)
 */

__int64 __fastcall sub_140A61CF4(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 i; // rbx

  result = 0LL;
  for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
  {
    result = sub_140A61BE0(a1, *(PHYSICAL_ADDRESS **)&a2[2 * i + 2], a3);
    if ( (int)result < 0 )
      break;
  }
  return result;
}

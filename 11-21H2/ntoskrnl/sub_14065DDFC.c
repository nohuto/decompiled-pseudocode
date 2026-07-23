/*
 * XREFs of sub_14065DDFC @ 0x14065DDFC
 * Callers:
 *     sub_14065D114 @ 0x14065D114 (sub_14065D114.c)
 *     sub_14065D7C4 @ 0x14065D7C4 (sub_14065D7C4.c)
 * Callees:
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

__int64 __fastcall sub_14065DDFC(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 result; // rax
  _DWORD *v5; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = a2 + 208;
  v3 = 32LL;
  while ( 1 )
  {
    result = sub_140AB4218(v2, &v6, v3);
    if ( !result )
      break;
    if ( (unsigned int)(*(_DWORD *)(result + 68) - 4) <= 2 )
    {
      *(_QWORD *)(result + 104) = v5;
      ++*v5;
    }
  }
  return result;
}

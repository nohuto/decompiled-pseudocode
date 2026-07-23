/*
 * XREFs of sub_14050CEDC @ 0x14050CEDC
 * Callers:
 *     sub_140257FB0 @ 0x140257FB0 (sub_140257FB0.c)
 *     sub_1403919F0 @ 0x1403919F0 (sub_1403919F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14050CEDC(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  dword_140C4E844 = a2;
  if ( a1 )
  {
    result = a5;
    *(_DWORD *)(a1 + 272) = a5;
    *(_DWORD *)(a1 + 252) = a2;
    *(_DWORD *)(a1 + 256) = a3;
    *(_QWORD *)(a1 + 264) = a4;
  }
  return result;
}

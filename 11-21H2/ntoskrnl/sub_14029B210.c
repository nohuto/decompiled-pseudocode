/*
 * XREFs of sub_14029B210 @ 0x14029B210
 * Callers:
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     sub_140A677B8 @ 0x140A677B8 (sub_140A677B8.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 * Callees:
 *     sub_14022E800 @ 0x14022E800 (sub_14022E800.c)
 *     sub_140570120 @ 0x140570120 (sub_140570120.c)
 */

__int64 __fastcall sub_14029B210(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = a2;
    v3 = a2 & 0x100;
    if ( (qword_140D068D8 & 0x800000) != 0 )
    {
      a2 = qword_140D06A68;
      if ( qword_140D06A68 )
        result = sub_14022E800(a1 - 512, v2 & qword_140D06A68);
    }
    if ( (_DWORD)dword_140D06964 )
    {
      if ( v3 )
        return sub_140570120(
                 a1 + MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8] + 64,
                 a2,
                 v2);
    }
  }
  return result;
}

/*
 * XREFs of sub_14029B8E8 @ 0x14029B8E8
 * Callers:
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 *     sub_140A677B8 @ 0x140A677B8 (sub_140A677B8.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 * Callees:
 *     sub_14024215C @ 0x14024215C (sub_14024215C.c)
 *     sub_140570250 @ 0x140570250 (sub_140570250.c)
 */

__int64 __fastcall sub_14029B8E8(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 result; // rax
  __int64 v5; // rdx

  if ( a1 )
  {
    v2 = a2;
    if ( (_DWORD)dword_140D06964 && (a2 & 0x100) != 0 )
      result = sub_140570250(MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8] + a1 + 64);
    if ( (qword_140D068D8 & 0x800000) != 0 )
    {
      result = qword_140D06A68;
      if ( qword_140D06A68 )
      {
        v5 = qword_140D06A68 & v2;
        *(_QWORD *)(a1 + 8) = qword_140D06A68 & v2;
        return sub_14024215C(a1 - 512, v5);
      }
    }
  }
  return result;
}

/*
 * XREFs of sub_1C00815A8 @ 0x1C00815A8
 * Callers:
 *     sub_1C007C930 @ 0x1C007C930 (sub_1C007C930.c)
 *     sub_1C007D570 @ 0x1C007D570 (sub_1C007D570.c)
 *     sub_1C007EA10 @ 0x1C007EA10 (sub_1C007EA10.c)
 *     sub_1C007EC10 @ 0x1C007EC10 (sub_1C007EC10.c)
 *     sub_1C0080E3C @ 0x1C0080E3C (sub_1C0080E3C.c)
 *     sub_1C00810F0 @ 0x1C00810F0 (sub_1C00810F0.c)
 *     sub_1C00811A0 @ 0x1C00811A0 (sub_1C00811A0.c)
 * Callees:
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 */

__int64 __fastcall sub_1C00815A8(__int64 a1, char a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rcx
  unsigned int v5; // r9d
  int v7; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = *(unsigned int *)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 8);
  if ( (int)v4 + 1 <= v5 )
  {
    *(_BYTE *)(v4 + *(_QWORD *)a1) = a2 & 0x3F;
    ++*(_DWORD *)(a1 + 12);
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      v7 = v4 + 1;
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0xAu, (__int64)&unk_1C008B738, v5, v7);
    }
    return (unsigned int)-1073741789;
  }
  return v3;
}

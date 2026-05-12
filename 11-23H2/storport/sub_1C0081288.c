/*
 * XREFs of sub_1C0081288 @ 0x1C0081288
 * Callers:
 *     sub_1C007C930 @ 0x1C007C930 (sub_1C007C930.c)
 * Callees:
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 */

__int64 __fastcall sub_1C0081288(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // r9d
  int v9; // [rsp+20h] [rbp-18h]

  v5 = *(unsigned int *)(a1 + 12);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v5 + a3 <= v7 )
  {
    memmove((void *)(*(_QWORD *)a1 + v5), a2, a3);
    *(_DWORD *)(a1 + 12) += a3;
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      v9 = v5 + a3;
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0xFu, (__int64)&unk_1C008B738, v7, v9);
    }
    return (unsigned int)-1073741789;
  }
  return v6;
}

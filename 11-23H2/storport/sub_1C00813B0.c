/*
 * XREFs of sub_1C00813B0 @ 0x1C00813B0
 * Callers:
 *     sub_1C007C930 @ 0x1C007C930 (sub_1C007C930.c)
 *     sub_1C007D570 @ 0x1C007D570 (sub_1C007D570.c)
 *     sub_1C007EA10 @ 0x1C007EA10 (sub_1C007EA10.c)
 *     sub_1C007EC10 @ 0x1C007EC10 (sub_1C007EC10.c)
 *     sub_1C00810F0 @ 0x1C00810F0 (sub_1C00810F0.c)
 *     sub_1C00811A0 @ 0x1C00811A0 (sub_1C00811A0.c)
 * Callees:
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 */

__int64 __fastcall sub_1C00813B0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r10d
  unsigned __int64 v3; // rbx
  int v5; // r8d
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r9d
  unsigned int v9; // eax
  __int64 i; // rdx

  v2 = 0;
  v3 = a2;
  v5 = 0;
  v6 = a2;
  if ( !a2 )
    goto LABEL_4;
  do
  {
    v6 >>= 8;
    ++v5;
  }
  while ( v6 );
  if ( !v5 )
LABEL_4:
    v5 = 1;
  v7 = *(unsigned int *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 8);
  if ( v5 + (int)v7 + 1 <= v8 )
  {
    *(_BYTE *)(v7 + *(_QWORD *)a1) = v5 + 0x80;
    v9 = ++*(_DWORD *)(a1 + 12);
    for ( i = v5 + v9 - 1; (unsigned int)i >= v9; i = (unsigned int)(i - 1) )
    {
      *(_BYTE *)(i + *(_QWORD *)a1) = v3;
      v9 = *(_DWORD *)(a1 + 12);
      v3 >>= 8;
    }
    *(_DWORD *)(a1 + 12) = v9 + v5;
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0xBu, (__int64)&unk_1C008B738, v8, v5 + v7 + 1);
    return (unsigned int)-1073741789;
  }
  return v2;
}

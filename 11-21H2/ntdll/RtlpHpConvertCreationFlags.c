/*
 * XREFs of RtlpHpConvertCreationFlags @ 0x1800895B8
 * Callers:
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpConvertCreationFlags(int a1, __int16 a2)
{
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  int v8; // eax

  v3 = a1 & 1 | 0x80000000;
  if ( (a1 & 4) == 0 )
    v3 = a1 & 1;
  v4 = v3 | 2;
  if ( (a1 & 8) == 0 )
    v4 = v3;
  v5 = v4 | 0x20000000;
  if ( (a2 & 0x1000) == 0 && (a1 & 0x8000000) == 0 )
    v5 = v4;
  v6 = v5 | 0x10000000;
  if ( (a2 & 0x10) == 0 && (a1 & 0x20) == 0 )
    v6 = v5;
  v7 = v6 | 0x40000000;
  if ( (a1 & 0x40000) == 0 )
    v7 = v6;
  v8 = v7 | 0x2000000;
  if ( (a1 & 0x10) == 0 )
    v8 = v7;
  return a1 & 0xF000 | (unsigned int)v8;
}

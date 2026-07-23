/*
 * XREFs of sub_14059DEC8 @ 0x14059DEC8
 * Callers:
 *     sub_14027AEA0 @ 0x14027AEA0 (sub_14027AEA0.c)
 * Callees:
 *     sub_14059E8F0 @ 0x14059E8F0 (sub_14059E8F0.c)
 */

__int64 __fastcall sub_14059DEC8(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 result; // rax
  ULONG_PTR i; // rbp
  unsigned int v7; // edi

  v2 = a2 + 48;
  v3 = *(_QWORD *)(a1 + 96);
  v4 = *(_DWORD *)(a2 + 40);
  result = *(_QWORD *)(**(_QWORD **)(a1 + 208) + 96LL);
  for ( i = *(_QWORD *)(result + 48) & 0xFFFFFFFFFFFFFFF0uLL; v4; v4 -= v7 )
  {
    v7 = 4096;
    if ( v4 <= 0x1000 )
      v7 = v4;
    result = sub_14059E8F0(i);
    if ( v4 <= 0x1000 )
      break;
    result = v7;
    v2 += 8LL;
    v3 += v7;
  }
  return result;
}

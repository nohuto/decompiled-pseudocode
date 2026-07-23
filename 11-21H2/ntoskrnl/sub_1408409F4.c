/*
 * XREFs of sub_1408409F4 @ 0x1408409F4
 * Callers:
 *     sub_14084099C @ 0x14084099C (sub_14084099C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1408409F4(__int64 a1, char a2)
{
  __int64 v2; // r11
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  __int64 v6; // r10
  __int64 result; // rax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  int v10; // ecx

  v2 = *(_QWORD *)(a1 + 40);
  v4 = *(unsigned __int8 *)(a1 + 18);
  v5 = *(unsigned __int8 *)(v2 + 16);
  v6 = *(_QWORD *)(a1 + 24) | *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 32) |= *(_DWORD *)(a1 + 36);
  result = v4;
  ++*(_DWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 24) = v6;
  if ( (unsigned __int8)v4 <= (unsigned __int8)v5 )
    result = v5;
  *(_BYTE *)(v2 + 36) |= 1u;
  *(_BYTE *)(v2 + 16) = result;
  if ( a2 )
  {
    v8 = *(unsigned __int8 *)(a1 + 18);
    v9 = *(unsigned __int8 *)(v2 + 48);
    v10 = *(_DWORD *)(a1 + 36) | *(_DWORD *)(v2 + 64);
    *(_QWORD *)(v2 + 56) |= *(_QWORD *)(a1 + 24);
    result = v8;
    *(_DWORD *)(v2 + 64) = v10;
    if ( (unsigned __int8)v8 <= (unsigned __int8)v9 )
      result = v9;
    *(_BYTE *)(v2 + 68) |= 1u;
    *(_BYTE *)(v2 + 48) = result;
  }
  return result;
}

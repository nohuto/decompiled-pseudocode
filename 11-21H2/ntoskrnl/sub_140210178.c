/*
 * XREFs of sub_140210178 @ 0x140210178
 * Callers:
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 * Callees:
 *     sub_140210D6C @ 0x140210D6C (sub_140210D6C.c)
 *     sub_140291A50 @ 0x140291A50 (sub_140291A50.c)
 */

__int64 __fastcall sub_140210178(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r9
  volatile signed __int32 *v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 result; // rax
  unsigned __int64 v11; // rtt
  volatile signed __int32 *v12; // rcx

  sub_140291A50();
  v6 = qword_140D052A0 * *(unsigned int *)(a1 + 8);
  ++*(_DWORD *)(a2 + 116);
  v7 = *(volatile signed __int32 **)(a2 + 120);
  v8 = v6 >> 7;
  *(_QWORD *)(a2 + 24) += v8;
  v9 = *(_QWORD *)(a2 + 24);
  if ( v7 )
  {
    _InterlockedIncrement(v7);
    v9 = *(_QWORD *)(a2 + 24);
  }
  result = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 > v9 )
  {
    v11 = v8 + result - v9 - 1;
    result = v11 / v8;
    *(_DWORD *)(a2 + 116) += v11 / v8;
    *(_QWORD *)(a2 + 24) = v9 + v8 * (unsigned int)(v11 / v8);
    v12 = *(volatile signed __int32 **)(a2 + 120);
    if ( v12 )
      result = (unsigned int)_InterlockedExchangeAdd(v12, result);
  }
  if ( (*(_BYTE *)(a2 + 112) & 1) != 0 )
  {
    LOBYTE(v9) = 1;
    return sub_140210D6C(a3, a2, v9);
  }
  return result;
}

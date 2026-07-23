/*
 * XREFs of sub_140264E64 @ 0x140264E64
 * Callers:
 *     sub_140264720 @ 0x140264720 (sub_140264720.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140264E64(__int64 a1, int a2, unsigned int a3, int a4)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r8
  char v7; // cl
  unsigned __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // rdx

  v5 = a3;
  v6 = a3 & dword_140C50738;
  v7 = v6;
  v8 = v6 >> 5;
  v9 = 1 << (v7 & 0x1F);
  result = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(result + 16 * (a2 + 1532 * (v5 >> byte_140C506CC)) + 22472);
  if ( a4 )
    _InterlockedOr((volatile signed __int32 *)(v11 + 4 * v8), v9);
  else
    _InterlockedAnd((volatile signed __int32 *)(v11 + 4 * v8), ~v9);
  return result;
}

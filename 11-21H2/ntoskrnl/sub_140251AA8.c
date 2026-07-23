/*
 * XREFs of sub_140251AA8 @ 0x140251AA8
 * Callers:
 *     sub_1402519E4 @ 0x1402519E4 (sub_1402519E4.c)
 *     sub_14079EC58 @ 0x14079EC58 (sub_14079EC58.c)
 *     sub_1408833DA @ 0x1408833DA (sub_1408833DA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140251AA8(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 *v3; // rax
  int v4; // edx
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = a2 + 8;
  *(_QWORD *)(a1 + 8) = 4LL;
  *(_QWORD *)(a1 + 32) = a2 + 16;
  *(_QWORD *)(a1 + 48) = a2 + 20;
  *(_QWORD *)(a1 + 64) = a2 + 24;
  *(_QWORD *)(a1 + 80) = a2 + 32;
  *(_QWORD *)(a1 + 24) = 8LL;
  *(_QWORD *)(a1 + 40) = 4LL;
  *(_QWORD *)(a1 + 56) = 4LL;
  *(_QWORD *)(a1 + 72) = 8LL;
  *(_QWORD *)(a1 + 88) = 8LL;
  v2 = *(_QWORD *)(a2 + 56);
  if ( v2 && (v3 = *(__int64 **)(v2 + 8)) != 0LL && *(_WORD *)v2 )
  {
    v4 = *(unsigned __int16 *)(v2 + 2);
  }
  else
  {
    v4 = 2;
    v3 = &qword_14000EC38;
  }
  *(_QWORD *)(a1 + 96) = v3;
  result = 7LL;
  *(_DWORD *)(a1 + 104) = v4;
  *(_DWORD *)(a1 + 108) = 0;
  return result;
}

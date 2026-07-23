/*
 * XREFs of sub_1405E952C @ 0x1405E952C
 * Callers:
 *     sub_1405E966C @ 0x1405E966C (sub_1405E966C.c)
 *     sub_1405E9E8C @ 0x1405E9E8C (sub_1405E9E8C.c)
 *     sub_1405EA72C @ 0x1405EA72C (sub_1405EA72C.c)
 * Callees:
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_1405EAD20 @ 0x1405EAD20 (sub_1405EAD20.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 *     sub_1405F1F34 @ 0x1405F1F34 (sub_1405F1F34.c)
 */

__int64 *__fastcall sub_1405E952C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  bool v12; // cc
  bool v13; // zf
  unsigned __int64 v14; // rax
  __int64 *result; // rax

  *(_QWORD *)(a3 + 40) = a4;
  v6 = a3 - 16;
  *(_BYTE *)(v6 + 15) = 3;
  *(_QWORD *)(a3 + 32) = a3 + 48;
  *(_DWORD *)(v6 + 8) = 65540;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((v6 - a2) >> 16) + 1;
    if ( v11 >= 0xFE )
      sub_1405F1BBC(3, v10, a3 - 16, a2, 0LL, 0LL);
  }
  v12 = dword_140D04920 < 1;
  *(_BYTE *)(v6 + 14) = v11;
  if ( v12 )
  {
    v13 = a5 == v6;
  }
  else
  {
    v13 = a5 == v6;
    if ( a5 > v6 )
    {
      DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
      sub_1405F1F34();
    }
  }
  if ( !v13 )
    *(_WORD *)(v6 + 12) = *(_WORD *)(a1 + 140);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  sub_1405EAD20(a1, a3);
  ++*(_DWORD *)(a2 + 84);
  *(_DWORD *)(a2 + 80) += *(_QWORD *)(a3 + 40) >> 12;
  *(_QWORD *)(a1 + 576) -= *(_QWORD *)(a3 + 40);
  ++*(_DWORD *)(a1 + 604);
  v14 = *(_QWORD *)(a3 + 40);
  if ( v14 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) += v14;
  result = a6;
  *a6 = (__int64)(v6 - a5) >> 4;
  return result;
}

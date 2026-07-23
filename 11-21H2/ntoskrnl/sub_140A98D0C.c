/*
 * XREFs of sub_140A98D0C @ 0x140A98D0C
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A98064 @ 0x140A98064 (sub_140A98064.c)
 * Callees:
 *     sub_140A81A04 @ 0x140A81A04 (sub_140A81A04.c)
 */

__int64 __fastcall sub_140A98D0C(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // r10
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r9

  result = 0LL;
  if ( a2 )
  {
    v5 = qword_140D57500;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 44) = 0;
    *(_BYTE *)(a2 + 48) = 0;
    *(_QWORD *)a2 = a1;
    v7 = (_QWORD *)(a2 + 24);
    v8 = (a1 >> 12) % 0x3FF;
    v9 = v5[2050] + 16 * v8;
    v10 = *(_QWORD *)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
      __fastfail(3u);
    *v7 = v10;
    *(_QWORD *)(a2 + 32) = v9;
    *(_QWORD *)(v10 + 8) = v7;
    *(_QWORD *)v9 = v7;
    sub_140A81A04(&v5[2 * v8 + 2052], a1, 2288LL);
    ++*(_QWORD *)(v11 + 16408);
    return v12;
  }
  return result;
}

/*
 * XREFs of sub_1403923A4 @ 0x1403923A4
 * Callers:
 *     sub_140391E54 @ 0x140391E54 (sub_140391E54.c)
 * Callees:
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     sub_140381130 @ 0x140381130 (sub_140381130.c)
 *     sub_1403924A0 @ 0x1403924A0 (sub_1403924A0.c)
 *     sub_140392564 @ 0x140392564 (sub_140392564.c)
 */

__int64 __fastcall sub_1403923A4(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rbx
  _DWORD *v9; // rax
  __int64 result; // rax
  int v11; // eax

  v5 = *(_QWORD *)(a2 + 24);
  if ( *(_BYTE *)a3 && *(_DWORD *)(a2 + 40) == *(_DWORD *)(a1[100] + 6036) )
  {
    v9 = (_DWORD *)sub_140392564(a1, *(_QWORD *)(a2 + 24));
    if ( v9 == (_DWORD *)-1LL )
      return 3221225478LL;
    if ( !v9 || *v9 != *(_DWORD *)(a3 + 16) )
      return 3221226021LL;
    goto LABEL_6;
  }
  v11 = *(_DWORD *)(v5 + 32);
  if ( (v11 & 1) == 0 )
  {
    sub_140237F80(a1, *(_QWORD *)(a2 + 24));
    v11 = *(_DWORD *)(v5 + 32);
  }
  *(_DWORD *)(v5 + 32) = v11 | 1;
  result = sub_140381130((__int64)a1, *(_DWORD *)(a3 + 16), v5);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1[100] + 6036);
LABEL_6:
    *a4 = sub_1403924A0(a1);
    return 0LL;
  }
  return result;
}

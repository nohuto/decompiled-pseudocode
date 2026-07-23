/*
 * XREFs of sub_14038032C @ 0x14038032C
 * Callers:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_14037ED14 @ 0x14037ED14 (sub_14037ED14.c)
 *     sub_1403800F0 @ 0x1403800F0 (sub_1403800F0.c)
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 * Callees:
 *     sub_14038190C @ 0x14038190C (sub_14038190C.c)
 *     sub_14039050C @ 0x14039050C (sub_14039050C.c)
 */

__int64 __fastcall sub_14038032C(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  int v5; // r11d
  __int64 v6; // rbx
  unsigned int v8; // r8d
  __int64 result; // rax
  _DWORD *v10; // r10

  v4 = *(_QWORD *)(a1 + 1032);
  v5 = a3;
  v6 = (unsigned int)a2;
  v8 = *(unsigned __int16 *)(v4 + 2LL * (unsigned int)a2);
  if ( *(_BYTE *)(a1 + 776) )
    result = 0LL;
  else
    result = v8 >> 13;
  *(_WORD *)(v4 + 2LL * (unsigned int)a2) = v5 + v8;
  v10 = (_DWORD *)(a1 + 16 * (result + 78));
  *(_DWORD *)(a1 + 8 * result + 1828) += v5;
  if ( *v10 != (_DWORD)a2 )
    result = sub_14038190C(a1, a2, v8 & 0x1FFF, *(_WORD *)(v4 + 2LL * (unsigned int)a2) & 0x1FFF);
  if ( v5 <= 0 )
  {
    if ( (*(_WORD *)(v4 + 2 * v6) & 0x1FFF) == 0 && (_DWORD)a2 != *v10 && !a4 )
      return sub_14039050C(a1, a2);
  }
  else if ( (_DWORD)a2 == *v10 )
  {
    v10[1] += v5;
  }
  return result;
}

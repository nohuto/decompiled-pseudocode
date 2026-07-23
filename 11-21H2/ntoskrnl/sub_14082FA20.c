/*
 * XREFs of sub_14082FA20 @ 0x14082FA20
 * Callers:
 *     sub_14082F95C @ 0x14082F95C (sub_14082F95C.c)
 *     sub_140B14608 @ 0x140B14608 (sub_140B14608.c)
 *     sub_140B4E1B0 @ 0x140B4E1B0 (sub_140B4E1B0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14082FA20(__int16 *a1, __int64 a2, bool *a3)
{
  _WORD *v3; // rax
  __int16 v4; // r9
  __int16 v5; // r9
  unsigned __int16 v6; // cx
  bool result; // al
  __int16 v8; // r9

  v3 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v3 || (v4 = *a1) == 0 || !*v3 )
  {
LABEL_12:
    *a3 = 1;
    result = 1;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_WORD *)a2 = 0;
    return result;
  }
  while ( *v3 == 92 )
  {
    v8 = *a1;
    ++v3;
    a1[1] -= 2;
    v4 = v8 - 2;
    *((_QWORD *)a1 + 1) = v3;
    *a1 = v4;
    if ( !v4 )
      goto LABEL_12;
  }
  *(_QWORD *)(a2 + 8) = v3;
  do
  {
    if ( *v3 == 92 )
      break;
    v5 = *a1;
    ++v3;
    a1[1] -= 2;
    v4 = v5 - 2;
    *((_QWORD *)a1 + 1) = v3;
    *a1 = v4;
  }
  while ( v4 );
  v6 = a1[4] - *(_WORD *)(a2 + 8);
  *(_WORD *)a2 = v6;
  *(_WORD *)(a2 + 2) = v6;
  *a3 = v4 == 0;
  return v6 <= 0x200u;
}

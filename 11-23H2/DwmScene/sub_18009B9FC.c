/*
 * XREFs of sub_18009B9FC @ 0x18009B9FC
 * Callers:
 *     sub_1800986C8 @ 0x1800986C8 (sub_1800986C8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18009B9FC(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD **)(a3 + 8);
  ++qword_1801D8A60;
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = qword_1801D8A68;
  v6 = 2 * (a2 & qword_1801D8A80);
  v7 = *(_QWORD *)(qword_1801D8A68 + 16 * (a2 & qword_1801D8A80));
  if ( v7 == qword_1801D8A58 )
  {
    *(_QWORD *)(qword_1801D8A68 + 8 * v6) = a4;
LABEL_6:
    *(_QWORD *)(v5 + 8 * v6 + 8) = a4;
    return a4;
  }
  if ( v7 == a3 )
  {
    *(_QWORD *)(qword_1801D8A68 + 8 * v6) = a4;
  }
  else if ( *(_QWORD **)(qword_1801D8A68 + 8 * v6 + 8) == v4 )
  {
    goto LABEL_6;
  }
  return a4;
}

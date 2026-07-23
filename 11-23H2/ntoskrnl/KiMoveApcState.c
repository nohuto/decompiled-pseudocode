/*
 * XREFs of KiMoveApcState @ 0x14034A7CC
 * Callers:
 *     KiDetachProcess @ 0x14022DE10 (KiDetachProcess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiMoveApcState(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 *v4; // r9
  _QWORD *result; // rax
  _QWORD *v6; // rax

  *(_QWORD *)(a2 + 32) = a1[4];
  *(_BYTE *)(a2 + 40) = *((_BYTE *)a1 + 40);
  *(_BYTE *)(a2 + 41) = *((_BYTE *)a1 + 41);
  *(_BYTE *)(a2 + 42) = *((_BYTE *)a1 + 42);
  v3 = (__int64 *)*a1;
  if ( v3 == a1 )
  {
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    *(_BYTE *)(a2 + 41) = 0;
  }
  else
  {
    v6 = (_QWORD *)a1[1];
    *(_QWORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = v6;
    v3[1] = a2;
    *v6 = a2;
  }
  v4 = (__int64 *)a1[2];
  if ( v4 == a1 + 2 )
  {
    result = (_QWORD *)(a2 + 16);
    *(_BYTE *)(a2 + 42) = 0;
    *(_QWORD *)(a2 + 24) = a2 + 16;
    *(_QWORD *)(a2 + 16) = a2 + 16;
  }
  else
  {
    result = (_QWORD *)a1[3];
    *(_QWORD *)(a2 + 16) = v4;
    *(_QWORD *)(a2 + 24) = result;
    v4[1] = a2 + 16;
    *result = a2 + 16;
  }
  return result;
}

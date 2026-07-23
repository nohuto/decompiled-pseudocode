/*
 * XREFs of sub_140672A1C @ 0x140672A1C
 * Callers:
 *     sub_1406727EC @ 0x1406727EC (sub_1406727EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140672A1C(int a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = *(_QWORD **)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL);
  if ( a1 )
  {
    v3 = v2[57];
    v4 = v2[58];
  }
  else
  {
    v3 = v2[53];
    v4 = v2[54];
  }
  *a2 = v4;
  return v3;
}

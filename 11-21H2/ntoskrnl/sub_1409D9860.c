/*
 * XREFs of sub_1409D9860 @ 0x1409D9860
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409D9E18 @ 0x1409D9E18 (sub_1409D9E18.c)
 *     sub_1409DA570 @ 0x1409DA570 (sub_1409DA570.c)
 */

__int64 __fastcall sub_1409D9860(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rax

  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  v4 = *(_QWORD *)(v3 + 2288);
  if ( !v4 )
  {
    result = sub_1409DA570(a2);
    if ( (int)result < 0 )
      return result;
    v4 = *(_QWORD *)(v3 + 2288);
  }
  v6 = sub_1409D9E18(1LL);
  if ( !v6 )
    return 3221225626LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v4 + 80));
  *a1 = v4 ^ v6;
  return 0LL;
}

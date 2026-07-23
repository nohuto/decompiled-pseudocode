/*
 * XREFs of sub_1405263E0 @ 0x1405263E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403DB0A0 @ 0x1403DB0A0 (sub_1403DB0A0.c)
 */

__int64 __fastcall sub_1405263E0(int a1, unsigned int a2, _QWORD *a3)
{
  PVOID *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 result; // rax
  _QWORD *v11; // rcx

  *a3 = 0LL;
  v6 = sub_1403DB0A0(a2);
  v9 = sub_1403B1F04(v7, 56LL);
  if ( !v9 )
    return 3221225626LL;
  v11 = (_QWORD *)sub_1403B1F04(v8, 16LL);
  if ( !v11 )
  {
    sub_1403B1B5C(0LL, v9);
    return 3221225626LL;
  }
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_QWORD *)(v9 + 24) = 0LL;
  *(_QWORD *)(v9 + 48) = v9 + 40;
  *(_QWORD *)(v9 + 40) = v9 + 40;
  result = 0LL;
  *(_DWORD *)(v9 + 16) = a1;
  *(_DWORD *)(v9 + 20) = a2;
  *v11 = v6;
  v11[1] = v9;
  *a3 = v11;
  return result;
}

/*
 * XREFs of sub_140711C6C @ 0x140711C6C
 * Callers:
 *     sub_140711614 @ 0x140711614 (sub_140711614.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140711C6C(unsigned int *a1, _OWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  v3 = a1[4];
  if ( (unsigned int)v3 >= a1[5] )
    return 3221225507LL;
  v4 = 96 * v3;
  v5 = *(_QWORD *)a1;
  *(_OWORD *)(v4 + v5 + 16) = *a2;
  *(_OWORD *)(v4 + v5 + 32) = a2[1];
  *(_OWORD *)(v4 + v5 + 48) = a2[2];
  *(_OWORD *)(v4 + v5 + 64) = a2[3];
  *(_OWORD *)(v4 + v5 + 80) = a2[4];
  *(_OWORD *)(v4 + v5 + 96) = a2[5];
  ++*(_DWORD *)(*(_QWORD *)a1 + 8LL);
  ++a1[4];
  return 0LL;
}

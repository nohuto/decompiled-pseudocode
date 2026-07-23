/*
 * XREFs of sub_1405FCEA8 @ 0x1405FCEA8
 * Callers:
 *     sub_1409D56C0 @ 0x1409D56C0 (sub_1409D56C0.c)
 * Callees:
 *     sub_1405F836C @ 0x1405F836C (sub_1405F836C.c)
 *     sub_1405FAF84 @ 0x1405FAF84 (sub_1405FAF84.c)
 */

__int64 __fastcall sub_1405FCEA8(__int64 a1, __int64 a2)
{
  unsigned int v2; // r11d
  _QWORD *v5; // r9
  _QWORD *v6; // rax
  _DWORD *v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  unsigned int *v10; // rbx
  unsigned int **v11; // rax
  __int64 v12; // rdx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 1896) )
  {
    v5 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
    *v5 = a1;
    v6 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
    *v6 = v5;
    v6[1] = 8LL;
    ++*(_DWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 24) += 8;
    v7 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
    *v7 = 1348;
    v8 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
    *v8 = v7;
    v8[1] = 4LL;
    v9 = (unsigned int)++*(_DWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 24) += 4;
    v10 = (unsigned int *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
    v11 = (unsigned int **)(*(_QWORD *)a2 + 16 * v9);
    *v11 = v10;
    v11[1] = (unsigned int *)1348;
    ++*(_DWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 24) += 1348;
    sub_1405F836C(v10, a1 + 4280);
    sub_1405FAF84(v10 + 321, v12, *(_QWORD **)(a1 + 5600), *(_DWORD *)(a1 + 5592));
    return 1;
  }
  return v2;
}

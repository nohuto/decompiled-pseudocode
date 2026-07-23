/*
 * XREFs of sub_140761714 @ 0x140761714
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402DBF90 @ 0x1402DBF90 (sub_1402DBF90.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1406DDA18 @ 0x1406DDA18 (sub_1406DDA18.c)
 *     sub_1406DDB48 @ 0x1406DDB48 (sub_1406DDB48.c)
 *     sub_1406EB270 @ 0x1406EB270 (sub_1406EB270.c)
 *     sub_1406F40E0 @ 0x1406F40E0 (sub_1406F40E0.c)
 *     sub_1406F57B8 @ 0x1406F57B8 (sub_1406F57B8.c)
 *     sub_140761D88 @ 0x140761D88 (sub_140761D88.c)
 *     sub_14097629C @ 0x14097629C (sub_14097629C.c)
 *     sub_140977DCC @ 0x140977DCC (sub_140977DCC.c)
 */

__int64 __fastcall sub_140761714(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  char v9; // r9
  int v10; // r15d
  unsigned int v11; // esi
  __int64 result; // rax
  __int64 *v13; // rax
  unsigned __int64 v14; // rdi
  int v15; // r12d
  unsigned __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // [rsp+30h] [rbp-38h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h] BYREF

  v22 = 0LL;
  v7 = sub_140287970(a1);
  v8 = *(unsigned int *)(*(_QWORD *)v7 + 8LL);
  if ( (v9 & 1) == 0 )
  {
    v10 = 1;
    v11 = -1;
    result = sub_140761D88(v6, 1LL);
    if ( (int)result < 0 )
      return result;
LABEL_3:
    v13 = (__int64 *)sub_140313C70(a2);
    v14 = 0LL;
    v21 = v13;
    if ( a3 )
    {
      v14 = a2 + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v7 + 8LL) << 12);
      v15 = sub_14097629C(v14, a3);
      if ( v15 < 0 )
      {
LABEL_23:
        if ( v10 == 1 )
        {
          sub_140761D88(a1, 0LL);
        }
        else if ( (*(_DWORD *)(v7 + 56) & 0x8000000) != 0 )
        {
          sub_1406DDA18((__int64 *)v7, v11);
        }
        if ( (unsigned int)sub_14027B080(a2) == 1 && a2 != *(_QWORD *)(*(_QWORD *)v7 + 32LL) )
          sub_1406EB270((__int64 *)v7);
        return (unsigned int)v15;
      }
      v13 = v21;
    }
    v15 = sub_1406F40E0(v13, v8, v7, &v22, v11, 1);
    if ( v15 >= 0 )
    {
      if ( v10 == 1 )
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 3, v8);
      return 0LL;
    }
    if ( v14 )
    {
      v20 = sub_140313C70(v14);
      sub_140977DCC(v20);
    }
    goto LABEL_23;
  }
  v16 = sub_1406F57B8(v8 << 12);
  if ( !v16 )
    return 3221225503LL;
  v10 = 0;
  v17 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
  v11 = v17;
  if ( (*(_DWORD *)(v7 + 56) & 0x8000000) == 0 || (result = sub_1406DDB48((__int64 *)v7, v17), (int)result >= 0) )
  {
    sub_140313C70(v16 + a2 - 1);
    v18 = sub_140313C70(a2);
    if ( (unsigned int)sub_1402DBF90(v18, v19, 1, 1) )
      goto LABEL_3;
    if ( (*(_DWORD *)(v7 + 56) & 0x8000000) != 0 )
      sub_1406DDA18((__int64 *)v7, v11);
    return 3221225495LL;
  }
  return result;
}

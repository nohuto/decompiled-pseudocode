/*
 * XREFs of sub_140A124A4 @ 0x140A124A4
 * Callers:
 *     sub_140A114F0 @ 0x140A114F0 (sub_140A114F0.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_14079422C @ 0x14079422C (sub_14079422C.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_1407ED29C @ 0x1407ED29C (sub_1407ED29C.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A124A4(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, unsigned int *a5, _DWORD *a6, int *a7)
{
  unsigned int v7; // ebx
  int v8; // r13d
  unsigned int v9; // r12d
  void *v11; // rsi
  unsigned int v12; // eax
  _WORD *v13; // rax
  _WORD *v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebp
  PVOID v20; // rax
  unsigned int v21; // eax
  int v22; // r14d
  unsigned int v23; // eax

  v7 = 0;
  *a3 = 0LL;
  v8 = 0x2000;
  *a4 = 0LL;
  v9 = a2;
  *a5 = 0;
  v11 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  v12 = sub_140792CCC(a1, a2, 24577);
  if ( !v12 )
    goto LABEL_2;
  v13 = (_WORD *)sub_140842A24(a1, v12);
  v14 = v13;
  if ( !v13 || !*v13 )
    goto LABEL_14;
  v15 = sub_140792CCC(a1, v9, 36883);
  v16 = v15;
  if ( !v15
    || (v17 = sub_14079422C(a1, v15), (v19 = v17) == 0)
    || (v20 = sub_14075B444(v18, v17 + 2LL), (v11 = v20) == 0LL) )
  {
LABEL_2:
    sub_1406E0C3C(1LL, (__int64)"SdbpGetMatchingTextAttributes");
    return v7;
  }
  if ( (unsigned int)sub_1407ED29C(a1, v16, (__int64)v20, v19)
    && (v21 = sub_140792CCC(a1, v9, 16467)) != 0
    && (v22 = sub_1407ECF5C(a1, v21, 0)) != 0 )
  {
    v23 = sub_140792CCC(a1, v9, 16385);
    if ( v23 )
      v8 = sub_1407ECF5C(a1, v23, 0x2000u);
    v7 = 1;
    *a3 = v14;
    *a4 = v11;
    *a5 = v19;
    *a6 = v22;
    *a7 = v8;
  }
  else
  {
LABEL_14:
    sub_1406E0C3C(1LL, (__int64)"SdbpGetMatchingTextAttributes");
    if ( v11 )
      ExFreePoolWithTag(v11, 0x74705041u);
  }
  return v7;
}

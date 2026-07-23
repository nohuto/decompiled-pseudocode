/*
 * XREFs of sub_140791640 @ 0x140791640
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14078EE18 @ 0x14078EE18 (sub_14078EE18.c)
 *     sub_14078F124 @ 0x14078F124 (sub_14078F124.c)
 *     sub_140791910 @ 0x140791910 (sub_140791910.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 */

__int64 __fastcall sub_140791640(PRTL_RUN_ONCE a1, _DWORD *a2, PVOID *a3)
{
  unsigned int v3; // esi
  char *v6; // r12
  unsigned int v7; // eax
  unsigned int v8; // r14d
  unsigned int i; // eax
  unsigned int v10; // ebp
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  __int64 v15; // rax

  v3 = 0;
  if ( a2 && a3 )
  {
    v6 = (char *)(a2 + 12);
    memset(a2 + 12, 0, 0x500uLL);
    v7 = sub_140791910(a2, 0LL);
    v8 = v7;
    if ( v7 && (unsigned __int16)sub_14079499C(a2, v7) == 30722 )
    {
      a2[339] = 0;
      for ( i = sub_140792CCC(a2, v8, 30723LL); ; i = sub_14078EE18((__int64)a2, v8, v10) )
      {
        v10 = i;
        if ( !i )
        {
          *a3 = v6;
          return 1;
        }
        if ( a2[339] == 32 )
          goto LABEL_20;
        v11 = sub_140792CCC(a2, i, 14338LL);
        if ( !v11 )
          goto LABEL_20;
        LOWORD(a2[10 * a2[339] + 13]) = sub_14078F124((__int64)a2, v11, 0);
        v12 = sub_140792CCC(a2, v10, 14339LL);
        if ( !v12 )
          goto LABEL_20;
        HIWORD(a2[10 * a2[339] + 13]) = sub_14078F124((__int64)a2, v12, 0);
        v13 = sub_140792CCC(a2, v10, 16406LL);
        a2[10 * a2[339] + 20] = v13 ? sub_1407ECF5C(a2, v13, 0LL) : 0;
        v14 = sub_140792CCC(a2, v10, 38913LL);
        v15 = (unsigned int)a2[339];
        if ( !v14 )
          break;
        a2[10 * v15 + 12] = v14;
        ++a2[339];
      }
      LOWORD(a2[10 * v15 + 13]) = 0;
    }
LABEL_20:
    sub_1406E0C3C(1LL, (__int64)"InitOnceScanIndexes");
    return v3;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"InitOnceScanIndexes");
    return 0LL;
  }
}

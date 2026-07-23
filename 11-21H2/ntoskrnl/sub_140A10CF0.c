/*
 * XREFs of sub_140A10CF0 @ 0x140A10CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140A129F4 @ 0x140A129F4 (sub_140A129F4.c)
 *     sub_140A12DA0 @ 0x140A12DA0 (sub_140A12DA0.c)
 *     sub_140A14C28 @ 0x140A14C28 (sub_140A14C28.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A10CF0(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, const WCHAR *P)
{
  unsigned int v7; // ebx
  int v8; // r12d
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned __int16 *v11; // r15
  __int64 v12; // r14
  const WCHAR *v13; // rsi
  int *v14; // r13
  int v15; // ebp
  WCHAR *v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rcx

  v7 = 0;
  v8 = 0;
  v9 = sub_140792CCC(a3, a5, 24577);
  if ( v9 )
  {
    v10 = sub_140842A24(a3, v9);
    v11 = (unsigned __int16 *)v10;
    if ( !v10 )
      goto LABEL_3;
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v10 + 2 * v12) );
    v13 = P;
    if ( (*(_DWORD *)P & 1) == 0 && !(unsigned int)sub_140A129F4(P) )
    {
LABEL_3:
      sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingDir");
      goto LABEL_18;
    }
    v14 = (int *)*((_QWORD *)v13 + 9);
    v15 = 0;
    if ( *v14 > 0 )
    {
      do
      {
        P = 0LL;
        if ( !(unsigned int)sub_140A12DA0(a2, v13, v11, (unsigned int)v12, &v14[12 * v15 + 2], &P) )
          goto LABEL_3;
        v16 = (WCHAR *)P;
        LODWORD(P) = sub_140A14C28(P);
        if ( v16 )
          ExFreePoolWithTag(v16, 0x74705041u);
        v8 = (int)P;
        if ( (_DWORD)P )
        {
          if ( v15 > 0 )
            *((_DWORD *)v13 + 20) = 1;
          break;
        }
      }
      while ( ++v15 < *v14 );
    }
    v17 = *v11;
    LOWORD(v17) = v17 - 37;
    if ( (unsigned __int16)v17 <= 0x37u )
    {
      v18 = 0x80000000000201LL;
      if ( _bittest64(&v18, v17) )
        *((_DWORD *)v13 + 20) = 1;
    }
    v7 = 1;
  }
LABEL_18:
  *a1 = v8;
  return v7;
}

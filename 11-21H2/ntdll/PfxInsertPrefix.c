/*
 * XREFs of PfxInsertPrefix @ 0x1800F0F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x18006A570 (RtlSplay.c)
 *     CompareNamesCaseSensitive @ 0x1800F0C38 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1800F0DD0 (ComputeNameLength.c)
 */

char __fastcall PfxInsertPrefix(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v6; // ax
  _QWORD *v7; // r14
  __int64 i; // rdi
  _QWORD *j; // rsi
  int v11; // eax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  _QWORD *v15; // rax

  v6 = ComputeNameLength();
  v7 = (_QWORD *)(a3 + 16);
  *(_WORD *)(a3 + 2) = v6;
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 40) = a2;
  *(_QWORD *)(a3 + 16) = a3 + 16;
  for ( i = *(_QWORD *)(a1 + 8); *(__int16 *)(i + 2) > v6; i = *(_QWORD *)(i + 8) )
    a1 = i;
  if ( *(_WORD *)(i + 2) == v6 )
  {
    for ( j = (_QWORD *)i; ; j = (_QWORD *)(v12 - 16) )
    {
      v11 = CompareNamesCaseSensitive(j[5], a2);
      if ( v11 == 2 )
        break;
      if ( v11 == 3 )
      {
        v12 = j[3];
        if ( !v12 )
        {
          *(_QWORD *)(a3 + 8) = 0LL;
          v13 = j + 2;
          *(_WORD *)a3 = 514;
          j[3] = v7;
LABEL_15:
          *v7 = v13;
          v14 = *(_QWORD *)(i + 8);
          *(_QWORD *)(i + 8) = 0LL;
          *(_WORD *)i = 514;
          v15 = RtlSplay(v13) - 2;
          *(_WORD *)v15 = 513;
          *(_QWORD *)(a1 + 8) = v15;
          v15[1] = v14;
          return 1;
        }
      }
      else
      {
        v12 = j[4];
        if ( !v12 )
        {
          *(_QWORD *)(a3 + 8) = 0LL;
          v13 = j + 2;
          *(_WORD *)a3 = 514;
          j[4] = v7;
          goto LABEL_15;
        }
      }
    }
    return 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a3;
    *(_WORD *)a3 = 513;
    *(_QWORD *)(a3 + 8) = i;
    return 1;
  }
}

/*
 * XREFs of sub_140B2CF90 @ 0x140B2CF90
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_1402A1054 @ 0x1402A1054 (sub_1402A1054.c)
 *     _strnicmp @ 0x1403E1240 (_strnicmp.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B2CF90(__int64 a1)
{
  __int64 **v1; // r14
  int v2; // r12d
  unsigned int v3; // ebx
  __int64 *i; // rsi
  __int64 Pool2; // rdi
  __int64 v6; // rbp
  ULONG_PTR v7; // rbp
  _BYTE *v8; // rax
  _BYTE *v9; // r15
  __int64 *v10; // rax
  PVOID *j; // rax
  PVOID *m; // rcx
  void *n; // rcx
  PVOID *v15; // rbx
  __int64 v16; // rax
  int v17; // edx
  PVOID *k; // rcx

  v1 = *(__int64 ***)(a1 + 232);
  v2 = dword_140C15C70;
  v3 = 0;
  qword_140D3CBE0 = (__int64)&qword_140D3CBD8;
  qword_140D3CBD8 = &qword_140D3CBD8;
  for ( i = *v1; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v1 )
    {
      for ( j = (PVOID *)qword_140D3CBD8; j != &qword_140D3CBD8; j = (PVOID *)*j )
      {
        if ( !*((_BYTE *)j + 36) && !*((_BYTE *)j + 72) )
        {
          v17 = *((_DWORD *)j + 8);
          for ( k = (PVOID *)*j; k != &qword_140D3CBD8; k = (PVOID *)*k )
          {
            if ( !*((_BYTE *)k + 36) && !*((_BYTE *)k + 72) && v17 == *((_DWORD *)k + 8) )
            {
              *((_BYTE *)j + 72) = 1;
              *((_BYTE *)k + 72) = 1;
            }
          }
        }
      }
      if ( v2 == 1 )
      {
        for ( m = (PVOID *)qword_140D3CBD8; m != &qword_140D3CBD8; m = (PVOID *)*m )
        {
          if ( *((_BYTE *)m + 76) && *((_BYTE *)m + 72) )
            byte_140D018F1 = 1;
        }
      }
      return v3;
    }
    Pool2 = ExAllocatePool2(64LL, 0x50uLL, 0x20206F49u);
    if ( !Pool2 )
      goto LABEL_28;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(i[3] + v6) );
    v7 = v6 + 1;
    v8 = (_BYTE *)ExAllocatePool2(64LL, v7, 0x20206F49u);
    v9 = v8;
    if ( !v8 )
      break;
    *(_OWORD *)Pool2 = *(_OWORD *)i;
    *(_OWORD *)(Pool2 + 16) = *((_OWORD *)i + 1);
    *(_OWORD *)(Pool2 + 32) = *((_OWORD *)i + 2);
    *(_OWORD *)(Pool2 + 48) = *((_OWORD *)i + 3);
    sub_1402A1054(v8, v7, i[3]);
    *(_QWORD *)(Pool2 + 24) = v9;
    if ( v2 == 1 && v7 >= 9 && !strnicmp(&v9[v7 - 9], "rdisk(0)", 8uLL) )
      *(_BYTE *)(Pool2 + 76) = 1;
    v10 = (__int64 *)qword_140D3CBE0;
    if ( *(PVOID **)qword_140D3CBE0 != &qword_140D3CBD8 )
LABEL_31:
      __fastfail(3u);
    *(_QWORD *)Pool2 = &qword_140D3CBD8;
    *(_QWORD *)(Pool2 + 8) = v10;
    *v10 = Pool2;
    qword_140D3CBE0 = Pool2;
  }
  for ( n = (void *)Pool2; ; n = v15 )
  {
    ExFreePoolWithTag(n, 0);
LABEL_28:
    v15 = (PVOID *)qword_140D3CBD8;
    if ( qword_140D3CBD8 == &qword_140D3CBD8 )
      break;
    if ( *((PVOID **)qword_140D3CBD8 + 1) != &qword_140D3CBD8 )
      goto LABEL_31;
    v16 = *(_QWORD *)qword_140D3CBD8;
    if ( *(PVOID *)(*(_QWORD *)qword_140D3CBD8 + 8LL) != qword_140D3CBD8 )
      goto LABEL_31;
    qword_140D3CBD8 = *(PVOID *)qword_140D3CBD8;
    *(_QWORD *)(v16 + 8) = &qword_140D3CBD8;
    ExFreePoolWithTag(v15[3], 0);
  }
  return (unsigned int)-1073741670;
}

/*
 * XREFs of ??1?$KStringAtomTableBase@$00@Rtl@@QEAA@XZ @ 0x1C013B620
 * Callers:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C013B7A8 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Rtl::KStringAtomTableBase<1>::~KStringAtomTableBase<1>(__int64 a1)
{
  unsigned int *v1; // rsi
  unsigned int *v3; // rdi
  _QWORD **v4; // rdx
  _QWORD *v5; // r10
  _QWORD **j; // rdx
  void *v7; // rcx
  _QWORD *i; // rdx
  __int64 v9; // [rsp+40h] [rbp+8h]

  v1 = (unsigned int *)(a1 + 4);
  v3 = (unsigned int *)(a1 + 4);
  while ( 1 )
  {
    v4 = *(_QWORD ***)(a1 + 8);
    if ( !v4 )
      break;
    v5 = *v4;
    if ( ((unsigned __int8)*v4 & 1) != 0 )
    {
      v3 = v1;
      break;
    }
LABEL_12:
    if ( !v5 )
      goto LABEL_9;
    v3 = v1;
    v9 = v5[1] & (-1LL << (*v1 & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v9)
                          + 37
                          * (BYTE5(v9)
                           + 37
                           * (BYTE4(v9)
                            + 37
                            * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                         + HIBYTE(v9)) & ((*v1 >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v5 )
      {
        *i = *v5;
        --*(_DWORD *)a1;
        *v5 |= 0x8000000000000002uLL;
        break;
      }
    }
    ExFreePoolWithTag(v5, 0x6D74414Bu);
  }
  for ( j = v4 + 1; (unsigned __int64)j < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*v3 >> 5); ++j )
  {
    v5 = *j;
    if ( ((unsigned __int8)*j & 1) == 0 )
      goto LABEL_12;
  }
LABEL_9:
  v7 = *(void **)(a1 + 8);
  if ( (void *)(a1 + 16) != v7 )
    ExFreePoolWithTag(v7, 0x6873484Bu);
}

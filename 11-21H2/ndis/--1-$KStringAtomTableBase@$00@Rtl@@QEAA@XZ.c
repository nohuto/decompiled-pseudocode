/*
 * XREFs of ??1?$KStringAtomTableBase@$00@Rtl@@QEAA@XZ @ 0x1C012F808
 * Callers:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C012F984 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Rtl::KStringAtomTableBase<1>::~KStringAtomTableBase<1>(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD **v3; // rdx
  _QWORD *v4; // r10
  _QWORD **j; // rcx
  void *v6; // rcx
  _QWORD *i; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h]

  while ( 1 )
  {
    v2 = *(_QWORD ***)(a1 + 8);
    v3 = v2;
    if ( !v2 )
      break;
    v4 = *v2;
    if ( ((unsigned __int64)*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = *v2;
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v3 = *(_QWORD ***)(a1 + 8);
      break;
    }
LABEL_13:
    if ( !v4 )
      goto LABEL_10;
    v8 = v4[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v8)
                          + 37
                          * (BYTE5(v8)
                           + 37
                           * (BYTE4(v8)
                            + 37
                            * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                         + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v4 )
      {
        *i = *v4;
        --*(_DWORD *)a1;
        *v4 |= 0x8000000000000002uLL;
        break;
      }
    }
    ExFreePoolWithTag(v4, 0x6D74414Bu);
  }
  for ( j = v2 + 1; j < &v3[(unsigned __int64)*(unsigned int *)(a1 + 4) >> 5]; ++j )
  {
    v4 = *j;
    if ( ((unsigned __int8)*j & 1) == 0 )
      goto LABEL_13;
  }
LABEL_10:
  v6 = *(void **)(a1 + 8);
  if ( (void *)(a1 + 16) != v6 )
    ExFreePoolWithTag(v6, 0x6873484Bu);
}

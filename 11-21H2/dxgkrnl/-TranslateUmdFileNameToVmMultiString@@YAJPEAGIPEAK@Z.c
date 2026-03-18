/*
 * XREFs of ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1C02D02E0
 * Callers:
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C02CFC0C (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C03788C4 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C02D01D0 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 */

__int64 __fastcall TranslateUmdFileNameToVmMultiString(unsigned __int16 *a1, int a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rbp
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  int v9; // esi
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int16 *v13; // r8
  unsigned __int16 v14; // r9
  unsigned int v15; // edx
  _QWORD *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // edi
  void *v23; // rcx
  __int64 v24; // rax
  int v25; // edi

  v4 = (unsigned int)(a2 - 1);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  a1[v4] = 0;
  if ( a2 != 1 )
  {
    do
    {
      if ( a1[v10] )
      {
        v11 = operator new[](0x210uLL, 0x4B677844u, 256LL, a4);
        if ( !v11 )
        {
          v9 = -1073741801;
LABEL_21:
          v22 = 0;
          if ( v7 )
            goto LABEL_22;
          goto LABEL_26;
        }
        *(_QWORD *)v11 = 0LL;
        *(_WORD *)(v11 + 526) = 0;
        if ( v7 )
          *v8 = v11;
        else
          v7 = (_QWORD *)v11;
        v12 = 0;
        v13 = (unsigned __int16 *)(v11 + 8);
        v8 = (_QWORD *)v11;
        do
        {
          v14 = a1[v10];
          if ( !v14 )
            break;
          if ( v10 >= (unsigned int)v4 )
            break;
          *v13 = v14;
          ++v10;
          ++v13;
          ++v12;
        }
        while ( v12 < 0x103 );
        *(_WORD *)(v11 + 2LL * v12 + 8) = 0;
        v9 = TranslateUmdFileNameToVm((size_t *)(v11 + 8), 0x104u, 0LL);
        if ( v9 < 0 )
          goto LABEL_21;
      }
      else
      {
        ++v10;
      }
    }
    while ( v10 < (unsigned int)v4 );
  }
  v15 = 0;
  v16 = v7;
  if ( !v7 )
    goto LABEL_21;
  while ( 1 )
  {
    LODWORD(v17) = 0;
    if ( *((_WORD *)v16 + 4) )
      break;
LABEL_18:
    v21 = v15++;
    a1[v21] = 0;
    v16 = (_QWORD *)*v16;
    if ( !v16 )
      goto LABEL_22;
  }
  while ( v15 < (unsigned int)v4 )
  {
    v18 = (unsigned int)v17;
    v17 = (unsigned int)(v17 + 1);
    v19 = *((_WORD *)v16 + v18 + 4);
    v20 = v15++;
    a1[v20] = v19;
    if ( !*((_WORD *)v16 + v17 + 4) )
      goto LABEL_18;
  }
  v9 = -2147483643;
LABEL_22:
  v22 = 0;
  do
  {
    v23 = v7;
    v24 = -1LL;
    do
      ++v24;
    while ( *((_WORD *)v7 + v24 + 4) );
    v7 = (_QWORD *)*v7;
    v22 += v24 + 1;
    operator delete(v23);
  }
  while ( v7 );
LABEL_26:
  v25 = 2 * v22 + 2;
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    *a3 = v25;
  return (unsigned int)v9;
}

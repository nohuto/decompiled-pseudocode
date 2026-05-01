/*
 * XREFs of ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18004188C
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180041760 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x18008E4E4 (-EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV-$list@.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180037CC0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800419A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004F828 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004F834 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckPoolResources(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _BYTE *a6,
        _BYTE *a7,
        _QWORD *a8)
{
  __int64 v10; // rsi
  int *v13; // rax
  int *v14; // rbx
  int *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // xmm0_8
  int v18; // edi

  v10 = a2;
  v13 = (int *)operator new[](saturated_mul(a2, 0x18uLL));
  v14 = v13;
  if ( v13 )
  {
    `vector constructor iterator'(v13, 0x18uLL, a2, (void *(*)(void *))ExecutionModel::_ResourceInfo::_ResourceInfo);
    if ( a2 )
    {
      v15 = v14;
      v16 = a3 - (_QWORD)v14;
      do
      {
        v17 = *(_QWORD *)((char *)v15 + v16 + 16);
        *(_OWORD *)v15 = *(_OWORD *)((char *)v15 + v16);
        *((_QWORD *)v15 + 2) = v17;
        v15 += 6;
        --v10;
      }
      while ( v10 );
    }
    v18 = ExecutionModel::BaseResourceSet::RecursiveVisit(a1, 0, a2, v14, a4, a5, a6, a7, a8, 0LL);
    if ( v18 >= 0 )
      v18 = 0;
    operator delete[](v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v18;
}

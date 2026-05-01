/*
 * XREFs of ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x180039930
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003A090 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x180050ED0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 * Callees:
 *     <none>
 */

char __fastcall ExecutionModel::BaseResourceSet::HigherPriorityPending(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        int a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r10
  __int64 v9; // r9
  unsigned int v11; // ebx
  unsigned int *v12; // r8
  __int64 v13; // rcx

  v4 = *(_QWORD **)(a1 + 40);
  v5 = (_QWORD *)(a1 + 40);
  while ( 1 )
  {
    if ( v4 == v5 )
      return 0;
    v9 = v4[2];
    if ( *(_DWORD *)(v9 + 1280) == 1 && *(_DWORD *)(v9 + 1288) < a4 )
    {
      v11 = 0;
      if ( a2 )
        break;
    }
LABEL_4:
    v4 = (_QWORD *)*v4;
  }
  v12 = a3;
  while ( 1 )
  {
    if ( *((_QWORD *)v12 + 1) )
    {
      if ( *(_QWORD *)(v9 + 24LL * (int)*v12 + 80) )
      {
        v13 = *(_QWORD *)(a1 + 1272);
        if ( !_bittest64(&v13, *v12) )
          return 1;
      }
    }
    ++v11;
    v12 += 6;
    if ( v11 >= a2 )
      goto LABEL_4;
  }
}

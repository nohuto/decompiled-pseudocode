/*
 * XREFs of ?RmpResourceSetAssociateWithEmSet@@YAXPEAU_RM_RESOURCE_SET@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800117AC
 * Callers:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAPEAV12@@Z @ 0x1800510F0 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RmpResourceSetAssociateWithEmSet(struct _RM_RESOURCE_SET *a1, struct ExecutionModel::ResourceSet *a2)
{
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 2) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a2 + 164) = a1;
  *((_QWORD *)a2 + 215) = *((_QWORD *)a1 + 4);
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)a1 + 6) = a2;
}

/*
 * XREFs of ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002AAEC
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18002A974 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18002AB9C (CempListEntryIsNull.c)
 *     ?RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18002ABC0 (-RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RmpResourceSetReleaseResources(struct _RM_RESOURCE_SET *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax

  if ( !(unsigned int)CempListEntryIsNull((char *)a1 + 64) )
  {
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *(_OWORD *)v2 = 0LL;
  }
  v5 = (__int64 *)*((_QWORD *)a1 + 6);
  v6 = *(_QWORD *)(v5[165] + 48);
  RmpObjectRelease(a1);
  v7 = *v5;
  v5[164] = 0LL;
  (*(void (__fastcall **)(__int64 *))(v7 + 16))(v5);
  *((_QWORD *)a1 + 6) = 0LL;
  RmpObjectTableRemoveObject((struct _RM_OBJECT_TABLE *)(v6 + 536), a1);
  RmpObjectRelease(a1);
}

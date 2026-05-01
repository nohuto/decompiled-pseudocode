/*
 * XREFs of ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x18005614C
 * Callers:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180056252 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 * Callees:
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180046818 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004690C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800851A8 (-RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpPolicyGenerateHostListForPopulate(
        struct _RM_PARTITION *a1,
        struct _RM_POLICY_WORK_BUFFER *a2,
        unsigned __int8 (__fastcall *a3)(struct _RM_OBJECT_HEADER *, void *),
        void *a4)
{
  _QWORD *v8; // rbx
  struct _RM_OBJECT_HEADER *Next; // rax
  struct _RM_ACTIVITY_HOST *v10; // rdi
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  *((_DWORD *)a2 + 9) = 0;
  memset_0(*(void **)a2, 0, (unsigned __int64)*((unsigned int *)a2 + 8) << 6);
  RmpObjectTableEnumerationBegin(
    (struct _RM_OBJECT_TABLE *)(*((_QWORD *)a1 + 3) + 16LL),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v11);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v11);
    v10 = Next;
    if ( !Next )
      break;
    if ( *((struct _RM_PARTITION **)Next + 7) == a1 && (!a3 || a3(Next, a4)) )
    {
      v8 = (_QWORD *)(*(_QWORD *)a2 + ((unsigned __int64)*((unsigned int *)a2 + 9) << 6));
      memset_0(v8, 0, 0x40uLL);
      v8[6] = v10;
      ++*((_DWORD *)a2 + 9);
    }
    RmpActivityHostRelease(v10);
  }
  RtlReleaseSRWLockShared(v11[0] + 16LL);
}

/*
 * XREFs of ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029ADC
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180029F54 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x18002AAE0 (-RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z.c)
 */

void __fastcall RmpActivityHostAggregateCommitValues(struct _RM_ACTIVITY_HOST *a1)
{
  _QWORD *v1; // r9
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  int v4; // edx
  __int64 v6; // r8
  struct ExecutionModel::ResourceSet *Next; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  int v11; // [rsp+28h] [rbp-48h]
  int v12; // [rsp+2Ch] [rbp-44h]
  __int128 v13; // [rsp+30h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h]
  _QWORD v15[4]; // [rsp+50h] [rbp-20h] BYREF

  v12 = 0;
  v1 = (_QWORD *)((char *)a1 + 1128);
  v2 = 0LL;
  v11 = 2;
  v3 = 0LL;
  v4 = 0;
  v13 = 0LL;
  v14 = 0LL;
  while ( 1 )
  {
    if ( v4 == 1 )
    {
      v6 = 0LL;
      if ( (_QWORD *)*v1 != v1 )
        v6 = *v1 - 1296LL;
      if ( v6 )
        break;
    }
    ++v4;
    v1 += 3;
    if ( v4 >= 2 )
    {
      v6 = 0LL;
      break;
    }
  }
  v10 = v6;
  Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v10);
  if ( Next )
  {
    do
    {
      v15[3] = *((_QWORD *)Next + 175);
      v15[2] = *((_QWORD *)Next + 170);
      v8 = *((_QWORD *)Next + 174);
      v9 = *((_QWORD *)Next + 212);
      v15[1] = v8;
      v15[0] = v9;
      RmpCommitThresholdsAdd(
        (struct _RM_COMMIT_THRESHOLDS *)&v13,
        (struct _RM_COMMIT_THRESHOLDS *)v15,
        (struct _RM_COMMIT_THRESHOLDS *)&v13);
      Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v10);
    }
    while ( Next );
    v3 = v14;
    v2 = v13;
  }
  *((_OWORD *)a1 + 84) = v2;
  *((_OWORD *)a1 + 85) = v3;
}

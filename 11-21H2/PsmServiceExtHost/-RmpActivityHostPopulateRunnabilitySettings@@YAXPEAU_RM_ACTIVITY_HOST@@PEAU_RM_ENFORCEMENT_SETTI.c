/*
 * XREFs of ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180029BC8
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180029F54 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002A1C0 (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 */

void __fastcall RmpActivityHostPopulateRunnabilitySettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  char v2; // bl
  int v3; // r8d
  _QWORD *v4; // r9
  __int64 v7; // rdx
  bool v8; // zf
  int v9; // edi
  struct ExecutionModel::ResourceSet *Next; // rax
  char v11; // r14
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  __int16 v15; // ax
  char v16; // al
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v17[1] = 2LL;
  v3 = 0;
  v4 = (_QWORD *)((char *)a1 + 1128);
  while ( 1 )
  {
    if ( v3 == 1 )
    {
      v7 = 0LL;
      if ( (_QWORD *)*v4 != v4 )
        v7 = *v4 - 1296LL;
      if ( v7 )
        break;
    }
    ++v3;
    v4 += 3;
    if ( v3 >= 2 )
    {
      v7 = 0LL;
      break;
    }
  }
  v8 = *((_DWORD *)a1 + 156) == 2;
  v17[0] = v7;
  v9 = !v8;
  Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v17);
  if ( Next )
  {
    v11 = *((_BYTE *)a2 + 28);
    do
    {
      v12 = *((_DWORD *)Next + 345);
      v13 = v9;
      v9 = v12 & 3;
      if ( v9 <= v13 )
        v9 = v13;
      v11 |= (v12 & 8) != 0;
      *((_BYTE *)a2 + 28) = v11;
      Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v17);
    }
    while ( Next );
  }
  v14 = RmpImportanceToRequiredExecutionSpeed(*((unsigned int *)a1 + 370));
  if ( v9 <= v14 )
    v9 = v14;
  v15 = (unsigned __int16)*((_DWORD *)a1 + 370) >> 7;
  *((_DWORD *)a2 + 6) = v9;
  v16 = *((_BYTE *)a2 + 28) ^ (*((_BYTE *)a2 + 28) ^ (2 * v15)) & 2;
  *((_BYTE *)a2 + 28) = v16;
  if ( (*((_WORD *)a1 + 740) & 0x400) != 0
    && (*((_BYTE *)a1 + 1256) & 2) == 0
    && *(_BYTE *)(*((_QWORD *)a1 + 6) + 208LL) )
  {
    v2 = 4;
  }
  *((_BYTE *)a2 + 28) = v2 | v16 & 0xFB;
}

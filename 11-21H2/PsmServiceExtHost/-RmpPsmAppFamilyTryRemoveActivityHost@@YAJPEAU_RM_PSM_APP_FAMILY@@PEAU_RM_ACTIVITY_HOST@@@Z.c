/*
 * XREFs of ?RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002D2E4
 * Callers:
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002CA0C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPsmAppFamilyTryRemoveActivityHost(struct _RM_PSM_APP_FAMILY *a1, struct _RM_ACTIVITY_HOST *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r8
  _QWORD *v4; // r10
  _OWORD *v5; // r9
  __int64 v6; // rax

  v2 = 0;
  v3 = (_QWORD *)((char *)a1 + 560);
  v4 = 0LL;
  while ( 1 )
  {
    if ( !v3 )
      return (unsigned int)-1073741275;
    v5 = v3 - 1;
    if ( (struct _RM_ACTIVITY_HOST *)*(v3 - 1) == a2 )
      break;
    v4 = v3;
    v3 = (_QWORD *)*v3;
  }
  if ( a2 == *((struct _RM_ACTIVITY_HOST **)a1 + 71) )
    *((_QWORD *)a1 + 71) = 0LL;
  if ( !v4 )
  {
    v6 = *v3;
    if ( !*v3 )
    {
      *v5 = 0LL;
      return v2;
    }
    v4 = v3;
    *v5 = *(_OWORD *)(v6 - 8);
    v5 = (_OWORD *)(v6 - 8);
  }
  *v4 = *v3;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return v2;
}

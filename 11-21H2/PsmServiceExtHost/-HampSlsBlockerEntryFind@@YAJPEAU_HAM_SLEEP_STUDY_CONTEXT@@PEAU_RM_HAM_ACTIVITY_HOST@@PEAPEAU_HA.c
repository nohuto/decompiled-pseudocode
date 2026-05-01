/*
 * XREFs of ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180082520
 * Callers:
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x1800825C4 (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x180082A68 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180082340 (-HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall HampSlsBlockerEntryFind(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **a3)
{
  char v3; // si
  unsigned __int64 v4; // rcx
  int v5; // esi
  unsigned int v6; // edi
  unsigned __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_BYTE *)a1 + 24);
  v4 = (unsigned __int64)a1 + 16;
  v5 = v3 & 1;
  v6 = 0;
  v12 = *((_QWORD *)a2 - 4);
  v8 = *(_QWORD *)v4;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    if ( !v8 )
      return (unsigned int)-1073741275;
    v8 ^= v4;
  }
  if ( !v8 )
    return (unsigned int)-1073741275;
  do
  {
    v9 = HampSlsBlockerEntryCompare(&v12, (struct _RTL_BALANCED_NODE *)v8);
    if ( v9 >= 0 )
    {
      if ( v9 <= 0 )
        break;
      v10 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v8;
    }
    if ( v5 && v10 )
      v8 ^= v10;
    else
      v8 = v10;
  }
  while ( v8 );
  if ( !v8 )
    return (unsigned int)-1073741275;
  *a3 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)v8;
  return v6;
}

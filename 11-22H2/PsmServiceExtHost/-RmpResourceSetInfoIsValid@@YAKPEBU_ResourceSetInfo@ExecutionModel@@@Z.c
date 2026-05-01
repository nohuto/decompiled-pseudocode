/*
 * XREFs of ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18000DE18
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18004FC50 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18000DEDC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

__int64 __fastcall RmpResourceSetInfoIsValid(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  int v7; // eax
  _DWORD *i; // rcx
  __int64 v9; // r9

  if ( *((_QWORD *)a1 + 14) == -1LL )
    return 0;
  v3 = *((_QWORD *)a1 + 8);
  if ( v3 - 1 <= 0xFFE )
    return 0;
  v4 = *((_QWORD *)a1 + 7);
  if ( v4 - 1 <= 0xFFE )
    return 0;
  v5 = *((_QWORD *)a1 + 45);
  if ( v5 - 1 <= 0xFFE )
    return 0;
  v6 = *((_QWORD *)a1 + 3);
  if ( v6 - 1 <= 0xFFE || v3 < v6 || v6 < v4 )
  {
    return 0;
  }
  else
  {
    v2 = 0;
    if ( v4 >= v5 )
    {
      v7 = 0;
      for ( i = (_DWORD *)((char *)a1 + 80); *i == v7; i += 6 )
      {
        if ( (unsigned int)++v7 >= 3 )
        {
          if ( (int)RmpEmPriorityCompare(*((unsigned int *)a1 + 2), *((unsigned int *)a1 + 8), 0LL) >= 0
            && (*(_BYTE *)(v9 + 40) & 9) != 9
            && ((*(_BYTE *)(v9 + 42) & 7u) - 2 > 2 || (*(_BYTE *)(v9 + 40) & 3) != 0) )
          {
            return 1;
          }
          return v2;
        }
      }
    }
  }
  return v2;
}

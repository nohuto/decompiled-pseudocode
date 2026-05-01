/*
 * XREFs of ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001F7D0
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KKW4_HOST_GROUP@@5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E940 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpResourceSetInfoIsValid(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned int v6; // r8d
  int v7; // eax
  _DWORD *i; // rcx
  __int16 v9; // ax

  if ( *((_QWORD *)a1 + 14) == -1LL )
    return 0;
  v2 = *((_QWORD *)a1 + 8);
  if ( v2 - 1 <= 0xFFE )
    return 0;
  v3 = *((_QWORD *)a1 + 7);
  if ( v3 - 1 <= 0xFFE )
    return 0;
  v4 = *((_QWORD *)a1 + 45);
  if ( v4 - 1 <= 0xFFE )
    return 0;
  v5 = *((_QWORD *)a1 + 3);
  if ( v5 - 1 <= 0xFFE || v2 < v5 || v5 < v3 )
  {
    return 0;
  }
  else
  {
    v6 = 0;
    if ( v3 >= v4 )
    {
      v7 = 0;
      for ( i = (_DWORD *)((char *)a1 + 80); *i == v7; i += 6 )
      {
        if ( (unsigned int)++v7 >= 3 )
        {
          if ( *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 8) )
          {
            v9 = *((_WORD *)a1 + 20);
            if ( (v9 & 9) != 9 && ((*((_BYTE *)a1 + 42) & 7u) - 2 > 2 || (v9 & 3) != 0) )
              LOBYTE(v6) = (*((_WORD *)a1 + 20) & 0x20) != 0 || (*((_BYTE *)a1 + 44) & 0x20) == 0;
          }
          return v6;
        }
      }
    }
  }
  return v6;
}

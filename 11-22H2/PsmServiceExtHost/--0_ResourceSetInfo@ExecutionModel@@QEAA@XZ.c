/*
 * XREFs of ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180014CA0
 * Callers:
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180014980 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180014A54 (-HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionMod.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180014C10 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180044174 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18004EACC (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x18007FD80 (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 * Callees:
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x1800395E0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::_ResourceSetInfo *__fastcall ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(
        ExecutionModel::_ResourceSetInfo *this)
{
  ExecutionModel::_ResourceInfo *v2; // rsi
  __int64 v3; // rbp
  ExecutionModel::_ResourceSetInfo *result; // rax

  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 101;
  v2 = (ExecutionModel::_ResourceSetInfo *)((char *)this + 80);
  *((_DWORD *)this + 3) = 32;
  v3 = 3LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v2);
    v2 = (ExecutionModel::_ResourceInfo *)((char *)v2 + 24);
    --v3;
  }
  while ( v3 );
  *((_DWORD *)this + 26) = 1;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 32) = 2;
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 38) = 101;
  *((_DWORD *)this + 39) = 101;
  *((_DWORD *)this + 40) = 101;
  *((_DWORD *)this + 41) = 101;
  *((_DWORD *)this + 42) = 101;
  *((_DWORD *)this + 43) = 101;
  *((_DWORD *)this + 44) = 101;
  *((_DWORD *)this + 45) = 101;
  *((_DWORD *)this + 46) = 101;
  *((_DWORD *)this + 47) = 101;
  *((_DWORD *)this + 48) = 101;
  *((_DWORD *)this + 49) = 101;
  *((_DWORD *)this + 50) = 101;
  *((_DWORD *)this + 51) = 101;
  *((_DWORD *)this + 52) = 101;
  *((_DWORD *)this + 53) = 101;
  *((_DWORD *)this + 54) = 101;
  *((_DWORD *)this + 55) = 101;
  *((_DWORD *)this + 56) = 101;
  *((_DWORD *)this + 57) = 101;
  *((_DWORD *)this + 58) = 101;
  *((_DWORD *)this + 59) = 101;
  *((_DWORD *)this + 60) = 101;
  *((_DWORD *)this + 61) = 101;
  *((_DWORD *)this + 62) = 101;
  *((_DWORD *)this + 63) = 101;
  *((_DWORD *)this + 64) = 101;
  *((_DWORD *)this + 65) = 101;
  *((_DWORD *)this + 66) = 101;
  *((_DWORD *)this + 67) = 101;
  *((_DWORD *)this + 68) = 101;
  *((_DWORD *)this + 69) = 101;
  *((_DWORD *)this + 70) = 101;
  *((_DWORD *)this + 71) = 101;
  *((_DWORD *)this + 72) = 101;
  *((_DWORD *)this + 73) = 101;
  *((_DWORD *)this + 74) = 101;
  *((_DWORD *)this + 75) = 101;
  *((_DWORD *)this + 76) = 101;
  *((_DWORD *)this + 77) = 101;
  *((_DWORD *)this + 78) = 101;
  *((_DWORD *)this + 79) = 101;
  *((_DWORD *)this + 80) = 101;
  *((_DWORD *)this + 81) = 101;
  *((_DWORD *)this + 82) = 101;
  *((_DWORD *)this + 83) = 101;
  *((_DWORD *)this + 84) = 101;
  *((_DWORD *)this + 85) = 101;
  *((_DWORD *)this + 86) = 101;
  *((_DWORD *)this + 87) = 101;
  *((_DWORD *)this + 93) = 0;
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 42) = 0;
  *((_DWORD *)this + 11) = 1;
  *((_DWORD *)this + 4) = 0;
  result = this;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_DWORD *)this + 8) = 101;
  return result;
}

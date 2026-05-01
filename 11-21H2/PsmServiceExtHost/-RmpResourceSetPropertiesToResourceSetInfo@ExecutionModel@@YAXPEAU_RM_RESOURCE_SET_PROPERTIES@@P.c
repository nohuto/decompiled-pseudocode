/*
 * XREFs of ?RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x1800393E0
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180039220 (RmCoreRpcSrvAcquireResourceSet.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::RmpResourceSetPropertiesToResourceSetInfo(
        ExecutionModel *this,
        struct _RM_RESOURCE_SET_PROPERTIES *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  bool v3; // zf
  int v4; // eax

  *((_QWORD *)a2 + 17) = *(_QWORD *)this;
  *((_DWORD *)a2 + 32) = 2;
  *((_QWORD *)a2 + 14) = *((_QWORD *)this + 1);
  *((_DWORD *)a2 + 26) = 1;
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 9);
  *((_QWORD *)a2 + 3) = *((_QWORD *)this + 8);
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 7);
  *((_QWORD *)a2 + 45) = *((_QWORD *)this + 6);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 22);
  v3 = (*((_BYTE *)a2 + 16) & 1) == 0;
  *((_DWORD *)a2 + 12) = (*((_DWORD *)this + 22) >> 2) & 1;
  if ( !v3 )
    *((_DWORD *)a2 + 4) = *((_DWORD *)this + 8);
  v4 = *((unsigned __int8 *)this + 35);
  *((_DWORD *)a2 + 8) = v4;
  *((_DWORD *)a2 + 2) = v4;
  *((_DWORD *)a2 + 24) = v4;
  *((_DWORD *)a2 + 30) = v4;
  *((_DWORD *)a2 + 36) = v4;
  *((_DWORD *)a2 + 8) = *((unsigned __int8 *)this + 36);
  *((_BYTE *)a2 + 42) = *((_BYTE *)this + 98);
  *((_WORD *)a2 + 20) = *((_WORD *)this + 48);
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  *(_QWORD *)((char *)a2 + 164) = 0LL;
  *(_QWORD *)((char *)a2 + 172) = 0LL;
  *(_QWORD *)((char *)a2 + 180) = 0LL;
  *(_QWORD *)((char *)a2 + 188) = 0LL;
  *(_QWORD *)((char *)a2 + 196) = 0LL;
  *(_QWORD *)((char *)a2 + 204) = 0LL;
  *(_QWORD *)((char *)a2 + 212) = 0LL;
  *(_QWORD *)((char *)a2 + 220) = 0LL;
  *(_QWORD *)((char *)a2 + 228) = 0LL;
  *(_QWORD *)((char *)a2 + 236) = 0LL;
  *(_QWORD *)((char *)a2 + 244) = 0LL;
  *(_QWORD *)((char *)a2 + 252) = 0LL;
  *(_QWORD *)((char *)a2 + 260) = 0LL;
  *(_QWORD *)((char *)a2 + 268) = 0LL;
  *(_QWORD *)((char *)a2 + 276) = 0LL;
  *(_QWORD *)((char *)a2 + 284) = 0LL;
  *(_QWORD *)((char *)a2 + 292) = 0LL;
  *(_QWORD *)((char *)a2 + 300) = 0LL;
  *(_QWORD *)((char *)a2 + 308) = 0LL;
  *(_QWORD *)((char *)a2 + 316) = 0LL;
  *(_QWORD *)((char *)a2 + 324) = 0LL;
  *(_QWORD *)((char *)a2 + 332) = 0LL;
  *(_QWORD *)((char *)a2 + 340) = 0LL;
  *((_DWORD *)a2 + 87) = 0;
}

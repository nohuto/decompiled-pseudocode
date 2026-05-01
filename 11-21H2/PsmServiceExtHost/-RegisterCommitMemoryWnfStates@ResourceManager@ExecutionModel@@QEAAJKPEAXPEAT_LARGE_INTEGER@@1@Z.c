/*
 * XREFs of ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x180032678
 * Callers:
 *     RmgrSrv_RegisterWithServer @ 0x180032510 (RmgrSrv_RegisterWithServer.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x180032718 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x180033540 (-RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        void *a3,
        union _LARGE_INTEGER *a4,
        union _LARGE_INTEGER *a5)
{
  ExecutionModel::ResourceManager *v6; // r14
  unsigned int v9; // ebx
  _BYTE v11[80]; // [rsp+30h] [rbp-88h] BYREF

  v6 = g_pResourceManager;
  RmpAcquireGlobalLock();
  if ( a4 && a5 )
  {
    RmpRmSidInitialize((union _RM_SID *)v11, a3);
    v9 = ExecutionModel::ResourceManager::AddCommitMemoryWnfStates(v6, a2, (union _RM_SID *)v11, a4, a5);
  }
  else
  {
    v9 = -2147024809;
  }
  RmpReleaseGlobalLock();
  return v9;
}

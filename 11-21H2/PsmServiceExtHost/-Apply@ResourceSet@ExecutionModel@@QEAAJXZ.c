/*
 * XREFs of ?Apply@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x18002AB6C
 * Callers:
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002AC6C (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800292C8 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Apply(ExecutionModel::ResourceSet *this)
{
  DWORD v1; // esi
  _QWORD *Value; // rbx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v1) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DD4E8 = GetCurrentThreadId();
  v4 = *((_DWORD *)this + 320);
  if ( v4 == 1 )
  {
    v5 = -2147220219;
  }
  else if ( v4 )
  {
    if ( *((_BYTE *)this + 12) )
    {
      v5 = -2147220220;
    }
    else
    {
      v5 = ExecutionModel::ResourceManager::ApplyResourceSet_Modern(
             *((ExecutionModel::ResourceManager **)this + 3),
             this);
      if ( v5 >= 0 )
        v5 = 0;
    }
  }
  else
  {
    v5 = -2147220218;
  }
  dword_1800DD4E8 = 0;
  v6 = 0;
  if ( v5 < 0 )
    v6 = v5;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  CempLockTrackerMarkReleased(HampLockTrackerId, v7, 0);
  return v6;
}

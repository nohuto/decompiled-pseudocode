/*
 * XREFs of ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C01A7510
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C01A5A90 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000481C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C034FD3C (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C034FF4C (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C03883F8 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, unsigned int a2)
{
  __int64 v2; // rsi
  struct DXGGLOBAL *Global; // rax
  struct DXGPROCESS *Current; // rbp
  unsigned __int8 v6; // r8
  struct DXGPROCESS *v7; // rax
  unsigned int HostHandle; // r14d
  unsigned int v10; // ebx
  struct DXGGLOBAL *v11; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)Global + 75)) )
  {
    WdLogSingleEntry1(1LL, 2537LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockExclusiveOwner()",
      2537LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( (_DWORD)v2 )
  {
    if ( (*((_DWORD *)this + 71) & 2) != 0 )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(this, v2, v6);
      if ( HostHandle )
      {
        v10 = *((_DWORD *)Current + 126);
        v11 = DXGGLOBAL::GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v11 + 214), v10, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(this, v2);
      }
    }
    DXGPROCESS::FreeHandleSafe(Current, v2);
  }
  if ( !*((_DWORD *)this + 6) )
  {
    WdLogSingleEntry1(1LL, 2563LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != m_cReference", 2563LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = DXGPROCESS::GetCurrent();
  WdLogSingleEntry3(4LL, this, v2, v7);
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}

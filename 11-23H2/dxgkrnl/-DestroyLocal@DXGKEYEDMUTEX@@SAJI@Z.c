/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C034FA1C
 * Callers:
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C01A3FC0 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C032AC14 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     DxgkDestroyKeyedMutex @ 0x1C0352C40 (DxgkDestroyKeyedMutex.c)
 *     ?VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037D320 (-VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C034F820 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C03514FC (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(__int64 a1)
{
  __int64 v1; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v3; // rdi
  unsigned int v4; // edx
  unsigned int v5; // r9d
  __int64 v6; // r8
  unsigned int v7; // ecx
  int v8; // ecx
  DXGKEYEDMUTEX *v10; // rsi
  unsigned int v11; // ecx
  _BYTE v12[32]; // [rsp+50h] [rbp-28h] BYREF

  v1 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v3 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v12, Current);
  v4 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  v5 = (unsigned int)v1 >> 30;
  if ( v4 >= *((_DWORD *)v3 + 74)
    || (v6 = *((_QWORD *)v3 + 35), v7 = *(_DWORD *)(v6 + 16LL * v4 + 8), v5 != ((v7 >> 5) & 3))
    || (v7 & 0x2000) != 0
    || (v8 = v7 & 0x1F) == 0 )
  {
LABEL_9:
    WdLogSingleEntry2(3LL, v1, -1073741811LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    return 3221225485LL;
  }
  if ( v8 != 9 )
  {
    WdLogSingleEntry1(2LL, 316LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_9;
  }
  v10 = *(DXGKEYEDMUTEX **)(v6 + 16LL * v4);
  if ( !v10 )
    goto LABEL_9;
  if ( v4 < *((_DWORD *)v3 + 74) )
  {
    v11 = *(_DWORD *)(v6 + 16LL * v4 + 8);
    if ( v5 == ((v11 >> 5) & 3) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
      *(_DWORD *)(v6 + 16 * (((unsigned __int64)(unsigned int)v1 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v10, v1, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle((unsigned int)v1) )
  {
    WdLogSingleEntry1(1LL, 3816LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bStatus", 3816LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}

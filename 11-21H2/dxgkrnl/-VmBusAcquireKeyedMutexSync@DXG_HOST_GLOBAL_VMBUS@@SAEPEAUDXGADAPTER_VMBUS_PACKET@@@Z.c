/*
 * XREFs of ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03669B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C5D4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C033E6E8 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1C036263C (DxgkpAcquireKeyedMutexFromHandle.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusAcquireKeyedMutexSync(struct DXGPROCESS **a1)
{
  __int64 v2; // rax
  union _LARGE_INTEGER *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r9
  DXGKEYEDMUTEX *v6; // rdi
  unsigned int v7; // esi
  unsigned __int64 *v8; // r14
  union _LARGE_INTEGER *v10; // r9
  size_t v11; // [rsp+30h] [rbp-38h]
  union _LARGE_INTEGER v12; // [rsp+78h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  v3 = (union _LARGE_INTEGER *)v2;
  if ( !v2 )
    return 0;
  v4 = DxgkpAcquireKeyedMutexFromHandle(a1[12], *(_DWORD *)(v2 + 24));
  v6 = (DXGKEYEDMUTEX *)v4;
  if ( !v4 )
    return 0;
  v7 = *(_DWORD *)(v4 + 168) + 24;
  v8 = (unsigned __int64 *)operator new[](v7, 0x4B677844u, 64LL, v5);
  if ( !v8 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v6);
    return 0;
  }
  v12.QuadPart = 0LL;
  v10 = 0LL;
  if ( (v3[7].LowPart & 1) == 0 )
  {
    v10 = &v12;
    v12 = v3[6];
  }
  LODWORD(v11) = *((_DWORD *)v6 + 42);
  *(_DWORD *)v8 = DXGKEYEDMUTEX::AcquireSync(
                    (unsigned int)v3[3].HighPart,
                    v3[4].QuadPart,
                    v3[5].LowPart,
                    v10,
                    (DXGKEYEDMUTEX *)(v8 + 2),
                    v8 + 3,
                    v11,
                    v8 + 1,
                    0);
  VmBusCompletePacket(a1[16], v8, v7);
  DXGKEYEDMUTEX::ReleaseReference(v6);
  operator delete[](v8);
  return 1;
}

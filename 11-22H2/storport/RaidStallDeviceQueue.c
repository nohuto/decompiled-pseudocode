/*
 * XREFs of RaidStallDeviceQueue @ 0x1C0040748
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x1C0061CF4 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     RaidPauseDeviceQueue @ 0x1C004071C (RaidPauseDeviceQueue.c)
 *     RiIsDeviceQueueBusy @ 0x1C0040F3C (RiIsDeviceQueueBusy.c)
 *     RaidSetUnitPauseTimer @ 0x1C0060B90 (RaidSetUnitPauseTimer.c)
 */

void __fastcall RaidStallDeviceQueue(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  KIRQL v8; // r12
  __int64 v9; // rax
  int v10; // edi
  unsigned int v11; // r9d
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v14; // [rsp+88h] [rbp+10h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xBu,
      (__int64)&WPP_4696d8e4a6e63693584f196800ba175c_Traceguids,
      a2,
      a3);
  }
  if ( a2 && a3 )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    if ( *(int *)(a1 + 24) > 0 || (unsigned int)RiIsDeviceQueueBusy(a1) == 1 )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v8);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        LODWORD(v12) = a3;
        WPP_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xCu,
          (__int64)&WPP_4696d8e4a6e63693584f196800ba175c_Traceguids,
          a2,
          v12);
      }
    }
    else
    {
      if ( a2 == 1 )
      {
        v9 = *(_QWORD *)(a4 + 24);
        if ( v9 )
          v14 = *(_BYTE *)(v9 + 56);
        else
          v14 = -1;
        v10 = *(_DWORD *)(a4 + 96);
        RaidPauseDeviceQueue(a1);
        if ( (qword_1C0092468 & 0x200) != 0 )
          DbgLogRequest(
            *(_QWORD *)(a4 + 24),
            4,
            retaddr,
            BYTE2(v10) | (unsigned __int64)((BYTE1(v10) | (((unsigned __int8)v10 | (v14 << 8)) << 8)) << 8),
            *(int *)(a4 + 680),
            0LL,
            0LL);
      }
      else if ( a2 == 2 )
      {
        RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)a1);
        if ( (((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF) != 0 )
        {
          v11 = (unsigned __int64)(a3 * (((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF)) / 0x64;
          if ( !v11 )
            v11 = 1;
          *(_DWORD *)(a1 + 28) = v11;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          {
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_4696d8e4a6e63693584f196800ba175c_Traceguids,
              v11);
          }
        }
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v8);
      if ( a2 == 1 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          WPP_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xEu,
            (__int64)&WPP_4696d8e4a6e63693584f196800ba175c_Traceguids,
            a3);
        }
        RaidSetUnitPauseTimer(a4, a3);
      }
    }
  }
}

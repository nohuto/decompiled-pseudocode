/*
 * XREFs of RaidStallDeviceQueue @ 0x1C003E090
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x1C0054FE4 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidSetUnitPauseTimer @ 0x1C00029BC (RaidSetUnitPauseTimer.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     WPP_SF_d @ 0x1C003C4B8 (WPP_SF_d.c)
 *     WPP_SF_DD @ 0x1C003C4FC (WPP_SF_DD.c)
 */

void __fastcall RaidStallDeviceQueue(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  KIRQL v8; // al
  KIRQL v9; // r12
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int8 v12; // dl
  int v13; // eax
  unsigned int v14; // r9d
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xBu,
      (__int64)&WPP_e5ec2f8d2a23345d0acacdba1b32319a_Traceguids,
      a2,
      a3);
  }
  if ( a2 && a3 )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    v9 = v8;
    if ( *(int *)(a1 + 28) > 0 || *(_DWORD *)(a1 + 32) || (v10 = *(_DWORD *)(a1 + 76), v10 >= *(_DWORD *)(a1 + 4)) )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v8);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        LODWORD(v15) = a3;
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xCu,
          (__int64)&WPP_e5ec2f8d2a23345d0acacdba1b32319a_Traceguids,
          a2,
          v15);
      }
    }
    else
    {
      if ( a2 == 1 )
      {
        v11 = *(_QWORD *)(a4 + 24);
        if ( v11 )
          v12 = *(_BYTE *)(v11 + 56);
        else
          v12 = -1;
        v13 = *(_DWORD *)(a4 + 96);
        _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
        if ( (qword_1C00793A8 & 0x200) != 0 )
          DbgLogRequest(
            *(_QWORD *)(a4 + 24),
            4,
            retaddr,
            BYTE2(v13) | (unsigned __int64)((BYTE1(v13) | (((unsigned __int8)v13 | (v12 << 8)) << 8)) << 8),
            *(int *)(a4 + 684),
            0LL,
            0LL);
      }
      else if ( a2 == 2 && v10 > 0 )
      {
        v14 = a3 * v10 / 0x64;
        if ( !v14 )
          v14 = 1;
        *(_DWORD *)(a1 + 32) = v14;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          WPP_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xDu,
            (__int64)&WPP_e5ec2f8d2a23345d0acacdba1b32319a_Traceguids,
            v14);
        }
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v9);
      if ( a2 == 1 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          WPP_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xEu,
            (__int64)&WPP_e5ec2f8d2a23345d0acacdba1b32319a_Traceguids,
            a3);
        }
        RaidSetUnitPauseTimer(a4, a3);
      }
    }
  }
}

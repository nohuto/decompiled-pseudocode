/*
 * XREFs of RaidPowerPassToMiniPort @ 0x1C00491FC
 * Callers:
 *     RaidAdapterStopOnPowerdown @ 0x1C0014E10 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C001DC30 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaSrbSetMiniportContext @ 0x1C000FFCC (RaSrbSetMiniportContext.c)
 *     RaInitializePower @ 0x1C003350C (RaInitializePower.c)
 *     WPP_SF_qqq @ 0x1C003C830 (WPP_SF_qqq.c)
 *     WPP_SF_qqqq @ 0x1C00405A8 (WPP_SF_qqqq.c)
 *     RaAdapterStartPowerIo @ 0x1C0048664 (RaAdapterStartPowerIo.c)
 *     WPP_SF_qqqD @ 0x1C004C058 (WPP_SF_qqqD.c)
 */

__int64 __fastcall RaidPowerPassToMiniPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  _WORD *v10; // rbx
  __int64 v12; // r8
  int v13; // ecx
  char *v14; // rcx
  struct _DEVICE_OBJECT *v15; // r9
  __int64 v16; // rax
  unsigned int started; // ebp
  _QWORD v18[4]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a2 + 184);
  v18[0] = 0LL;
  v8 = 1LL;
  if ( *(_DWORD *)v3 == 1 )
    v3 = *(_QWORD *)(v3 + 24);
  v9 = *(_QWORD *)(v3 + 4424);
  v10 = (_WORD *)(v3 + 4256);
  if ( v9 )
    goto LABEL_14;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qqq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x3Bu,
      (__int64)&WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
      a2,
      v3 + 4256,
      v3);
  }
  RaInitializePower(v3, v8);
  v9 = *(_QWORD *)(v3 + 4424);
  if ( v9 )
  {
LABEL_14:
    *(_BYTE *)(v3 + 4432) = 1;
    v12 = v9 + 1104;
    v18[2] = v9 + 48;
    v18[1] = v9 + 1104;
    v18[3] = v9 + 848;
    v13 = *(_BYTE *)(v3 + 4433) != 0 ? 2304 : 256;
    if ( *(_BYTE *)(v3 + 442) == 1 )
    {
      *(_DWORD *)(v3 + 4280) = v13;
      *v10 = 8;
      *(_WORD *)(v3 + 4292) = 2;
      *(_QWORD *)(v3 + 4352) = 0LL;
      *(_QWORD *)(v3 + 4336) = a2;
      *(_BYTE *)(v3 + 4258) = 40;
      *(_DWORD *)(v3 + 4264) = 1397899864;
      *(_DWORD *)(v3 + 4268) = 1;
      *(_DWORD *)(v3 + 4272) = 168;
      *(_DWORD *)(v3 + 4276) = 36;
      *(_DWORD *)(v3 + 4296) = *(_DWORD *)(v3 + 5472);
      *(_DWORD *)(v3 + 4376) = 144;
      *(_DWORD *)(v3 + 4308) = 128;
      *(_QWORD *)(v3 + 4320) = 0LL;
      *(_QWORD *)(v3 + 4312) = 1LL;
      *(_WORD *)(v3 + 4384) = 1;
      *(_DWORD *)(v3 + 4388) = 4;
      *(_WORD *)(v3 + 4386) = *(_WORD *)(v3 + 56);
      *(_WORD *)(v3 + 4392) = 0;
      *(_BYTE *)(v3 + 4394) = 0;
      v14 = (char *)v10 + *(unsigned int *)(v3 + 4376);
      *(_DWORD *)v14 = 97;
      *((_DWORD *)v14 + 1) = 12;
      *((_DWORD *)v14 + 4) = *(_DWORD *)(v4 + 32);
      *((_DWORD *)v14 + 3) = *(_DWORD *)(v4 + 24);
      v14[8] = 1;
    }
    else
    {
      *(_QWORD *)(v3 + 4304) = 0LL;
      *v10 = 88;
      *(_BYTE *)(v3 + 4258) = 36;
      *(_QWORD *)(v3 + 4280) = 0LL;
      *(_DWORD *)(v3 + 4272) = 0;
      *(_DWORD *)(v3 + 4320) = *(_DWORD *)(v4 + 32);
      *(_DWORD *)(v3 + 4264) = *(_DWORD *)(v4 + 24);
      *(_DWORD *)(v3 + 4268) = v13;
      *(_DWORD *)(v3 + 4276) = *(_DWORD *)(v3 + 5472);
      *(_DWORD *)(v3 + 4260) = 1;
    }
    RaSrbSetMiniportContext(v3, v3 + 4256, v12);
    if ( WPP_GLOBAL_Control != v15
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      if ( *(_BYTE *)(v3 + 4258) == 40 )
        v16 = *(_QWORD *)(v3 + 4360);
      else
        v16 = *(_QWORD *)(v3 + 4312);
      WPP_SF_qqqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Du,
        (__int64)&WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
        a2,
        v3 + 4256,
        v16,
        v3);
    }
    started = RaAdapterStartPowerIo(a1, a2, v3 + 4256, (__int64)v18, a3);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqqD(
        WPP_GLOBAL_Control->AttachedDevice,
        62LL,
        &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
        a2,
        v3 + 4256,
        v3,
        started);
    }
    return started;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Cu,
        (__int64)&WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
        a2,
        v3 + 4256,
        v3);
    }
    return 3221225495LL;
  }
}

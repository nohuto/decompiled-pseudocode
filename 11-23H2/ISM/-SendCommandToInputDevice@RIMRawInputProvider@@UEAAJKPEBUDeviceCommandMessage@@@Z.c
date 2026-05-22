/*
 * XREFs of ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x1800D3900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D5100 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z @ 0x1800DAB38 (-OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z @ 0x1800DB808 (-SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z.c)
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800DDBE4 (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 *     ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x1800E1170 (-SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z.c)
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x1800E1950 (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 */

__int64 __fastcall RIMRawInputProvider::SendCommandToInputDevice(
        HeatDeviceCollection **this,
        unsigned int a2,
        const struct DeviceCommandMessage *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct DeviceInfo *v15; // [rsp+50h] [rbp+18h] BYREF

  switch ( *(_DWORD *)a3 )
  {
    case 1:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(this[10], a2, &v15) >= 0 )
      {
        v5 = HeatDeviceCollection::SendHeatDeviceCommand(this[10], v13, *((void **)a3 + 1));
        if ( v5 < 0 )
        {
          v6 = 331LL;
          goto LABEL_22;
        }
      }
      return 0LL;
    case 2:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(this[7], a2, &v15) >= 0 )
      {
        v5 = SpatialRimDeviceCollection::SetInputDeviceHapticsFeedback(
               this[7],
               v12,
               *((_BYTE *)a3 + 8),
               *((_BYTE *)a3 + 9),
               *((_WORD *)a3 + 5));
        if ( v5 < 0 )
        {
          v6 = 349LL;
          goto LABEL_22;
        }
      }
      return 0LL;
    case 3:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(this[11], a2, &v15) >= 0 )
      {
        v5 = GazeDeviceCollection::SetTrackingEnabled(this[11], v11, *((_DWORD *)a3 + 2));
        if ( v5 < 0 )
        {
          v6 = 364LL;
          goto LABEL_22;
        }
      }
      return 0LL;
    case 4:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(this[7], a2, &v15) >= 0 )
      {
        v5 = SpatialRimDeviceCollection::OnTrackingRequestedHeartbeat(this[7], v10);
        if ( v5 < 0 )
        {
          v6 = 379LL;
          goto LABEL_22;
        }
      }
      return 0LL;
    case 6:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(this[5], a2, &v15) >= 0 )
      {
        LOBYTE(v8) = *((_DWORD *)a3 + 3) != 0;
        MobileButtonDeviceCollection::OnButtonEnabledOnIdleChanged(this[5], v7, *((unsigned int *)a3 + 2), v8);
      }
      return 0LL;
  }
  v5 = -2147467263;
  v6 = 405LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}

/*
 * XREFs of CheckPointerDeviceConfiguration @ 0x1C011EB58
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 * Callees:
 *     ReadTiltCalibrationData @ 0x1C01CBCFC (ReadTiltCalibrationData.c)
 */

// write access to const memory has been detected, the output may be wrong!
void CheckPointerDeviceConfiguration()
{
  CInpPushLock *Lock; // rbx
  struct DEVICEINFO *i; // rdi
  __int64 v2; // rcx
  int v3; // ecx
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 1;
  _GetPrecisionTouchPadConfiguration(0LL);
  AccessPTPEnabledStatus(0LL, 1LL, &v6);
  gPTPEnabled = v6;
  CPTPProcessor::EnvironmentChanged();
  Lock = CBaseInput::TmpGetLock(gpHidInput);
  CInpPushLock::LockShared(Lock);
  for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((_BYTE *)i + 48) == 3 && (*((_DWORD *)i + 46) & 0x1000) != 0 && !(unsigned int)IsPrecisionTouchPadEnabled() )
    {
      RIMRevokeConfigurationChange(i, 87LL);
    }
    else if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
    {
      v2 = *((_QWORD *)i + 59);
      if ( *(_QWORD *)(v2 + 392) )
      {
        v5 = *((_OWORD *)i + 13);
        ReadTiltCalibrationData(v2, &v5);
      }
      else
      {
        PTPTelemetry::OnUserLogin();
      }
    }
    v3 = *((_DWORD *)i + 50);
    if ( (v3 & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)i + 59) + 24LL) == 7 && (v3 & 0x400) != 0 )
    {
      if ( (*((_DWORD *)&gTouchPadParameters + 5) & 0x10000) != 0 )
        v4 = (unsigned int)*((char *)&gTouchPadParameters + 21);
      else
        v4 = 0LL;
      RIMConfigureDeviceFeedback(i, v4);
    }
  }
  CInpPushLock::UnLockShared(Lock);
}

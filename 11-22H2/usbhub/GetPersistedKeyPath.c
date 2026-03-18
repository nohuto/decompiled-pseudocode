/*
 * XREFs of GetPersistedKeyPath @ 0x1C005C6E4
 * Callers:
 *     ReadTestOverrideValue @ 0x1C005C974 (ReadTestOverrideValue.c)
 *     UpdateUcmIsPresentBit @ 0x1C005CC80 (UpdateUcmIsPresentBit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C005D000 (WPP_RECORDER_SF_Ld.c)
 */

__int64 __fastcall GetPersistedKeyPath(_QWORD *a1)
{
  int PersistedStateLocation; // ebx
  int v3; // edx
  void *Pool2; // rdi
  int v5; // r8d
  int v6; // r9d
  int v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"USB",
                             0LL,
                             L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB",
                             0LL,
                             0LL,
                             0,
                             &v11);
  if ( PersistedStateLocation == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, v11, 1430540870LL);
    if ( Pool2 )
    {
      PersistedStateLocation = RtlGetPersistedStateLocation(
                                 L"USB",
                                 0LL,
                                 L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB",
                                 0LL,
                                 Pool2,
                                 v11,
                                 0LL);
      if ( PersistedStateLocation >= 0 )
      {
        *a1 = Pool2;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v10) = PersistedStateLocation;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0xCu,
            (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
            v10);
        }
        ExFreePoolWithTag(Pool2, 0);
      }
    }
    else
    {
      PersistedStateLocation = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ld(WPP_GLOBAL_Control->DeviceExtension, v3, v5, v6, v8, v11);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = PersistedStateLocation;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xAu,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v9);
  }
  return (unsigned int)PersistedStateLocation;
}

/*
 * XREFs of ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x1C01532FC
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C010E3DC (WdmlibIoCreateDeviceSecure.c)
 */

__int64 __fastcall ndisLwmInitializeSubsystem(__int64 a1, __int64 a2, __int64 a3, ULONG a4)
{
  unsigned int v4; // ebx
  ULONG v6; // [rsp+20h] [rbp-68h]
  BOOLEAN v7; // [rsp+28h] [rbp-60h]
  const GUID *v8; // [rsp+38h] [rbp-50h]
  _UNICODE_STRING v9; // [rsp+50h] [rbp-38h] BYREF
  __int128 v10; // [rsp+60h] [rbp-28h] BYREF
  __int64 v11; // [rsp+70h] [rbp-18h]

  v9.Buffer = (wchar_t *)&v10;
  v11 = *(_QWORD *)L"lwm";
  v10 = *(_OWORD *)L"\\Device\\lwm";
  *(_QWORD *)&v9.Length = 1572886LL;
  v4 = WdmlibIoCreateDeviceSecure(
         (PDRIVER_OBJECT)ndisDriverObject,
         0,
         &v9,
         a4,
         v6,
         v7,
         &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R,
         v8,
         &ndisLwmDeviceObject);
  if ( v4 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_05df6b0dfc6d3b8949b7b3d56ccb6053_Traceguids);
    return v4;
  }
  else
  {
    ndisLwmDeviceObject->Flags |= 0x10u;
    return 0LL;
  }
}

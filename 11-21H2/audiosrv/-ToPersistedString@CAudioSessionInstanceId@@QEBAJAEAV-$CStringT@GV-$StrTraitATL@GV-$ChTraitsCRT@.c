/*
 * XREFs of ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001DB80
 * Callers:
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180003080 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18000FDF4 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?GetPersistedIdentifier@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18003D4C0 (-GetPersistedIdentifier@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003F0A8 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800D7F80 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001C260 (-ToMigratedString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001C6E0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x18001E830 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001EB50 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001EC10 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSessionInstanceId::ToPersistedString(_QWORD *a1, __int64 *a2, int a3)
{
  int v6; // eax
  int v7; // ebx
  _QWORD *v8; // rdx
  _QWORD *v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-20h] BYREF

  v11 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  v12[0] = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  if ( a3 )
    v6 = CAudioEndpointId::ToMigratedString(a1, &v11);
  else
    v6 = CAudioEndpointId::ToString(a1, &v11);
  if ( v6 < 0 || (v7 = CAppAudioSessionId::ToString(a1 + 1, v12), v7 < 0) )
    JUMPOUT(0x180080DC1LL);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
    &v11,
    L"%",
    L"%%");
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
    &v11,
    L"|",
    L"%b");
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
    v12,
    L"%",
    L"%%");
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
    v12,
    L"|",
    L"%b");
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
    a2,
    L"%s|%s",
    v11,
    v12[0]);
  v8 = (_QWORD *)(v12[0] - 24LL);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v12[0] - 24LL + 16)) <= 0 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  v9 = (_QWORD *)(v11 - 24);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v11 - 24 + 16)) <= 0 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
  return (unsigned int)v7;
}

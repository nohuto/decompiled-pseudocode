/*
 * XREFs of ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800B16B8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003C2B8 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18003E27C (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::UpdateSDRToHDRBoost(CDesktopManager *this, HMONITOR a2, float a3)
{
  int AllDisplaysNoRef; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+44h] [rbp-24h]
  unsigned int v17; // [rsp+48h] [rbp-20h]

  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 17), (__int64)&v14);
  v6 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef >= 0 )
  {
    v7 = 0LL;
    if ( v17 )
    {
      v8 = v14;
      while ( 1 )
      {
        v9 = (unsigned int)v7;
        if ( *(HMONITOR *)(*(_QWORD *)(v14 + 8 * v7) + 16LL) == a2 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v17 )
          goto LABEL_14;
      }
      if ( (unsigned int)IsHDRDisplay(a2) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8 * v9) + 8LL);
        if ( v10 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
          v6 = v11;
          if ( v11 >= 0 )
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
            v6 = v12;
            if ( v12 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x46Fu);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x465u);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x45Au);
  }
LABEL_14:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v14);
  return v6;
}

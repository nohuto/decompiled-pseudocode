/*
 * XREFs of ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800B5C2C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001DAC0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003C70C (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::UpdateSDRToHDRBoost(CDesktopManager *this, HMONITOR a2, float a3)
{
  int AllDisplaysNoRef; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+44h] [rbp-24h]
  unsigned int v16; // [rsp+48h] [rbp-20h]

  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)&v13);
  v6 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef >= 0 )
  {
    v7 = 0LL;
    if ( v16 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v13 + 8 * v7);
        if ( *(HMONITOR *)(v8 + 16) == a2 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v16 )
          goto LABEL_13;
      }
      if ( *(_BYTE *)(v8 + 272) )
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( v9 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 40LL))(v9, v8, v16, v13);
          v6 = v10;
          if ( v10 >= 0 )
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
            v6 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x457u);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x44Du);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x442u);
  }
LABEL_13:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v13);
  return v6;
}

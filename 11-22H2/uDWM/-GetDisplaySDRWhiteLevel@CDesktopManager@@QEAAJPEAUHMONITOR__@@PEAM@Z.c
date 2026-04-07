/*
 * XREFs of ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800B4ECC
 * Callers:
 *     ?_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800D4880 (-_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D55A0 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003C70C (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180054A64 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18005B788 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@$$CBVCDWMDisplay@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3B64 (--1-$ComPtr@$$CBVCDWMDisplay@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopManager::GetDisplaySDRWhiteLevel(CDesktopManager *this, HMONITOR a2, float *a3)
{
  CDWMDisplaySet *v6; // rcx
  int AllDisplaysNoRef; // eax
  unsigned int v8; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int PrimaryDisplay; // eax
  CDWMDisplay *v13; // rbx
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rdx
  float v18; // xmm0_4
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  int v20; // [rsp+30h] [rbp-10h]
  int v21; // [rsp+34h] [rbp-Ch]
  unsigned int v22; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CDWMDisplay *v24; // [rsp+68h] [rbp+28h] BYREF

  *a3 = 1.0;
  v6 = (CDWMDisplaySet *)*((_QWORD *)this + 18);
  if ( a2 )
  {
    v19 = 0LL;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef((__int64)v6, (__int64)&v19);
    v8 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE7C,
        (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)AllDisplaysNoRef);
      DynArrayImpl<0>::~DynArrayImpl<0>(&v19);
      return v8;
    }
    v10 = 0LL;
    if ( v22 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v19 + 8 * v10);
        if ( *(HMONITOR *)(v11 + 16) == a2 )
          break;
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= v22 )
          goto LABEL_11;
      }
      if ( *(_BYTE *)(v11 + 272) )
        *a3 = *(float *)(v11 + 240);
    }
LABEL_11:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v19);
  }
  else
  {
    v24 = 0LL;
    PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(v6, &v24);
    v8 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE8C,
        (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)PrimaryDisplay);
      Microsoft::WRL::ComPtr<CDWMDisplay const>::~ComPtr<CDWMDisplay const>(&v24);
      return v8;
    }
    v13 = v24;
    if ( *((_BYTE *)v24 + 272) )
    {
      *a3 = *((float *)v24 + 60);
    }
    else
    {
      v19 = 0LL;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v14 = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)&v19);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE95,
          (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
          (const char *)(unsigned int)v14);
        DynArrayImpl<0>::~DynArrayImpl<0>(&v19);
        CDWMDisplay::Release(v13);
        return v15;
      }
      if ( v22 )
      {
        v16 = v19;
        v17 = v22;
        do
        {
          if ( *(_BYTE *)(*(_QWORD *)v16 + 272LL) )
          {
            v18 = *(float *)(*(_QWORD *)v16 + 240LL);
            if ( v18 > *a3 )
              *a3 = v18;
          }
          v16 += 8LL;
          --v17;
        }
        while ( v17 );
      }
      DynArrayImpl<0>::~DynArrayImpl<0>(&v19);
    }
    CDWMDisplay::Release(v13);
  }
  return 0LL;
}

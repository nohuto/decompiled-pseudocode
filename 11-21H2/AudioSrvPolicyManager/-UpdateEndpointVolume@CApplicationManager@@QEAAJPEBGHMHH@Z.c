/*
 * XREFs of ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18002504C
 * Callers:
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x18002A1C8 (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002A418 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_Sd @ 0x18001E018 (WPP_SF_Sd.c)
 *     WPP_SF_Sg @ 0x180025A64 (WPP_SF_Sg.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::UpdateEndpointVolume(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        int a3,
        float a4,
        int a5,
        int a6)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // edi
  unsigned int v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-48h]
  double v19; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CApplicationManager *v21; // [rsp+70h] [rbp+8h] BYREF

  v21 = this;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v21 = 0LL;
  v9 = *(_QWORD *)g_VolumeProvider;
  v21 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, CApplicationManager **))(v9 + 40))(
          g_VolumeProvider,
          a2,
          &v21);
  v13 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7E,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v10);
    if ( v21 )
      (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v21 + 16LL))(v21);
    if ( !v8 )
      return v13;
    goto LABEL_5;
  }
  if ( a5 )
  {
    v15 = a6;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v18 = a6;
      WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, a2, v18);
    }
    v16 = (*(__int64 (__fastcall **)(CApplicationManager *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v21 + 144LL))(
            v21,
            v15,
            &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
            0LL);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB85,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v16);
      if ( v21 )
        (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v21 + 16LL))(v21);
      if ( !v8 )
        return v13;
      goto LABEL_5;
    }
  }
  if ( a3 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v19 = a4;
      WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, v12, (_DWORD)a2, SLOBYTE(v19));
    }
    v17 = (*(__int64 (__fastcall **)(CApplicationManager *, __int64, __int64 *, _QWORD))(*(_QWORD *)v21 + 56LL))(
            v21,
            v11,
            &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
            0LL);
    v13 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8D,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v17);
      if ( v21 )
        (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v21 + 16LL))(v21);
      if ( !v8 )
        return v13;
LABEL_5:
      LeaveCriticalSection(v8);
      return v13;
    }
  }
  if ( v21 )
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}

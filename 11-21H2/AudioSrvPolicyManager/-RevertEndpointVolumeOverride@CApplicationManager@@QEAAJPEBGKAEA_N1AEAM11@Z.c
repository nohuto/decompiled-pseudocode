/*
 * XREFs of ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x1800226F4
 * Callers:
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x18002A1C8 (--1CAastPreStartContext@@UEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     WPP_SF_dS @ 0x180025C64 (WPP_SF_dS.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::RevertEndpointVolumeOverride(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        DWORD a3,
        bool *a4,
        bool *a5,
        float *a6,
        bool *a7,
        bool *a8)
{
  struct _RTL_CRITICAL_SECTION *v11; // rsi
  bool *v12; // r14
  bool *v13; // r15
  bool *v14; // rbx
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct TSSession *v20; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+88h] [rbp+20h]

  v20 = this;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v21 = v11;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      49,
      (unsigned int)&WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids,
      a3,
      (__int64)a2);
  }
  *a4 = 0;
  v12 = a5;
  *a5 = 0;
  v13 = a7;
  *a7 = 0;
  v14 = (bool *)g_ApplicationManager + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  a5 = v14;
  v15 = TsSessionFromSessionId(a3, 1, &v20);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D8,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v15);
    if ( !v14 )
      goto LABEL_11;
LABEL_10:
    LeaveCriticalSection((LPCRITICAL_SECTION)v14);
LABEL_11:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v16);
    }
    AudPolicyLogError("CApplicationManager::RevertEndpointVolumeOverride", 2921, v16);
    goto LABEL_19;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, bool *, bool *, float *, bool *, bool *))(**((_QWORD **)v20 + 130) + 40LL))(
          *((_QWORD *)v20 + 130),
          a2,
          a4,
          v12,
          a6,
          v13,
          a8);
  v16 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7DA,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v17);
    if ( !v14 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v14 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v14);
  v16 = 0;
LABEL_19:
  if ( v11 )
    LeaveCriticalSection(v11);
  return v16;
}

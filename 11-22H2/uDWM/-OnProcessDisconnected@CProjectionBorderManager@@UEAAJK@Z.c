/*
 * XREFs of ?OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z @ 0x180063B50
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18004F6E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2BD0 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2EF0 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::OnProcessDisconnected(struct _RTL_GENERIC_TABLE *this, int a2)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  _DWORD *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r8d
  int v9; // edi
  unsigned int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // r14d
  int v14; // eax
  _DWORD *v15; // rax
  unsigned int v16; // esi
  __int64 v17; // rax
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // r14d
  unsigned int v22; // [rsp+20h] [rbp-30h]
  __int128 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h]
  unsigned int v25; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  PVOID RestartKey; // [rsp+90h] [rbp+40h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+A8h] [rbp+58h] BYREF

  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v4 = 0;
  v5 = 0;
  v25 = 0;
  while ( 1 )
  {
    v6 = RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
    if ( !v6 )
      break;
    if ( v6[1] == a2 )
    {
      v7 = *(_QWORD *)v6;
      v28 = v7;
      v8 = v5 + 1;
      if ( v5 + 1 < v5 )
      {
        v9 = -2147024362;
        v10 = 181;
LABEL_11:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v10, 0LL);
        v11 = (unsigned int)v9;
        v12 = 953LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)v11,
          v22);
        goto LABEL_34;
      }
      if ( v8 > v4 )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v23, 8, 1, &v28);
        if ( v9 < 0 )
        {
          v10 = 192;
          goto LABEL_11;
        }
        v5 = v25;
        v4 = HIDWORD(v24);
      }
      else
      {
        *(_QWORD *)(v23 + 8LL * v5++) = v7;
        v25 = v8;
      }
    }
  }
  v13 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)(v23 + 8LL * v13);
      v14 = CProjectionBorderManager::StopWindowCapture(
              (CProjectionBorderManager *)this,
              (const struct DWM_CAPTURE_TOKEN *)&v28);
      v9 = v14;
      if ( v14 < 0 )
        break;
      if ( ++v13 >= v5 )
        goto LABEL_15;
    }
    v12 = 959LL;
    goto LABEL_22;
  }
LABEL_15:
  RestartKey = 0LL;
  v25 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v23, 8u);
  v15 = RtlEnumerateGenericTableWithoutSplaying(this + 7, &RestartKey);
  v16 = v25;
  while ( v15 )
  {
    if ( v15[1] == a2 )
    {
      v17 = *(_QWORD *)v15;
      v28 = v17;
      v18 = v16 + 1;
      if ( v16 + 1 < v16 )
      {
        v9 = -2147024362;
        v19 = 181;
        goto LABEL_29;
      }
      if ( v18 > HIDWORD(v24) )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v23, 8, 1, &v28);
        if ( v9 < 0 )
        {
          v19 = 192;
LABEL_29:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v19, 0LL);
          v11 = (unsigned int)v9;
          v12 = 970LL;
          goto LABEL_23;
        }
        v16 = v25;
      }
      else
      {
        *(_QWORD *)(v23 + 8LL * v16++) = v17;
        v25 = v18;
      }
    }
    v15 = RtlEnumerateGenericTableWithoutSplaying(this + 7, &RestartKey);
  }
  v20 = 0;
  if ( v16 )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)(v23 + 8LL * v20);
      v14 = CProjectionBorderManager::StopDisplayCapture(
              (CProjectionBorderManager *)this,
              (const struct DWM_CAPTURE_TOKEN *)&v28);
      v9 = v14;
      if ( v14 < 0 )
        break;
      if ( ++v20 >= v16 )
        goto LABEL_33;
    }
    v12 = 976LL;
LABEL_22:
    v11 = (unsigned int)v14;
    goto LABEL_23;
  }
LABEL_33:
  v9 = 0;
LABEL_34:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v23);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return (unsigned int)v9;
}

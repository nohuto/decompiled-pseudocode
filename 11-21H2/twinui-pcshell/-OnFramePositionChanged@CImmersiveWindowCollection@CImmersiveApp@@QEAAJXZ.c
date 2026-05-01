/*
 * XREFs of ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18006ABA4
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x18006AB90 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18006C584 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x180040BC4 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x180041B6C (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18006B42C (McGenEventWrite_EventWriteTransfer.c)
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18006B480 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18006B4C0 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18007AC50 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800C6880 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char v2; // al
  int v3; // eax
  unsigned int v4; // esi
  bool v5; // zf
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  int v8; // edi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _DWORD *v11; // rdi
  const struct APPLICATION_VIEW_DATA *v12; // r8
  __int128 v14; // xmm0
  __m128i v15; // xmm1
  unsigned __int64 v16; // r14
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  int v26; // r15d
  __int64 v27; // r8
  int v28; // eax
  __int128 v29; // xmm1
  __int64 v30; // xmm0_8
  int v31; // eax
  int v32; // [rsp+20h] [rbp-188h]
  char v33[8]; // [rsp+30h] [rbp-178h] BYREF
  int v34; // [rsp+38h] [rbp-170h] BYREF
  int v35; // [rsp+40h] [rbp-168h] BYREF
  int v36; // [rsp+48h] [rbp-160h] BYREF
  int v37; // [rsp+50h] [rbp-158h] BYREF
  int v38; // [rsp+58h] [rbp-150h] BYREF
  __int128 v39; // [rsp+60h] [rbp-148h] BYREF
  __int128 v40; // [rsp+70h] [rbp-138h]
  __int128 v41; // [rsp+80h] [rbp-128h]
  RECT rcSrc; // [rsp+90h] [rbp-118h] BYREF
  _OWORD v43[2]; // [rsp+A0h] [rbp-108h] BYREF
  __int128 i; // [rsp+C0h] [rbp-E8h]
  char v45[16]; // [rsp+100h] [rbp-A8h] BYREF
  int *v46; // [rsp+110h] [rbp-98h]
  int v47; // [rsp+118h] [rbp-90h]
  int v48; // [rsp+11Ch] [rbp-8Ch]
  int *v49; // [rsp+120h] [rbp-88h]
  int v50; // [rsp+128h] [rbp-80h]
  int v51; // [rsp+12Ch] [rbp-7Ch]
  char v52[16]; // [rsp+130h] [rbp-78h] BYREF
  int *v53; // [rsp+140h] [rbp-68h]
  int v54; // [rsp+148h] [rbp-60h]
  int v55; // [rsp+14Ch] [rbp-5Ch]
  int *v56; // [rsp+150h] [rbp-58h]
  int v57; // [rsp+158h] [rbp-50h]
  int v58; // [rsp+15Ch] [rbp-4Ch]
  char v59[16]; // [rsp+160h] [rbp-48h] BYREF
  int *v60; // [rsp+170h] [rbp-38h]
  int v61; // [rsp+178h] [rbp-30h]
  int v62; // [rsp+17Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 248LL))(*((_QWORD *)this + 19));
  if ( v2 != *((_BYTE *)this + 201) )
  {
    *((_BYTE *)this + 201) = v2;
    if ( v2 )
      CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(this, 0, 0);
    else
      CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(this, 0);
    CImmersiveApp::_UpdateAppStateAndSendNotifications(*((CImmersiveApp **)this + 20));
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 19) + 120LL))(*((_QWORD *)this + 19), &v39);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BE1,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v3,
      v32);
  }
  else
  {
    v5 = *((_DWORD *)this + 8) == -1;
    v6 = *(__m128i *)((char *)this + 92);
    v7 = *(__m128i *)((char *)this + 108);
    v43[0] = *(_OWORD *)((char *)this + 76);
    LODWORD(v41) = _mm_cvtsi128_si32(v7);
    DWORD2(v40) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
    LODWORD(v40) = _mm_cvtsi128_si32(v6);
    if ( !v5 && *((_DWORD *)this + 19) != -1 )
    {
      v14 = *((_OWORD *)this + 2);
      v15 = *((__m128i *)this + 3);
      DWORD2(i) = *((_DWORD *)this + 18);
      v43[0] = v14;
      *(_QWORD *)&i = *((_QWORD *)this + 8);
      HIDWORD(v40) = _mm_srli_si128(v15, 8).m128i_i32[1];
    }
    if ( (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 19) + 272LL))(*((_QWORD *)this + 19), v33) >= 0
      && v33[0] != *((_BYTE *)this + 203) )
    {
      v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 264LL))(
              *((_QWORD *)this + 19),
              (unsigned int)-(v33[0] == 0));
      if ( v31 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E2B,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v31,
          v32);
      *((_BYTE *)this + 203) = v33[0];
    }
    v8 = *((_DWORD *)this + 53) & 2;
    if ( (*(int (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)this + 19) + 128LL))(*((_QWORD *)this + 19), &rcSrc) >= 0 )
      CopyRect((LPRECT)this + 1, &rcSrc);
    v4 = 0;
    v9 = v40;
    *(_OWORD *)((char *)this + 76) = v39;
    v10 = v41;
    *(_OWORD *)((char *)this + 92) = v9;
    *(_OWORD *)((char *)this + 108) = v10;
    if ( *((_QWORD *)this + 22) && !v8 )
    {
      if ( (v11 = (_DWORD *)((char *)this + 16), !EqualRect((const RECT *)this, (const RECT *)this + 1))
        && *v11 <= *((_DWORD *)this + 6)
        && *((_DWORD *)this + 5) <= *((_DWORD *)this + 7)
        || !ImmersiveApplicationLayout::AreAppViewDataEqual(
              (CImmersiveApp::CImmersiveWindowCollection *)((char *)this + 32),
              (CImmersiveApp::CImmersiveWindowCollection *)((char *)this + 76),
              v12) )
      {
        if ( *v11 <= *((_DWORD *)this + 6) && *((_DWORD *)this + 5) <= *((_DWORD *)this + 7) )
        {
          if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo(this) )
            CSplashScreen::OnSizeChanged(*((CSplashScreen **)this + 31), (const struct tagRECT *)this + 1);
          v16 = 0LL;
          v17 = *(_OWORD *)((char *)this + 92);
          v43[0] = *(_OWORD *)((char *)this + 76);
          v18 = *(_OWORD *)((char *)this + 108);
          v43[1] = v17;
          for ( i = v18; v16 < *((_QWORD *)this + 22); ++v16 )
          {
            v19 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v16);
            (*(void (__fastcall **)(__int64, char *, _OWORD *))(*(_QWORD *)v19 + 64LL))(v19, (char *)this + 16, v43);
            if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo(this)
              && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
            {
              v20 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v16);
              v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
              v62 = 0;
              v34 = v21;
              v61 = 4;
              v60 = &v34;
              McGenEventWrite_EventWriteTransfer(
                &MICROSOFT_TWINUI_PUBLISHER_Context,
                &WindowLayoutChange_Start,
                v22,
                2LL,
                v59);
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
              {
                v23 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v16);
                v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
                v26 = ~v24;
                if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
                {
                  v35 = 0;
                  v48 = 0;
                  v51 = 0;
                  v46 = &v35;
                  v36 = ~v24;
                  v49 = &v36;
                  v47 = 4;
                  v50 = 4;
                  McGenEventWrite_EventWriteTransfer(
                    &MICROSOFT_TWINUI_PUBLISHER_Context,
                    &PerfTrack_ModernApp_ResizeVisibleComplete_Start,
                    v25,
                    3LL,
                    v45);
                  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
                  {
                    v37 = 0;
                    v55 = 0;
                    v58 = 0;
                    v53 = &v37;
                    v38 = v26;
                    v56 = &v38;
                    v54 = 4;
                    v57 = 4;
                    McGenEventWrite_EventWriteTransfer(
                      &MICROSOFT_TWINUI_PUBLISHER_Context,
                      &PerfTrack_ModernApp_ResizeResponsive_Start,
                      v27,
                      3LL,
                      v52);
                  }
                }
              }
            }
          }
          v28 = *((_DWORD *)this + 29);
          v29 = *(_OWORD *)((char *)this + 92);
          *((_OWORD *)this + 2) = *(_OWORD *)((char *)this + 76);
          v30 = *(_QWORD *)((char *)this + 108);
          *((_OWORD *)this + 3) = v29;
          *((_QWORD *)this + 8) = v30;
          *((_DWORD *)this + 18) = v28;
          CopyRect((LPRECT)this, (const RECT *)this + 1);
        }
      }
    }
  }
  return v4;
}

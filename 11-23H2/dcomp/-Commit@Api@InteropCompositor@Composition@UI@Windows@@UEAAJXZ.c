/*
 * XREFs of ?Commit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ @ 0x180024F90
 * Callers:
 *     ?Commit@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJXZ @ 0x1800ABB70 (-Commit@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJXZ.c)
 *     ?Commit@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJXZ @ 0x1800ABB90 (-Commit@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJXZ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     ?CheckCompleted@CompositionBatch@Composition@UI@Windows@@AEAA_NXZ @ 0x180010E0C (-CheckCompleted@CompositionBatch@Composition@UI@Windows@@AEAA_NXZ.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_56af6cbb798eeaf6704c85839a4943fd___ @ 0x18011F6DC (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_56af6cbb798eeaf6704c85839a4943fd_.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::Commit(
        Windows::UI::Composition::InteropCompositor::Api *this)
{
  char *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r15
  int v4; // eax
  Microsoft::WRL2::NestableRuntimeClass **v5; // r14
  unsigned int v6; // edi
  _QWORD **v7; // rsi
  int v8; // ebp
  _QWORD *v9; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v10; // r14
  _QWORD **v11; // rsi
  _QWORD *v12; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v13; // r14
  _QWORD **v14; // rsi
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rcx
  Windows::UI::Composition::CompositionBatch *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  Microsoft::WRL2::NestableRuntimeClass *v28; // rcx
  unsigned __int64 v29; // rax
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rcx
  Windows::UI::Composition::CompositionBatch *v32; // rcx
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  Microsoft::WRL2::NestableRuntimeClass *v38; // rcx
  unsigned __int64 v39; // rax
  _QWORD *v40; // rdx
  unsigned __int64 v41; // rcx
  Windows::UI::Composition::CompositionBatch *v42; // rcx
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // eax
  Microsoft::WRL2::NestableRuntimeClass *v48; // rcx
  int v49; // eax
  int v50; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (char *)this - 1200;
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1200));
  if ( (v1[32] & 2) != 0 )
  {
    v2 = *((_QWORD *)v1 + 3);
    if ( *(int *)(v2 + 88) > 0 && !*(_BYTE *)(v2 + 97) )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    ++*(_DWORD *)(v2 + 92);
    v3 = (_DWORD *)(v2 + 92);
    v4 = DirectComposition::CDevice::Commit(*((DirectComposition::CDevice **)v1 + 57), (v1[1032] & 2) != 0, 0LL);
    v1[1032] &= ~2u;
    v5 = (Microsoft::WRL2::NestableRuntimeClass **)(v1 + 608);
    v6 = 0;
    v7 = (_QWORD **)(v1 + 624);
    v8 = v4;
    if ( *((_QWORD *)v1 + 76) )
    {
      v20 = *v7;
      if ( *v7 )
      {
        do
        {
          v21 = *v20 & 0xFFFFFFFFFFFFFFFEuLL;
          ++*((_DWORD *)*v5 + 35);
          *v20 = *v5;
          v20 = (_QWORD *)v21;
        }
        while ( v21 );
      }
      v22 = *v5;
      *((_BYTE *)v22 + 128) = 1;
      v23 = Windows::UI::Composition::CompositionBatch::CheckCompleted(v22);
      v25 = (__int64)(v1 + 608);
      if ( v23 )
      {
        Windows::UI::Composition::BatchController::MigrateBatch(v25, v24, 0LL, 3);
        LOBYTE(v26) = 1;
        v27 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v1 + 79) + 440LL) + 48LL))(
                *(_QWORD *)(*((_QWORD *)v1 + 79) + 440LL),
                v26);
        if ( v27 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xCB7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
            (const char *)(unsigned int)v27,
            v50);
      }
      else
      {
        Windows::UI::Composition::BatchController::MigrateBatch(v25, v24, 0LL, 2);
      }
      v28 = *v5;
      if ( *v5 )
      {
        *v5 = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v28);
      }
    }
    else
    {
      v9 = *v7;
      if ( *v7 )
      {
        do
        {
          v29 = *v9 & 0xFFFFFFFFFFFFFFFEuLL;
          *v9 = 0LL;
          v9 = (_QWORD *)v29;
        }
        while ( v29 );
      }
    }
    v10 = (Microsoft::WRL2::NestableRuntimeClass **)(v1 + 680);
    *v7 = 0LL;
    v11 = (_QWORD **)(v1 + 696);
    if ( *((_QWORD *)v1 + 85) )
    {
      v30 = *v11;
      if ( *v11 )
      {
        do
        {
          v31 = *v30 & 0xFFFFFFFFFFFFFFFEuLL;
          ++*((_DWORD *)*v10 + 35);
          *v30 = *v10;
          v30 = (_QWORD *)v31;
        }
        while ( v31 );
      }
      v32 = *v10;
      *((_BYTE *)v32 + 128) = 1;
      v33 = Windows::UI::Composition::CompositionBatch::CheckCompleted(v32);
      v35 = (__int64)(v1 + 680);
      if ( v33 )
      {
        Windows::UI::Composition::BatchController::MigrateBatch(v35, v34, 0LL, 3);
        LOBYTE(v36) = 1;
        v37 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v1 + 88) + 440LL) + 48LL))(
                *(_QWORD *)(*((_QWORD *)v1 + 88) + 440LL),
                v36);
        if ( v37 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xCB7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
            (const char *)(unsigned int)v37,
            v50);
      }
      else
      {
        Windows::UI::Composition::BatchController::MigrateBatch(v35, v34, 0LL, 2);
      }
      v38 = *v10;
      if ( *v10 )
      {
        *v10 = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v38);
      }
    }
    else
    {
      v12 = *v11;
      if ( *v11 )
      {
        do
        {
          v39 = *v12 & 0xFFFFFFFFFFFFFFFEuLL;
          *v12 = 0LL;
          v12 = (_QWORD *)v39;
        }
        while ( v39 );
      }
    }
    v13 = (Microsoft::WRL2::NestableRuntimeClass **)(v1 + 752);
    *v11 = 0LL;
    v14 = (_QWORD **)(v1 + 768);
    if ( *((_QWORD *)v1 + 94) )
    {
      v40 = *v14;
      if ( *v14 )
      {
        do
        {
          v41 = *v40 & 0xFFFFFFFFFFFFFFFEuLL;
          ++*((_DWORD *)*v13 + 35);
          *v40 = *v13;
          v40 = (_QWORD *)v41;
        }
        while ( v41 );
      }
      v42 = *v13;
      *((_BYTE *)v42 + 128) = 1;
      v43 = Windows::UI::Composition::CompositionBatch::CheckCompleted(v42);
      v45 = (__int64)(v1 + 752);
      if ( v43 )
      {
        Windows::UI::Composition::BatchController::MigrateBatch(v45, v44, 0LL, 3);
        LOBYTE(v46) = 1;
        v47 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v1 + 97) + 440LL) + 48LL))(
                *(_QWORD *)(*((_QWORD *)v1 + 97) + 440LL),
                v46);
        if ( v47 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xCB7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
            (const char *)(unsigned int)v47,
            v50);
      }
      else
      {
        Windows::UI::Composition::BatchController::MigrateBatch(v45, v44, 0LL, 2);
      }
      v48 = *v13;
      if ( *v13 )
      {
        *v13 = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v48);
      }
    }
    else
    {
      v15 = *v14;
      if ( *v14 )
      {
        do
        {
          v19 = *v15 & 0xFFFFFFFFFFFFFFFEuLL;
          *v15 = 0LL;
          v15 = (_QWORD *)v19;
        }
        while ( v19 );
      }
    }
    *v14 = 0LL;
    if ( v8 >= 0 && (v1[452] & 2) != 0 )
    {
      v49 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 57) + 32LL))(*((_QWORD *)v1 + 57));
      v8 = v49;
      if ( v49 < 0 )
        Microsoft::WRL2::FailFast::ForHR(v49, retaddr);
    }
    v16 = *((_QWORD *)v1 + 54);
    v1[452] &= ~1u;
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 48LL))(v16, 0LL);
    if ( v17 < 0 )
      Microsoft::WRL2::FailFast::ForHR(v17, retaddr);
    if ( v8 < 0 )
    {
      v6 = v8;
      DoStackCaptureDirect(v8, 0x184u);
      --*v3;
    }
    else
    {
      if ( *((_QWORD *)v1 + 103) )
        Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_56af6cbb798eeaf6704c85839a4943fd___((Microsoft::WRL2::ContextSession *)v1);
      --*v3;
    }
    Microsoft::WRL2::ContextSession::EndApiEntry((Microsoft::WRL2::ContextSession *)v1);
    return v6;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((Microsoft::WRL2::ContextSession *)v1);
    return 2147483667LL;
  }
}

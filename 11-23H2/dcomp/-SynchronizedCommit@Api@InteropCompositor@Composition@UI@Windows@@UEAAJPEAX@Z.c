/*
 * XREFs of ?SynchronizedCommit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAX@Z @ 0x180024D40
 * Callers:
 *     <none>
 * Callees:
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     ?CheckCompleted@CompositionBatch@Composition@UI@Windows@@AEAA_NXZ @ 0x180010E0C (-CheckCompleted@CompositionBatch@Composition@UI@Windows@@AEAA_NXZ.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_56af6cbb798eeaf6704c85839a4943fd___ @ 0x18011F6DC (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_56af6cbb798eeaf6704c85839a4943fd_.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::SynchronizedCommit(
        Windows::UI::Composition::InteropCompositor::Api *this,
        void *a2)
{
  char *v2; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r15
  int v6; // eax
  Microsoft::WRL2::NestableRuntimeClass **v7; // rsi
  _QWORD *v8; // rdx
  int v9; // edi
  Microsoft::WRL2::NestableRuntimeClass **v10; // r14
  _QWORD **v11; // rsi
  _QWORD *v12; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v13; // r14
  _QWORD **v14; // rsi
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  Windows::UI::Composition::CompositionBatch *v23; // rcx
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rcx
  Windows::UI::Composition::CompositionBatch *v32; // rcx
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  Microsoft::WRL2::NestableRuntimeClass *v38; // rcx
  _QWORD *v39; // rdx
  unsigned __int64 v40; // rcx
  Windows::UI::Composition::CompositionBatch *v41; // rcx
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  int v46; // eax
  Microsoft::WRL2::NestableRuntimeClass *v47; // rcx
  int v48; // eax
  unsigned int v49; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (char *)this - 1216;
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1216));
  if ( (v2[32] & 2) != 0 )
  {
    v4 = *((_QWORD *)v2 + 3);
    if ( *(int *)(v4 + 88) > 0 && !*(_BYTE *)(v4 + 97) )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    ++*(_DWORD *)(v4 + 92);
    v5 = (_DWORD *)(v4 + 92);
    v6 = DirectComposition::CDevice::Commit(*((DirectComposition::CDevice **)v2 + 57), (v2[1032] & 2) != 0, a2);
    v2[1032] &= ~2u;
    v7 = (Microsoft::WRL2::NestableRuntimeClass **)(v2 + 608);
    v8 = (_QWORD *)*((_QWORD *)v2 + 78);
    v9 = v6;
    if ( *((_QWORD *)v2 + 76) )
    {
      if ( v8 )
      {
        do
        {
          v22 = *v8 & 0xFFFFFFFFFFFFFFFEuLL;
          ++*((_DWORD *)*v7 + 35);
          *v8 = *v7;
          v8 = (_QWORD *)v22;
        }
        while ( v22 );
      }
      v23 = *v7;
      *((_BYTE *)v23 + 128) = 1;
      v24 = Windows::UI::Composition::CompositionBatch::CheckCompleted(v23);
      v26 = (__int64)(v2 + 608);
      if ( v24 )
      {
        Windows::UI::Composition::BatchController::MigrateBatch(v26, v25, 0LL, 3);
        LOBYTE(v28) = 1;
        v29 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v2 + 79) + 440LL) + 48LL))(
                *(_QWORD *)(*((_QWORD *)v2 + 79) + 440LL),
                v28);
        if ( v29 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xCB7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
            (const char *)(unsigned int)v29,
            v49);
      }
      else
      {
        Windows::UI::Composition::BatchController::MigrateBatch(v26, v25, 0LL, 2);
      }
      v27 = *v7;
      if ( *v7 )
      {
        *v7 = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v27);
      }
    }
    else if ( v8 )
    {
      do
      {
        v20 = *v8 & 0xFFFFFFFFFFFFFFFEuLL;
        *v8 = 0LL;
        v8 = (_QWORD *)v20;
      }
      while ( v20 );
    }
    *((_QWORD *)v2 + 78) = 0LL;
    v10 = (Microsoft::WRL2::NestableRuntimeClass **)(v2 + 680);
    v11 = (_QWORD **)(v2 + 696);
    if ( *((_QWORD *)v2 + 85) )
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
      v35 = (__int64)(v2 + 680);
      if ( v33 )
      {
        Windows::UI::Composition::BatchController::MigrateBatch(v35, v34, 0LL, 3);
        LOBYTE(v36) = 1;
        v37 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v2 + 88) + 440LL) + 48LL))(
                *(_QWORD *)(*((_QWORD *)v2 + 88) + 440LL),
                v36);
        if ( v37 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xCB7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
            (const char *)(unsigned int)v37,
            v49);
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
          v19 = *v12 & 0xFFFFFFFFFFFFFFFEuLL;
          *v12 = 0LL;
          v12 = (_QWORD *)v19;
        }
        while ( v19 );
      }
    }
    v13 = (Microsoft::WRL2::NestableRuntimeClass **)(v2 + 752);
    *v11 = 0LL;
    v14 = (_QWORD **)(v2 + 768);
    if ( *((_QWORD *)v2 + 94) )
    {
      v39 = *v14;
      if ( *v14 )
      {
        do
        {
          v40 = *v39 & 0xFFFFFFFFFFFFFFFEuLL;
          ++*((_DWORD *)*v13 + 35);
          *v39 = *v13;
          v39 = (_QWORD *)v40;
        }
        while ( v40 );
      }
      v41 = *v13;
      *((_BYTE *)v41 + 128) = 1;
      v42 = Windows::UI::Composition::CompositionBatch::CheckCompleted(v41);
      v44 = (__int64)(v2 + 752);
      if ( v42 )
      {
        Windows::UI::Composition::BatchController::MigrateBatch(v44, v43, 0LL, 3);
        LOBYTE(v45) = 1;
        v46 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v2 + 97) + 440LL) + 48LL))(
                *(_QWORD *)(*((_QWORD *)v2 + 97) + 440LL),
                v45);
        if ( v46 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xCB7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
            (const char *)(unsigned int)v46,
            v49);
      }
      else
      {
        Windows::UI::Composition::BatchController::MigrateBatch(v44, v43, 0LL, 2);
      }
      v47 = *v13;
      if ( *v13 )
      {
        *v13 = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v47);
      }
    }
    else
    {
      v15 = *v14;
      if ( *v14 )
      {
        do
        {
          v21 = *v15 & 0xFFFFFFFFFFFFFFFEuLL;
          *v15 = 0LL;
          v15 = (_QWORD *)v21;
        }
        while ( v21 );
      }
    }
    *v14 = 0LL;
    if ( v9 >= 0 && (v2[452] & 2) != 0 )
    {
      v48 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 57) + 32LL))(*((_QWORD *)v2 + 57));
      v9 = v48;
      if ( v48 < 0 )
        Microsoft::WRL2::FailFast::ForHR(v48, retaddr);
    }
    v16 = *((_QWORD *)v2 + 54);
    v2[452] &= ~1u;
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 48LL))(v16, 0LL);
    if ( v17 < 0 )
      Microsoft::WRL2::FailFast::ForHR(v17, retaddr);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FA600, 2u, v9, 0x5FDu, 0LL);
      --*v5;
    }
    else
    {
      if ( *((_QWORD *)v2 + 103) )
        Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_56af6cbb798eeaf6704c85839a4943fd___((Microsoft::WRL2::ContextSession *)v2);
      v9 = 0;
      --*v5;
    }
    Microsoft::WRL2::ContextSession::EndApiEntry((Microsoft::WRL2::ContextSession *)v2);
    return (unsigned int)v9;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((Microsoft::WRL2::ContextSession *)v2);
    return 2147483667LL;
  }
}

/*
 * XREFs of ?CreateCommitCompletionWaiter@CompositorCommon@Composition@UI@Windows@@QEAAJ_NPEAPEAVCommitCompletionWaiter@234@@Z @ 0x1800838E8
 * Callers:
 *     ?RequestCommitAsync@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180083860 (-RequestCommitAsync@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIAsyncAction@Founda.c)
 *     ?EnsurePreviousCommitCompletedAsync@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@6@@Z @ 0x1800B67C0 (-EnsurePreviousCommitCompletedAsync@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VCommitCompletionWaiter@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAK@Details@WRL2@Microsoft@@YAJPEAPEAVCommitCompletionWaiter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAK@Z @ 0x180083ABC (--$MakeAndInitialize2@VCommitCompletionWaiter@Composition@UI@Windows@@V1234@PEAVCompositor@234@A.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateCommitCompletionWaiter(
        Windows::UI::Composition::CompositorCommon *this,
        char a2,
        struct Windows::UI::Composition::CommitCompletionWaiter **a3)
{
  __int64 v3; // rax
  unsigned int v7; // esi
  int v8; // eax
  int LastError; // ebx
  char v10; // bp
  __int64 i; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // al
  HANDLE EventW; // rax
  const char *v18; // r9
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  bool v21; // zf
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+68h] [rbp+10h] BYREF
  Windows::UI::Composition::CompositorCommon *v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 57);
  v23 = 0LL;
  v7 = *(_DWORD *)(v3 + 416);
  v24 = v7;
  if ( a2 )
    v24 = --v7;
  v25 = this;
  v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CommitCompletionWaiter,Windows::UI::Composition::CommitCompletionWaiter,Windows::UI::Composition::Compositor *,unsigned long &>(
         &v23,
         &v25,
         &v24);
  LastError = v8;
  if ( v8 < 0 )
  {
    v20 = 3821LL;
LABEL_25:
    v19 = (unsigned int)v8;
    goto LABEL_26;
  }
  if ( !*((_QWORD *)this + 128) )
  {
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    *((_QWORD *)this + 128) = EventW;
    if ( !EventW )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xEF7,
                    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
                    v18);
LABEL_27:
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v23);
      return (unsigned int)LastError;
    }
    LastError = (*(__int64 (__fastcall **)(_QWORD, HANDLE, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 57) + 160LL) + 40LL))(
                  *(_QWORD *)(*((_QWORD *)this + 57) + 160LL),
                  EventW,
                  0LL);
    if ( LastError < 0 )
    {
      CloseHandle(*((HANDLE *)this + 128));
      *((_QWORD *)this + 128) = 0LL;
      v19 = (unsigned int)LastError;
      v20 = 3840LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)v19);
      goto LABEL_27;
    }
  }
  v10 = *((_BYTE *)this + 1032) & 1;
  if ( v10 )
    goto LABEL_8;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(Windows::UI::Composition::CompositorCommon *, __int64, void *), Windows::UI::Composition::CompositorCommon *))(**(_QWORD **)(*((_QWORD *)this + 57) + 656LL) + 272LL))(
         *(_QWORD *)(*((_QWORD *)this + 57) + 656LL),
         *((_QWORD *)this + 128),
         Windows::UI::Composition::CompositorCommon::CommitCompletionCallback,
         this);
  LastError = v8;
  if ( v8 < 0 )
  {
    v20 = 3850LL;
    goto LABEL_25;
  }
  *((_BYTE *)this + 1032) |= 1u;
LABEL_8:
  for ( i = *((_QWORD *)this + 127); ; i = *(_QWORD *)(i + 160) )
  {
    if ( !i )
    {
      v12 = v23;
      *((_QWORD *)v23 + 21) = *((_QWORD *)this + 126);
      *((_QWORD *)this + 126) = v12;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(i + 176) <= v7 )
      break;
  }
  v12 = v23;
  *((_QWORD *)v23 + 21) = *(_QWORD *)(i + 168);
  *(_QWORD *)(i + 168) = v12;
LABEL_11:
  *((_QWORD *)v12 + 20) = i;
  v13 = *((_QWORD *)v12 + 21);
  if ( v13 )
    *(_QWORD *)(v13 + 160) = v12;
  else
    *((_QWORD *)this + 127) = v12;
  Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v12);
  if ( a2 )
  {
    if ( !v10 )
      SetEvent(*((HANDLE *)this + 128));
  }
  else
  {
    v15 = *((_BYTE *)this + 452);
    if ( (v15 & 1) == 0 )
    {
      v21 = *((_DWORD *)this + 112) == 0;
      *((_BYTE *)this + 452) = v15 | 1;
      if ( v21 )
        Windows::UI::Composition::CompositorCommon::EnableMessageGroup(this, v14);
    }
    *((_BYTE *)this + 1032) |= 2u;
  }
  *a3 = v12;
  return 0LL;
}

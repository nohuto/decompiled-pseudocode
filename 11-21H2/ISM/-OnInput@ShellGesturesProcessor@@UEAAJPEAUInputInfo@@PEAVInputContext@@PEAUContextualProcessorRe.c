/*
 * XREFs of ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180150C00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180080384 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CheckForShellGesture@ShellGesturesRecognizer@@AEAAXAEAURecognitionState@1@_N@Z @ 0x18014EAE8 (-CheckForShellGesture@ShellGesturesRecognizer@@AEAAXAEAURecognitionState@1@_N@Z.c)
 *     ?UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x18014EEC8 (-UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z.c)
 *     ??$?4VShellGesturesClientProxy@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VShellGesturesClientProxy@@@12@@Z @ 0x180150320 (--$-4VShellGesturesClientProxy@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180150AEC (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?PossibleTouchGestureDetected@ShellGestures@InputTraceLogging@@SAXAEBURecognitionState@ShellGesturesRecognizer@@0@Z @ 0x180150E3C (-PossibleTouchGestureDetected@ShellGestures@InputTraceLogging@@SAXAEBURecognitionState@ShellGest.c)
 *     ?TouchGestureDetected@ShellGestures@InputTraceLogging@@SAXAEBURecognitionState@ShellGesturesRecognizer@@@Z @ 0x180151064 (-TouchGestureDetected@ShellGestures@InputTraceLogging@@SAXAEBURecognitionState@ShellGesturesReco.c)
 */

__int64 __fastcall ShellGesturesProcessor::OnInput(
        ShellGesturesProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v5; // rdi
  _DWORD *v6; // r14
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 *v10; // rcx
  __int64 *v11; // rcx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  _OWORD v16[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  _OWORD v18[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v19; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5 = *(_QWORD *)a4;
  if ( *(_DWORD *)a2 != 8 )
  {
    if ( *(_DWORD *)a2 != 0x1000000 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        284LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\s"
                 "hellgesturesprocessor.cpp",
        (const char *)a4);
    v12 = 0;
    if ( *(_QWORD *)(v5 + 224) )
      goto LABEL_34;
    if ( *(_QWORD *)(v5 + 232) )
    {
      v13 = 0;
    }
    else
    {
      if ( !*(_QWORD *)(v5 + 240) )
      {
LABEL_33:
        v12 = -1;
LABEL_34:
        v11 = (__int64 *)((char *)a4 + 80);
        if ( v12 != -1 )
        {
          *((_DWORD *)a4 + 2) = 2;
          Microsoft::WRL::ComPtr<IInputTarget>::operator=<ShellGesturesClientProxy>(v11, (_QWORD *)(v5 + 224));
          return 0LL;
        }
        *((_DWORD *)a4 + 2) = 3;
LABEL_37:
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v11);
        return 0LL;
      }
      v13 = -1;
    }
    v14 = 232LL;
    if ( v13 == -1 )
      v14 = 240LL;
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=((__int64 *)(v5 + 224), (__int64 *)(v5 + v14));
    if ( *(_QWORD *)(v5 + 224) )
      goto LABEL_34;
    goto LABEL_33;
  }
  v6 = (_DWORD *)(v5 + 64);
  if ( !*(_DWORD *)(v5 + 24) || !*v6 )
  {
    ShellGesturesRecognizer::UpdateContactState((ShellGesturesRecognizer *)(v5 + 24), a2);
    ShellGesturesRecognizer::CheckForShellGesture(
      (ShellGesturesRecognizer *)(v5 + 24),
      (struct ShellGesturesRecognizer::RecognitionState *)(v5 + 24),
      1);
    ShellGesturesRecognizer::CheckForShellGesture(
      (ShellGesturesRecognizer *)(v5 + 24),
      (struct ShellGesturesRecognizer::RecognitionState *)(v5 + 64),
      0);
  }
  v7 = *(_OWORD *)(v5 + 24);
  v16[1] = *(_OWORD *)(v5 + 40);
  v8 = *(_OWORD *)v6;
  v16[0] = v7;
  *(_QWORD *)&v7 = *(_QWORD *)(v5 + 56);
  v18[0] = v8;
  *(_QWORD *)&v8 = *(_QWORD *)(v5 + 96);
  v17 = v7;
  v9 = *(_OWORD *)(v5 + 80);
  v19 = v8;
  v18[1] = v9;
  if ( *(_QWORD *)(v5 + 224) )
    goto LABEL_15;
  v10 = (__int64 *)(v5 + 232);
  if ( *(_QWORD *)(v5 + 232) || *(_QWORD *)(v5 + 240) )
  {
    if ( LODWORD(v16[0]) == 1 )
    {
      if ( !*v10 )
        v10 = (__int64 *)(v5 + 240);
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=((__int64 *)(v5 + 224), v10);
    }
    else if ( LODWORD(v16[0]) == 2 )
    {
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v10);
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)(v5 + 240));
    }
  }
  if ( *(_QWORD *)(v5 + 224) )
  {
LABEL_15:
    *((_DWORD *)a4 + 2) = 2;
    Microsoft::WRL::ComPtr<IInputTarget>::operator=<ShellGesturesClientProxy>((__int64 *)a4 + 10, (_QWORD *)(v5 + 224));
    if ( !*(_BYTE *)(v5 + 17) )
    {
      *(_BYTE *)(v5 + 17) = 1;
      InputTraceLogging::ShellGestures::TouchGestureDetected((const struct ShellGesturesRecognizer::RecognitionState *)v16);
    }
    return 0LL;
  }
  if ( *(_QWORD *)(v5 + 232) || *(_QWORD *)(v5 + 240) )
  {
    *((_DWORD *)a4 + 2) = 1;
    v11 = (__int64 *)((char *)a4 + 80);
    goto LABEL_37;
  }
  *((_DWORD *)a4 + 2) = 4;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)a4 + 10);
  if ( LODWORD(v18[0]) == 1 && !*(_BYTE *)(v5 + 18) )
  {
    *(_BYTE *)(v5 + 18) = 1;
    InputTraceLogging::ShellGestures::PossibleTouchGestureDetected(
      (const struct ShellGesturesRecognizer::RecognitionState *)v16,
      (const struct ShellGesturesRecognizer::RecognitionState *)v18);
  }
  return 0LL;
}

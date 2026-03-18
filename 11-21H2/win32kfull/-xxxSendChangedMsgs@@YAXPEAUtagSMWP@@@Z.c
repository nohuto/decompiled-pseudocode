/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     WindowHasShadow @ 0x1C001F374 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001F3A8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0043740 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0043A4C (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     xxxRemoveShadow @ 0x1C0060F54 (xxxRemoveShadow.c)
 *     DwmChildRectChange @ 0x1C006BCDC (DwmChildRectChange.c)
 *     CalcWindowFullScreen @ 0x1C006C0E8 (CalcWindowFullScreen.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00716D0 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C00F4C7C (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ShouldHaveShadow @ 0x1C0107D18 (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C012DDE0 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012E0FC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1C0159B20 (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C0239848 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C0239998 (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1)
{
  __int64 v1; // rbx
  int v2; // ebp
  struct tagWND *v4; // rdi
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v7; // r8d
  __int64 v8; // r8
  struct tagWND **Shadow; // rax
  _QWORD *v10; // rdx
  int v11; // esi
  __int64 v12; // rcx
  const struct tagCVR *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]

  v1 = *((_QWORD *)a1 + 5);
  v2 = *((_DWORD *)a1 + 7);
  v17 = 0LL;
  v18 = 0LL;
  while ( --v2 >= 0 )
  {
    if ( !*(_QWORD *)v1 )
      goto LABEL_37;
    v4 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v1, 1);
    if ( !v4 )
    {
      *(_DWORD *)(v1 + 32) = 6159;
LABEL_5:
      *(_QWORD *)v1 = 0LL;
      goto LABEL_37;
    }
    if ( !IsStillWindowC(*(_QWORD *)(v1 + 8)) )
      goto LABEL_5;
    if ( (*(_DWORD *)(v1 + 32) & 0x40000) != 0 || (*(_DWORD *)(v1 + 32) & 0x18E7) == 0x1807 )
    {
      PostIAMPosChangedNotification((struct tagCVR *)v1, v4);
    }
    else
    {
      v5 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v5 = *ThreadWin32Thread;
      *(_QWORD *)&v17 = *(_QWORD *)(v5 + 416);
      *(_QWORD *)(v5 + 416) = &v17;
      *((_QWORD *)&v17 + 1) = v4;
      HMLockObject(v4);
      v7 = *(_DWORD *)(v1 + 32);
      if ( (v7 & 0x80u) != 0 )
      {
        xxxRemoveShadow(v4);
        v7 = *(_DWORD *)(v1 + 32);
      }
      if ( (v7 & 0x40) != 0 )
      {
        if ( (unsigned int)ShouldHaveShadow(v4) )
          xxxAddShadow(v4);
      }
      else if ( (unsigned int)WindowHasShadow(v4) )
      {
        if ( (v8 & 0x21) == 1 )
        {
          if ( (v8 & 2) == 0 )
            zzzMoveShadow(v4);
        }
        else
        {
          Shadow = (struct tagWND **)FindShadow(v4);
          if ( Shadow )
            zzzApplyShadow(*Shadow, Shadow[1]);
        }
        if ( (*(_DWORD *)(v1 + 32) & 4) == 0 )
          xxxUpdateShadowZorder(v4);
      }
      v10 = (_QWORD *)*((_QWORD *)v4 + 5);
      v11 = *(_DWORD *)(v1 + 32) & 0x9820;
      v12 = v10[11] - v10[13];
      if ( !v12 )
        v12 = v10[12] - v10[14];
      if ( ((*(_DWORD *)(v1 + 156) & 0x200) != 0) != (v12 != 0) )
        WindowMargins::CheckForChanges(v4, 7LL, v8);
      if ( (unsigned int)IsWindowDesktopComposed(v4) && v11 != 6144 )
      {
        DwmChildRectChange(v4);
        DirtyVisRgnTrackers(v4);
      }
      xxxSendPosMessage((ULONG_PTR)v4, 0x47u, (struct tagWINDOWPOS *)v1);
      if ( (*(_DWORD *)(v1 + 156) & 0x40) != 0 )
      {
        ValidateHmonitorNoRip(*(_QWORD *)(v1 + 128));
        xxxNotifyMonitorChanged(v4);
      }
      PostIAMPosChangedNotification((struct tagCVR *)v1, v4);
      NotifyShell::PositioningChanged(v4, (struct tagWND *)v1, v13);
      CalcWindowFullScreen(v4);
      if ( v11 != 6144 )
        xxxWindowEvent(0x800Bu, 1);
      ThreadUnlock1(v15, v14, v16);
    }
LABEL_37:
    v1 += 168LL;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1);
}

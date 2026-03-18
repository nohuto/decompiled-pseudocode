/*
 * XREFs of xxxMNCancel @ 0x1C0230708
 * Callers:
 *     xxxEndMenuLoop @ 0x1C022D580 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C022F774 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNButtonUp @ 0x1C02305F0 (xxxMNButtonUp.c)
 *     xxxMNChar @ 0x1C02309F8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0245A6C (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C024D9FC (xxxMNKeyFilter.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     _PostTransformableMessage @ 0x1C00A755C (_PostTransformableMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C01088E0 (xxxPlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C023346C (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C024E3F8 (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // r13
  int v7; // r12d
  int v8; // r15d
  int v9; // eax
  __int64 v10; // rax
  struct tagWND *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r14d
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[2]; // [rsp+50h] [rbp-39h] BYREF
  int v22; // [rsp+60h] [rbp-29h]
  int v23; // [rsp+64h] [rbp-25h]
  _QWORD v24[3]; // [rsp+68h] [rbp-21h] BYREF
  __int128 v25; // [rsp+80h] [rbp-9h] BYREF
  __int64 v26; // [rsp+90h] [rbp+7h]
  __int128 v27; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+A8h] [rbp+1Fh]
  int v29; // [rsp+F0h] [rbp+67h]

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, *(_QWORD *)a1);
  v23 = **(_DWORD **)v21[0];
  v7 = (**(_DWORD **)v21[0] >> 3) & 1;
  v8 = (**(_DWORD **)v21[0] >> 2) & 1;
  v29 = **(_DWORD **)v21[0] & 1;
  v9 = **(_DWORD **)v21[0];
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v22 = v9 & 0x800;
  v28 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  **(_DWORD **)v21[0] |= 0x8000u;
  if ( gptiCurrent == *(_QWORD *)(a1 + 32) && (**(_DWORD **)v21[0] & 0x80000) == 0 )
  {
    **(_DWORD **)v21[0] |= 0x80000u;
    ThreadLock(*(_QWORD *)(*(_QWORD *)v21[0] + 16LL), (__int64 *)&v25);
    xxxMNCloseHierarchy(*(_QWORD *)v21[0], a1);
    xxxMNSelectItem(v21, a1);
    v10 = v21[0];
    *(_DWORD *)(a1 + 8) &= ~1u;
    v11 = *(struct tagWND **)(*(_QWORD *)v10 + 8LL);
    ThreadLock((__int64)v11, (__int64 *)&v27);
    xxxMNReleaseCapture(a1);
    if ( v7 )
    {
      xxxWindowEvent(7u, *(struct tagWND **)(*(_QWORD *)v21[0] + 16LL), -4, 0, 0);
      v13 = *(_QWORD *)v21[0];
      if ( *(_QWORD *)(*(_QWORD *)v21[0] + 16LL) )
        xxxDestroyWindow(*(_QWORD **)(*(_QWORD *)v21[0] + 16LL));
    }
    if ( v11 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
      v15 = -1;
      v24[2] = -1LL;
      xxxSendMenuSelect((_DWORD)v11, 0, (unsigned int)v24, -1, a1);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
      if ( !v8 )
        v15 = v29 != 0 ? 0xFFFFFFFD : 0;
      xxxWindowEvent(5u, v11, v15, 0, 0);
      if ( !v22 )
        xxxSendMessage((ULONG_PTR)v11);
      if ( a2 )
      {
        xxxPlayEventSound(6LL);
        v16 = (v23 & 0x100) == 0;
        *(_DWORD *)(a1 + 24) = v5;
        if ( v16 )
        {
          if ( v8 || !v7 || (*(_BYTE *)(*((_QWORD *)v11 + 5) + 21LL) & 1) != 0 )
          {
            PostTransformableMessage(v11, a2, v5, a4, 1);
          }
          else if ( a2 >= 0x111 && (a2 <= 0x112 || a2 == 294) )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout((unsigned __int64 *)v11, a2, v5, a4, 0, 0, 0LL, 1, 1);
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 24) = 0;
      }
    }
    ThreadUnlock1(v13, v12, v14);
    ThreadUnlock1(v18, v17, v19);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21);
}

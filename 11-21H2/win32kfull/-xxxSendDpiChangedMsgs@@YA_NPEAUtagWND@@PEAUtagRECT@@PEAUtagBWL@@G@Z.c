/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0078980
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 * Callees:
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     ScaleDPIRect @ 0x1C00B099C (ScaleDPIRect.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0151DB0 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01DEFB0 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E0A3C (xxxAppAdjustDpiCandidateRect.c)
 */

bool __fastcall xxxSendDpiChangedMsgs(struct tagWND *this, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  __int64 v5; // r9
  int v8; // esi
  char v9; // r12
  int v10; // eax
  __int64 v12; // r9
  struct tagRECT *v13; // r10
  char v14; // r15
  __int64 v15; // rdx
  int v16; // r13d
  HWND *i; // rbx
  int v18; // eax
  HWND *j; // rbx
  __int64 v20; // rbx
  struct tagRECT v21; // [rsp+38h] [rbp-30h] BYREF
  struct tagRECT v22; // [rsp+48h] [rbp-20h] BYREF

  v5 = *((_QWORD *)this + 5);
  v8 = 0;
  if ( (*(_BYTE *)(v5 + 288) & 0xF) == 3 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( *(_WORD *)(v5 + 286) )
      return 0;
    v10 = *((_DWORD *)this + 80);
    if ( (v10 & 0x40000) == 0 )
      return 0;
    *((_DWORD *)this + 80) = v10 & 0xFFFBFFFF;
  }
  v22 = 0LL;
  if ( IsTopLevelWindow((__int64)this) )
  {
    v14 = 1;
    if ( (*(_BYTE *)(v12 + 31) & 1) != 0 )
    {
      GetRect((__int64)this, (__int64)&v22, 66);
    }
    else if ( v13 )
    {
      v22 = *v13;
    }
    else
    {
      GetRect((__int64)this, (__int64)&v22, 66);
      if ( a4 )
      {
        v15 = *(unsigned __int16 *)(*((_QWORD *)this + 5) + 284LL);
        if ( a4 != (_WORD)v15 )
        {
          v20 = *(_QWORD *)&v22.left;
          v21 = v22;
          if ( !(unsigned int)xxxAppAdjustDpiCandidateRect(this, v15, &v21, &v22) )
            ScaleDPIRect(
              (unsigned int)&v22,
              (unsigned int)&v22,
              *(unsigned __int16 *)(*((_QWORD *)this + 5) + 284LL),
              a4,
              v20,
              *(__int64 *)&v22.left);
        }
      }
    }
  }
  else
  {
    v14 = 0;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 288LL) & 0xF) == 2 || v9 )
  {
    if ( (*((_DWORD *)this + 80) & 0x100000) == 0 && !v9 )
    {
      if ( v14 )
        v8 = xxxSendDpiChangedMessageToTopLevelWindow(this, &v22);
      return v8 != 0;
    }
    if ( a3 )
    {
      v16 = 0;
      goto LABEL_15;
    }
    a3 = BuildHwndList(this, (const struct tagWND *)1, 0LL, 1);
    v16 = 1;
    if ( a3 )
    {
LABEL_15:
      for ( i = (HWND *)*((_QWORD *)a3 + 1); --i > (HWND *)a3 + 4; v8 |= xxxSendDpiChangedMessageToChildWindow(*i, 1) )
        ;
      if ( v14 )
      {
        v18 = xxxSendDpiChangedMessageToTopLevelWindow(this, &v22);
      }
      else
      {
        v8 |= xxxSendDpiChangedMessageToChildWindow(*(HWND *)this, 1);
        v18 = xxxSendDpiChangedMessageToChildWindow(*(HWND *)this, 0);
      }
      v8 |= v18;
      for ( j = (HWND *)((char *)a3 + 40); (unsigned __int64)j < *((_QWORD *)a3 + 1); ++j )
        v8 |= xxxSendDpiChangedMessageToChildWindow(*j, 0);
      if ( v16 )
        FreeHwndList(a3);
    }
  }
  return v8 != 0;
}

/*
 * XREFs of ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18000B9A0
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800512B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18000BD34 (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18005F908 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::AdvanceTimelines(CDesktopManager *this, double a2, int a3)
{
  double v4; // xmm6_8
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rcx
  struct _SINGLE_LIST_ENTRY *j; // rbx
  struct _SINGLE_LIST_ENTRY *v9; // rsi
  struct _SINGLE_LIST_ENTRY *v10; // rcx
  __int64 v11; // rcx
  char v12; // al
  struct _SINGLE_LIST_ENTRY *v13; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  struct _SINGLE_LIST_ENTRY *v15; // rbx
  char v16; // bp
  CTimelineBase *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _SINGLE_LIST_ENTRY *i; // rbx
  _QWORD v22[2]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimationRecalc_Start,
      a3,
      1,
      (__int64)v22);
  if ( CDesktopManager::s_fTimelineDirty )
  {
    Next = CDesktopManager::s_listTimeline.Next;
    v15 = &CDesktopManager::s_listTimeline;
    CDesktopManager::s_fTimelineDirty = 0;
    v16 = 1;
    if ( CDesktopManager::s_listTimeline.Next )
    {
      do
      {
        v17 = (CTimelineBase *)&Next[-2];
        if ( LODWORD(Next[-1].Next) )
        {
          if ( v16 )
          {
            if ( *((_BYTE *)v17 + 73) )
            {
              v18 = CTimelineBase::UpdateBeforeTickWorker(v17, (CDesktopManager *)((char *)this + 256));
              Next = v15->Next;
              if ( v18 < 0 )
                v16 = 0;
            }
          }
          v15 = Next;
        }
        else
        {
          if ( Next )
            v15->Next = Next->Next;
          (**(void (__fastcall ***)(CTimelineBase *, __int64))v17)(v17, 1LL);
        }
        Next = v15->Next;
      }
      while ( v15->Next );
    }
    v19 = *((_QWORD *)this + 34);
    if ( v19
      && v16
      && (*(int (__fastcall **)(__int64, struct _SINGLE_LIST_ENTRY *, _QWORD))(*(_QWORD *)v19 + 96LL))(v19, Next, 0LL) < 0 )
    {
      v16 = 0;
    }
    v20 = *((_QWORD *)this + 34);
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      *((_QWORD *)this + 34) = 0LL;
    }
    for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
    {
      if ( BYTE1(i[7].Next) )
      {
        if ( !v16 )
          CTimelineBase::JumpToFinalValue((CTimelineBase *)&i[-2]);
        BYTE1(i[7].Next) = 0;
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8)
                                                          + 72LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
         2LL)
    && (GetKeyState(16) & 0xFF80) != 0 )
  {
    v4 = a2 / 20.0;
  }
  v7 = *((_QWORD *)this + 32);
  *((double *)this + 31) = v4 + *((double *)this + 31);
  if ( v7 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, v5, 0LL);
  for ( j = CDesktopManager::s_listTimeline.Next; j; j = j->Next )
  {
    v9 = j + 3;
    if ( !LOBYTE(j[7].Next) )
    {
      v10 = j[6].Next;
      v22[0] = 0LL;
      if ( !v10 || ((int (__fastcall *)(struct _SINGLE_LIST_ENTRY *, _QWORD *))v10->Next[18].Next)(v10, v22) < 0 )
      {
        LOBYTE(j[7].Next) = 1;
LABEL_18:
        v13 = j[6].Next;
        if ( v13 )
        {
          ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *))v13->Next[2].Next)(v13);
          j[6].Next = 0LL;
        }
        if ( *(double *)&j[1].Next < 0.0 )
          v9 = j + 2;
        j[4].Next = v9->Next;
        LOBYTE(j[7].Next) = 1;
        continue;
      }
      v11 = v22[0];
      v12 = v22[0] == 0LL;
      LOBYTE(j[7].Next) = v22[0] == 0LL;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v12 = (char)j[7].Next;
        v22[0] = 0LL;
      }
      if ( v12 )
        goto LABEL_18;
      ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, struct _SINGLE_LIST_ENTRY *))j[6].Next->Next[4].Next)(
        j[6].Next,
        &j[4]);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimationRecalc_Stop,
      v6,
      1,
      (__int64)v22);
}

/*
 * XREFs of ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800B0034
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800538D4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800AF540 (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 *     ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z @ 0x1800AF7A0 (-BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x1800B2594 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800E9B7C (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x1800E9BFC (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 */

__int64 __fastcall CContactManager::HandleKeystateFeedbackMessage(CContactManager *this, char a2, int a3)
{
  const struct tagPOINT *v3; // rbx
  unsigned int v5; // ecx
  int v6; // ebp
  unsigned __int16 *v7; // r15
  unsigned int v8; // r14d
  __int64 *v9; // rsi
  __int64 v10; // r9
  unsigned __int16 *v11; // rax
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int16 *v16; // rax
  _BYTE *v17; // rax
  _BYTE *v18; // rcx
  CTrackingTooltip *v19; // rcx
  CTrackingTooltip *v20; // rcx
  CTrackingTooltip *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-38h]

  v3 = 0LL;
  v5 = *((_DWORD *)this + 60);
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( v5 )
  {
    v9 = (__int64 *)((char *)this + 216);
    v10 = *((_QWORD *)this + 27);
    while ( *(_DWORD *)(v10 + 40LL * v8) != a3 )
    {
      if ( ++v8 >= v5 )
        goto LABEL_37;
    }
    if ( (v8 & 0x80000000) == 0 )
    {
      if ( a2 )
      {
        if ( *(_QWORD *)(v10 + 40LL * v8 + 32) )
        {
          if ( *(_DWORD *)(v10 + 40LL * v8 + 4) != *(_DWORD *)(v10 + 40LL * v8 + 16) )
          {
            v11 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                        WPF::g_pProcessHeap,
                                        2LL * *((int *)this + 12));
            v7 = v11;
            if ( !v11 )
            {
              v23 = 1704;
LABEL_12:
              v12 = -2147024882;
              v6 = -2147024882;
LABEL_13:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v23);
              goto LABEL_37;
            }
            *v11 = 0;
            v13 = CContactManager::BuildFeedbackString(
                    (const unsigned __int16 **)this,
                    *(_DWORD *)(*v9 + 40LL * v8 + 4),
                    v11,
                    *((_DWORD *)this + 12));
            v6 = v13;
            if ( v13 < 0 )
            {
              v23 = 1706;
LABEL_16:
              v12 = v13;
              goto LABEL_13;
            }
          }
          v14 = *v9;
          v15 = *v9 + 40LL * v8;
          if ( *(_DWORD *)(v15 + 8) != *(_DWORD *)(v15 + 20)
            || *(_DWORD *)(v14 + 40LL * v8 + 12) != *(_DWORD *)(v14 + 40LL * v8 + 24) )
          {
            v3 = (const struct tagPOINT *)(v15 + 8);
          }
          CTrackingTooltip::Update(*(CTrackingTooltip **)(v14 + 40LL * v8 + 32), v3, v7);
        }
        else
        {
          v16 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                                      WPF::g_pProcessHeap,
                                      2LL * *((int *)this + 12));
          v7 = v16;
          if ( !v16 )
          {
            v23 = 1722;
            goto LABEL_12;
          }
          *v16 = 0;
          v13 = CContactManager::BuildFeedbackString(
                  (const unsigned __int16 **)this,
                  *(_DWORD *)(*v9 + 40LL * v8 + 4),
                  v16,
                  *((_DWORD *)this + 12));
          v6 = v13;
          if ( v13 < 0 )
          {
            v23 = 1724;
            goto LABEL_16;
          }
          v17 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           112LL);
          v18 = v17;
          if ( v17 )
            *v17 = 0;
          else
            v18 = 0LL;
          *(_QWORD *)(*v9 + 40LL * v8 + 32) = v18;
          v19 = *(CTrackingTooltip **)(*v9 + 40LL * v8 + 32);
          if ( !v19 )
          {
            v23 = 1727;
            goto LABEL_12;
          }
          v6 = CTrackingTooltip::Initialize(v19, (const struct tagPOINT *)(*v9 + 8 + 40LL * v8), v7);
          if ( v6 < 0 )
          {
            v20 = *(CTrackingTooltip **)(*v9 + 40LL * v8 + 32);
            if ( v20 )
              CTrackingTooltip::`scalar deleting destructor'(v20);
            *(_QWORD *)(*v9 + 40LL * v8 + 32) = 0LL;
          }
        }
      }
      else
      {
        v21 = *(CTrackingTooltip **)(v10 + 40LL * v8 + 32);
        if ( v21 )
          CTrackingTooltip::`scalar deleting destructor'(v21);
        *(_QWORD *)(*v9 + 40LL * v8 + 32) = 0LL;
        DynArray<CPenContact,0>::RemoveAt((char *)this + 216, v8);
      }
    }
  }
LABEL_37:
  (*(void (__fastcall **)(WPF::HeapBase *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v7);
  return (unsigned int)v6;
}

/*
 * XREFs of ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800AADC0
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800105A4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800AA4EC (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800AB360 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800E930C (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x1800E938C (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 */

__int64 __fastcall CContactManager::HandleFlickFeedbackMessage(CContactManager *this, char a2, int a3)
{
  unsigned int v3; // r9d
  int v4; // ebp
  unsigned __int16 *FeedbackString; // r14
  __int64 v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  HMODULE ModuleHandleW; // rax
  CContactManager *v14; // rcx
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  __int64 v17; // rax
  CTrackingTooltip *v18; // rcx
  __int64 v19; // rdx
  CTrackingTooltip *v20; // rcx
  unsigned int v21; // ecx
  __int64 i; // r9
  __int64 v23; // rax
  __int64 v24; // xmm1_8
  __int64 v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-28h]
  _BYTE *v28; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 52);
  v4 = 0;
  FeedbackString = 0LL;
  v6 = 0LL;
  if ( v3 )
  {
    v8 = *((_QWORD *)this + 23);
    while ( *(_DWORD *)(v8 + 24 * v6) != a3 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v3 )
        goto LABEL_30;
    }
    if ( (int)v6 >= 0 )
    {
      v9 = 3 * v6;
      v10 = *(_QWORD *)(v8 + 24 * v6 + 16);
      if ( a2 )
      {
        if ( v10 )
        {
          CTrackingTooltip::Update(
            *(CTrackingTooltip **)(v8 + 24 * v6 + 16),
            (const struct tagPOINT *)(v8 + 8 + 24 * v6),
            0LL);
          goto LABEL_30;
        }
        _mm_lfence();
        v11 = *((_QWORD *)this + 23);
        LODWORD(v28) = 0;
        v12 = dword_1801222B0[*(int *)(v11 + 24 * v6 + 4)];
        ModuleHandleW = GetModuleHandleW(0LL);
        FeedbackString = CContactManager::LoadFeedbackString(v14, ModuleHandleW, v12, (int *)&v28);
        if ( !FeedbackString )
        {
          v27 = 1641;
LABEL_12:
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, v27);
          goto LABEL_30;
        }
        v15 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         112LL);
        v16 = v15;
        v28 = v15;
        if ( v15 )
          *v15 = 0;
        else
          v16 = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v9 + 16) = v16;
        v17 = *((_QWORD *)this + 23);
        v18 = *(CTrackingTooltip **)(v17 + 8 * v9 + 16);
        if ( !v18 )
        {
          v27 = 1645;
          goto LABEL_12;
        }
        v4 = CTrackingTooltip::Initialize(v18, (const struct tagPOINT *)(v17 + 8 + 8 * v9), FeedbackString);
        if ( v4 < 0 )
        {
          v19 = *((_QWORD *)this + 23);
          v20 = *(CTrackingTooltip **)(v19 + 8 * v9 + 16);
          if ( v20 )
          {
            CTrackingTooltip::`scalar deleting destructor'(v20);
            v19 = *((_QWORD *)this + 23);
          }
          *(_QWORD *)(v19 + 8 * v9 + 16) = 0LL;
        }
      }
      else
      {
        if ( v10 )
        {
          CTrackingTooltip::`scalar deleting destructor'(*(CTrackingTooltip **)(v8 + 24 * v6 + 16));
          v8 = *((_QWORD *)this + 23);
        }
        *(_QWORD *)(v8 + 24 * v6 + 16) = 0LL;
        v21 = *((_DWORD *)this + 52);
        if ( (unsigned int)v6 < v21 )
        {
          for ( i = *((_QWORD *)this + 23); (unsigned int)v6 < v21 - 1; v21 = *((_DWORD *)this + 52) )
          {
            v23 = (unsigned int)v6;
            LODWORD(v6) = v6 + 1;
            v24 = *(_QWORD *)(i + 24LL * (unsigned int)v6 + 16);
            v25 = 3 * v23;
            *(_OWORD *)(i + 8 * v25) = *(_OWORD *)(i + 24LL * (unsigned int)v6);
            *(_QWORD *)(i + 8 * v25 + 16) = v24;
          }
          *((_DWORD *)this + 52) = v21 - 1;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
        }
      }
    }
  }
LABEL_30:
  (*(void (__fastcall **)(WPF::HeapBase *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    FeedbackString);
  return (unsigned int)v4;
}

/*
 * XREFs of ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180016ACC
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016690 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18004F984 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180058510 (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CTopLevelWindow::EnsureWindowFrames(void)
{
  unsigned int v0; // edi
  int v2; // ebx
  CTopLevelWindow::WindowFrame *v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r8d
  int v6; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  CTopLevelWindow::WindowFrame *v8; // [rsp+48h] [rbp+10h]

  v0 = 0;
  if ( !dword_1801464E8 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = (CTopLevelWindow::WindowFrame *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                             WPF::g_pProcessHeap,
                                             1872LL);
      v8 = v3;
      v4 = v3 ? CTopLevelWindow::WindowFrame::WindowFrame(v3) : 0LL;
      v7 = v4;
      if ( !v4 )
        break;
      v5 = dword_1801464E8 + 1;
      if ( dword_1801464E8 + 1 < (unsigned int)dword_1801464E8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else if ( v5 > HIDWORD(qword_1801464E0) )
      {
        v6 = DynArrayImpl<0>::AddMultipleAndSet(&CTopLevelWindow::s_rgpwfWindowFrames, 8LL, 1LL, &v7);
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xC0u);
      }
      else
      {
        *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * (unsigned int)dword_1801464E8) = v4;
        dword_1801464E8 = v5;
      }
      if ( (unsigned int)++v2 >= 6 )
        return v0;
    }
    v0 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x298u);
  }
  return v0;
}

/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180022160
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B5F4 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowData::SetTitle(CWindowData *this, char *a2, int a3)
{
  CWindowData *v3; // rax
  CWindowData **v4; // rsi
  CWindowData *v5; // rbp
  int v7; // edi
  __int64 v8; // rdx
  int v9; // r9d
  char *v10; // rbx
  __int16 v11; // cx
  unsigned int v12; // ebx
  int v14; // eax
  unsigned int v15; // ebp

  v3 = (CWindowData *)*((_QWORD *)this + 2);
  v4 = (CWindowData **)((char *)this + 16);
  v5 = (CWindowData *)((char *)this + 780);
  v7 = a3 + 1;
  if ( v3 == (CWindowData *)((char *)this + 780) )
  {
    if ( v7 > 26 )
    {
      v3 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                            WPF::g_pProcessHeap,
                            2LL * v7);
      *v4 = v3;
      if ( !v3 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2454u);
        return 2147942414LL;
      }
    }
    goto LABEL_3;
  }
  if ( v7 <= 26 )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, CWindowData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v3);
    v3 = v5;
    *v4 = v5;
    goto LABEL_3;
  }
  v14 = (*(__int64 (__fastcall **)(WPF::HeapBase *, CWindowData **, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
          WPF::g_pProcessHeap,
          v4,
          2LL * v7);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v3 = *v4;
    if ( !*v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2466u);
      return 2147942414LL;
    }
LABEL_3:
    v8 = v7;
    if ( (unsigned __int64)(v7 - 1LL) > 0x7FFFFFFE )
    {
      v9 = -2147024809;
      if ( v7 )
      {
        *(_WORD *)v3 = 0;
        v12 = -2147024809;
        goto LABEL_25;
      }
    }
    else
    {
      v9 = 0;
      v10 = (char *)(a2 - (char *)v3);
      while ( 2147483646LL - v7 + v8 )
      {
        v11 = *(_WORD *)((char *)v3 + (_QWORD)v10);
        if ( !v11 )
        {
          if ( v8 )
            break;
LABEL_22:
          v3 = (CWindowData *)((char *)v3 - 2);
          v9 = -2147024774;
          break;
        }
        *(_WORD *)v3 = v11;
        v3 = (CWindowData *)((char *)v3 + 2);
        if ( !--v8 )
          goto LABEL_22;
      }
      *(_WORD *)v3 = 0;
    }
    v12 = v9;
    if ( v9 >= 0 )
      return v12;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x246Au);
    return v12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x2465u);
  return v15;
}

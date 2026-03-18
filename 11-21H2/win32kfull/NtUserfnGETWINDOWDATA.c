/*
 * XREFs of NtUserfnGETWINDOWDATA @ 0x1C0200F70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z @ 0x1C01F0994 (-GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z.c)
 */

__int64 __fastcall NtUserfnGETWINDOWDATA(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        int a6)
{
  __int64 v10; // rcx
  __int64 ThreadWin32Thread; // r13
  char v12; // si
  __int64 v13; // rcx
  __int64 v14; // r15
  _BYTE *v15; // rdx
  __int64 v16; // rdi
  __int64 WindowData; // [rsp+30h] [rbp-38h]

  WindowData = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a6 == 689 && a4 < 3 )
  {
    v12 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 12) & 0x80) != 0;
    v13 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
    if ( (v13 & 0x10) != 0 )
    {
      return GetWindowData(a1, a4, a3, v12);
    }
    else
    {
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v14 == PsGetCurrentProcessWin32Process(v13) )
      {
        v15 = (_BYTE *)a5;
        if ( a5 >= MmUserProbeAddress )
          v15 = (_BYTE *)MmUserProbeAddress;
        *v15 = 1;
      }
      else if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) != 0 )
      {
        WindowData = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, ULONG64))qword_1C03352C8)(
                       a1,
                       a2,
                       a3,
                       a4,
                       a5);
        if ( a4 == 2 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 12LL) & 0x80u) != 0 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 1) == 0 || a3 )
            v16 = a3 + 4;
          else
            v16 = 17LL;
          return (((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64))qword_1C03352C8)(a1, a2, v16) << 32) | WindowData;
        }
      }
      else if ( (unsigned __int8)CheckAccess(*(_QWORD *)(ThreadWin32Thread + 424) + 880LL, v14 + 880) )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        WindowData = GetWindowData(a1, a4, a3, v12);
        KeDetachProcess();
      }
    }
  }
  return WindowData;
}

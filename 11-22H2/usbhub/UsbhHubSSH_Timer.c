/*
 * XREFs of UsbhHubSSH_Timer @ 0x1C0020130
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubSSH_Timer(__int64 a1, __int64 a2)
{
  struct _KEVENT *v3; // rax
  struct _KEVENT *v4; // r14
  __int64 v5; // rax
  unsigned __int8 v6; // r12
  __int64 v7; // r15
  int v8; // esi
  __int64 v9; // rbp
  _DWORD *Pool2; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, _QWORD); // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void (__fastcall *v15)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), __int64, _DWORD *, int); // rax
  int v17; // [rsp+28h] [rbp-40h]

  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v3 = *(struct _KEVENT **)(a2 + 64);
  if ( !v3 )
    goto LABEL_35;
  if ( v3->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v4 = v3 + 143;
  if ( !KeReadStateEvent(v3 + 143) )
    return 0LL;
  KeResetEvent(v4);
  v5 = *(_QWORD *)(a2 + 64);
  if ( !v5 )
    goto LABEL_35;
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v6 = *(_BYTE *)(v5 + 5268);
  v7 = v5 + 2088;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      0);
  v9 = *(_QWORD *)(a2 + 64);
  if ( !v9 )
    goto LABEL_35;
  if ( *(_DWORD *)v9 != 541218120 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      45,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      0);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 72LL, 1112885333LL);
  if ( !Pool2 )
    goto LABEL_33;
  v11 = *(_QWORD *)(a2 + 64);
  if ( !v11 )
    goto LABEL_35;
  if ( *(_DWORD *)v11 != 541218120 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD))(v11 + 4768);
  if ( !v12 || (v13 = v12(a2, v6)) == 0 )
  {
    ExFreePoolWithTag(Pool2, 0);
LABEL_33:
    KeSetEvent(v4, 0, 0);
    return 0LL;
  }
  *((_QWORD *)Pool2 + 5) = v13;
  *Pool2 = 1230463592;
  *((_QWORD *)Pool2 + 3) = UsbhHubSSH_Worker;
  Pool2[1] = 2001228627;
  Pool2[3] = 0;
  *((_QWORD *)Pool2 + 4) = v7;
  *((_QWORD *)Pool2 + 2) = a2;
  ExInterlockedInsertTailList((PLIST_ENTRY)(v9 + 2784), (PLIST_ENTRY)Pool2 + 3, (PKSPIN_LOCK)(v9 + 2800));
  if ( Pool2[1] != 2001228627 )
    Log(a2, 8, 1464552747, 0LL, (__int64)Pool2);
  _InterlockedIncrement(Pool2 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      0);
  v14 = *(_QWORD *)(a2 + 64);
  if ( !v14 )
LABEL_35:
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v14 != 541218120 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v15 = *(void (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), __int64, _DWORD *, int))(v14 + 4784);
  if ( v15 )
  {
    LOBYTE(v17) = v6;
    v15(a2, *((_QWORD *)Pool2 + 5), UsbhHubWorker, 1LL, Pool2, v17);
  }
  else
  {
    v8 = 3;
  }
  if ( v8 == 3 )
    goto LABEL_33;
  return 0LL;
}

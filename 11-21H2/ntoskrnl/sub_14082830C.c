/*
 * XREFs of sub_14082830C @ 0x14082830C
 * Callers:
 *     sub_1406EA120 @ 0x1406EA120 (sub_1406EA120.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14081CFDC @ 0x14081CFDC (sub_14081CFDC.c)
 *     sub_140827E8C @ 0x140827E8C (sub_140827E8C.c)
 *     sub_14082848C @ 0x14082848C (sub_14082848C.c)
 *     sub_140828528 @ 0x140828528 (sub_140828528.c)
 *     sub_1408285B0 @ 0x1408285B0 (sub_1408285B0.c)
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 *     sub_14082AB94 @ 0x14082AB94 (sub_14082AB94.c)
 *     sub_140832270 @ 0x140832270 (sub_140832270.c)
 *     sub_1408337BC @ 0x1408337BC (sub_1408337BC.c)
 *     sub_1408339FC @ 0x1408339FC (sub_1408339FC.c)
 *     sub_1408351BC @ 0x1408351BC (sub_1408351BC.c)
 *     sub_1408357A0 @ 0x1408357A0 (sub_1408357A0.c)
 *     sub_1408618D8 @ 0x1408618D8 (sub_1408618D8.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

__int64 __fastcall sub_14082830C(__int16 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // di
  __int64 v9; // rdx
  int v10; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( _InterlockedExchange(&dword_140D3B0D4, 0) )
  {
    sub_14082AB94(3LL, 0LL);
    CmCompleteInitMachineConfig(&dword_140C54D54);
    sub_1408337BC();
    sub_14071B6EC();
    LOBYTE(v3) = a1 == 1;
    sub_140832270(v3);
    sub_140AB4260(v5, v4, v6, v7);
    if ( a1 != 1 )
    {
      byte_140C54C95 = 1;
      if ( byte_140C54CA4 || (v8 = 0, byte_140D3B034) )
        v8 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = sub_1408339FC(&Handle, v9, sub_140833B80, (unsigned __int64)&Event & -(__int64)(v8 != 0));
      if ( v10 < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, v10);
      if ( v8 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( !dword_140C0C6A0 )
    {
      sub_1408357A0();
      sub_1408351BC();
    }
    sub_1408618D8();
    RtlLockBootStatusData(0LL);
    sub_140827E8C();
    sub_1408288D4();
    sub_1408285B0();
    sub_1402D66A8((ULONG_PTR)&qword_140C22200);
    byte_140C22214 = 1;
    sub_1402935D0((ULONG_PTR)&qword_140C22200);
    sub_14036AAC4((__int64)&unk_140C22220, DelayedWorkQueue);
    sub_14081CFDC();
    *(_QWORD *)(*((_QWORD *)sub_140347DB0() + 132) + 8LL) = 1LL;
    sub_140828528();
    if ( a1 != 1 )
      sub_14082848C();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}

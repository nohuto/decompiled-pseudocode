/*
 * XREFs of sub_140689388 @ 0x140689388
 * Callers:
 *     sub_140208D94 @ 0x140208D94 (sub_140208D94.c)
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_140681670 @ 0x140681670 (sub_140681670.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_1406A5770 @ 0x1406A5770 (sub_1406A5770.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_1407174E0 @ 0x1407174E0 (sub_1407174E0.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_140742980 @ 0x140742980 (sub_140742980.c)
 *     sub_14083D56C @ 0x14083D56C (sub_14083D56C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

__int64 __fastcall sub_140689388(char a1)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    sub_14071B6EC();
  else
    sub_140AB4370();
  while ( dword_140D01100 == 1 )
  {
    KeResetEvent(&Event);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C49240, 0LL);
    if ( *(__int64 **)qword_140C49258 != &qword_140C49250 )
      __fastfail(3u);
    *((_QWORD *)&v9 + 1) = qword_140C49258;
    *(_QWORD *)&v9 = &qword_140C49250;
    *(_QWORD *)qword_140C49258 = &v9;
    qword_140C49258 = (__int64)&v9;
    ExReleasePushLockEx((ULONG_PTR)&qword_140C49240, 0LL);
    sub_140AB4260(v4, v3, v5, v6, v7, v8);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      sub_14071B6EC();
    else
      sub_140AB4370();
  }
  return 0LL;
}

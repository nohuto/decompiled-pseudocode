/*
 * XREFs of sub_140919170 @ 0x140919170
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14083D56C @ 0x14083D56C (sub_14083D56C.c)
 *     sub_14090E5E0 @ 0x14090E5E0 (sub_14090E5E0.c)
 * Callees:
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

__int64 __fastcall sub_140919170(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  REGHANDLE v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  REGHANDLE v14; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-20h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-18h] BYREF

  memset(&Event, 0, sizeof(Event));
  v17 = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v18 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &Event;
  sub_140AB41E0(a1);
  sub_140AB4260(v5, v4, v6, v7);
  v8 = qword_140D3B010;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_140037F48;
  if ( EtwEventEnabled(qword_140D3B010, &EventDescriptor) )
    EtwWrite(v8, &EventDescriptor, 0LL, 0, 0LL);
  v9 = (__int64 *)sub_140347C10(a2, 0LL);
  v12 = (__int64)v9;
  if ( v9 )
    sub_14029F580(v9, v10, v11);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v12 )
  {
    v13 = sub_140347C10(a2, v12);
    sub_140353BB0(a2, v13);
  }
  v14 = qword_140D3B010;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_140038C40;
  if ( EtwEventEnabled(qword_140D3B010, &EventDescriptor) )
    EtwWrite(v14, &EventDescriptor, 0LL, 0, 0LL);
  return (unsigned int)v17;
}

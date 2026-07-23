/*
 * XREFs of sub_14098B798 @ 0x14098B798
 * Callers:
 *     sub_14098B4E0 @ 0x14098B4E0 (sub_14098B4E0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405C9A5C @ 0x1405C9A5C (sub_1405C9A5C.c)
 *     sub_14086141C @ 0x14086141C (sub_14086141C.c)
 */

void __fastcall sub_14098B798(__int64 a1)
{
  ULONG_PTR v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1 + 32;
  memset(&Event, 0, sizeof(Event));
  sub_1402D66A8(a1 + 32);
  if ( *(_BYTE *)(a1 + 64) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    sub_14086141C(a1, (const EVENT_DESCRIPTOR *)qword_1400148E8);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(a1 + 80) = &Event;
    sub_1405C9A5C(a1);
    sub_1402935D0(v1);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    sub_1402D66A8(v1);
    *(_QWORD *)(a1 + 80) = 0LL;
    v3 = *(_QWORD *)(a1 + 96);
    sub_1402935D0(v1);
    sub_14042A5E0(v3, v4);
  }
  else
  {
    sub_1402935D0(v1);
  }
}

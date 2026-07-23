/*
 * XREFs of sub_140A02158 @ 0x140A02158
 * Callers:
 *     sub_1408520BC @ 0x1408520BC (sub_1408520BC.c)
 *     sub_140A01F78 @ 0x140A01F78 (sub_140A01F78.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_14057B42C @ 0x14057B42C (sub_14057B42C.c)
 */

char __fastcall sub_140A02158(char *SystemArgument1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int16 v7; // bx
  char result; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *((_QWORD *)SystemArgument1 + 91) = &Event;
  _m_prefetchw(SystemArgument1 + 712);
  v5 = *((_DWORD *)SystemArgument1 + 178);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1 + 178, v5 | 0x8000, v5);
  }
  while ( v6 != v5 );
  v7 = v5;
  result = sub_14057B42C((volatile signed __int32 *)SystemArgument1, v2, v3, v4);
  if ( (v7 & 0x3FFF) != 0 )
    return KeWaitForSingleObject(*((PVOID *)SystemArgument1 + 91), Executive, 0, 0, 0LL);
  return result;
}

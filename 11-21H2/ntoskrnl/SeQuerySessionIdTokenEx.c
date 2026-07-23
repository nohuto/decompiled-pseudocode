/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x14077D580
 * Callers:
 *     sub_14077D368 @ 0x14077D368 (sub_14077D368.c)
 *     sub_14077D454 @ 0x14077D454 (sub_14077D454.c)
 *     sub_14078BEA4 @ 0x14078BEA4 (sub_14078BEA4.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14077D624 @ 0x14077D624 (sub_14077D624.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v7; // si
  ULONG v8; // ebp
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  v7 = 1;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v8 = *((_DWORD *)Token + 30);
  *SessionId = v8;
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v8 )
    v7 = (int)sub_14077D624(v8, &v10) >= 0 && v8 == (unsigned int)PsGetServerSiloServiceSessionId(v10);
  *IsServiceSession = v7;
  return 0;
}

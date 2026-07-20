/*
 * XREFs of SmpInitializeKnownDllsWorker @ 0x140011BE0
 * Callers:
 *     <none>
 * Callees:
 *     SmpInitializeKnownDlls @ 0x140008C00 (SmpInitializeKnownDlls.c)
 *     SmpTerminate @ 0x14001AB9C (SmpTerminate.c)
 */

NTSTATUS __fastcall SmpInitializeKnownDllsWorker(__int64 a1, void *a2)
{
  int v3; // eax
  unsigned __int64 v4; // rdi
  unsigned __int64 Parameters[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = SmpInitializeKnownDlls(3u);
  v4 = v3;
  if ( v3 < 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Failure in known dll worker.");
    Parameters[1] = v4;
    Parameters[0] = (unsigned __int64)&DestinationString;
    SmpTerminate(Parameters, 1u, 2u);
    JUMPOUT(0x140011C64LL);
  }
  NtSetEvent(a2, 0LL);
  return NtClose(a2);
}

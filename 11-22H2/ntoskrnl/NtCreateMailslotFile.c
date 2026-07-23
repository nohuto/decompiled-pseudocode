/*
 * XREFs of NtCreateMailslotFile @ 0x14094AC00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     IoCreateFile @ 0x1407D0C00 (IoCreateFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateMailslotFile(
        PHANDLE FileHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CreateOptions,
        ULONG MailslotQuota,
        ULONG MaximumMessageSize,
        PLARGE_INTEGER ReadTimeout)
{
  __int128 InternalParameters; // [rsp+70h] [rbp-28h] BYREF
  __int64 v10; // [rsp+80h] [rbp-18h]

  InternalParameters = 0LL;
  v10 = 0LL;
  if ( ReadTimeout )
  {
    LOBYTE(v10) = 1;
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( ((unsigned __int8)ReadTimeout & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *((LARGE_INTEGER *)&InternalParameters + 1) = *ReadTimeout;
    }
    else
    {
      *((LARGE_INTEGER *)&InternalParameters + 1) = *ReadTimeout;
    }
  }
  LODWORD(InternalParameters) = MailslotQuota;
  DWORD1(InternalParameters) = MaximumMessageSize;
  return IoCreateFile(
           FileHandle,
           DesiredAccess,
           ObjectAttributes,
           IoStatusBlock,
           0LL,
           0,
           3u,
           2u,
           CreateOptions,
           0LL,
           0,
           CreateFileTypeMailslot,
           &InternalParameters,
           0);
}

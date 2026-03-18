/*
 * XREFs of SshpSessionManagerFlushControlEventBuffer @ 0x14085B2C0
 * Callers:
 *     SshpSessionManagerControlSessionCallback @ 0x14085B290 (SshpSessionManagerControlSessionCallback.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408741A8 (SshpSessionManagerSendControlEvent.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14032D320 (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportEtwWrite @ 0x1403AD9A8 (SSHSupportEtwWrite.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

LONG __fastcall SshpSessionManagerFlushControlEventBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  char *v4; // rax
  unsigned int v5; // ebx
  const EVENT_DESCRIPTOR *v6; // rdx
  _QWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR i; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0;
  for ( i = 0LL; v3 < dword_140C38760; v3 += v5 + 12 )
  {
    v4 = (char *)&unk_140C38764 + v3;
    v5 = *(_DWORD *)v4;
    v6 = *(const EVENT_DESCRIPTOR **)(v4 + 4);
    i.Ptr = (ULONGLONG)(v4 + 12);
    *(_QWORD *)&i.Size = v5;
    SSHSupportEtwWrite((__int64)&unk_140C38764, v6, a3, 1u, &i);
  }
  dword_140C38760 = 0;
  byte_140C38740 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C38548, 0LL);
  if ( !--dword_140C38558[0] )
  {
    v8[0] = 0LL;
    v8[1] = -1LL;
    KeSetTimer2((__int64)&unk_140C38560, -50000000LL, 0LL, (__int64)v8);
  }
  SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C38548);
  return KeSetEvent(&stru_140C38748, 0, 0);
}

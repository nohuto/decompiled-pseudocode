/*
 * XREFs of sub_14077D454 @ 0x14077D454
 * Callers:
 *     sub_1406CF4C0 @ 0x1406CF4C0 (sub_1406CF4C0.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     sub_140775D50 @ 0x140775D50 (sub_140775D50.c)
 *     sub_1407792B4 @ 0x1407792B4 (sub_1407792B4.c)
 *     sub_14077CB00 @ 0x14077CB00 (sub_14077CB00.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_140789AEC @ 0x140789AEC (sub_140789AEC.c)
 *     sub_14078BEA4 @ 0x14078BEA4 (sub_14078BEA4.c)
 * Callees:
 *     sub_1406E5780 @ 0x1406E5780 (sub_1406E5780.c)
 *     sub_14077C860 @ 0x14077C860 (sub_14077C860.c)
 *     sub_14077D2F8 @ 0x14077D2F8 (sub_14077D2F8.c)
 *     SeQuerySessionIdTokenEx @ 0x14077D580 (SeQuerySessionIdTokenEx.c)
 *     sub_14078A644 @ 0x14078A644 (sub_14078A644.c)
 */

__int64 __fastcall sub_14077D454(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        __int64 a4,
        struct _SECURITY_SUBJECT_CONTEXT *SessionId,
        _BYTE *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT *v6; // rdi
  PACCESS_TOKEN ClientToken; // rcx
  NTSTATUS SessionIdToken; // ecx
  __int64 v13; // r8
  _BYTE *v14; // rax
  int v15; // ebx
  int v16; // ebx
  BOOLEAN IsServiceSession[24]; // [rsp+30h] [rbp-18h] BYREF

  v6 = SessionId;
  IsServiceSession[0] = 0;
  ClientToken = SessionId->ClientToken;
  if ( !SessionId->ClientToken )
    ClientToken = SessionId->PrimaryToken;
  SessionIdToken = SeQuerySessionIdTokenEx(ClientToken, (PULONG)&SessionId, IsServiceSession);
  if ( SessionIdToken >= 0 )
  {
    if ( IsServiceSession[0] )
    {
      LOBYTE(SessionId) = 0;
      SessionIdToken = sub_14078A644(
                         0xF0000u,
                         qword_140C54EC8,
                         (PGENERIC_MAPPING)&stru_140010C80,
                         v6,
                         (__int64)&SessionId);
      if ( SessionIdToken < 0 )
        return (unsigned int)SessionIdToken;
      if ( (_BYTE)SessionId )
      {
        v14 = a6;
LABEL_13:
        *v14 = 1;
        return (unsigned int)SessionIdToken;
      }
    }
    v14 = a6;
    v15 = a3 - 1;
    if ( v15 )
    {
      v16 = v15 - 2;
      if ( v16 )
      {
        if ( v16 != 2 )
          goto LABEL_13;
        return (unsigned int)sub_1406E5780(a1, a2, v13, (__int64)v6, a6);
      }
      else
      {
        return (unsigned int)sub_14077C860(a1, (__int64)a2, a4, (int)v6, (__int64)a6);
      }
    }
    else
    {
      return (unsigned int)sub_14077D2F8(a1, (__int64)a2, a4, (__int64)v6, a6);
    }
  }
  return (unsigned int)SessionIdToken;
}

/*
 * XREFs of DbgkCreateMinimalProcess @ 0x140853570
 * Callers:
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DbgkpSendApiMessage @ 0x14093A250 (DbgkpSendApiMessage.c)
 */

void *__fastcall DbgkCreateMinimalProcess(volatile signed __int32 *Object)
{
  void *result; // rax
  _OWORD v3[17]; // [rsp+20h] [rbp-128h] BYREF

  result = memset(v3, 0, sizeof(v3));
  _InterlockedOr(Object + 281, 0x400001u);
  if ( *((_QWORD *)Object + 175) )
  {
    *(_QWORD *)&v3[0] = 0x800600038LL;
    DWORD2(v3[2]) = 2;
    memset(&v3[3], 0, 48);
    return (void *)DbgkpSendApiMessage((PVOID)Object);
  }
  return result;
}

/*
 * XREFs of MiDetachAndUnlockWorkingSet @ 0x14033EF28
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025B4A0 (MiTrimOrAgeWorkingSet.c)
 *     MiHandleForceTrimWorkingSets @ 0x140634AC0 (MiHandleForceTrimWorkingSets.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     MiDetachSessionGlobal @ 0x14033EFBC (MiDetachSessionGlobal.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

char __fastcall MiDetachAndUnlockWorkingSet(__int64 a1)
{
  char result; // al
  $115DCDF994C6370D29323EAB0E0C9502 v2; // [rsp+20h] [rbp-48h] BYREF

  result = *(_BYTE *)(a1 + 184) & 7;
  if ( result )
  {
    if ( result == 1 )
      return MiDetachSessionGlobal(*(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 17000LL);
  }
  else
  {
    result = a1 + 0x80;
    if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1664) )
    {
      memset(&v2, 0, sizeof(v2));
      return KiUnstackDetachProcess(&v2);
    }
  }
  return result;
}

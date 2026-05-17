/*
 * XREFs of EtwpRegistrationCompare @ 0x18006DE80
 * Callers:
 *     EtwpInsertRegistration @ 0x18003241C (EtwpInsertRegistration.c)
 *     EtwpFindRegistration @ 0x18005ED8C (EtwpFindRegistration.c)
 * Callees:
 *     memcmp @ 0x180093310 (memcmp.c)
 */

int __fastcall EtwpRegistrationCompare(__int64 a1, __int64 a2)
{
  int result; // eax
  unsigned __int16 v5; // cx

  result = memcmp(*(const void **)a1, (const void *)(a2 + 32), 0x10uLL);
  if ( !result )
  {
    v5 = *(_WORD *)(a2 + 84);
    if ( *(_WORD *)(a1 + 8) <= v5 )
      return *(_WORD *)(a1 + 8) < v5;
    else
      return -1;
  }
  return result;
}

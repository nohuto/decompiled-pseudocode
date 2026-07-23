/*
 * XREFs of sub_1406A5F0C @ 0x1406A5F0C
 * Callers:
 *     sub_14022EA80 @ 0x14022EA80 (sub_14022EA80.c)
 *     sub_140681670 @ 0x140681670 (sub_140681670.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 * Callees:
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 */

__int64 __fastcall sub_1406A5F0C(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 1058, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_1406BBAD8((PVOID)a1);
  return result;
}

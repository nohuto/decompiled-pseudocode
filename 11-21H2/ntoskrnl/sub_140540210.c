/*
 * XREFs of sub_140540210 @ 0x140540210
 * Callers:
 *     sub_1407DBF04 @ 0x1407DBF04 (sub_1407DBF04.c)
 *     sub_140929F90 @ 0x140929F90 (sub_140929F90.c)
 * Callees:
 *     sub_140929F64 @ 0x140929F64 (sub_140929F64.c)
 */

__int64 __fastcall sub_140540210(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_140929F64((PVOID)a1);
  return result;
}

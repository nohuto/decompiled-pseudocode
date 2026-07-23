/*
 * XREFs of sub_14085A0CC @ 0x14085A0CC
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14085A0CC(__int64 **a1, __int64 a2, char a3)
{
  __int64 *i; // rdi
  __int64 result; // rax
  __int64 *v7; // rcx

  for ( i = *a1; i != (__int64 *)a1; result = sub_14042A5E0(v7, a2) )
  {
    result = *i;
    if ( (__int64 **)*i == a1 && a3 )
      break;
    v7 = i - 10;
    LOBYTE(a2) = 1;
    i = (__int64 *)*i;
  }
  return result;
}

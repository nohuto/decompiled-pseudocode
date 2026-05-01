/*
 * XREFs of sub_180010B38 @ 0x180010B38
 * Callers:
 *     sub_18000E9EC @ 0x18000E9EC (sub_18000E9EC.c)
 *     sub_180015484 @ 0x180015484 (sub_180015484.c)
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_18001192C @ 0x18001192C (sub_18001192C.c)
 */

void __fastcall sub_180010B38(volatile signed __int32 *a1, int a2, int a3)
{
  int v6; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-10h]
  RTL_SRWLOCK *v8; // [rsp+58h] [rbp+20h] BYREF

  if ( byte_180032B40 )
  {
    AcquireSRWLockExclusive(&stru_180032B48);
    v8 = &stru_180032B48;
    if ( !a3
      || a3 != dword_180032B5C
      || (v6 = a2, v7 = a1, !(unsigned __int8)sub_18001192C(&xmmword_180032B90, &v6, 16LL)) )
    {
      _InterlockedAnd(a1, a2 != 0 ? -5 : -2111);
    }
    sub_18000CE58(&v8);
  }
}

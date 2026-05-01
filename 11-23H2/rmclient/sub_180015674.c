/*
 * XREFs of sub_180015674 @ 0x180015674
 * Callers:
 *     sub_180015704 @ 0x180015704 (sub_180015704.c)
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_18000F66C @ 0x18000F66C (sub_18000F66C.c)
 *     sub_18001192C @ 0x18001192C (sub_18001192C.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 */

void __fastcall sub_180015674(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF

  if ( *a1 )
  {
    if ( !sub_18000F66C() )
    {
      AcquireSRWLockExclusive((PSRWLOCK)a1 + 1);
      v7 = (RTL_SRWLOCK *)(a1 + 8);
      v5 = 39841886;
      v6 = a3;
      sub_18001192C((__int64)(a1 + 48), &v5, 0x10uLL);
      sub_180015174((struct _TP_TIMER **)a1 + 2, a1 + 24, a1);
      sub_18000CE58(&v7);
    }
  }
}

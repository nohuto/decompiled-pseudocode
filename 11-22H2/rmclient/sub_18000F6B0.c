/*
 * XREFs of sub_18000F6B0 @ 0x18000F6B0
 * Callers:
 *     sub_180011320 @ 0x180011320 (sub_180011320.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18000C00C @ 0x18000C00C (sub_18000C00C.c)
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_18000F66C @ 0x18000F66C (sub_18000F66C.c)
 *     sub_18001192C @ 0x18001192C (sub_18001192C.c)
 */

void __fastcall sub_18000F6B0(RTL_SRWLOCK *a1, int a2, __int16 a3, int a4)
{
  RTL_SRWLOCK *v8; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+28h] [rbp-50h] BYREF
  __int16 v10; // [rsp+2Ch] [rbp-4Ch]
  __int16 v11; // [rsp+2Eh] [rbp-4Ah]
  int v12; // [rsp+30h] [rbp-48h]

  if ( LOBYTE(a1->Ptr) )
  {
    if ( !sub_18000F66C() )
    {
      AcquireSRWLockExclusive(a1 + 5);
      v8 = a1 + 5;
      v11 = 0;
      v9 = a2;
      v10 = a3;
      v12 = a4;
      sub_18001192C(&a1[29], &v9, 12LL);
      sub_18000C00C(&a1[7].Ptr, &a1[8], a1);
      sub_18000CE58(&v8);
    }
  }
}

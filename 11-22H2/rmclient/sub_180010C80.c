/*
 * XREFs of sub_180010C80 @ 0x180010C80
 * Callers:
 *     sub_180011390 @ 0x180011390 (sub_180011390.c)
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_18000D940 @ 0x18000D940 (sub_18000D940.c)
 *     sub_18000DAC4 @ 0x18000DAC4 (sub_18000DAC4.c)
 *     sub_18000F66C @ 0x18000F66C (sub_18000F66C.c)
 *     sub_180010D2C @ 0x180010D2C (sub_180010D2C.c)
 */

void __fastcall sub_180010C80(RTL_SRWLOCK *a1, _QWORD *a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( LOBYTE(a1->Ptr) && !sub_18000F66C() && sub_18000D940(a1) )
  {
    AcquireSRWLockExclusive(a1 + 4);
    v6 = a1 + 4;
    sub_18000DAC4((__int64)a1);
    sub_180010D2C(&a1[19], a2, a3, 0LL);
    if ( *a2 )
      *a2 |= 0x80000000uLL;
    sub_18000CE58(&v6);
  }
}

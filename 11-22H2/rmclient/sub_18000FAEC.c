/*
 * XREFs of sub_18000FAEC @ 0x18000FAEC
 * Callers:
 *     sub_180011320 @ 0x180011320 (sub_180011320.c)
 * Callees:
 *     sub_18000BF7C @ 0x18000BF7C (sub_18000BF7C.c)
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_18000D940 @ 0x18000D940 (sub_18000D940.c)
 *     sub_18000F66C @ 0x18000F66C (sub_18000F66C.c)
 *     sub_18000FA24 @ 0x18000FA24 (sub_18000FA24.c)
 */

void __fastcall sub_18000FAEC(_BYTE *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 && sub_18000D940((RTL_SRWLOCK *)a1) && sub_18000FA24(*((_QWORD *)a1 + 3), a2, a3, a4) && !sub_18000F66C() )
  {
    AcquireSRWLockExclusive((PSRWLOCK)a1 + 4);
    v8 = (RTL_SRWLOCK *)(a1 + 32);
    sub_18000BF7C((_QWORD *)a1 + 6, a1 + 65, a1);
    sub_18000CE58(&v8);
  }
}

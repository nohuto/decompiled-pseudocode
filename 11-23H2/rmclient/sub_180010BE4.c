/*
 * XREFs of sub_180010BE4 @ 0x180010BE4
 * Callers:
 *     sub_180011390 @ 0x180011390 (sub_180011390.c)
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_180010D2C @ 0x180010D2C (sub_180010D2C.c)
 *     sub_1800122B4 @ 0x1800122B4 (sub_1800122B4.c)
 */

void __fastcall sub_180010BE4(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  RTL_SRWLOCK *v8; // rbx
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( *(_BYTE *)a1 )
  {
    v8 = (RTL_SRWLOCK *)(a1 + 32);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
    v9 = v8;
    if ( *(_QWORD *)(a1 + 144) || (*(_QWORD *)(a1 + 144) = 0LL, !(unsigned int)sub_1800122B4(sub_18000BE70, a1)) )
      sub_180010D2C(a1 + 72, a2, a3, a4);
    sub_18000CE58(&v9);
  }
}

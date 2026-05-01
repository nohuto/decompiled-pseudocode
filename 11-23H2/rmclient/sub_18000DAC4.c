/*
 * XREFs of sub_18000DAC4 @ 0x18000DAC4
 * Callers:
 *     sub_180010C80 @ 0x180010C80 (sub_180010C80.c)
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_180010D2C @ 0x180010D2C (sub_180010D2C.c)
 */

void __fastcall sub_18000DAC4(__int64 a1)
{
  _QWORD *v1; // rsi
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 224);
  if ( !*(_QWORD *)(a1 + 224) )
  {
    v3 = *(RTL_SRWLOCK **)(a1 + 24);
    if ( v3 )
    {
      *v1 = 0LL;
      AcquireSRWLockExclusive(v3);
      v4 = v3;
      sub_180010D2C(&v3[25], v1, sub_18000BE40, a1);
      sub_18000CE58(&v4);
    }
  }
}

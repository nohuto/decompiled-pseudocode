/*
 * XREFs of sub_14020B7D4 @ 0x14020B7D4
 * Callers:
 *     sub_1403437A0 @ 0x1403437A0 (sub_1403437A0.c)
 *     IoSetIoAttributionIrp @ 0x140557CE0 (IoSetIoAttributionIrp.c)
 * Callees:
 *     sub_14020C178 @ 0x14020C178 (sub_14020C178.c)
 *     sub_1402F5F14 @ 0x1402F5F14 (sub_1402F5F14.c)
 */

__int64 __fastcall sub_14020B7D4(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v5 = 0LL;
  LOBYTE(a2) = 1;
  result = sub_1402F5F14(v3, a2, &v5);
  if ( (int)result >= 0 )
  {
    result = sub_14020C178(a1, v5, KeGetCurrentThread(), 0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}

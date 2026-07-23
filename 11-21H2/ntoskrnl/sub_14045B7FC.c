/*
 * XREFs of sub_14045B7FC @ 0x14045B7FC
 * Callers:
 *     sub_140208284 @ 0x140208284 (sub_140208284.c)
 *     sub_14020E464 @ 0x14020E464 (sub_14020E464.c)
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     sub_140291380 @ 0x140291380 (sub_140291380.c)
 *     sub_140291710 @ 0x140291710 (sub_140291710.c)
 *     sub_140291C10 @ 0x140291C10 (sub_140291C10.c)
 *     ntoskrnl_6 @ 0x14029B310 (ntoskrnl_6.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140343DC0 @ 0x140343DC0 (sub_140343DC0.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_14035B110 @ 0x14035B110 (sub_14035B110.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 *     sub_14035F144 @ 0x14035F144 (sub_14035F144.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045B7FC(volatile signed __int32 *a1, int a2, char a3)
{
  __int64 result; // rax
  char v5; // cl

  LODWORD(result) = *a1;
  if ( !a3 )
    LODWORD(result) = (unsigned int)result >> 8;
  result = (unsigned __int8)result;
  v5 = a3 == 0 ? 8 : 0;
  if ( a2 != (unsigned __int8)result )
  {
    if ( a2 <= (unsigned __int8)result )
      return (unsigned int)_InterlockedExchangeAdd(a1, -(((unsigned __int8)result - a2) << v5));
    else
      _InterlockedExchangeAdd(a1, (a2 - (unsigned __int8)result) << v5);
  }
  return result;
}

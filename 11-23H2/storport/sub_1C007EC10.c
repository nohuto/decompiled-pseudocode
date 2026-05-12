/*
 * XREFs of sub_1C007EC10 @ 0x1C007EC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 *     sub_1C00813B0 @ 0x1C00813B0 (sub_1C00813B0.c)
 *     sub_1C00815A8 @ 0x1C00815A8 (sub_1C00815A8.c)
 */

__int64 __fastcall sub_1C007EC10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(unsigned int *)(a2 + 4) >= 0x40uLL )
    result = sub_1C00813B0(a3);
  else
    result = sub_1C00815A8(a3);
  if ( (int)result >= 0 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    sub_1C007A4E8((char *)&v6, 8u);
    result = sub_1C0080EE8(a3, &v6, 8LL);
    if ( (int)result >= 0 )
      return sub_1C00815A8(a3);
  }
  return result;
}

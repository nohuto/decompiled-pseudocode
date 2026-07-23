/*
 * XREFs of sub_1406E191C @ 0x1406E191C
 * Callers:
 *     sub_1406E18A0 @ 0x1406E18A0 (sub_1406E18A0.c)
 *     sub_140989000 @ 0x140989000 (sub_140989000.c)
 * Callees:
 *     sub_140793B84 @ 0x140793B84 (sub_140793B84.c)
 */

__int64 __fastcall sub_1406E191C(int a1)
{
  __int64 result; // rax
  signed __int32 v2; // edx
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+5Ch] [rbp+14h]

  result = (unsigned int)-a1;
  v2 = _InterlockedExchangeAdd(&dword_140C54794, a1 != 0 ? 1 : -1);
  if ( !v2 && a1 || v2 == 1 && !a1 )
  {
    v4 = -1;
    v3 = (2 * (_BYTE)a1) & 2 | 1;
    return sub_140793B84((unsigned int)&qword_14000ECB8, (unsigned int)&v3, 8, 0, 0LL, 0, 0, 1);
  }
  return result;
}

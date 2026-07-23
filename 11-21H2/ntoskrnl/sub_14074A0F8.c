/*
 * XREFs of sub_14074A0F8 @ 0x14074A0F8
 * Callers:
 *     sub_140749F30 @ 0x140749F30 (sub_140749F30.c)
 *     sub_140945654 @ 0x140945654 (sub_140945654.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 */

__int64 __fastcall sub_14074A0F8(int a1, _DWORD *a2)
{
  __int64 result; // rax
  _WORD v5[36]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v6; // [rsp+A0h] [rbp+18h] BYREF

  v6 = 0LL;
  memset(v5, 0, sizeof(v5));
  v5[0] = 5147;
  result = sub_14074CA9C(a1, (unsigned int)v5, -1073741637, 0, (__int64)&v6);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v6;
  }
  return result;
}

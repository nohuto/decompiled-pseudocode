/*
 * XREFs of sub_14054EE64 @ 0x14054EE64
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054EE64(__int64 a1, struct _MDL *a2, ULONG a3, _DWORD *a4)
{
  int v8; // ecx
  __int64 result; // rax
  int v10; // edi
  unsigned int v11; // [rsp+20h] [rbp-108h]
  __int64 *v12[10]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v13[14]; // [rsp+80h] [rbp-A8h] BYREF

  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  if ( !sub_140294D28(0LL) )
    return 3224698910LL;
  if ( a3 > 0x1FA000 )
    return 3221225476LL;
  if ( !a3 || (result = sub_1403A0F08((__int64)v12, a2, a3, 2, v8 & v11), (int)result >= 0) )
  {
    v13[2] = v12[0];
    v13[3] = v12[7];
    v13[1] = a1;
    v10 = sub_140358A20(2u, 63, 0, (__int64)v13);
    if ( v10 >= 0 )
      *a4 = v13[2];
    if ( a3 )
      sub_1403A0EB4(v12);
    return (unsigned int)v10;
  }
  return result;
}

/*
 * XREFs of sub_1406E2624 @ 0x1406E2624
 * Callers:
 *     sub_14065CE0C @ 0x14065CE0C (sub_14065CE0C.c)
 *     sub_1406E25B0 @ 0x1406E25B0 (sub_1406E25B0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E26C4 @ 0x1406E26C4 (sub_1406E26C4.c)
 *     sub_1406E2798 @ 0x1406E2798 (sub_1406E2798.c)
 */

void __fastcall sub_1406E2624(__int64 a1)
{
  ULONG_PTR v2; // rbx
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4[2]; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v3 = 0;
  if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 1LL) )
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_14002974D, 0LL, 0LL, 2u, v4);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    sub_1406E2798(v2, &v3);
    sub_1406E26C4(v2);
  }
  if ( (unsigned int)dword_140C03868 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03868, 1LL) )
    {
      v7 = 0;
      v6 = 4;
      v5 = &v3;
      sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_140029779, 0LL, 0LL, 3u, v4);
    }
  }
}

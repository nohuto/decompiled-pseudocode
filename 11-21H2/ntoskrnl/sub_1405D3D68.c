/*
 * XREFs of sub_1405D3D68 @ 0x1405D3D68
 * Callers:
 *     sub_1403D33C4 @ 0x1403D33C4 (sub_1403D33C4.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1405D3D68()
{
  int v0; // r9d
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 4;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&dword_14002F8AC, 0LL, 0LL, 3u, &v2);
    }
  }
}

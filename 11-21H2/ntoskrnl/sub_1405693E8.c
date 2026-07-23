/*
 * XREFs of sub_1405693E8 @ 0x1405693E8
 * Callers:
 *     sub_14057F4B0 @ 0x14057F4B0 (sub_14057F4B0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1405693E8()
{
  int v0; // [rsp+30h] [rbp-68h] BYREF
  __int64 v1; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+40h] [rbp-58h] BYREF
  int *v3; // [rsp+60h] [rbp-38h]
  int v4; // [rsp+68h] [rbp-30h]
  int v5; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v6; // [rsp+70h] [rbp-28h]
  int v7; // [rsp+78h] [rbp-20h]
  int v8; // [rsp+7Ch] [rbp-1Ch]

  if ( !_interlockedbittestandset(&dword_140D06C34, 0) && (unsigned int)dword_140C02FD0 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C02FD0, 0x400000000000LL) )
    {
      v5 = 0;
      v8 = 0;
      v0 = dword_140D06C34;
      v4 = 4;
      v3 = &v0;
      v6 = &v1;
      v1 = 0x1000000LL;
      v7 = 8;
      sub_14020A9C4((__int64)&dword_140C02FD0, (unsigned __int8 *)byte_14002C438, 0LL, 0LL, 4u, &v2);
    }
  }
}

/*
 * XREFs of sub_140711DA8 @ 0x140711DA8
 * Callers:
 *     sub_14070AC28 @ 0x14070AC28 (sub_14070AC28.c)
 *     sub_140712868 @ 0x140712868 (sub_140712868.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140711DA8()
{
  __int64 v0; // r9
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C043A8 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C043A8, 0x200000000001LL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 98;
      sub_14020A9C4((__int64)&dword_140C043A8, (unsigned __int8 *)&unk_1400350B8, 0LL, 0LL, 3u, &v1);
    }
  }
}

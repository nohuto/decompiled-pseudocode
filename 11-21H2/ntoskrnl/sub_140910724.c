/*
 * XREFs of sub_140910724 @ 0x140910724
 * Callers:
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_1407C09E0 @ 0x1407C09E0 (sub_1407C09E0.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_140910724(__int64 a1, char a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  void *v6; // rbx
  __int64 result; // rax
  void *v8; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v9[3]; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v10[2]; // [rsp+78h] [rbp-40h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  if ( qword_140D3B008 )
  {
    sub_140AB4550(v9);
    v8 = 0LL;
    sub_1407C0690(a1, &v8, v4);
    v6 = v8;
    if ( v8 )
    {
      LOBYTE(v5) = a2;
      sub_14042A5E0(v5, v10);
      sub_140346D64(v6, 0x624E4D43u);
    }
    return sub_140AB4580(v9);
  }
  return result;
}

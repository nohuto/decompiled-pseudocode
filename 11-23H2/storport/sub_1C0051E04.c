/*
 * XREFs of sub_1C0051E04 @ 0x1C0051E04
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C007B258 @ 0x1C007B258 (sub_1C007B258.c)
 */

__int64 __fastcall sub_1C0051E04(__int64 a1, IRP *a2)
{
  int v4; // edi
  __int64 v5; // r8
  const wchar_t *v6; // rcx
  __int128 v8; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v9; // [rsp+C8h] [rbp-50h] BYREF
  char v10[32]; // [rsp+D8h] [rbp-40h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  memset(v10, 0, sizeof(v10));
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
  {
    v4 = -2147483631;
  }
  else
  {
    v4 = sub_1C005A560(a1, v10);
    if ( v4 >= 0 )
    {
      v4 = sub_1C007B258(*(_QWORD *)(a1 + 6008));
      if ( v4 < 0 )
        sub_1C0042880(v10, 32LL, (__int64)"TcglibTPerReset");
    }
    *(_DWORD *)(a1 + 128) &= ~1u;
  }
  a2->IoStatus.Information = 0LL;
  if ( v4 < 0 )
  {
    sub_1C0010EE0(*(_QWORD *)(a1 + 16), (__int64)&v8);
    if ( (byte_1C0093A07 & 4) != 0 )
    {
      v6 = (const wchar_t *)&unk_1C0082788;
      if ( *(_QWORD *)(a1 + 5016) )
        v6 = *(const wchar_t **)(a1 + 5016);
      sub_1C0050984(
        (__int64)v6,
        a1 + 5000,
        v5,
        *(_DWORD *)(a1 + 56),
        -1,
        255,
        255,
        (__int64)&v9,
        a1 + 5000,
        *((const wchar_t **)&v8 + 1),
        byte_1C0082FE6,
        byte_1C0082FE6,
        byte_1C0082FE6,
        v6,
        "TcgResetState",
        v10,
        v4,
        0,
        0,
        0,
        0);
    }
  }
  return sub_1C0003440(a2, 0, v4);
}

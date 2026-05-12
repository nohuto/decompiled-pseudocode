/*
 * XREFs of sub_1C0053E90 @ 0x1C0053E90
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C007B258 @ 0x1C007B258 (sub_1C007B258.c)
 */

__int64 __fastcall sub_1C0053E90(__int64 a1, IRP *a2)
{
  int v4; // esi
  char v5; // r11
  __int64 v6; // r9
  const wchar_t *v7; // rax
  __int64 v8; // r8
  int v9; // r9d
  const wchar_t *v10; // rbx
  int v12; // [rsp+B0h] [rbp-58h]
  __int128 v13; // [rsp+B8h] [rbp-50h] BYREF
  char v14[32]; // [rsp+C8h] [rbp-40h] BYREF

  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
  {
    v4 = -2147483631;
  }
  else
  {
    v4 = sub_1C005A560(a1, v14);
    if ( v4 >= 0 )
      v4 = sub_1C007B258(*(_QWORD *)(a1 + 3496));
    *(_DWORD *)(a1 + 456) &= ~8u;
  }
  a2->IoStatus.Information = 0LL;
  if ( v4 < 0 )
  {
    v12 = *(_DWORD *)(a1 + 96);
    sub_1C0010EE0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v13);
    v6 = *(_QWORD *)(a1 + 24);
    if ( (byte_1C0093A07 & 4) != 0 )
    {
      v7 = *(const wchar_t **)(v6 + 5016);
      v8 = v6 + 5000;
      v9 = *(_DWORD *)(v6 + 56);
      v10 = (const wchar_t *)&unk_1C0082788;
      if ( v7 )
        v10 = v7;
      sub_1C0050984(
        a1 + 169,
        a1 + 160,
        v8,
        v9,
        v5,
        SBYTE1(v12),
        SBYTE2(v12),
        a1 + 2024,
        v8,
        *((const wchar_t **)&v13 + 1),
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        v10,
        "TcgResetState",
        v14,
        v4,
        0,
        0,
        0,
        0);
    }
  }
  return sub_1C0003440(a2, 0, v4);
}

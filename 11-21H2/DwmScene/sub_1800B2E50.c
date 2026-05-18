/*
 * XREFs of sub_1800B2E50 @ 0x1800B2E50
 * Callers:
 *     sub_18002DC40 @ 0x18002DC40 (sub_18002DC40.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_1800B2D54 @ 0x1800B2D54 (sub_1800B2D54.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800B2E50(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // r9
  char v6; // di
  __int64 v7; // r8
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(a1 + 192) = a3;
  v6 = 0;
  if ( *(_BYTE *)sub_1800441D8(a1 + 184) )
  {
    v7 = v5[24];
    v10 = 0LL;
    v8 = v4[1];
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = v4[1];
    }
    *(_QWORD *)&v10 = *v4;
    *((_QWORD *)&v10 + 1) = v8;
    v6 = sub_1800B2D54(v5, &v10, v7);
  }
  sub_180010910(a2);
  return v6;
}

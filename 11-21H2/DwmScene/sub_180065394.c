/*
 * XREFs of sub_180065394 @ 0x180065394
 * Callers:
 *     sub_180061A10 @ 0x180061A10 (sub_180061A10.c)
 *     sub_180063A00 @ 0x180063A00 (sub_180063A00.c)
 *     sub_180063FE4 @ 0x180063FE4 (sub_180063FE4.c)
 *     sub_180065A50 @ 0x180065A50 (sub_180065A50.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_18007E8D8 @ 0x18007E8D8 (sub_18007E8D8.c)
 *     sub_18009D25C @ 0x18009D25C (sub_18009D25C.c)
 *     sub_1800A6170 @ 0x1800A6170 (sub_1800A6170.c)
 *     sub_1800ACF60 @ 0x1800ACF60 (sub_1800ACF60.c)
 *     sub_1800AD2F0 @ 0x1800AD2F0 (sub_1800AD2F0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     sub_18006560C @ 0x18006560C (sub_18006560C.c)
 */

__int64 __fastcall sub_180065394(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( sub_1800122D0(a2, (_QWORD *)(a1 + 152)) )
  {
    v5 = *a2;
    *a2 = 0LL;
    v6 = a2[1];
    a2[1] = 0LL;
    v8[0] = *v4;
    v8[1] = v4[1];
    *v4 = v5;
    v4[1] = v6;
    sub_180010910((__int64)v8);
    sub_18006560C(a1, 4LL);
  }
  return sub_180010910((__int64)a2);
}

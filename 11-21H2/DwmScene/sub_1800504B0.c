/*
 * XREFs of sub_1800504B0 @ 0x1800504B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180014BA0 @ 0x180014BA0 (sub_180014BA0.c)
 *     sub_18008E620 @ 0x18008E620 (sub_18008E620.c)
 */

__int64 __fastcall sub_1800504B0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r9
  __int64 v5; // xmm0_8
  __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v8 = *a2;
  *((_QWORD *)&v8 + 1) = v4;
  sub_18008E620(a1, &v8);
  sub_180014BA0(v9, a2);
  v5 = *(_QWORD *)(a1 + 104);
  v6 = v9[0];
  *(_OWORD *)(v9[0] + 88) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(v6 + 104) = v5;
  sub_180010910((__int64)v9);
  return sub_180010910((__int64)a2);
}

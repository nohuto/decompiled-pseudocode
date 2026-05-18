/*
 * XREFs of sub_180059480 @ 0x180059480
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180017428 @ 0x180017428 (sub_180017428.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_180059610 @ 0x180059610 (sub_180059610.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 */

__int64 __fastcall sub_180059480(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h]
  __int128 v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h]
  _BYTE v15[20]; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-14h]
  int v17; // [rsp+60h] [rbp-10h]

  if ( !*(_QWORD *)(a1 + 512) )
  {
    v2 = (__int64 *)sub_18008E70C(a1);
    v3 = sub_180017428(v2, &v13);
    v4 = *v3;
    v5 = v3[1];
    *v3 = 0LL;
    v3[1] = 0LL;
    v11 = *(_QWORD *)(a1 + 512);
    v6 = *(_QWORD *)(a1 + 520);
    *(_QWORD *)(a1 + 512) = v4;
    v12 = v6;
    *(_QWORD *)(a1 + 520) = v5;
    sub_180010910((__int64)&v11);
    sub_180010910((__int64)&v13);
    v7 = *(_QWORD *)(a1 + 512);
    v14 = 0LL;
    *(_QWORD *)v15 = 15LL;
    LOBYTE(v13) = 0;
    sub_180012190((__int64 *)&v13, "Light Probe Sampler", 0x13uLL);
    sub_18002BC44(v7, (__int64 *)&v13);
    v14 = 0x800000000LL;
    v16 = 0;
    v8 = *(_QWORD *)(a1 + 512);
    v17 = 2139095039;
    *(_OWORD *)&v15[4] = 0LL;
    *(_DWORD *)v15 = 7;
    v13 = 3uLL;
    ((void (__fastcall *)(__int64, __int128 *, _QWORD, __int64, __int64, __int64))sub_18005C210)(
      v8,
      &v13,
      0LL,
      v9,
      v11,
      v12);
  }
  v13 = xmmword_1801289A8;
  return sub_180059610(a1, &v13);
}

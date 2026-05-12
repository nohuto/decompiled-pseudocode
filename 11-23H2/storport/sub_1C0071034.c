/*
 * XREFs of sub_1C0071034 @ 0x1C0071034
 * Callers:
 *     sub_1C005E0A0 @ 0x1C005E0A0 (sub_1C005E0A0.c)
 *     sub_1C005EDA0 @ 0x1C005EDA0 (sub_1C005EDA0.c)
 * Callees:
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     sub_1C001D420 @ 0x1C001D420 (sub_1C001D420.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

void __fastcall sub_1C0071034(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  char v5; // [rsp+30h] [rbp-D0h] BYREF
  char v6; // [rsp+31h] [rbp-CFh] BYREF
  char v7; // [rsp+32h] [rbp-CEh] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  __int64 v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  int *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  char *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  char *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  char *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  int *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  int *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]

  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 && (unsigned int)dword_1C00930C8 > 5 )
  {
    if ( sub_1C001ABEC(a1, 0x400000000000LL) )
    {
      v4 = *(_QWORD *)(v1 + 24);
      v14 = 16LL;
      v16 = 16LL;
      v13 = v4 + 5000;
      v15 = v3 + 2024;
      v8 = *(_DWORD *)(v4 + 56);
      v17 = &v8;
      v5 = *(_BYTE *)(v3 + 96);
      v19 = &v5;
      v6 = *(_BYTE *)(v3 + 97);
      v21 = &v6;
      v7 = *(_BYTE *)(v3 + 98);
      v23 = &v7;
      v9 = *(_DWORD *)(v3 + 3300);
      v25 = &v9;
      v10 = *(_DWORD *)(v3 + 3288);
      v27 = &v10;
      v11 = *(_DWORD *)(v3 + 3292);
      v29 = &v11;
      v18 = 4LL;
      v20 = 1LL;
      v22 = 1LL;
      v24 = 1LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      sub_1C001D420(v4, (unsigned __int8 *)dword_1C0085507, v2, v3, 0xBu, &v12);
    }
  }
}

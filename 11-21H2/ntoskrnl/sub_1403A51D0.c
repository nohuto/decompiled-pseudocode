/*
 * XREFs of sub_1403A51D0 @ 0x1403A51D0
 * Callers:
 *     sub_1403A5020 @ 0x1403A5020 (sub_1403A5020.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_140259568 @ 0x140259568 (sub_140259568.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_140395628 @ 0x140395628 (sub_140395628.c)
 *     sub_1403A44C8 @ 0x1403A44C8 (sub_1403A44C8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1403A51D0(__int64 a1)
{
  const WCHAR *v1; // rsi
  int v3; // r14d
  unsigned __int128 v4; // rax
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  const WCHAR *v11; // rcx
  __int64 v12; // r11
  int v13; // ebx
  __int64 v14; // r11
  __int64 v15; // r11
  int v16; // r10d
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+60h] [rbp-A0h] BYREF
  int *v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+8Ch] [rbp-74h]
  __int64 *v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+9Ch] [rbp-64h]
  __int64 *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+ACh] [rbp-54h]
  char v36[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CCh] [rbp-34h]
  int *v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+D8h] [rbp-28h]
  int v42; // [rsp+DCh] [rbp-24h]
  int *v43; // [rsp+E0h] [rbp-20h]
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+ECh] [rbp-14h]
  int *v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+FCh] [rbp-4h]
  __int64 *v49; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]
  _WORD v52[64]; // [rsp+110h] [rbp+10h] BYREF

  v1 = &word_1404370A0;
  v3 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)&v4 = sub_1402F5718();
  v6 = *(_QWORD *)(v5 + 48);
  v7 = v4;
  if ( v6 )
  {
    if ( *(_BYTE *)(v5 + 196) )
    {
      v4 = (unsigned __int64)(v4 - v6) * (unsigned __int128)0x346DC5D63886594BuLL;
      v8 = *((_QWORD *)&v4 + 1) >> 11;
      if ( (unsigned int)(*((_QWORD *)&v4 + 1) >> 11) >= 0x1388 )
      {
        if ( v3 < 0 && !*(_DWORD *)(v5 + 188) )
        {
          v9 = sub_140259568(a1);
          v10 = sub_140395628(v9, v52);
          v11 = v52;
          if ( v10 < 0 )
            v11 = &word_1404370A0;
          v1 = v11;
        }
        LOBYTE(v4) = sub_1403A44C8(v5);
        v13 = *(_DWORD *)(v12 + 192);
        if ( (unsigned int)dword_140C03A00 > 5 )
        {
          LOBYTE(v4) = sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL);
          if ( (_BYTE)v4 )
          {
            v29 = 0;
            v32 = 0;
            v35 = 0;
            v27 = &v18;
            v23 = *(_QWORD *)(v14 + 48);
            v30 = &v23;
            v18 = v8;
            v33 = &v24;
            v28 = 4;
            v31 = 8;
            v24 = v7;
            v34 = 8;
            sub_1402A2094((__int64)v36, v1);
            v39 = 0;
            v42 = 0;
            v45 = 0;
            v48 = 0;
            v51 = 0;
            v37 = &v19;
            v20 = *(_DWORD *)(v15 + 188);
            v40 = &v20;
            v43 = &v21;
            v46 = &v22;
            v49 = &v25;
            v19 = v16;
            v38 = 4;
            v41 = 4;
            v21 = v13;
            v44 = 4;
            v22 = v3;
            v47 = 4;
            v25 = 0x1000000LL;
            v50 = 8;
            LOBYTE(v4) = sub_14020A9C4(
                           (__int64)&dword_140C03A00,
                           (unsigned __int8 *)byte_1400304AB,
                           0LL,
                           0LL,
                           0xBu,
                           &v26);
          }
        }
      }
    }
  }
  return v4;
}

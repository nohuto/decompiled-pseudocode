/*
 * XREFs of sub_140A65D84 @ 0x140A65D84
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14025E6F8 @ 0x14025E6F8 (sub_14025E6F8.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054DEF4 @ 0x14054DEF4 (sub_14054DEF4.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055AFE8 @ 0x14055AFE8 (sub_14055AFE8.c)
 *     sub_14055BBDC @ 0x14055BBDC (sub_14055BBDC.c)
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 *     sub_140A67A68 @ 0x140A67A68 (sub_140A67A68.c)
 */

__int64 __fastcall sub_140A65D84(__int64 a1)
{
  __int64 v2; // rax
  char v3; // cl
  __int64 v4; // r14
  unsigned __int64 v5; // rdx
  NTSTATUS v6; // edi
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v16[3]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v17; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v19; // [rsp+C0h] [rbp-40h]
  int v20; // [rsp+C8h] [rbp-38h]
  int v21; // [rsp+CCh] [rbp-34h]
  __int64 *v22; // [rsp+D0h] [rbp-30h]
  int v23; // [rsp+D8h] [rbp-28h]
  int v24; // [rsp+DCh] [rbp-24h]
  __int64 *v25; // [rsp+E0h] [rbp-20h]
  int v26; // [rsp+E8h] [rbp-18h]
  int v27; // [rsp+ECh] [rbp-14h]
  __int64 *v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+FCh] [rbp-4h]
  __int64 *v31; // [rsp+100h] [rbp+0h]
  int v32; // [rsp+108h] [rbp+8h]
  int v33; // [rsp+10Ch] [rbp+Ch]
  __int64 *v34; // [rsp+110h] [rbp+10h]
  int v35; // [rsp+118h] [rbp+18h]
  int v36; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v37; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+128h] [rbp+28h]
  int v39; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v40; // [rsp+130h] [rbp+30h]
  int v41; // [rsp+138h] [rbp+38h]
  int v42; // [rsp+13Ch] [rbp+3Ch]

  v17 = 0LL;
  v2 = sub_14055A628(0);
  v3 = *(_BYTE *)(a1 + 40);
  v4 = v2;
  byte_140D018D0 = 1;
  v16[0] = sub_140A67A50;
  v16[1] = sub_140A66300;
  v16[2] = sub_140A67430;
  LODWORD(v2) = *(_DWORD *)(a1 + 80);
  DWORD2(v17) = (v3 & 4) != 0 ? 657 : 593;
  if ( (v2 & 0x20) != 0 )
    DWORD2(v17) = ((v3 & 4) != 0 ? 657 : 593) | 0x100;
  v6 = sub_140A487C0((__int64)v16);
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    v5 = (unsigned __int64)(1000LL * *(_QWORD *)(a1 + 504)) % stru_140C46CE8.QuadPart;
    *(_QWORD *)(a1 + 512) = (unsigned __int64)(1000LL * *(_QWORD *)(a1 + 504)) / stru_140C46CE8.QuadPart;
  }
  if ( v6 < 0 || v6 == 258 )
  {
    if ( (*(_DWORD *)(a1 + 312) & 1) != 0 )
    {
      LOBYTE(v5) = 1;
      sub_140A67A68(a1 + 304, v5);
    }
    sub_14055BBDC(a1, v6);
    if ( v6 == 258 )
    {
      *(_DWORD *)(a1 + 80) |= 0x40u;
      v6 = -1073740682;
    }
  }
  else
  {
    if ( sub_14025E6F8() && (*(_QWORD *)(a1 + 696) || *(_QWORD *)(a1 + 704)) )
      sub_14054DEF4((_QWORD *)(a1 + 192), (_QWORD *)(a1 + 200), a1 + 144);
    *(_QWORD *)(a1 + 480) = sub_14055A628(0) - v4;
    sub_14055AFE8();
  }
  byte_140D018D0 = 0;
  if ( (unsigned int)dword_140C064E0 > 5 && sub_1402A2000((__int64)&dword_140C064E0, 0x400000000000LL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v19 = &v8;
    v9 = *(_QWORD *)(a1 + 480);
    v22 = &v9;
    v10 = *(_QWORD *)(a1 + 488);
    v25 = &v10;
    v11 = *(_QWORD *)(a1 + 496);
    v28 = &v11;
    v12 = *(_QWORD *)(a1 + 512);
    v31 = &v12;
    v13 = *(_QWORD *)(a1 + 520);
    v34 = &v13;
    v14 = *(_QWORD *)(a1 + 528);
    v37 = &v14;
    v15 = *(_QWORD *)(a1 + 536);
    v40 = &v15;
    v20 = 8;
    v23 = 8;
    v26 = 8;
    v29 = 8;
    v32 = 8;
    v35 = 8;
    v38 = 8;
    v41 = 8;
    v8 = 0x1000000LL;
    sub_14020A9C4(
      (__int64)&dword_140C064E0,
      (unsigned __int8 *)&word_14002B59E,
      (const GUID *)(a1 + 960),
      (const GUID *)(a1 + 944),
      0xAu,
      &v18);
  }
  return (unsigned int)v6;
}

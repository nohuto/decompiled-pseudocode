/*
 * XREFs of MiLogTrimWs @ 0x14035DA94
 * Callers:
 *     MiTrimWorkingSet @ 0x14035D864 (MiTrimWorkingSet.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     MiFillLogProcessInfo @ 0x14025B6F0 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x1403C44FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall MiLogTrimWs(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  _DWORD *v9; // r10
  int v10; // edx
  __int64 v11; // r11
  char v12; // al
  _QWORD *v13; // r9
  int v14; // r8d
  int v15; // r10d
  int v17; // [rsp+28h] [rbp-E0h]
  int v18; // [rsp+30h] [rbp-D8h]
  char v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+58h] [rbp-B0h] BYREF
  int v23; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h] BYREF
  __int64 v27; // [rsp+78h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h] BYREF
  __int64 v29[5]; // [rsp+88h] [rbp-80h] BYREF
  int v30; // [rsp+B0h] [rbp-58h]
  int v31; // [rsp+B4h] [rbp-54h]
  _BYTE v32[16]; // [rsp+B8h] [rbp-50h] BYREF
  int *v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D4h] [rbp-34h]
  __int64 *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E4h] [rbp-24h]
  __int64 *v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+104h] [rbp-4h]
  __int64 *v45; // [rsp+108h] [rbp+0h]
  int v46; // [rsp+110h] [rbp+8h]
  int v47; // [rsp+114h] [rbp+Ch]
  __int64 *v48; // [rsp+118h] [rbp+10h]
  int v49; // [rsp+120h] [rbp+18h]
  int v50; // [rsp+124h] [rbp+1Ch]
  int *v51; // [rsp+128h] [rbp+20h]
  int v52; // [rsp+130h] [rbp+28h]
  int v53; // [rsp+134h] [rbp+2Ch]
  __int64 *v54; // [rsp+138h] [rbp+30h]
  int v55; // [rsp+140h] [rbp+38h]
  int v56; // [rsp+144h] [rbp+3Ch]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  v5 = &retaddr;
  v21 = 0LL;
  v20 = 0;
  if ( *(_QWORD *)&qword_140C698E8 )
  {
    LOBYTE(v5) = MiFillLogProcessInfo(a1, &v20, &v21);
    if ( *v9 > 5u )
    {
      LOBYTE(v5) = tlgKeywordOn((__int64)v9, 1LL);
      if ( (_BYTE)v5 )
      {
        v12 = *(_BYTE *)(v11 + 184);
        v31 = 0;
        v19 = v12 & 7;
        v30 = v10;
        v29[4] = (__int64)&v19;
        tlgCreate1Sz_char(v32, v21);
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v47 = 0;
        v50 = 0;
        v53 = 0;
        v56 = 0;
        v33 = &v22;
        v36 = &v24;
        v39 = &v25;
        v26 = v13[2152];
        v42 = &v26;
        v27 = v13[2200];
        v45 = &v27;
        v28 = v13[2228];
        v48 = &v28;
        v51 = &v23;
        LODWORD(v21) = a5;
        v22 = v20;
        v54 = &v21;
        v34 = 4;
        v37 = 8;
        v40 = 8;
        v43 = 8;
        v46 = 8;
        v49 = 8;
        v52 = 4;
        v55 = 4;
        v24 = a2;
        v25 = a3;
        v23 = a4;
        LOBYTE(v5) = tlgWriteEx_EtwWriteEx(v15, (int)&byte_140038938, v14, 1, v17, v18, 0xCu, (__int64)v29);
      }
    }
  }
  return (char)v5;
}

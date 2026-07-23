/*
 * XREFs of sub_140A50388 @ 0x140A50388
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140391648 @ 0x140391648 (sub_140391648.c)
 *     sub_1403916B0 @ 0x1403916B0 (sub_1403916B0.c)
 *     sub_140391724 @ 0x140391724 (sub_140391724.c)
 *     sub_140391998 @ 0x140391998 (sub_140391998.c)
 *     sub_1403919F0 @ 0x1403919F0 (sub_1403919F0.c)
 *     sub_140391A94 @ 0x140391A94 (sub_140391A94.c)
 *     sub_1403B2B00 @ 0x1403B2B00 (sub_1403B2B00.c)
 *     sub_1403B2F00 @ 0x1403B2F00 (sub_1403B2F00.c)
 *     sub_1403B41A0 @ 0x1403B41A0 (sub_1403B41A0.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140416FEC @ 0x140416FEC (sub_140416FEC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050EE94 @ 0x14050EE94 (sub_14050EE94.c)
 *     sub_140A5054C @ 0x140A5054C (sub_140A5054C.c)
 *     sub_140A505D4 @ 0x140A505D4 (sub_140A505D4.c)
 *     sub_140A508E0 @ 0x140A508E0 (sub_140A508E0.c)
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 *     sub_140A54628 @ 0x140A54628 (sub_140A54628.c)
 *     sub_140A62138 @ 0x140A62138 (sub_140A62138.c)
 */

char __fastcall sub_140A50388(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  REGHANDLE v21; // rbx
  _WORD v22[2]; // [rsp+30h] [rbp-50h] BYREF
  _WORD v23[2]; // [rsp+34h] [rbp-4Ch] BYREF
  int v24; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  unsigned int *v28; // [rsp+58h] [rbp-28h]
  __int64 v29; // [rsp+60h] [rbp-20h]
  unsigned int *v30; // [rsp+68h] [rbp-18h]
  __int64 v31; // [rsp+70h] [rbp-10h]

  v22[0] = 0;
  v3 = a1;
  v23[0] = 0;
  if ( (dword_140C0C60C & 1) != 0 )
  {
    sub_140A508E0();
    if ( (int)sub_1403B2F00(0) >= 0 )
    {
      sub_1403B41A0(0, (unsigned __int8)byte_140C4C078 >> 1, (__int64)v23, 2u, 0LL);
      v4 = v23[0];
      v22[0] = v23[0];
      if ( (int)sub_1403B2F00(3) >= 0 )
      {
        sub_1403B41A0(3, (unsigned __int8)byte_140C4C078 >> 1, (__int64)v23, 2u, 0LL);
        v4 = v23[0] | v22[0];
      }
      v22[0] = v4 & 0xFBFF;
      sub_1403B2B00(0, (unsigned __int8)byte_140C4C078 >> 1, (__int64)v22, 2u, 0LL);
      if ( (int)sub_1403B2F00(3) >= 0 )
        sub_1403B2B00(3, (unsigned __int8)byte_140C4C078 >> 1, (__int64)v22, 2u, 0LL);
    }
  }
  v25 = -1;
  v26 = 0;
  v24 = 0;
  if ( (dword_140C4C00C & 0x20000) != 0 && !byte_140C4BFE1 )
  {
    v12 = 0LL;
    v13 = (unsigned __int64)qword_140C4C138 >> 12;
    v14 = ((unsigned __int64)qword_140C4C138 >> 12) + 1;
    if ( ((unsigned __int16)qword_140C4C138 & 0xFFF) == 0 )
      v14 = (unsigned __int64)qword_140C4C138 >> 12;
    do
    {
      if ( !_bittest((const signed __int32 *)stru_140C4A810.Buffer, v12)
        && !_bittest((const signed __int32 *)stru_140C4A800.Buffer, v12)
        && v12 != v13
        && v12 != v14 )
      {
        v15 = sub_140416FEC(v12 << 12, 1LL, 0, 4LL);
        if ( v15 )
        {
          if ( (unsigned __int8)sub_140A62138(v15, a2, a3, v15) != byte_140C4A680[v12] )
          {
            v17 = v25;
            v18 = v26;
            if ( v12 < v25 )
              v17 = v12;
            v25 = v17;
            if ( v12 > v26 )
              v18 = v12;
            ++v24;
            v26 = v18;
          }
          sub_1403BF310(v16, 1LL, 0LL);
        }
      }
      ++v12;
    }
    while ( v12 < 0x100 );
  }
  if ( (dword_140C0C60C & 4) != 0 )
    sub_140391A94(a1, a2, a3);
  sub_1403919F0();
  sub_140391998(0);
  HIBYTE(word_140C4A7A0) = 0;
  *(_DWORD *)qword_140C4BFE8 = 0;
  sub_140A505D4(v3);
  if ( !byte_140C4BFE1 )
  {
    sub_14042A5E0(((v3 >> 8) & 0xF) + 1, v5);
    if ( byte_140C4C678 )
      sub_14050EE94(v20, v19);
  }
  if ( v24 )
  {
    if ( byte_140C4C688 )
    {
      v21 = qword_140C4C680;
      if ( EtwEventEnabled(qword_140C4C680, &stru_140039B60) )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v24;
        v29 = 4LL;
        v28 = &v25;
        v31 = 4LL;
        v30 = &v26;
        EtwWrite(v21, &stru_140039B60, 0LL, 3u, &UserData);
      }
    }
  }
  if ( (dword_140C4C00C & 0x4000) != 0 )
  {
    if ( KdComPortInUse )
      KdInitialize(4LL, 0LL, 0LL, v6);
    sub_140A5054C();
  }
  sub_140391724();
  sub_1403916B0(v8, v7);
  sub_140A53294(0LL);
  if ( !byte_140C4BFE1 )
    sub_14042A5E0(((v3 >> 8) & 0xF) + 1, v9);
  v10 = qword_140C54C18;
  LOBYTE(v10) = 1;
  sub_14042A5E0(v10, v9);
  sub_140391648();
  sub_140A54628();
  return 1;
}

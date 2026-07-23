/*
 * XREFs of sub_14023BABC @ 0x14023BABC
 * Callers:
 *     sub_14023B8E8 @ 0x14023B8E8 (sub_14023B8E8.c)
 *     sub_1405CF458 @ 0x1405CF458 (sub_1405CF458.c)
 * Callees:
 *     sub_14023BC00 @ 0x14023BC00 (sub_14023BC00.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14023BABC(__int64 a1, int a2, int a3)
{
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // rdi
  REGHANDLE v6; // rbx
  __int64 v7; // rdx
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  int *v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  _BYTE v16[16]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  __int64 v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  __int64 v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  int *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  int *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  int *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  int v35; // [rsp+158h] [rbp+58h] BYREF
  int v36; // [rsp+160h] [rbp+60h] BYREF

  v36 = a3;
  v35 = a2;
  v9 = 0;
  v4 = (const EVENT_DESCRIPTOR *)sub_14023BC00(
                                   a1,
                                   (unsigned int)&stru_14000E9C0,
                                   (unsigned int)&byte_14000E9D0,
                                   (unsigned int)&v9,
                                   (__int64)v16);
  v5 = v4;
  if ( byte_140C5AE30 )
  {
    v6 = qword_140C1F580;
    LOBYTE(v4) = EtwEventEnabled(qword_140C1F580, v4);
    if ( (_BYTE)v4 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v10 = *(_DWORD *)(v7 + 64);
      v11 = *(_DWORD *)(v7 + 76);
      UserData.Ptr = (ULONGLONG)&v10;
      v14 = &v11;
      v17 = v7 + 72;
      v19 = v7 + 88;
      v21 = v7 + 80;
      v23 = v7 + 84;
      v25 = v7 + 92;
      v27 = v7 + 96;
      *(_QWORD *)&UserData.Size = 4LL;
      v15 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v12 = *(unsigned __int8 *)(v7 + 100);
      v29 = &v12;
      v31 = &v35;
      v33 = &v36;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      LOBYTE(v4) = EtwWriteEx(v6, v5, 0LL, 0, 0LL, 0LL, 0xCu, &UserData);
    }
  }
  return (char)v4;
}

/*
 * XREFs of sub_14080A124 @ 0x14080A124
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14080A124(int a1)
{
  char result; // al
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // r14d
  int v6; // r15d
  REGHANDLE v7; // r12
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  int *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  int *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int64 *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  int *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  int *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  int *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]

  result = qword_140C21FA8;
  v2 = a1;
  v3 = (unsigned __int8)byte_140C4EF1C;
  v4 = (unsigned __int8)byte_140C0C644;
  v5 = dword_140C54140;
  v6 = dword_140C54218;
  v12 = a1;
  v18 = qword_140C21FA8;
  v10 = (unsigned __int8)byte_140C4EF1C;
  v11 = (unsigned __int8)byte_140C0C644;
  v9 = dword_140C54140;
  v8 = dword_140C54218;
  if ( byte_140C5AE14 )
  {
    v7 = RegHandle;
    result = EtwEventEnabled(RegHandle, &stru_140011D08);
    if ( result )
    {
      if ( byte_140C5AC3C )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v12;
        v22 = 4LL;
        v21 = &v11;
        v24 = 4LL;
        v23 = &v10;
        v26 = 1LL;
        v25 = &v18;
        v28 = 4LL;
        v27 = &v9;
        v29 = &v8;
        v31 = &qword_140C21FA8;
        v33 = 0xFFFFF780000002C4uLL;
        v30 = 4LL;
        v32 = 8LL;
        v34 = 4LL;
        result = EtwWrite(v7, &stru_140011D08, 0LL, 8u, &UserData);
        v6 = v8;
        v5 = v9;
        v3 = v10;
        v4 = v11;
        v2 = v12;
      }
    }
  }
  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    result = sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL);
    if ( result )
    {
      v19 = qword_140C21FA8;
      v37 = 8LL;
      v36 = &v19;
      v13 = v2;
      v38 = &v13;
      v39 = 4LL;
      v40 = &v14;
      v42 = &v15;
      v44 = &v16;
      v46 = &v17;
      v14 = v4;
      v41 = 4LL;
      v15 = v3;
      v43 = 4LL;
      v16 = v5;
      v45 = 4LL;
      v17 = v6;
      v47 = 4LL;
      return sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&dword_14002FAFC, 0LL, 0LL, 8u, &v35);
    }
  }
  return result;
}

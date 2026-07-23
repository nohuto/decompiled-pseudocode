/*
 * XREFs of sub_14054B7FC @ 0x14054B7FC
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054BF10 @ 0x14054BF10 (sub_14054BF10.c)
 */

char sub_14054B7FC()
{
  _QWORD *v0; // rbx
  int *v1; // rdi
  char result; // al
  const EVENT_DESCRIPTOR *v3; // rcx
  unsigned int v4; // [rsp+28h] [rbp-E0h] BYREF
  int v5; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v6; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-D4h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v10; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  __m256i v14; // [rsp+50h] [rbp-B8h] BYREF
  __m256i v15; // [rsp+70h] [rbp-98h] BYREF
  __int64 v16; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v18; // [rsp+A8h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  unsigned int *v20; // [rsp+B8h] [rbp-50h]
  __int64 v21; // [rsp+C0h] [rbp-48h]
  __m256i *v22; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int *v25; // [rsp+E8h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-18h]
  unsigned int *v27; // [rsp+F8h] [rbp-10h]
  __int64 v28; // [rsp+100h] [rbp-8h]
  unsigned int *v29; // [rsp+108h] [rbp+0h]
  __int64 v30; // [rsp+110h] [rbp+8h]
  unsigned int *v31; // [rsp+118h] [rbp+10h]
  __int64 v32; // [rsp+120h] [rbp+18h]
  unsigned int *v33; // [rsp+128h] [rbp+20h]
  __int64 v34; // [rsp+130h] [rbp+28h]
  unsigned int *v35; // [rsp+138h] [rbp+30h]
  __int64 v36; // [rsp+140h] [rbp+38h]
  unsigned int *v37; // [rsp+148h] [rbp+40h]
  __int64 v38; // [rsp+150h] [rbp+48h]
  _BYTE v39[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v40[2064]; // [rsp+168h] [rbp+60h] BYREF

  LODWORD(v16) = 0;
  v15.m256i_i32[0] = 0;
  dword_140D0693C = 0;
  memset(&v15.m256i_u64[1], 0, 24);
  memset(&v14.m256i_u64[1], 0, 24);
  v0 = sub_14039DF90((PHYSICAL_ADDRESS *)&v15.m256i_i64[1], 1, (__int64)v39, 8LL);
  v1 = (int *)sub_14039DF90((PHYSICAL_ADDRESS *)&v14.m256i_i64[1], 2, (__int64)v40, 1032LL);
  *(_DWORD *)v0 = 25;
  if ( !(unsigned __int16)HvlInvokeHypercall(123) )
    dword_140D0693C = *v1;
  sub_14039D8F0((__int64)&v14.m256i_i64[1]);
  result = sub_14039D8F0((__int64)&v15.m256i_i64[1]);
  if ( dword_140D0693C )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    v26 = 4LL;
    v5 = dword_140D0693C & 1;
    UserData.Ptr = (ULONGLONG)&v5;
    v28 = 4LL;
    v30 = 4LL;
    v4 = ((unsigned int)dword_140D0693C >> 1) & 1;
    v25 = &v4;
    v32 = 4LL;
    v6 = ((unsigned int)dword_140D0693C >> 2) & 1;
    v27 = &v6;
    v34 = 4LL;
    v7 = ((unsigned int)dword_140D0693C >> 3) & 1;
    v29 = &v7;
    v36 = 4LL;
    v8 = ((unsigned int)dword_140D0693C >> 4) & 1;
    v31 = &v8;
    v38 = 4LL;
    v9 = ((unsigned int)dword_140D0693C >> 5) & 1;
    v33 = &v9;
    v10 = ((unsigned int)dword_140D0693C >> 7) & 1;
    v11 = ((unsigned int)dword_140D0693C >> 8) & 1;
    v35 = &v10;
    v37 = &v11;
    sub_14054BF10(&stru_14003ADB8, 8u, &UserData);
    *(_QWORD *)&v17.Size = 4LL;
    v12 = ((unsigned int)dword_140D0693C >> 11) & 1;
    v17.Ptr = (ULONGLONG)&v12;
    v19 = 4LL;
    v4 = ((unsigned int)dword_140D0693C >> 1) & 1;
    v18 = &v4;
    v21 = 4LL;
    v13 = ((unsigned int)dword_140D0693C >> 9) & 1;
    v20 = &v13;
    v22 = &v14;
    v14.m256i_i32[0] = ((unsigned int)dword_140D0693C >> 10) & 1;
    v23 = 4LL;
    sub_14054BF10(&stru_14003AE78, 4u, &v17);
    result = dword_140D0693C;
    if ( (dword_140D0693C & 0x40) != 0 )
    {
      v3 = (const EVENT_DESCRIPTOR *)qword_14003ADF8;
      if ( !(_BYTE)dword_140D051DC )
        v3 = &stru_14003AE88;
      return sub_14054BF10(v3, 0, 0LL);
    }
  }
  return result;
}

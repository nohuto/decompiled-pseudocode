/*
 * XREFs of sub_14054BC60 @ 0x14054BC60
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054BF10 @ 0x14054BF10 (sub_14054BF10.c)
 */

__int64 sub_14054BC60()
{
  _QWORD *v0; // rbx
  __int128 *v1; // rdi
  __int64 result; // rax
  __m256i v3; // [rsp+28h] [rbp-E0h] BYREF
  __m256i v4; // [rsp+48h] [rbp-C0h] BYREF
  int v5; // [rsp+68h] [rbp-A0h]
  __int128 v6; // [rsp+70h] [rbp-98h] BYREF
  __int128 v7; // [rsp+80h] [rbp-88h] BYREF
  __int128 v8; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  __int8 *v10; // [rsp+B8h] [rbp-50h]
  __int64 v11; // [rsp+C0h] [rbp-48h]
  char *v12; // [rsp+C8h] [rbp-40h]
  __int64 v13; // [rsp+D0h] [rbp-38h]
  __int128 *v14; // [rsp+D8h] [rbp-30h]
  __int64 v15; // [rsp+E0h] [rbp-28h]
  char *v16; // [rsp+E8h] [rbp-20h]
  __int64 v17; // [rsp+F0h] [rbp-18h]
  __int128 *v18; // [rsp+F8h] [rbp-10h]
  __int64 v19; // [rsp+100h] [rbp-8h]
  char *v20; // [rsp+108h] [rbp+0h]
  __int64 v21; // [rsp+110h] [rbp+8h]
  _BYTE v22[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v23[2064]; // [rsp+128h] [rbp+20h] BYREF

  v5 = 0;
  memset(&v4.m256i_u64[1], 0, 24);
  v4.m256i_i32[0] = 0;
  memset(&v3.m256i_u64[1], 0, 24);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v0 = sub_14039DF90((PHYSICAL_ADDRESS *)&v4.m256i_i64[1], 1, (__int64)v22, 8LL);
  v1 = (__int128 *)sub_14039DF90((PHYSICAL_ADDRESS *)&v3.m256i_i64[1], 2, (__int64)v23, 1032LL);
  *(_DWORD *)v0 = 5;
  if ( !(unsigned __int16)HvlInvokeHypercall(123) )
  {
    v6 = *v1;
    v7 = v1[1];
    v8 = v1[2];
  }
  sub_14039D8F0((__int64)&v3.m256i_i64[1]);
  sub_14039D8F0((__int64)&v4.m256i_i64[1]);
  v3.m256i_i32[0] = (unsigned __int8)v6;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v3;
  v3.m256i_i32[1] = BYTE1(v6);
  v10 = &v3.m256i_i8[4];
  v12 = (char *)&v6 + 8;
  v14 = &v7;
  v16 = (char *)&v7 + 8;
  v18 = &v8;
  v20 = (char *)&v8 + 8;
  v11 = 4LL;
  v13 = 8LL;
  v15 = 8LL;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 8LL;
  sub_14054BF10(&stru_14003AE38, 7u, &UserData);
  result = v8;
  if ( (_DWORD)v8 )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (ULONGLONG)&v8;
    sub_14054BF10(&stru_14003AE28, 1u, &UserData);
    result = v8;
  }
  if ( BYTE1(v6) && *((_QWORD *)&v6 + 1) == 1LL )
  {
    if ( result )
      return sub_14054BF10(&stru_14003AE58, 0, 0LL);
  }
  return result;
}

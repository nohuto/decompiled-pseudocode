/*
 * XREFs of sub_18000145C @ 0x18000145C
 * Callers:
 *     HamConnectToServerEx @ 0x180003150 (HamConnectToServerEx.c)
 * Callees:
 *     sub_180001104 @ 0x180001104 (sub_180001104.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

ULONG __fastcall sub_18000145C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7)
{
  _WORD *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h]
  __int64 v14; // [rsp+58h] [rbp-40h]
  __int64 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+68h] [rbp-30h]
  _WORD *v17; // [rsp+70h] [rbp-28h]
  int v18; // [rsp+78h] [rbp-20h]
  int v19; // [rsp+7Ch] [rbp-1Ch]

  v8 = *a7;
  if ( *a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v8 = &unk_1800266D4;
    v10 = 2;
  }
  v15 = a6;
  v13 = a5;
  v17 = v8;
  v18 = v10;
  v19 = 0;
  v16 = 8LL;
  v14 = 4LL;
  return sub_180001104((__int64)&dword_180032038, a2, 0LL, 0LL, 5u, &v12);
}

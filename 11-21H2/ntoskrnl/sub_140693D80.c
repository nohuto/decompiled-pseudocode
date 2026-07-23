/*
 * XREFs of sub_140693D80 @ 0x140693D80
 * Callers:
 *     sub_140216EE8 @ 0x140216EE8 (sub_140216EE8.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_14027A0F4 @ 0x14027A0F4 (sub_14027A0F4.c)
 *     sub_14028CDA0 @ 0x14028CDA0 (sub_14028CDA0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405B85A8 @ 0x1405B85A8 (sub_1405B85A8.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 */

__int64 __fastcall sub_140693D80(_QWORD *BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  __int64 result; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r8
  _OWORD v19[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+70h] [rbp-28h]

  v1 = BugCheckParameter2[158];
  result = 0LL;
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  if ( v1 )
    KeBugCheckEx(0x1Au, 0x3455uLL, (ULONG_PTR)BugCheckParameter2, v1, 0LL);
  v4 = (_QWORD *)BugCheckParameter2[210];
  if ( v4 )
  {
    v5 = v4[34];
    v6 = sub_14027A0F4();
    sub_140330080((__int64)(BugCheckParameter2 + 208), 0x11u, v7, v8, v6 + v8 - 1, 0, 0, v19);
    v9 = *((_QWORD *)&v19[0] + 1);
    v10 = sub_14032A72C((__int64)BugCheckParameter2);
    v11 = v4[36] + v5;
    v12 = v4 + 72;
    v13 = 0LL;
    v14 = v10;
    v15 = 2LL;
    do
    {
      v13 += *v12++;
      --v15;
    }
    while ( v15 );
    v16 = v13 + v11;
    if ( v16 )
      sub_14028CDA0((__int64)BugCheckParameter2, v16);
    v17 = v16 - v9;
    if ( v17 )
      sub_14028CE10(v14, v17);
    result = PsGetHostSilo();
    if ( BugCheckParameter2[238] )
    {
      sub_1405B85A8((__int64)(BugCheckParameter2 + 208));
      return sub_1406FEC50(BugCheckParameter2, v18);
    }
  }
  return result;
}

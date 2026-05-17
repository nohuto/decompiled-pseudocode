/*
 * XREFs of RtlCreateUserProcess @ 0x1800ECA30
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateUserProcessEx @ 0x18008C840 (RtlCreateUserProcessEx.c)
 */

__int64 __fastcall RtlCreateUserProcess(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _WORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+34h] [rbp-44h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]
  __int64 v15; // [rsp+48h] [rbp-30h]
  __int64 v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h]

  v12 = 0;
  v18 = 0LL;
  v11[0] = 1;
  v11[1] = HIWORD(a2);
  v14 = a5;
  v15 = a6;
  v16 = a8;
  v17 = a9;
  v13 = a4;
  return RtlCreateUserProcessEx(a1, a3, a7, (__int64)v11, a10);
}

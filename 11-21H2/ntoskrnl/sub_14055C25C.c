/*
 * XREFs of sub_14055C25C @ 0x14055C25C
 * Callers:
 *     sub_14093EC70 @ 0x14093EC70 (sub_14093EC70.c)
 *     sub_14093F260 @ 0x14093F260 (sub_14093F260.c)
 *     sub_14093F7D0 @ 0x14093F7D0 (sub_14093F7D0.c)
 *     sub_14093F9F0 @ 0x14093F9F0 (sub_14093F9F0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14093F428 @ 0x14093F428 (sub_14093F428.c)
 */

__int64 __fastcall sub_14055C25C(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        int *a9)
{
  signed int v9; // ecx
  unsigned __int64 v10; // rdx
  int v11; // eax
  unsigned int v13; // [rsp+58h] [rbp-21h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp-19h] BYREF
  int v15; // [rsp+68h] [rbp-11h]
  int v16; // [rsp+6Ch] [rbp-Dh]
  __int64 v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  __int64 v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]
  __int64 v21; // [rsp+90h] [rbp+17h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp+1Fh]

  v13 = 0;
  InputBuffer = 0LL;
  v15 = 0;
  v21 = 0LL;
  LODWORD(v22) = 0;
  v18 = a5;
  v20 = a7;
  v19 = a6;
  v16 = a1;
  v17 = a4;
  v9 = sub_14093F428(0x568004u, &InputBuffer, 0x30u, &v21, 0x10u, (__int64)&v13);
  if ( v9 >= 0 )
  {
    if ( v13 < 0x10 )
      return (unsigned int)-1073741434;
    v10 = v22;
    if ( a9 )
    {
      v11 = -1;
      if ( v22 <= 0xFFFFFFFF )
        v11 = v22;
      *a9 = v11;
      v9 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
    }
    if ( v10 < a8 )
      return (unsigned int)-1073741434;
  }
  return (unsigned int)v9;
}

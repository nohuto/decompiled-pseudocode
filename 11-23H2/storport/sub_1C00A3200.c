/*
 * XREFs of sub_1C00A3200 @ 0x1C00A3200
 * Callers:
 *     sub_1C00A3030 @ 0x1C00A3030 (sub_1C00A3030.c)
 * Callees:
 *     sub_1C001F038 @ 0x1C001F038 (sub_1C001F038.c)
 *     sub_1C001F0F0 @ 0x1C001F0F0 (sub_1C001F0F0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00A3308 @ 0x1C00A3308 (sub_1C00A3308.c)
 *     sub_1C00A33C8 @ 0x1C00A33C8 (sub_1C00A33C8.c)
 */

__int64 __fastcall sub_1C00A3200(__int64 a1, IRP *a2, char a3, unsigned int a4, unsigned int a5, _OWORD *a6)
{
  _OWORD *v6; // rdi
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  _OWORD v17[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v6 = v17;
  v17[0] = 0LL;
  if ( a6 )
    v6 = a6;
  memset(&v17[1], 0, 32);
  v18 = 0LL;
  v11 = sub_1C001F038((__int64)v6, a2);
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = a3;
    v11 = sub_1C00A33C8(v6, a2, v12);
    if ( v11 >= 0 )
    {
      sub_1C001F0F0((__int64)a2);
      LOBYTE(v13) = a3;
      v14 = sub_1C00A3308(v6, a2, v13);
      if ( (*(_DWORD *)(a1 + 152) & v14) != 0 )
        return (unsigned int)-1073741811;
      v15 = *((unsigned int *)v6 + 3);
      if ( (_DWORD)v15 )
      {
        if ( (unsigned int)(((unsigned __int64)(v14 & 0xFFF) + v15 + 4095) >> 12) > a4 || (unsigned int)v15 > a5 )
          return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)v11;
}

/*
 * XREFs of sub_1C00135CC @ 0x1C00135CC
 * Callers:
 *     sub_1C0018658 @ 0x1C0018658 (sub_1C0018658.c)
 *     sub_1C0041FE4 @ 0x1C0041FE4 (sub_1C0041FE4.c)
 * Callees:
 *     sub_1C0013728 @ 0x1C0013728 (sub_1C0013728.c)
 *     sub_1C0013774 @ 0x1C0013774 (sub_1C0013774.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0022EE0 (__report_rangecheckfailure.c)
 *     sub_1C00248F0 @ 0x1C00248F0 (sub_1C00248F0.c)
 */

__int64 __fastcall sub_1C00135CC(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  unsigned int v4; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  _BYTE *v8; // rdi
  char v9; // r15
  _BYTE *v10; // rax
  _BYTE *v11; // rdx
  char v12; // r8
  unsigned int v13; // eax
  __int128 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-50h]
  __int128 v18; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h]
  _BYTE v20[16]; // [rsp+50h] [rbp-30h]
  _BYTE v21[16]; // [rsp+60h] [rbp-20h]

  v2 = 0;
  v17 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v4 = 0;
  v18 = 0LL;
  do
  {
    v6 = v2;
    if ( v2 >= 9uLL )
      _report_rangecheckfailure(v2, a1);
    ++v2;
    v20[v6] = 0;
    v21[v6] = 0;
  }
  while ( v2 <= 8u );
  if ( (unsigned __int8)sub_1C0013774(&v16, a1) )
  {
    while ( 1 )
    {
      v7 = sub_1C0013728(&v16);
      v8 = (_BYTE *)v7;
      if ( !v7 )
        break;
      v9 = *(_BYTE *)(v7 + 1);
      if ( (v9 & 0x30) == 0 && (v9 & 0xFu) <= 8 )
      {
        if ( !(unsigned __int8)sub_1C0013774(&v18, a2) )
          break;
        while ( 1 )
        {
          v10 = (_BYTE *)sub_1C0013728(&v18);
          v11 = v10;
          if ( !v10 )
            break;
          v12 = v10[1];
          if ( (v12 & 0x30) == 0 && ((*v8 ^ *v10) & 0xF) == 0 && (v9 & 0xF) == (v12 & 0xF) )
          {
            v13 = (unsigned __int8)v8[3];
            v20[v9 & 0xF] = 1;
            if ( (_BYTE)v13 == v11[3] && !(unsigned int)sub_1C00248F0(v8 + 4, v11 + 4, v13) )
              v21[v9 & 0xF] = 1;
          }
        }
      }
    }
  }
  if ( !v20[3] && !v20[2] && !v20[8] )
  {
    if ( v20[1] )
    {
      return v21[1] == 0;
    }
    else
    {
      if ( !v20[0] )
        return 1LL;
      return v21[0] == 0;
    }
  }
  if ( v21[3] || v21[2] )
    return 0LL;
  LOBYTE(v4) = v21[8] == 0;
  return v4;
}

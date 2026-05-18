/*
 * XREFs of sub_180039C9C @ 0x180039C9C
 * Callers:
 *     sub_180039F98 @ 0x180039F98 (sub_180039F98.c)
 * Callees:
 *     sub_180039BAC @ 0x180039BAC (sub_180039BAC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180039C9C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, unsigned __int64))
{
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rbx
  int v19; // [rsp+B0h] [rbp+18h]
  int v20; // [rsp+B8h] [rbp+20h]

  v20 = a4;
  v19 = a3;
  v9 = a2;
  v10 = a5;
  if ( a4 > a5 )
  {
    v15 = a5 >> 1;
    v16 = (a2 - a1) >> 4;
    v14 = a1;
    v13 = a2 + 16 * (a5 >> 1);
    if ( v16 > 0 )
    {
      do
      {
        if ( a8(v13, v14 + 16 * ((unsigned __int64)v16 >> 1)) )
        {
          v16 = (unsigned __int64)v16 >> 1;
        }
        else
        {
          v14 += 16 * ((unsigned __int64)v16 >> 1) + 16;
          v16 += -1LL - ((unsigned __int64)v16 >> 1);
        }
      }
      while ( v16 > 0 );
      LODWORD(v9) = a2;
      LODWORD(a4) = v20;
      v10 = a5;
      LODWORD(a3) = v19;
    }
    v11 = (v14 - a1) >> 4;
  }
  else
  {
    v11 = a4 >> 1;
    v12 = (a3 - a2) >> 4;
    v13 = a2;
    v14 = a1 + 16 * (a4 >> 1);
    if ( v12 > 0 )
    {
      do
      {
        if ( a8(v13 + 16 * ((unsigned __int64)v12 >> 1), v14) )
        {
          v13 += 16 * ((unsigned __int64)v12 >> 1) + 16;
          v12 += -1LL - ((unsigned __int64)v12 >> 1);
        }
        else
        {
          v12 = (unsigned __int64)v12 >> 1;
        }
      }
      while ( v12 > 0 );
      v9 = a2;
      LODWORD(a4) = v20;
      v10 = a5;
      LODWORD(a3) = v19;
    }
    v15 = (v13 - v9) >> 4;
  }
  return sub_180039BAC(a1, v9, a3, a4, v10, a6, a7, (__int64)a8, v14, v13, v11, v15);
}

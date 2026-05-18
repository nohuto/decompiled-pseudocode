/*
 * XREFs of sub_18007FDAC @ 0x18007FDAC
 * Callers:
 *     sub_18002CAA0 @ 0x18002CAA0 (sub_18002CAA0.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 *     sub_18002CE1C @ 0x18002CE1C (sub_18002CE1C.c)
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 *     sub_18007FD3C @ 0x18007FD3C (sub_18007FD3C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007FDAC(__int64 a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  char **v7; // rbx

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  v2 = a1 + 8;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = 0x86BCA1AF286BCA1BuLL * (*(__int64 *)(a1 + 16) >> 3);
  if ( v3 <= 0xF0 )
  {
    if ( v3 < 0xF0 )
    {
      v4 = 0x86BCA1AF286BCA1BuLL * (*(__int64 *)(a1 + 24) >> 3);
      if ( v4 >= 0xF0 )
      {
        *(_QWORD *)(v2 + 8) = sub_18007FD3C(*(char **)(v2 + 8), 240 - v3);
      }
      else
      {
        v5 = v4 >> 1;
        if ( v4 <= 0x1AF286BCA1AF286LL - (v4 >> 1) )
        {
          v6 = v5 + v4;
          if ( v5 + v4 >= 0xF0 )
          {
            if ( v6 > 0x1AF286BCA1AF286LL )
              sub_1800120D4();
          }
          else
          {
            v6 = 240LL;
          }
        }
        else
        {
          v6 = 0x1AF286BCA1AF286LL;
        }
        v7 = (char **)sub_180011088(152 * v6);
        sub_18007FD3C((char *)&v7[19 * v3], 240 - v3);
        sub_18002CE1C(*(_QWORD *)v2, *(_QWORD *)(v2 + 8), v7);
        sub_18002FB30(v2, (__int64)v7, 240LL, v6);
      }
    }
  }
  else
  {
    sub_18002CC9C((char **)0x8E80, *(char ***)(a1 + 16));
    *(_QWORD *)(v2 + 8) = 36480LL;
  }
  return a1;
}

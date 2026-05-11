/*
 * XREFs of PropertyInitializeDbLevelCache @ 0x1C002FEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyInitializeDbLevelCache(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // r8d
  int v7; // edi
  int v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v10 = 0;
  v7 = 129;
  v9 = 0;
  while ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *, _DWORD, int, int *))(a2 + 136))(
           a1,
           a2,
           4LL,
           &v9,
           *a3,
           v7,
           &v10);
    if ( v5 >= 0 )
    {
      switch ( v7 )
      {
        case 129:
          a3[3] = v9;
          break;
        case 130:
          a3[6] = v9;
          break;
        case 131:
          a3[7] = v9;
          break;
        case 132:
          a3[4] = v9;
          return (unsigned int)v5;
      }
    }
    if ( (unsigned int)++v7 > 0x84 )
      return (unsigned int)v5;
  }
  return (unsigned int)v5;
}

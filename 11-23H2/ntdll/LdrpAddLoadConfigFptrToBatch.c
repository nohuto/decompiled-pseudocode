/*
 * XREFs of LdrpAddLoadConfigFptrToBatch @ 0x18002BD88
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18002B8E4 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpAddLoadConfigFptrToBatch(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx

  v7 = *a3;
  v8 = *a5;
  if ( !*a5 || (v9 = *(_QWORD *)(a4 + 48), v8 < v9) || v8 > *(unsigned int *)(a4 + 64) + v9 - 8 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  *a5 = v8;
  if ( v7 < 6 )
  {
    v10 = 2 * v7;
    *(_QWORD *)(a1 + 8 * v10 + 8) = a6;
    *a3 = v7 + 1;
    *(_QWORD *)(a1 + 8 * v10) = v8;
    return 0LL;
  }
  return 3221225534LL;
}

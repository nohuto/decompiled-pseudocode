/*
 * XREFs of sub_140843098 @ 0x140843098
 * Callers:
 *     sub_14075BB10 @ 0x14075BB10 (sub_14075BB10.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_1408433DC @ 0x1408433DC (sub_1408433DC.c)
 */

__int64 __fastcall sub_140843098(int a1, int a2, int a3, unsigned int *a4, __int64 a5, int a6, int *a7, void *a8)
{
  unsigned int v9; // esi
  int v11; // ebx
  unsigned int v12; // edx
  int v13; // eax
  int v15; // [rsp+30h] [rbp-18h] BYREF
  int v16[5]; // [rsp+34h] [rbp-14h] BYREF

  v15 = 2;
  v9 = 0;
  v16[0] = 0;
  if ( (unsigned int)sub_1408433DC(a1, a2, a3, a5, (__int64)&v15, (__int64)v16) )
  {
    v11 = v15;
    if ( (a6 != 1 || v15 == 2) && (a6 != 2 || v15 != 2) )
    {
      if ( v15 == 1 )
      {
        memset(a8, 0, 0x80uLL);
        v12 = 0;
      }
      else
      {
        v12 = *a4;
        if ( *a4 >= 0x10 )
        {
          sub_1406E0C3C(1LL, (__int64)"SdbpCheckExe");
          ++*a4;
          return 0;
        }
      }
      v13 = v16[0];
      *((_DWORD *)a8 + 2 * v12) = a3;
      *((_DWORD *)a8 + 2 * v12 + 1) = v13;
      *a4 = v12 + 1;
      v9 = 1;
      if ( a7 )
        *a7 = v11;
    }
  }
  return v9;
}

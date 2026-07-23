/*
 * XREFs of sub_14077DF24 @ 0x14077DF24
 * Callers:
 *     sub_140698298 @ 0x140698298 (sub_140698298.c)
 *     sub_14077D784 @ 0x14077D784 (sub_14077D784.c)
 *     sub_14077DBE8 @ 0x14077DBE8 (sub_14077DBE8.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 * Callees:
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077D29C @ 0x14077D29C (sub_14077D29C.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 */

__int64 __fastcall sub_14077DF24(__int64 a1, int a2, _WORD *a3, __int64 a4, _DWORD *a5, __int64 a6, int a7, _DWORD *a8)
{
  int v9; // ebx
  int v10; // eax
  unsigned int v12; // eax
  __int64 v15; // [rsp+C8h] [rbp-48h] BYREF
  _WORD v16[48]; // [rsp+D0h] [rbp-40h] BYREF

  *a5 = 0;
  *a8 = 0;
  if ( !a3 || (v9 = sub_1402DF9D0(a3, 85LL, &v15), v9 >= 0) )
  {
    v9 = sub_1402DFBC4(
           v16,
           0x30uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
           *(_DWORD *)a4,
           *(unsigned __int16 *)(a4 + 4),
           *(unsigned __int16 *)(a4 + 6),
           *(unsigned __int8 *)(a4 + 8),
           *(unsigned __int8 *)(a4 + 9),
           *(unsigned __int8 *)(a4 + 10),
           *(unsigned __int8 *)(a4 + 11),
           *(unsigned __int8 *)(a4 + 12),
           *(unsigned __int8 *)(a4 + 13),
           *(unsigned __int8 *)(a4 + 14),
           *(unsigned __int8 *)(a4 + 15),
           *(_DWORD *)(a4 + 16),
           0);
    if ( v9 >= 0 )
    {
      v10 = sub_14077EF20(a1, a2, (unsigned int)v16, 1, 0);
      v9 = v10;
      if ( v10 == -1073741772 )
        return (unsigned int)-1073741275;
      if ( v10 < 0 )
        return (unsigned int)v9;
      v12 = sub_14077D29C(a1, 0LL);
      if ( v12 == -1073741772 || v12 == -1073741444 )
      {
        return (unsigned int)-1073741275;
      }
      else if ( !v12 || v12 == -1073741789 )
      {
        *a5 = 0;
        *a8 = a7;
        if ( v12 || !a7 )
          return (unsigned int)-1073741789;
      }
      else
      {
        return v12;
      }
    }
  }
  return (unsigned int)v9;
}

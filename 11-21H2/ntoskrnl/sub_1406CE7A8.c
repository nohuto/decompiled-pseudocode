/*
 * XREFs of sub_1406CE7A8 @ 0x1406CE7A8
 * Callers:
 *     sub_1406CE780 @ 0x1406CE780 (sub_1406CE780.c)
 *     sub_14080ADE0 @ 0x14080ADE0 (sub_14080ADE0.c)
 *     sub_140813F88 @ 0x140813F88 (sub_140813F88.c)
 *     sub_14081CB70 @ 0x14081CB70 (sub_14081CB70.c)
 *     sub_14093FBBC @ 0x14093FBBC (sub_14093FBBC.c)
 *     sub_140A2150C @ 0x140A2150C (sub_140A2150C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406CE7A8(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // edi
  int v8; // esi
  __int64 v9; // rax
  unsigned int v10; // edi
  void *Src; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-60h]
  unsigned int *v14; // [rsp+30h] [rbp-58h]
  __int128 SystemInformation; // [rsp+38h] [rbp-50h] BYREF
  __int128 v16; // [rsp+48h] [rbp-40h]

  v14 = a4;
  *a4 = 0;
  Src = 0LL;
  SystemInformation = 0LL;
  v16 = 0LL;
  v7 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v7 = 0;
    if ( (int)v16 < 3 )
      v7 = v16;
  }
  v8 = sub_14042A5E0(v7, &Src);
  if ( v8 >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *((_WORD *)Src + v9) );
    v10 = 2 * v9 + 2;
    v13 = v10;
    if ( a2 && a3 >= v10 )
    {
      v8 = 0;
      memmove(a2, Src, v10);
    }
    else
    {
      v8 = -1073741789;
    }
    *a4 = v10;
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v8;
}

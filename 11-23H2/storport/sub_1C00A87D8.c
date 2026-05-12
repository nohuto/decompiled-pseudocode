/*
 * XREFs of sub_1C00A87D8 @ 0x1C00A87D8
 * Callers:
 *     sub_1C00A0DEC @ 0x1C00A0DEC (sub_1C00A0DEC.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C00A87D8(__int64 a1, _DWORD *a2, size_t *a3)
{
  int v7; // esi
  __int64 v8; // rcx
  size_t v9; // rax
  _BYTE Dst[8]; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE Src[144]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(Dst, 0, 0x90uLL);
  if ( !(unsigned int)sub_1C0007798(a1, 19) )
    return 3221225659LL;
  memset_0(a2, 0, *a3);
  if ( *a3 >= 8 )
  {
    if ( *a3 >= 0x10 )
    {
      v7 = sub_1C001A364(a1 + 336);
      if ( v7 < 0 )
        goto LABEL_9;
      v8 = -1LL;
      do
        ++v8;
      while ( Src[v8] );
      v9 = (unsigned int)(v8 + 12);
      *a2 = 16;
      a2[1] = v9;
      if ( *a3 >= v9 )
      {
        a2[2] = v8;
        memmove(a2 + 3, Src, (unsigned int)v8);
        return (unsigned int)v7;
      }
    }
    else
    {
      *a2 = 16;
      a2[1] = 16;
    }
    *a3 = 8LL;
    return 0LL;
  }
  v7 = -1073741789;
LABEL_9:
  *a3 = 0LL;
  return (unsigned int)v7;
}

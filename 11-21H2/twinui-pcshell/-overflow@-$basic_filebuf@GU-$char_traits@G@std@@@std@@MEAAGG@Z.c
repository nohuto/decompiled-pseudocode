/*
 * XREFs of ?overflow@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAGG@Z @ 0x1805DE500
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Reset_back@?$basic_filebuf@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1805DE300 (-_Reset_back@-$basic_filebuf@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // si
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  unsigned __int16 v10; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v11[6]; // [rsp+42h] [rbp-3Eh] BYREF
  _BYTE *v12; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int16 *v13; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v14[32]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v15; // [rsp+78h] [rbp-8h] BYREF

  v2 = a2;
  if ( a2 == 0xFFFF )
    return 0LL;
  if ( std::basic_streambuf<unsigned short>::pptr(a1) )
  {
    v5 = std::basic_streambuf<unsigned short>::epptr(a1);
    if ( std::basic_streambuf<unsigned short>::pptr(a1) < v5 )
    {
      *(_WORD *)std::basic_streambuf<unsigned short>::_Pninc(a1) = v2;
      return v2;
    }
  }
  if ( !*(_QWORD *)(a1 + 128) )
    return 0xFFFFLL;
  std::basic_filebuf<unsigned short>::_Reset_back(a1);
  v6 = *(_QWORD *)(a1 + 104);
  if ( !v6 )
  {
    v7 = v2;
    goto LABEL_10;
  }
  v10 = v2;
  v8 = std::codecvt<unsigned short,char,_Mbstatet>::out(v6, a1 + 116, &v10, v11, &v13, v14, &v15, &v12);
  if ( v8 < 0 )
    return 0xFFFFLL;
  if ( v8 > 1 )
  {
    if ( v8 == 3 )
    {
      v7 = v10;
LABEL_10:
      if ( (unsigned __int16)_o_fputwc(v7, *(_QWORD *)(a1 + 128)) == 0xFFFF )
        return (unsigned __int16)-1;
      return v2;
    }
    return 0xFFFFLL;
  }
  if ( v12 != v14 )
  {
    v9 = v12 - v14;
    if ( v9 != _o_fwrite(v14, 1LL, v12 - v14, *(_QWORD *)(a1 + 128)) )
      return 0xFFFFLL;
  }
  *(_BYTE *)(a1 + 114) = 1;
  result = v2;
  if ( v13 == &v10 )
    return 0xFFFFLL;
  return result;
}

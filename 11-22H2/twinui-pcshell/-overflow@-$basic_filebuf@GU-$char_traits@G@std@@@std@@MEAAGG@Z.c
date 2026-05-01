/*
 * XREFs of ?overflow@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAGG@Z @ 0x1806E44A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Reset_back@?$basic_filebuf@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1806E3F88 (-_Reset_back@-$basic_filebuf@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // r15
  unsigned __int16 v3; // si
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  unsigned __int16 v12; // [rsp+40h] [rbp-40h] BYREF
  char v13[6]; // [rsp+42h] [rbp-3Eh] BYREF
  _BYTE *v14; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int16 *v15; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v16[32]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h] BYREF

  v2 = -1;
  v3 = a2;
  if ( a2 == 0xFFFF )
    return 0LL;
  if ( std::basic_streambuf<unsigned short>::pptr(a1) )
  {
    v6 = std::basic_streambuf<unsigned short>::epptr(a1);
    if ( std::basic_streambuf<unsigned short>::pptr(a1) < v6 )
    {
      *(_WORD *)std::basic_streambuf<unsigned short>::_Pninc(a1) = v3;
      return v3;
    }
  }
  if ( *(_QWORD *)(a1 + 128) )
  {
    std::basic_filebuf<unsigned short>::_Reset_back(a1);
    v7 = *(_QWORD *)(a1 + 104);
    if ( !v7 )
    {
      v8 = v3;
      goto LABEL_10;
    }
    v12 = v3;
    v9 = std::codecvt<unsigned short,char,_Mbstatet>::out(v7, a1 + 116, &v12, v13, &v15, v16, &v17, &v14);
    if ( v9 && (v10 = v9 - 1) != 0 )
    {
      if ( v10 == 2 )
      {
        v8 = v12;
LABEL_10:
        if ( (unsigned __int16)_o_fputwc(v8, *(_QWORD *)(a1 + 128)) == 0xFFFF )
          return (unsigned __int16)-1;
        return v3;
      }
    }
    else if ( v14 == v16 || (v11 = v14 - v16, v11 == _o_fwrite(v16, 1LL, v14 - v16, *(_QWORD *)(a1 + 128))) )
    {
      *(_BYTE *)(a1 + 114) = 1;
      if ( v15 != &v12 )
        return v3;
    }
  }
  return v2;
}

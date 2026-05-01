/*
 * XREFs of ??$_Med3_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x1803D3344
 * Callers:
 *     ??$_Guess_median_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x1803D31B0 (--$_Guess_median_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Inter.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18009F070 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??MInternal@Windows@@YA_NAEBVString@01@0@Z @ 0x1803D4BCC (--MInternal@Windows@@YA_NAEBVString@01@0@Z.c)
 */

void __fastcall std::_Med3_unchecked<Windows::Internal::String *,std::less<void>>(
        HSTRING *this,
        HSTRING *a2,
        HSTRING *a3)
{
  HSTRING v6; // rbx
  HSTRING v7; // rbx
  HSTRING v8; // rbx

  if ( (unsigned __int8)Windows::Internal::operator<(a2, this) )
  {
    v6 = *a2;
    *a2 = 0LL;
    Windows::Internal::String::Release(a2);
    *a2 = *this;
    *this = 0LL;
    Windows::Internal::String::Release(this);
    *this = v6;
  }
  if ( (unsigned __int8)Windows::Internal::operator<(a3, a2) )
  {
    v7 = *a3;
    *a3 = 0LL;
    Windows::Internal::String::Release(a3);
    *a3 = *a2;
    *a2 = 0LL;
    Windows::Internal::String::Release(a2);
    *a2 = v7;
    if ( (unsigned __int8)Windows::Internal::operator<(a2, this) )
    {
      v8 = *a2;
      *a2 = 0LL;
      Windows::Internal::String::Release(a2);
      *a2 = *this;
      *this = 0LL;
      Windows::Internal::String::Release(this);
      *this = v8;
    }
  }
}

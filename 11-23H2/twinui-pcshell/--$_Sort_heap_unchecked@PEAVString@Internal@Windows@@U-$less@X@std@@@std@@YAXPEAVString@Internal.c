/*
 * XREFs of ??$_Sort_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1803D3B70
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1803D3C24 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18009F070 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@_J1$$QEAV123@U?$less@X@0@@Z @ 0x1803D36FC (--$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U-$less@X@std@@@std@@YAXPEAVString@.c)
 */

int __fastcall std::_Sort_heap_unchecked<Windows::Internal::String *,std::less<void>>(HSTRING *a1, __int64 a2)
{
  signed __int64 v3; // rax
  HSTRING *v4; // rsi
  HSTRING v5; // rax
  HSTRING *v6; // rdi
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  v3 = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v3 >= 16 )
  {
    v4 = (HSTRING *)(a2 - 8);
    do
    {
      v5 = *v4;
      *v4 = 0LL;
      v6 = v4;
      string = v5;
      Windows::Internal::String::Release(v4);
      *v4 = *a1;
      *a1 = 0LL;
      LODWORD(v3) = (unsigned int)std::_Pop_heap_hole_by_index<Windows::Internal::String *,Windows::Internal::String,std::less<void>>(
                                    (__int64)a1,
                                    0LL,
                                    v4 - a1,
                                    &string);
      if ( string )
        LODWORD(v3) = WindowsDeleteString(string);
      --v4;
    }
    while ( (__int64)(((char *)v6 - (char *)a1) & 0xFFFFFFFFFFFFFFF8uLL) >= 16 );
  }
  return v3;
}

/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@_J1$$QEAV123@U?$less@X@0@@Z @ 0x1803D36FC
 * Callers:
 *     ??$_Sort_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1803D3B70 (--$_Sort_heap_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal.c)
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1803D3C24 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18009F070 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??MInternal@Windows@@YA_NAEBVString@01@0@Z @ 0x1803D4BCC (--MInternal@Windows@@YA_NAEBVString@01@0@Z.c)
 */

HSTRING __fastcall std::_Pop_heap_hole_by_index<Windows::Internal::String *,Windows::Internal::String,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        HSTRING *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rbx
  __int64 i; // rsi
  HSTRING *v11; // rbx
  HSTRING *v12; // rbx
  __int64 v13; // rsi
  HSTRING *v14; // r14
  HSTRING *v15; // rbx
  HSTRING *v16; // rbx
  HSTRING result; // rax

  v5 = (a3 - 1) >> 1;
  v7 = a2;
  for ( i = a2; i < v5; *(_QWORD *)(a1 + 8 * i) = 0LL )
  {
    i = 2 * i + 2;
    if ( (unsigned __int8)Windows::Internal::operator<(a1 + 8 * i, a1 + 8 * i - 8) )
      --i;
    v11 = (HSTRING *)(a1 + 8 * v7);
    Windows::Internal::String::Release(v11);
    *v11 = *(HSTRING *)(a1 + 8 * i);
    v7 = i;
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    v12 = (HSTRING *)(a1 + 8 * v7);
    Windows::Internal::String::Release(v12);
    *v12 = *(HSTRING *)(a1 + 8 * a3 - 8);
    v7 = a3 - 1;
    *(_QWORD *)(a1 + 8 * a3 - 8) = 0LL;
  }
  if ( a2 < v7 )
  {
    do
    {
      v13 = (v7 - 1) >> 1;
      v14 = (HSTRING *)(a1 + 8 * v13);
      if ( !(unsigned __int8)Windows::Internal::operator<(v14, a4) )
        break;
      v15 = (HSTRING *)(a1 + 8 * v7);
      Windows::Internal::String::Release(v15);
      *v15 = *v14;
      v7 = v13;
      *v14 = 0LL;
    }
    while ( a2 < v13 );
  }
  v16 = (HSTRING *)(a1 + 8 * v7);
  Windows::Internal::String::Release(v16);
  result = *a4;
  *v16 = *a4;
  *a4 = 0LL;
  return result;
}

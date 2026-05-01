/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0U?$less@X@0@@Z @ 0x1803D325C
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1803D3C24 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18009F070 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??MInternal@Windows@@YA_NAEBVString@01@0@Z @ 0x1803D4BCC (--MInternal@Windows@@YA_NAEBVString@01@0@Z.c)
 */

Windows::Internal::String *__fastcall std::_Insertion_sort_unchecked<Windows::Internal::String *,std::less<void>>(
        Windows::Internal::String *this,
        Windows::Internal::String *a2)
{
  Windows::Internal::String *i; // rsi
  __int64 v5; // rbx
  Windows::Internal::String *v6; // r15
  HSTRING *v7; // rdi
  Windows::Internal::String *j; // rdi
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( this != a2 )
  {
    for ( i = (Windows::Internal::String *)((char *)this + 8); i != a2; i = (Windows::Internal::String *)((char *)i + 8) )
    {
      v5 = *(_QWORD *)i;
      *(_QWORD *)i = 0LL;
      v10 = v5;
      v6 = i;
      if ( (unsigned __int8)Windows::Internal::operator<(&v10, this) )
      {
        if ( i != this )
        {
          do
          {
            v7 = (HSTRING *)v6;
            v6 = (Windows::Internal::String *)((char *)v6 - 8);
            Windows::Internal::String::Release(v7);
            *v7 = *(HSTRING *)v6;
            *(_QWORD *)v6 = 0LL;
          }
          while ( v6 != this );
        }
        Windows::Internal::String::Release((HSTRING *)this);
        *(_QWORD *)this = v5;
      }
      else
      {
        for ( j = i; ; *(_QWORD *)j = 0LL )
        {
          j = (Windows::Internal::String *)((char *)j - 8);
          if ( !(unsigned __int8)Windows::Internal::operator<(&v10, j) )
            break;
          Windows::Internal::String::Release((HSTRING *)v6);
          *(_QWORD *)v6 = *(_QWORD *)j;
          v6 = j;
        }
        Windows::Internal::String::Release((HSTRING *)v6);
        *(_QWORD *)v6 = v5;
      }
    }
  }
  return a2;
}

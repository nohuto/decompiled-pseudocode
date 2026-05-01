/*
 * XREFs of ?_SetWindowRgn@CDragVisual@@AEAAXXZ @ 0x1805356EC
 * Callers:
 *     ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x180533C30 (-SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801569F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDragVisual::_SetWindowRgn(CDragVisual *this)
{
  HRGN RectRgn; // rax
  HRGN v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 280) )
  {
    RectRgn = CreateRectRgn(
                _mm_cvtsi128_si32(*((__m128i *)this + 13)) - *((_DWORD *)this + 48),
                *((_DWORD *)this + 49) + HIDWORD(*((_QWORD *)this + 26)),
                (unsigned int)*((_QWORD *)this + 27) - *((_DWORD *)this + 48),
                *((_DWORD *)this + 49) + HIDWORD(*((_OWORD *)this + 13)));
    v3 = RectRgn;
    if ( RectRgn )
    {
      if ( SetWindowRgn(*((HWND *)this + 19), RectRgn, 1) )
      {
        *((_BYTE *)this + 280) = 1;
        v3 = 0LL;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&v3);
  }
}

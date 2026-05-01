/*
 * XREFs of ?GetAccessibleName@CSwitchItemElement@@UEAAJPEAPEAG@Z @ 0x180572F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemElement::GetAccessibleName(CSwitchItemElement *this, unsigned __int16 **a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 *v7; // rax
  unsigned __int16 *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 73) + 24LL))(*((_QWORD *)this + 73));
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 == -1LL )
  {
    if ( *(_QWORD *)v3 )
    {
      do
        ++v4;
      while ( *(_WORD *)(*(_QWORD *)v3 + 2 * v4) );
    }
    else
    {
      v4 = 0LL;
    }
  }
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)&v9,
         *(const unsigned __int16 **)v3,
         v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v9;
    v9 = 0LL;
    v11 = 0LL;
    v10 = 0LL;
    *a2 = v7;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
      (const char *)(unsigned int)v5);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
  return v6;
}

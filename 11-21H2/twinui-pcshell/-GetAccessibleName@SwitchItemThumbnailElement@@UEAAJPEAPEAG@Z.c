/*
 * XREFs of ?GetAccessibleName@SwitchItemThumbnailElement@@UEAAJPEAPEAG@Z @ 0x1804CF170
 * Callers:
 *     <none>
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::GetAccessibleName(
        SwitchItemThumbnailElement *this,
        unsigned __int16 **a2)
{
  __int64 *v3; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int16 *v8; // rax
  unsigned __int16 *v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v3 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 72) + 24LL))(*((_QWORD *)this + 72));
  v4 = v3[1];
  v5 = *v3;
  if ( v4 == -1LL )
  {
    if ( v5 )
    {
      do
        ++v4;
      while ( *(_WORD *)(v5 + 2 * v4) );
    }
    else
    {
      v4 = 0LL;
    }
  }
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)&v10,
         v5,
         v4);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = v10;
    v10 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    *a2 = v8;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v6);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v10);
  return v7;
}

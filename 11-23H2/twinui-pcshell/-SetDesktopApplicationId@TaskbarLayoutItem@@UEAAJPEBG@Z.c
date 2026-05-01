/*
 * XREFs of ?SetDesktopApplicationId@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x1803EB9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall TaskbarLayoutItem::SetDesktopApplicationId(TaskbarLayoutItem *this, const unsigned __int16 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)this + 96,
         a2,
         0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6F,
    (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}

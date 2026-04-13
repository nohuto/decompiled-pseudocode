/*
 * XREFs of ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x18008422C
 * Callers:
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x1800838B4 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800842F0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::SetUriParam(
        CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  wchar_t **v4; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = &off_1801AD910;
  while ( CompareStringOrdinal(a2, -1, *v4, -1, 1) != 2 )
  {
    v4 += 2;
    if ( v4 == (wchar_t **)&std::invalid_argument `RTTI Type Descriptor' )
      goto LABEL_4;
  }
  if ( *((_DWORD *)v4 + 2) == -1 )
  {
LABEL_4:
    v7 = -2147024809;
    v8 = 93LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)v7);
    return v7;
  }
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (char *)this + 24 * *((int *)v4 + 2),
         a3,
         -1LL);
  if ( (v7 & 0x80000000) != 0 )
  {
    v8 = 94LL;
    goto LABEL_5;
  }
  return v7;
}

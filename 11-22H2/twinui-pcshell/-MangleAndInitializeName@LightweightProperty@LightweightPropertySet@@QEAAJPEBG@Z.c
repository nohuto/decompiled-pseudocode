/*
 * XREFs of ?MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z @ 0x18004A028
 * Callers:
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x180049E2C (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall LightweightPropertySet::LightweightProperty::MangleAndInitializeName(
        LightweightPropertySet::LightweightProperty *this,
        const unsigned __int16 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7[128]; // [rsp+20h] [rbp-218h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]

  _o_wcscpy_s(v7, 256LL, L"LightweightProperty_");
  _o_wcscat_s(v7, 256LL, a2);
  v4 = Windows::Internal::String::_InitializeHelper(this, (const unsigned __int16 *)v7);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v4,
      v7[0]);
  return v5;
}

/*
 * XREFs of ?stoi@std@@YAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PEA_KH@Z @ 0x1800913C0
 * Callers:
 *     ?ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090460 (-ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV-$basic_string@DU-$char_t.c)
 *     ?ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090A38 (-ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::stoi(char *String, char *a2, int a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  char *EndPtr; // [rsp+38h] [rbp+10h] BYREF

  EndPtr = a2;
  v5 = (_DWORD *)_o__errno();
  v6 = v5;
  if ( *((_QWORD *)String + 3) >= 0x10uLL )
    String = *(char **)String;
  *v5 = 0;
  strtol(String, &EndPtr, a3);
  if ( String == EndPtr )
  {
    std::_Xinvalid_argument("invalid stoi argument");
    __debugbreak();
  }
  if ( *v6 == 34 )
  {
    std::_Xout_of_range("stoi argument out of range");
    __debugbreak();
  }
}

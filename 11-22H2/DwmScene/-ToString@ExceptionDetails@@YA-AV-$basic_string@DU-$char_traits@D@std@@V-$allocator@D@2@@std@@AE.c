/*
 * XREFs of ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUD3D11_TEXTURE2D_DESC@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF074
 * Callers:
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 *     ?GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@II@Z @ 0x1800CEC40 (-GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11Texture2.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$?6DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z @ 0x18001DF98 (--$-6DU-$char_traits@D@std@@V-$allocator@D@1@@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@.c)
 *     ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x1800203F0 (--$-6U-$char_traits@D@std@@@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0@AEAV10@PEBD@Z.c)
 *     ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800205F0 (--0-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??_D?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180020748 (--_D-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180020F24 (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU.c)
 *     ??6ExceptionDetails@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEAV12@AEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x1800CCB94 (--6ExceptionDetails@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEAV12@AEBUD3D11_TEXTURE.c)
 *     ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF140 (-ToString@ExceptionDetails@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator_ea_1800CF140.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ExceptionDetails::ToString(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v12[240]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v13[32]; // [rsp+130h] [rbp-48h] BYREF

  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>((__int64)v11);
  v6 = std::operator<<<std::char_traits<char>>((__int64)v12, (__int64)"desc=");
  v7 = ExceptionDetails::operator<<(v6, a2);
  v8 = std::operator<<<std::char_traits<char>>(v7, (__int64)", subresourceData=");
  v9 = (_QWORD *)ExceptionDetails::ToString(v13, a3);
  std::operator<<<char>(v8, v9);
  std::string::_Tidy_deallocate((__int64)v13);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str((__int64)v11, a1);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbase destructor'((__int64)v11);
  return a1;
}

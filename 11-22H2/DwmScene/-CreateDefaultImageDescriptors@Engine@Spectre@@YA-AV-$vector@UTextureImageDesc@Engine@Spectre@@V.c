/*
 * XREFs of ?CreateDefaultImageDescriptors@Engine@Spectre@@YA?AV?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEBUTextureDesc@12@_K@Z @ 0x180056230
 * Callers:
 *     ?CreateDefaultImageSetView@Engine@Spectre@@YA?AUTextureImageSetView@12@AEBUTextureDesc@12@PEBX_K@Z @ 0x180056318 (-CreateDefaultImageSetView@Engine@Spectre@@YA-AUTextureImageSetView@12@AEBUTextureDesc@12@PEBX_K.c)
 * Callees:
 *     Spectre::Engine::GetFormatPitch @ 0x180048848 (Spectre--Engine--GetFormatPitch.c)
 *     ??$emplace_back@_KAEB_KIIIH@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@QEAA?A_T$$QEA_KAEB_K$$QEAI22$$QEAH@Z @ 0x180054F34 (--$emplace_back@_KAEB_KIIIH@-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator@UTextureImag.c)
 *     Spectre::Engine::GetFormatRowPitch @ 0x1800566E4 (Spectre--Engine--GetFormatRowPitch.c)
 *     Spectre::Engine::GetFormatSlicePitch @ 0x180056720 (Spectre--Engine--GetFormatSlicePitch.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::CreateDefaultImageDescriptors(_QWORD *a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // r15
  int FormatPitch; // [rsp+44h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int64 v11[3]; // [rsp+50h] [rbp-18h] BYREF
  int v12; // [rsp+A8h] [rbp+40h] BYREF
  int FormatSlicePitch; // [rsp+B0h] [rbp+48h] BYREF
  int FormatRowPitch; // [rsp+B8h] [rbp+50h] BYREF

  v5 = (a2[5] & 0x10) != 0 ? 6LL : 1LL;
  v6 = a3 / v5;
  v10 = a3 / v5;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v12 = 0;
    FormatSlicePitch = Spectre::Engine::GetFormatSlicePitch(a2[4], *a2, a2[1]);
    FormatRowPitch = Spectre::Engine::GetFormatRowPitch(a2[4], *a2);
    FormatPitch = Spectre::Engine::GetFormatPitch(a2[4]);
    v11[0] = v6 * v7;
    std::vector<Spectre::Engine::TextureImageDesc>::emplace_back<unsigned __int64,unsigned __int64 const &,unsigned int,unsigned int,unsigned int,int>(
      (__int64)a1,
      (__int64 *)v11,
      &v10,
      &FormatPitch,
      &FormatRowPitch,
      &FormatSlicePitch,
      &v12);
    if ( ++v7 >= v5 )
      break;
    v6 = v10;
  }
  return a1;
}

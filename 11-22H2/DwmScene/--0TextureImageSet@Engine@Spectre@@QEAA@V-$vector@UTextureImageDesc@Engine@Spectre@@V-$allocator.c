/*
 * XREFs of ??0TextureImageSet@Engine@Spectre@@QEAA@V?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@V?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@4@_K@Z @ 0x180055404
 * Callers:
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x180025A6C (--1-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAXXZ @ 0x180051E80 (-_Tidy@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@A.c)
 *     ??0TextureImageSetView@Engine@Spectre@@QEAA@V?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@PEBX_K@Z @ 0x1800554E0 (--0TextureImageSetView@Engine@Spectre@@QEAA@V-$vector@UTextureImageDesc@Engine@Spectre@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::TextureImageSet::TextureImageSet(_QWORD *a1, __int64 *a2, void **a3, __int64 a4)
{
  void *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rax
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = *a3;
  v9 = a2[2];
  a2[2] = 0LL;
  v10 = a2[1];
  a2[1] = 0LL;
  v11 = *a2;
  *a2 = 0LL;
  v14[0] = v11;
  v14[1] = v10;
  v14[2] = v9;
  ((void (__fastcall *)(_QWORD *, _QWORD *, void *, __int64))Spectre::Engine::TextureImageSetView::TextureImageSetView)(
    a1,
    v14,
    v8,
    a4);
  *a1 = &Spectre::Engine::TextureImageSet::`vftable';
  v12 = *a3;
  *a3 = 0LL;
  a1[7] = v12;
  std::vector<D3D11_INPUT_ELEMENT_DESC>::_Tidy((__int64)a2);
  std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(a3);
  return a1;
}

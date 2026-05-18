/*
 * XREFs of ??0TextureImageSetView@Engine@Spectre@@QEAA@$$QEAU012@PEBX_K@Z @ 0x180055494
 * Callers:
 *     ??0TextureImageSet@Engine@Spectre@@QEAA@$$QEAUTextureImageSetView@12@V?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@_K@Z @ 0x1800553C0 (--0TextureImageSet@Engine@Spectre@@QEAA@$$QEAUTextureImageSetView@12@V-$unique_ptr@$$BY0A@EU-$de.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::TextureImageSetView::TextureImageSetView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rax

  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = &Spectre::Engine::TextureImageSetView::`vftable';
  *(_QWORD *)(a1 + 16) = a4;
  v4 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  v5 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  v6 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = v4;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  return a1;
}

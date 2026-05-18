/*
 * XREFs of ??0ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@W4EShaderPropertyScope@12@@Z @ 0x180081DEC
 * Callers:
 *     ??$make_shared@VShaderPropertyLayout@Engine@Spectre@@AEAV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@AEAW4EShaderPropertyScope@23@@std@@YA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@0@AEAV?$shared_ptr@VShaderManager@Engine@Spectre@@@0@AEAW4EShaderPropertyScope@Engine@Spectre@@@Z @ 0x18004E468 (--$make_shared@VShaderPropertyLayout@Engine@Spectre@@AEAV-$shared_ptr@VShaderManager@Engine@Spec.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$fill@V?$_Array_iterator@G$0CAA@@std@@G@std@@YAXV?$_Array_iterator@G$0CAA@@0@0AEBG@Z @ 0x180081CE0 (--$fill@V-$_Array_iterator@G$0CAA@@std@@G@std@@YAXV-$_Array_iterator@G$0CAA@@0@0AEBG@Z.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::ShaderPropertyLayout(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // r9

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 15LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 48) = a3;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)(a1 + 1152),
    a2);
  *(_QWORD *)(a1 + 1168) = v4;
  *(_QWORD *)(a1 + 1176) = v4;
  *(_QWORD *)(a1 + 1184) = v4;
  *(_QWORD *)(a1 + 1192) = v4;
  *(_QWORD *)(a1 + 1200) = v4;
  *(_QWORD *)(a1 + 1208) = v4;
  *(_QWORD *)(a1 + 1216) = v4;
  *(_QWORD *)(a1 + 1224) = v4;
  *(_QWORD *)(a1 + 1232) = v4;
  *(_WORD *)(a1 + 1240) = v4;
  *(_BYTE *)(a1 + 1242) = v4;
  std::fill<std::_Array_iterator<unsigned short,512>,unsigned short>();
  return a1;
}

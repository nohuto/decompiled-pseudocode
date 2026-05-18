/*
 * XREFs of ??$make_shared@VShaderProgram@Engine@Spectre@@V123@@std@@YA?AV?$shared_ptr@VShaderProgram@Engine@Spectre@@@0@$$QEAVShaderProgram@Engine@Spectre@@@Z @ 0x18004E3CC
 * Callers:
 *     ?AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EShaderType@23@VShaderProgram@23@@Z @ 0x18004F42C (-AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<Spectre::Engine::ShaderProgram,Spectre::Engine::ShaderProgram>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = operator new(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &std::_Ref_count_obj2<Spectre::Engine::ShaderProgram>::`vftable';
    v6 = a2[2];
    a2[2] = 0LL;
    v7 = a2[1];
    a2[1] = 0LL;
    v8 = *a2;
    *a2 = 0LL;
    v5[2] = v8;
    v5[3] = v7;
    v5[4] = v6;
    v5[5] = a2[3];
    v5[6] = a2[4];
    a2[3] = 0LL;
    a2[4] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 2;
  return a1;
}

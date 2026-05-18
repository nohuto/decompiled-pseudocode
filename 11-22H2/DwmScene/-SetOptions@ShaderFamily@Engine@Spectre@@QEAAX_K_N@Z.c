/*
 * XREFs of ?SetOptions@ShaderFamily@Engine@Spectre@@QEAAX_K_N@Z @ 0x180061300
 * Callers:
 *     ?SetOption@ShaderFamily@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z @ 0x180061260 (-SetOption@ShaderFamily@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ShaderFamily::SetOptions(Spectre::Engine::ShaderFamily *this, __int64 a2, char a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = *((_QWORD *)this + 8) & a2;
  v4 = *((_QWORD *)this + 9);
  if ( a3 )
    v5 = v3 | v4;
  else
    v5 = ~v3 & v4;
  *((_QWORD *)this + 9) = v5;
}

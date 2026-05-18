/*
 * XREFs of ?SetAlphaMode@SpectreMaterial@@UEAAJI@Z @ 0x1800135B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRenderingMode@Material@Engine@Spectre@@QEAAXW4ERenderingMode@23@@Z @ 0x180044840 (-SetRenderingMode@Material@Engine@Spectre@@QEAAXW4ERenderingMode@23@@Z.c)
 */

__int64 __fastcall SpectreMaterial::SetAlphaMode(SpectreMaterial *this, int a2)
{
  int v2; // edx
  __int64 v3; // rdx

  if ( !a2 )
  {
    v3 = 0LL;
    goto LABEL_7;
  }
  v2 = a2 - 1;
  if ( !v2 )
  {
    v3 = 1LL;
    goto LABEL_7;
  }
  if ( v2 == 1 )
  {
    v3 = 3LL;
LABEL_7:
    Spectre::Engine::Material::SetRenderingMode(*((_QWORD *)this + 2), v3);
  }
  return 0LL;
}

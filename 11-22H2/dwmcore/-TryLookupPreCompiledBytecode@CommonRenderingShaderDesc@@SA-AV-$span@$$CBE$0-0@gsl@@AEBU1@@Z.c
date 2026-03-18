/*
 * XREFs of ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$span@$$CBE$0?0@gsl@@AEBU1@@Z @ 0x18010028C
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C680 (-GetCommonOrCubeMapRenderingShader@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonR.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(_QWORD *a1, __int64 a2)
{
  void *v3; // rax

  if ( *(_DWORD *)(a2 + 16) > 1u || *(_DWORD *)(a2 + 32) > 1u || *(_DWORD *)(a2 + 40) != -1 || *(_BYTE *)(a2 + 44) )
    goto LABEL_8;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      *a1 = 800LL;
      v3 = &unk_180353EC0;
      goto LABEL_11;
    case 2:
      *a1 = 824LL;
      v3 = &unk_1803541E0;
LABEL_11:
      a1[1] = v3;
      return a1;
    case 5:
      *a1 = 856LL;
      v3 = &unk_180354520;
      goto LABEL_11;
  }
LABEL_8:
  a1[1] = 0LL;
  *a1 = 0LL;
  return a1;
}

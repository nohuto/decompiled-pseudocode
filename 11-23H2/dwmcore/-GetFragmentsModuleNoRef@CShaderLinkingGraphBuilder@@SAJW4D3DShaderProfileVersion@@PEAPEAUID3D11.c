/*
 * XREFs of ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800BB574
 * Callers:
 *     PrepareSamplers @ 0x1800BAF88 (PrepareSamplers.c)
 *     LoadShaderBody @ 0x1800BB3A0 (LoadShaderBody.c)
 *     UseFragmentsModuleNoRef @ 0x1800BC178 (UseFragmentsModuleNoRef.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18020A918 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(__int64 a1, struct ID3D11Module **a2)
{
  unsigned int v2; // ebx
  struct ID3D11Module *v4; // rax
  HRESULT v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !(_BYTE)a1 )
  {
    v4 = qword_1803EA7F0;
    if ( qword_1803EA7F0 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_18039C6B0, 0x1B22BuLL, &qword_1803EA7F0);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1803EA7F0;
      goto LABEL_4;
    }
    v8 = 294;
    goto LABEL_18;
  }
  if ( (unsigned __int8)a1 == 1 )
  {
    v4 = qword_1803E66C0;
    if ( qword_1803E66C0 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_1802EE470, 0x2CDEBuLL, &qword_1803E66C0);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1803E66C0;
      goto LABEL_4;
    }
    v8 = 306;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v8, 0LL);
    return v2;
  }
  if ( (unsigned __int8)a1 != 2 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x146u, 0LL);
    return v2;
  }
  v4 = qword_1803E66B8;
  if ( !qword_1803E66B8 )
  {
    v6 = D3DLoadModule(&unk_18031B260, 0x20A4FuLL, &qword_1803E66B8);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1803E66B8;
      goto LABEL_4;
    }
    v8 = 318;
    goto LABEL_18;
  }
LABEL_4:
  *a2 = v4;
  return v2;
}

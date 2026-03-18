/*
 * XREFs of ?InitializeFromSharedResource@CSharedCompositionAmbientLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00B3710
 * Callers:
 *     ?Create@CSharedCompositionAmbientLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00B3250 (-Create@CSharedCompositionAmbientLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedCompositionAmbientLightMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedCompositionAmbientLightMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  *((_BYTE *)this + 96) = 1;
  *(_OWORD *)((char *)this + 104) = xmmword_1C025A658;
  *((_DWORD *)this + 30) = 1065353216;
  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 16) = a2;
  return result;
}

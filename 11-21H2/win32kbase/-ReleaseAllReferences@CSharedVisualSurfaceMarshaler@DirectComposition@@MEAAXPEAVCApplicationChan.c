/*
 * XREFs of ?ReleaseAllReferences@CSharedVisualSurfaceMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C023BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualSurfaceMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C022A200 (-ReleaseAllReferences@CVisualSurfaceMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@.c)
 */

void __fastcall DirectComposition::CSharedVisualSurfaceMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedVisualSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 13) = 0LL;
  }
  DirectComposition::CVisualSurfaceMarshaler::ReleaseAllReferences(this, a2);
}

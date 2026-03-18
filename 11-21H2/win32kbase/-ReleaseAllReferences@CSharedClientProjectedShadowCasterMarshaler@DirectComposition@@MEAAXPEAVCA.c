/*
 * XREFs of ?ReleaseAllReferences@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C023B5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedClientProjectedShadowCasterMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedClientProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 28) = 0;
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
    {
      ObfDereferenceObject((PVOID)(v4 - 24));
      *((_QWORD *)this + 8) = 0LL;
    }
  }
}

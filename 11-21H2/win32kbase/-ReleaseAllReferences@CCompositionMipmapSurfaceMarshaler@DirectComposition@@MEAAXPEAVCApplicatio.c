/*
 * XREFs of ?ReleaseAllReferences@CCompositionMipmapSurfaceMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0237390
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  if ( *((_QWORD *)this + 8) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 21); i = (unsigned int)(i + 1) )
    {
      v5 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 8) + 24 * i);
      if ( v5 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
        *(_QWORD *)(*((_QWORD *)this + 8) + 24 * i) = 0LL;
      }
    }
  }
}

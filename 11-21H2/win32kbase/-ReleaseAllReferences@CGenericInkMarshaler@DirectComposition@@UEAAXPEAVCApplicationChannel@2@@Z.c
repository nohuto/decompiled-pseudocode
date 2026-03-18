/*
 * XREFs of ?ReleaseAllReferences@CGenericInkMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0219260
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CGenericInkMarshaler::ReleaseAllReferences(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 21);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 21) = 0LL;
    *((_DWORD *)this + 44) = 0;
    *((_DWORD *)this + 45) = 0;
    *((_DWORD *)this + 46) = 0;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 29);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 29) = 0LL;
    *((_DWORD *)this + 60) = 0;
    *((_DWORD *)this + 61) = 0;
  }
}

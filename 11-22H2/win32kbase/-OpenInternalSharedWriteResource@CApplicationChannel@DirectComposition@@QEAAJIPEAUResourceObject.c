/*
 * XREFs of ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C0092B5C
 * Callers:
 *     ?OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C0092738 (-OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00927E8 (-CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00315DC (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ??0?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1C0092E30 (--0-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@P.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C0092E6C (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
        DirectComposition::CApplicationChannel *this,
        unsigned __int64 a2,
        struct DirectComposition::ResourceObject *a3,
        struct DirectComposition::CResourceMarshaler **a4)
{
  __int64 QuotaZInit; // rax
  struct DirectComposition::CResourceMarshaler *v8; // rbx
  int v9; // edi
  struct DirectComposition::CResourceMarshaler *v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = 0LL;
  if ( (_DWORD)a2 == 196 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x188uLL, 0x76684344u);
    v8 = (struct DirectComposition::CResourceMarshaler *)QuotaZInit;
    if ( QuotaZInit )
    {
      DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>(
        QuotaZInit,
        (char *)a3 + 24);
      *((_DWORD *)v8 + 4) |= 2u;
      *(_QWORD *)v8 = &DirectComposition::CHostVisualMarshaler::`vftable';
      *((_DWORD *)v8 + 96) |= 1u;
      goto LABEL_4;
    }
    v9 = -1073741801;
LABEL_10:
    *((_DWORD *)a3 + 15) = 0;
    ObfDereferenceObject(a3);
    return (unsigned int)v9;
  }
  v9 = DirectComposition::GeneratedCreateSharedWriteMarshaler(
         (DirectComposition *)(unsigned int)a2,
         (int)a3 + 24,
         (const struct DirectComposition::CSharedSystemResource *)&v11,
         a4);
  if ( v9 < 0 )
    goto LABEL_10;
  v8 = v11;
LABEL_4:
  v9 = DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(
         (DirectComposition::CConnection **)this,
         v8);
  if ( v9 >= 0 )
    *a4 = v8;
  return (unsigned int)v9;
}

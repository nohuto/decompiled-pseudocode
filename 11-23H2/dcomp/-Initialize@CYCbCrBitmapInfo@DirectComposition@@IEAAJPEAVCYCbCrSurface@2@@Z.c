/*
 * XREFs of ?Initialize@CYCbCrBitmapInfo@DirectComposition@@IEAAJPEAVCYCbCrSurface@2@@Z @ 0x1800FF054
 * Callers:
 *     ?Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAVCYCbCrSurface@2@PEAPEAV12@@Z @ 0x1800FECCC (-Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4D.c)
 * Callees:
 *     ??$ReleaseInterface@UIDCompositionSurfaceListenerInternal@DirectComposition@@@@YAXAEAPEAUIDCompositionSurfaceListenerInternal@DirectComposition@@@Z @ 0x180037B78 (--$ReleaseInterface@UIDCompositionSurfaceListenerInternal@DirectComposition@@@@YAXAEAPEAUIDCompo.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CYCbCrBitmapInfo::Initialize(
        DirectComposition::CYCbCrBitmapInfo *this,
        struct DirectComposition::CYCbCrSurface *a2)
{
  struct DirectComposition::CYCbCrSurface *v2; // rbx
  __int64 v3; // rax
  struct DirectComposition::CYCbCrSurface *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *(_QWORD *)&GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data1
     - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  v7 = 0LL;
  if ( *(_QWORD *)&GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data4
       - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v3 )
  {
    if ( (*(int (__fastcall **)(struct DirectComposition::CYCbCrSurface *, GUID *, struct DirectComposition::CYCbCrSurface **))(*(_QWORD *)a2 + 64LL))(
           a2,
           &GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4,
           &v7) < 0 )
    {
      v7 = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = a2;
  }
  CMILRefCountImpl::AddReference((struct DirectComposition::CYCbCrSurface *)((char *)a2 + 8));
  v2 = v7;
LABEL_8:
  *((_QWORD *)this + 4) = v2;
  ReleaseInterface<DirectComposition::IDCompositionSurfaceListenerInternal>((__int64 *)&v7);
  return 0LL;
}

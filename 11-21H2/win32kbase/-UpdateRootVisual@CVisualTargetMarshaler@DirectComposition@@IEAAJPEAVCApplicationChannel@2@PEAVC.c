/*
 * XREFs of ?UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C00A8DCC
 * Callers:
 *     ?SetReferenceProperty@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00A8D40 (-SetReferenceProperty@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0238B10 (-ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        DirectComposition::CVisualTargetMarshaler **a3,
        bool *a4)
{
  unsigned int v4; // edi
  struct DirectComposition::CVisualMarshaler *v9; // rcx
  DirectComposition::CVisualTargetMarshaler *v11; // rax

  v4 = 0;
  *a4 = 0;
  if ( a3 && (v11 = a3[25]) != 0LL && v11 != this )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = (struct DirectComposition::CVisualMarshaler *)*((_QWORD *)this + 10);
    if ( v9 != (struct DirectComposition::CVisualMarshaler *)a3 )
    {
      if ( v9 )
      {
        (*(void (__fastcall **)(struct DirectComposition::CVisualMarshaler *))(*(_QWORD *)v9 + 248LL))(v9);
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this + 10));
        *((_QWORD *)this + 10) = 0LL;
      }
      if ( a3 )
      {
        *((_QWORD *)this + 10) = a3;
        DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)a3);
        *(_QWORD *)(*((_QWORD *)this + 10) + 200LL) = this;
      }
      *((_DWORD *)this + 4) |= 0x20u;
      *a4 = 1;
    }
  }
  return v4;
}

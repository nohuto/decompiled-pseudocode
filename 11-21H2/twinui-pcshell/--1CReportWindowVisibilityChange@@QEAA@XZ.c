/*
 * XREFs of ??1CReportWindowVisibilityChange@@QEAA@XZ @ 0x1802E0170
 * Callers:
 *     ??1CIAMGlobals@@QEAA@XZ @ 0x1802E00E0 (--1CIAMGlobals@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@0@@Z @ 0x1802DE558 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@.c)
 */

void __fastcall CReportWindowVisibilityChange::~CReportWindowVisibilityChange(CReportWindowVisibilityChange *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>(
      v2,
      *((__int64 **)this + 7));
    std::_Deallocate<16,0>(
      *((void **)this + 6),
      (*((_QWORD *)this + 8) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
  if ( *(_QWORD *)this )
  {
    CoTaskMemFree(*(LPVOID *)this);
    *(_QWORD *)this = 0LL;
  }
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
}

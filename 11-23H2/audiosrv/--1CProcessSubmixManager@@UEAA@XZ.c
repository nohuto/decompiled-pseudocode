/*
 * XREFs of ??1CProcessSubmixManager@@UEAA@XZ @ 0x1800D153C
 * Callers:
 *     ??_GCProcessSubmixManager@@UEAAPEAXI@Z @ 0x1800D1660 (--_GCProcessSubmixManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800D0864 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSu.c)
 */

void __fastcall CProcessSubmixManager::~CProcessSubmixManager(CProcessSubmixManager *this)
{
  CAppSubmixClientContext **v2; // rcx

  v2 = (CAppSubmixClientContext **)*((_QWORD *)this + 7);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(
      v2,
      *((CAppSubmixClientContext ***)this + 8));
    std::_Deallocate<16,0>(
      *((void **)this + 7),
      (*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}

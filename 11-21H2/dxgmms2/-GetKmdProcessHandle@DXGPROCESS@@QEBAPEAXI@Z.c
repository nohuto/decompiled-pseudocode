/*
 * XREFs of ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x1C0018B90
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0098844 (VidSchiCreateDeviceInternal.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C00A6E68 (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00B8348 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall DXGPROCESS::GetKmdProcessHandle(DXGPROCESS *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  v3 = a2;
  v4 = ((__int64 (*)(void))DxgCoreInterface[3])();
  if ( (unsigned int)v3 >= ((unsigned int (__fastcall *)(__int64))DxgCoreInterface[5])(v4)
    || !*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3) )
  {
    return 0LL;
  }
  _mm_lfence();
  return *(void **)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3) + 16LL);
}

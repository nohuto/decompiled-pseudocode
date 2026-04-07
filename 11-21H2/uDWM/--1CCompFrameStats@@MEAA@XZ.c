/*
 * XREFs of ??1CCompFrameStats@@MEAA@XZ @ 0x180005A88
 * Callers:
 *     ??_ECAnimationFrameStats@@MEAAPEAXI@Z @ 0x180005A20 (--_ECAnimationFrameStats@@MEAAPEAXI@Z.c)
 *     ??_GCCompFrameStats@@MEAAPEAXI@Z @ 0x18010A8D0 (--_GCCompFrameStats@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 */

void __fastcall CCompFrameStats::~CCompFrameStats(CCompFrameStats *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CCompFrameStats::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((*((_QWORD *)this + 16) - v2) >> 3));
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 40);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 32);
}

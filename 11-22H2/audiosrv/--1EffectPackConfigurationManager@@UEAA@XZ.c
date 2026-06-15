/*
 * XREFs of ??1EffectPackConfigurationManager@@UEAA@XZ @ 0x18010D9CC
 * Callers:
 *     ??_EEffectPackConfigurationManager@@UEAAPEAXI@Z @ 0x1800EF440 (--_EEffectPackConfigurationManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@0@@Z @ 0x1800EEC00 (--$_Destroy_range@V-$allocator@V-$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@@std@@YAX.c)
 *     ?Shutdown@EffectPackConfigurationManager@@QEAAXXZ @ 0x18010E438 (-Shutdown@EffectPackConfigurationManager@@QEAAXXZ.c)
 */

void __fastcall EffectPackConfigurationManager::~EffectPackConfigurationManager(EffectPackConfigurationManager *this)
{
  struct _TP_WORK *v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &EffectPackConfigurationManager::`vftable';
  EffectPackConfigurationManager::Shutdown(this);
  v2 = (struct _TP_WORK *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(*((PTP_WORK *)this + 11), 1);
    CloseThreadpoolWork(v2);
  }
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPackConfiguration const>>>(v3, *((_QWORD *)this + 9));
    std::_Deallocate<16,0>(
      *((void **)this + 8),
      (*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}

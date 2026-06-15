/*
 * XREFs of ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140020320
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x14002057C (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrait.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x14002065C (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400244EC (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GraphStreamingResourceManager::RegisterThread(
        GraphStreamingResourceManager *this,
        void *a2,
        struct ThreadRegistrationToken__ **a3)
{
  DWORD ThreadId; // r13d
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 Node; // rax
  struct ThreadRegistrationToken__ *v9; // rbx
  int v10; // edi
  char v12; // [rsp+40h] [rbp-78h] BYREF
  char *v13; // [rsp+48h] [rbp-70h]
  __int128 v14; // [rsp+50h] [rbp-68h] BYREF
  __int64 v15; // [rsp+60h] [rbp-58h]
  char *v16; // [rsp+68h] [rbp-50h]
  _BYTE v17[72]; // [rsp+70h] [rbp-48h] BYREF
  int v18; // [rsp+D8h] [rbp+20h] BYREF

  ThreadId = GetThreadId(a2);
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v16 = (char *)this + 16;
  v13 = (char *)this + 128;
  Node = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNode(
           (int)this + 128,
           ThreadId,
           (unsigned int)&v12,
           (unsigned int)&v18,
           (__int64)v17);
  v9 = (struct ThreadRegistrationToken__ *)Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
    goto LABEL_3;
  }
  v14 = 0LL;
  v15 = 0LL;
  LODWORD(v14) = 1;
  v9 = (struct ThreadRegistrationToken__ *)ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::SetAt(
                                             (char *)this + 128,
                                             ThreadId,
                                             &v14);
  v10 = (*(__int64 (__fastcall **)(char *, void *, __int64))(*((_QWORD *)this - 1) + 48LL))(
          (char *)this - 8,
          a2,
          (__int64)v9 + 16);
  if ( v10 >= 0 )
  {
LABEL_3:
    *a3 = v9;
    v10 = 0;
    goto LABEL_4;
  }
  if ( v9 )
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      v13,
      v9);
LABEL_4:
  if ( v7 )
    LeaveCriticalSection(v7);
  return (unsigned int)v10;
}

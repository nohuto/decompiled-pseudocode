/*
 * XREFs of ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140007C90
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400086B0 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x14000A608 (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x14000A64C (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrait.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GraphStreamingResourceManager::RegisterThread(
        GraphStreamingResourceManager *this,
        void *a2,
        struct ThreadRegistrationToken__ **a3)
{
  DWORD ThreadId; // r12d
  __int64 Node; // rax
  struct ThreadRegistrationToken__ *v8; // rbx
  int v9; // edi
  char v11; // [rsp+30h] [rbp-88h] BYREF
  struct ThreadRegistrationToken__ *v12; // [rsp+38h] [rbp-80h]
  char *v13; // [rsp+40h] [rbp-78h]
  char *v14; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v16; // [rsp+60h] [rbp-58h] BYREF
  __int64 v17; // [rsp+70h] [rbp-48h]
  int v18; // [rsp+D8h] [rbp+20h] BYREF

  v12 = 0LL;
  ThreadId = GetThreadId(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v14 = (char *)this + 16;
  v13 = (char *)this + 128;
  Node = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNode(
           (int)this + 128,
           ThreadId,
           (unsigned int)&v11,
           (unsigned int)&v18,
           (__int64)v15);
  v8 = (struct ThreadRegistrationToken__ *)Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
    goto LABEL_3;
  }
  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v16) = 1;
  v8 = (struct ThreadRegistrationToken__ *)ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::SetAt(
                                             (char *)this + 128,
                                             ThreadId,
                                             &v16);
  v12 = v8;
  v9 = (*(__int64 (__fastcall **)(char *, void *, __int64))(*((_QWORD *)this - 1) + 48LL))(
         (char *)this - 8,
         a2,
         (__int64)v8 + 16);
  if ( v9 >= 0 )
  {
LABEL_3:
    *a3 = v8;
    v9 = 0;
    goto LABEL_4;
  }
  if ( v8 )
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      v13,
      v8);
LABEL_4:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
  return (unsigned int)v9;
}

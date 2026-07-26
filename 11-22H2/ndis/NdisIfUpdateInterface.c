/*
 * XREFs of NdisIfUpdateInterface @ 0x1C0037AE0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C00193F8 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C00375F8 (--1-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1-Re.c)
 *     ?acquire_kspin_lock@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@@1@PEA_K@Z @ 0x1C0037664 (-acquire_kspin_lock@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEB.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@QEAAXUkspin_lock_saved_irql@23@@Z @ 0x1C0037A80 (-reset@-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA?AV?$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U?$KFreePool@UNDIS_IF_UPDATE_CONTEXT@@@@@wistd@@K@Z @ 0x1C010C5A4 (--$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA-AV-$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U-$KFreePoo.c)
 */

__int64 __fastcall NdisIfUpdateInterface(_LIST_ENTRY *BugCheckParameter4, int a2)
{
  struct _WORK_QUEUE_ITEM *v4; // rbx
  struct _LIST_ENTRY *Interface; // rax
  struct _LIST_ENTRY *v7; // rsi
  struct _NDIS_REFCOUNT_BLOCK *Blink; // rcx
  KIRQL CurrentIrql; // al
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  if ( !BugCheckParameter4 || BugCheckParameter4 == qword_1C00F7330 || BugCheckParameter4 == qword_1C00F7328 )
    ndisBugCheckEx(0x34uLL, 4uLL, 1uLL, (ULONG_PTR)BugCheckParameter4);
  if ( KeGetCurrentIrql() )
  {
    CurrentIrql = KeGetCurrentIrql();
    ndisBugCheckEx(0x2EuLL, 3uLL, CurrentIrql, 0LL);
  }
  MakePoolPtr<NDIS_IF_UPDATE_CONTEXT>(&P);
  v4 = (struct _WORK_QUEUE_ITEM *)P;
  if ( !P )
    return 3221225626LL;
  wil::acquire_kspin_lock(&v10);
  Interface = ndisIfFindInterface(a2);
  v7 = Interface;
  if ( Interface )
  {
    if ( Interface[83].Flink == BugCheckParameter4 )
    {
      if ( BYTE3(Interface[92].Blink) )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v10);
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
      }
      else
      {
        Blink = (struct _NDIS_REFCOUNT_BLOCK *)Interface[89].Blink;
        BYTE3(Interface[92].Blink) = 1;
        NdisReferenceWithTag(Blink, 0x11u);
        *(_QWORD *)&v11 = 0LL;
        ++LODWORD(v7[81].Blink);
        BYTE8(v11) = 0;
        wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::reset(
          &v10,
          &v11);
        v4[1].List.Flink = v7;
        v4->List.Flink = 0LL;
        v4->WorkerRoutine = (void (__fastcall *)(void *))ndisIfUpdateExternalInterface;
        v4->Parameter = v4;
        ExQueueWorkItem(v4, CustomPriorityWorkQueue|MaximumWorkQueue);
        wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v10);
      }
      return 0LL;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v10);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      return 3221225485LL;
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v10);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    return 3223519275LL;
  }
}

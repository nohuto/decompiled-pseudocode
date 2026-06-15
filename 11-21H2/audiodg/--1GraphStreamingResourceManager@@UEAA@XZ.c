/*
 * XREFs of ??1GraphStreamingResourceManager@@UEAA@XZ @ 0x14002BEDC
 * Callers:
 *     ??_EGraphStreamingResourceManager@@UEAAPEAXI@Z @ 0x14002BEA0 (--_EGraphStreamingResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InitHashTable@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAA_NI_N@Z @ 0x14000282C (-InitHashTable@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElem.c)
 *     ?FreeNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140008714 (-FreeNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTr.c)
 *     ?FreePlexes@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@AEAAXXZ @ 0x140008764 (-FreePlexes@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@U.c)
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x14002AF68 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x140052E28 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GraphStreamingResourceManager::~GraphStreamingResourceManager(GraphStreamingResourceManager *this)
{
  void **v2; // rdi
  void *v3; // rcx
  void *v4; // rax
  unsigned int i; // ebp
  __int64 v6; // rsi
  void **v7; // rdi
  void *v8; // rcx
  void *v9; // rax
  unsigned int j; // ebp
  __int64 v11; // rsi
  void **v12; // rdi
  void *v13; // rcx
  void *v14; // rax
  unsigned int k; // ebp
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // eax

  Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease((__int64 *)this + 35);
  v2 = (void **)((char *)this + 208);
  ++*((_DWORD *)this + 64);
  v3 = (void *)*((_QWORD *)this + 26);
  v4 = v3;
  if ( v3 )
  {
    for ( i = 0; i < *((_DWORD *)this + 56); ++i )
    {
      v6 = *((_QWORD *)v3 + i);
      v4 = v3;
      if ( v6 )
      {
        do
        {
          v17 = v6;
          v6 = *(_QWORD *)(v6 + 32);
          ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreeNode(
            (__int64)this + 208,
            v17);
        }
        while ( v6 );
        v3 = *v2;
        v4 = *v2;
      }
    }
  }
  operator delete[](v4);
  *v2 = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  if ( !*((_DWORD *)this + 64) )
  {
    v18 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize((char *)this + 208);
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::InitHashTable(
      (__int64)this + 208,
      v18,
      0);
  }
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::FreePlexes((__int64)this + 208);
  --*((_DWORD *)this + 64);
  v7 = (void **)((char *)this + 136);
  ++*((_DWORD *)this + 46);
  v8 = (void *)*((_QWORD *)this + 17);
  v9 = v8;
  if ( v8 )
  {
    for ( j = 0; j < *((_DWORD *)this + 38); ++j )
    {
      v11 = *((_QWORD *)v8 + j);
      v9 = v8;
      if ( v11 )
      {
        do
        {
          v19 = v11;
          v11 = *(_QWORD *)(v11 + 32);
          ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreeNode(
            (__int64)this + 136,
            v19);
        }
        while ( v11 );
        v8 = *v7;
        v9 = *v7;
      }
    }
  }
  operator delete[](v9);
  *v7 = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  if ( !*((_DWORD *)this + 46) )
  {
    v20 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize((char *)this + 136);
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::InitHashTable(
      (__int64)this + 136,
      v20,
      0);
  }
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::FreePlexes((__int64)this + 136);
  --*((_DWORD *)this + 46);
  v12 = (void **)((char *)this + 64);
  ++*((_DWORD *)this + 28);
  v13 = (void *)*((_QWORD *)this + 8);
  v14 = v13;
  if ( v13 )
  {
    for ( k = 0; k < *((_DWORD *)this + 20); ++k )
    {
      v16 = *((_QWORD *)v13 + k);
      v14 = v13;
      if ( v16 )
      {
        do
        {
          v21 = v16;
          v16 = *(_QWORD *)(v16 + 32);
          ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreeNode(
            (__int64)this + 64,
            v21);
        }
        while ( v16 );
        v13 = *v12;
        v14 = *v12;
      }
    }
  }
  operator delete[](v14);
  *v12 = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    v22 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize((char *)this + 64);
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::InitHashTable(
      (__int64)this + 64,
      v22,
      0);
  }
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::FreePlexes((__int64)this + 64);
  --*((_DWORD *)this + 28);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}

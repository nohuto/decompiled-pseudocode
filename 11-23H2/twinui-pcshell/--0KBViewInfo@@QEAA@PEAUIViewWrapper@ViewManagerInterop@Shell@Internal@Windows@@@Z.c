/*
 * XREFs of ??0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18050BE50
 * Callers:
 *     ??$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18050B5BC (--$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@.c)
 * Callees:
 *     ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180048274 (--4-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??0?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@QEAA@XZ @ 0x18050BE20 (--0-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@I@2@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
KBViewInfo *__fastcall KBViewInfo::KBViewInfo(
        KBViewInfo *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *((_BYTE *)this + 34) = 1;
  std::unordered_set<unsigned int>::unordered_set<unsigned int>((__int64)this + 40);
  *((_DWORD *)this + 26) = -1;
  *((_QWORD *)this + 14) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *(_OWORD *)((char *)this + 136) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)this,
    (__int64)a2);
  *((_QWORD *)this + 26) = GetTickCount64();
  return this;
}

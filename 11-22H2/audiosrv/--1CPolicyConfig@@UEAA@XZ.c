/*
 * XREFs of ??1CPolicyConfig@@UEAA@XZ @ 0x1800EF02C
 * Callers:
 *     ??_GCPolicyConfig@@UEAAPEAXI@Z @ 0x1800EF400 (--_GCPolicyConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@@QEAV123@AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@@Z @ 0x1800126A0 (--$_Destroy_range@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CPolicyConfig::~CPolicyConfig(CPolicyConfig *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::WeakRef>>(v2, *((_QWORD *)this + 9));
    std::_Deallocate<16,0>(
      *((void **)this + 8),
      (*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}

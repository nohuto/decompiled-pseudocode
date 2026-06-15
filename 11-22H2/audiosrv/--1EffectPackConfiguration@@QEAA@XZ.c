/*
 * XREFs of ??1EffectPackConfiguration@@QEAA@XZ @ 0x180005E48
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UEffectPackConfiguration@@@std@@EEAAXXZ @ 0x180006540 (-_Destroy@-$_Ref_count_obj2@UEffectPackConfiguration@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXXZ @ 0x18004A8FC (-_Tidy@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAXXZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180066B50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x18015428C (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX.c)
 */

void __fastcall EffectPackConfiguration::~EffectPackConfiguration(EffectPackConfiguration *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  `eh vector destructor iterator'(
    (char *)this + 1800,
    0x10uLL,
    4uLL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  v2 = *((_QWORD *)this + 221);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>(
      v2,
      *((_QWORD *)this + 222));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 221),
      (*((_QWORD *)this + 223) - *((_QWORD *)this + 221)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 221) = 0LL;
    *((_QWORD *)this + 222) = 0LL;
    *((_QWORD *)this + 223) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 220);
  if ( v3 )
    CoTaskMemFree(v3);
  std::vector<_GUID>::_Tidy((char *)this + 1728);
  v4 = (void *)*((_QWORD *)this + 215);
  *((_QWORD *)this + 215) = 0LL;
  if ( v4 )
    CoTaskMemFree(v4);
  v5 = (void *)*((_QWORD *)this + 213);
  *((_QWORD *)this + 213) = 0LL;
  if ( v5 )
    CoTaskMemFree(v5);
  `eh vector destructor iterator'(
    (char *)this + 1312,
    0x20uLL,
    0xCuLL,
    (void (*)(void *))EffectPackConfiguration::ApoRegistrationInfo::~ApoRegistrationInfo);
}

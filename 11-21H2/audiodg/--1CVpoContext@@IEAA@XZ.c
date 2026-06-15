/*
 * XREFs of ??1CVpoContext@@IEAA@XZ @ 0x140061518
 * Callers:
 *     ??1?$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x140061474 (--1-$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x1400614C0 (--1-$CComObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140061944 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 *     ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x140061EB0 (-RemoveAt@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@.c)
 */

void __fastcall CVpoContext::~CVpoContext(CVpoContext *this)
{
  __int64 v2; // rcx
  unsigned int Key; // eax
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  EnterCriticalSection(&CVpoContext::s_csMapVpoContext);
  v5 = &CVpoContext::s_csMapVpoContext;
  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          v2,
          (char *)this + 88);
  if ( Key != -1 )
    ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAt(
      v4,
      Key);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v5);
  if ( *((_BYTE *)this + 64) )
  {
    *((_BYTE *)this + 64) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  }
}

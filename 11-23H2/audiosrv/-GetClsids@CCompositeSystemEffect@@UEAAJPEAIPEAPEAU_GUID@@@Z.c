/*
 * XREFs of ?GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z @ 0x180047980
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800295A0 (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetClsids(CCompositeSystemEffect *this, unsigned int *a2, struct _GUID **a3)
{
  __int64 v6; // rdx
  struct _GUID *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *pv; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  if ( *((int *)this + 24) <= 0 )
    return 0LL;
  v6 = *((int *)this + 24);
  pv = 0LL;
  if ( ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(&pv, v6) )
  {
    v7 = (struct _GUID *)pv;
    memcpy_0(pv, *((const void **)this + 11), 16LL * *((int *)this + 24));
    *a3 = v7;
    *a2 = *((_DWORD *)this + 24);
    CoTaskMemFree(0LL);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E2,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  CoTaskMemFree(pv);
  return 2147942414LL;
}

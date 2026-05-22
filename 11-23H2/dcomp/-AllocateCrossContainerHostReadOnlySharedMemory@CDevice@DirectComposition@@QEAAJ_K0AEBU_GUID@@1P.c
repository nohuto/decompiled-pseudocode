/*
 * XREFs of ?AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1PEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z @ 0x1800EDB38
 * Callers:
 *     ?EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@@III0III0@Z @ 0x180185BDC (-EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?Allocate@CCrossContainerHostReadOnlySharedSection@DirectComposition@@QEAAJ_KPEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z @ 0x1800EC9AC (-Allocate@CCrossContainerHostReadOnlySharedSection@DirectComposition@@QEAAJ_KPEAPEAVCCrossContai.c)
 *     ?Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID@@2PEAPEAV12@@Z @ 0x1800ECA70 (-Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID.c)
 *     wil::details::lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___::_lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___ @ 0x1800ED7C0 (wil--details--lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___--_lambda_call__lambda_c3c5.c)
 */

__int64 __fastcall DirectComposition::CDevice::AllocateCrossContainerHostReadOnlySharedMemory(
        DirectComposition::CDevice *this,
        struct DirectComposition::CCrossContainerHostReadOnlySharedAllocation *a2,
        __int64 a3,
        const struct _GUID *a4,
        const struct _GUID *a5,
        struct DirectComposition::CCrossContainerHostReadOnlySharedAllocation **a6)
{
  char *v6; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 result; // rax
  char *v13; // rdi
  char *i; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // esi
  int v25; // eax
  struct DirectComposition::CCrossContainerHostReadOnlySharedAllocation *v26; // rsi
  char **v27; // rax
  DirectComposition::CCrossContainerHostReadOnlySharedSection *v28; // [rsp+30h] [rbp-38h] BYREF
  struct DirectComposition::CCrossContainerHostReadOnlySharedAllocation *v29; // [rsp+38h] [rbp-30h] BYREF
  __int128 v30; // [rsp+40h] [rbp-28h] BYREF
  char v31; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]

  v6 = 0LL;
  v29 = a2;
  if ( *((_BYTE *)this + 832) )
  {
    v10 = -2147483634;
    v11 = 965LL;
    goto LABEL_3;
  }
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDevice *)((char *)this + 96));
  v13 = (char *)this + 584;
  for ( i = (char *)*((_QWORD *)this + 73); ; i = *(char **)i )
  {
    if ( i == v13 )
    {
      v28 = 0LL;
      v23 = DirectComposition::CCrossContainerHostReadOnlySharedSection::Create(
              this,
              ((unsigned __int64)v29 + 0x3FFF) & 0xFFFFFFFFFFFFC000uLL,
              a4,
              a5,
              &v28);
      v24 = v23;
      if ( v23 >= 0 )
      {
        *(_QWORD *)&v30 = &v28;
        *((_QWORD *)&v30 + 1) = this;
        v31 = 1;
        v29 = 0LL;
        v25 = DirectComposition::CCrossContainerHostReadOnlySharedSection::Allocate(v28, a3, &v29);
        v24 = v25;
        if ( v25 >= 0 )
        {
          v26 = v29;
          CMILRefCountImpl::AddReference((struct DirectComposition::CCrossContainerHostReadOnlySharedAllocation *)((char *)v29 + 8));
          if ( v28 )
            v6 = (char *)v28 + 8;
          v27 = (char **)*((_QWORD *)this + 74);
          if ( *v27 != v13 )
            __fastfail(3u);
          *((_QWORD *)v6 + 1) = v27;
          *(_QWORD *)v6 = v13;
          *v27 = v6;
          result = 0LL;
          *((_QWORD *)this + 74) = v6;
          *a6 = v26;
          return result;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F4,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
          (const char *)(unsigned int)v25);
        wil::details::lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___::_lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___((__int64)&v30);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E7,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
          (const char *)(unsigned int)v23);
      }
      return v24;
    }
    v15 = (__int64)(i + 48);
    if ( !i )
      v15 = 56LL;
    v16 = *(_OWORD *)v15;
    v17 = *(_QWORD *)v15;
    v30 = v16;
    v18 = v17 - *(_QWORD *)&a4->Data1;
    if ( !v18 )
      v18 = *((_QWORD *)&v30 + 1) - *(_QWORD *)a4->Data4;
    if ( !v18 )
    {
      v19 = (__int64)(i + 64);
      if ( !i )
        v19 = 72LL;
      v20 = *(_OWORD *)v19;
      v21 = *(_QWORD *)v19;
      v30 = v20;
      v22 = v21 - *(_QWORD *)&a5->Data1;
      if ( !v22 )
        v22 = *((_QWORD *)&v30 + 1) - *(_QWORD *)a5->Data4;
      if ( !v22 )
        break;
    }
  }
  v10 = -2147024809;
  v11 = 983LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
    (const char *)v10);
  return v10;
}

/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@K@Z @ 0x1800116D8
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUICompositeSystemEffect@@@Z @ 0x18000D1C0 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180109C70 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@.c)
 * Callees:
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800102C0 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x180011A64 (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 *     ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180011ADC (--4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002D3D4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        CBaseStreamGroupProxy *this,
        CEndpointCharacteristics **a2,
        const struct StreamGroupParams *a3,
        unsigned int a4)
{
  CEndpointCharacteristics *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // eax
  void *v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r14
  int v15; // eax
  unsigned int v16; // edi
  CResourcePriorityTracker *v17; // rax
  CResourcePriorityTracker *v18; // rax
  int v20; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *((_DWORD *)this + 76) = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)*a2 + 56LL))(*a2);
  v8 = *a2;
  v9 = *((_QWORD *)this + 37);
  *((_QWORD *)this + 37) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  CEndpointCharacteristics::TryGetCustomResourceManagerService(
    v8,
    &GUID_39a3af14_c4e0_431e_84af_4d4c1087da45,
    (void **)this + 37);
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(*(_QWORD *)a3 + 2 * v10) );
  v11 = _AllocStringWorker<CTCoAllocPolicy>();
  v13 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x111,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v11,
      v20);
    return v13;
  }
  else
  {
    v14 = *(unsigned __int16 *)(*((_QWORD *)a3 + 2) + 16LL);
    v15 = CTCoAllocPolicy::Alloc(v12, 1u, v14 + 18, (void **)this + 6);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v15,
        v20);
      return v16;
    }
    else
    {
      memcpy_0(*((void **)this + 6), *((const void **)a3 + 2), v14 + 18);
      *((_OWORD *)this + 2) = *((_OWORD *)a3 + 2);
      *((_QWORD *)this + 3) = *((_QWORD *)a3 + 3);
      *((_DWORD *)this + 17) = *((_DWORD *)a3 + 2);
      *((_QWORD *)this + 17) = 0LL;
      *((_DWORD *)this + 36) = 0;
      *((_BYTE *)this + 64) = *((_BYTE *)a3 + 49);
      *((_BYTE *)this + 65) = *((_BYTE *)a3 + 50);
      CProcessingModeParameters::operator=((char *)this + 264);
      v17 = (CResourcePriorityTracker *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v17 )
        v18 = CResourcePriorityTracker::CResourcePriorityTracker(v17, a4);
      else
        v18 = 0LL;
      *((_QWORD *)this + 9) = v18;
      if ( v18 )
      {
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x122,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)0x8007000ELL,
          v20);
        return 2147942414LL;
      }
    }
  }
}

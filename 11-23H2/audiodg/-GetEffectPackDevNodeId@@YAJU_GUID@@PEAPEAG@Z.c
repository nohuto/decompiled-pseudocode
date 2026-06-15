/*
 * XREFs of ?GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z @ 0x14002E55C
 * Callers:
 *     ?GetEffectPackFxPropertyStore@@YAJU_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x14002E968 (-GetEffectPackFxPropertyStore@@YAJU_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1400144C8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z @ 0x14002EA5C (-GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetEffectPackDevNodeId(struct _GUID *a1, unsigned __int16 **a2)
{
  int EffectPackRegistryPath; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // r9
  __int64 v13; // [rsp+20h] [rbp-E0h]
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h]
  struct _GUID v17; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v18[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  v17 = *a1;
  EffectPackRegistryPath = GetEffectPackRegistryPath(&v17, (unsigned __int64)a2, v18);
  v4 = EffectPackRegistryPath;
  if ( EffectPackRegistryPath >= 0 )
  {
    v14 = 0LL;
    v5 = MMDeviceCreateRegistryPropertyStore(v18, 131097LL, &v14);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
        (const char *)(unsigned int)v5,
        v13);
LABEL_16:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
      return v4;
    }
    *(_OWORD *)pvar = 0LL;
    v16 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
           v14,
           &PKEY_FX_ObjectId,
           pvar);
    v4 = v6;
    if ( v6 >= 0 )
    {
      if ( LOWORD(pvar[0]) != 31 )
      {
        v4 = -2147467259;
        v10 = 2147500037LL;
        v9 = 29LL;
        goto LABEL_8;
      }
      v11 = -1LL;
      do
        ++v11;
      while ( *((_WORD *)pvar[1] + v11) );
      v6 = _AllocStringWorker<CTCoAllocPolicy>(v8, v7, (const unsigned __int16 *)pvar[1], v11, v13, a2);
      v4 = v6;
      if ( v6 >= 0 )
      {
        PropVariantClear(pvar);
        v4 = 0;
        goto LABEL_16;
      }
      v9 = 30LL;
    }
    else
    {
      v9 = 28LL;
    }
    v10 = (unsigned int)v6;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
      (const char *)v10,
      v13);
    PropVariantClear(pvar);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
    (const char *)(unsigned int)EffectPackRegistryPath,
    v13);
  return v4;
}

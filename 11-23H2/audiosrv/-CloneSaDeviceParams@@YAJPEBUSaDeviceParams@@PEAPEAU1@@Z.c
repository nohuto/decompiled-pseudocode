/*
 * XREFs of ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x18000E9CC
 * Callers:
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x18000E7B0 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@PEBU_GUID@@5@Z @ 0x18001184C (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDesc.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002D3D4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x180081450 (--1-$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloneSaDeviceParams(const struct SaDeviceParams *a1, void ***a2)
{
  void **v4; // rax
  void **v5; // rbx
  __int64 v6; // r9
  int v7; // eax
  void *v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void **v19; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (void **)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x60uLL);
  else
    v5 = 0LL;
  v19 = v5;
  if ( v5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(*(_QWORD *)a1 + 2 * v6) );
    v7 = _AllocStringWorker<CTCoAllocPolicy>();
    v9 = v7;
    if ( v7 < 0 )
    {
      v16 = 2322LL;
    }
    else
    {
      v10 = *((_QWORD *)a1 + 2);
      if ( !v10 )
      {
LABEL_10:
        v12 = *((_QWORD *)a1 + 3);
        if ( !v12 )
        {
LABEL_13:
          *((_OWORD *)v5 + 4) = *((_OWORD *)a1 + 4);
          *((_OWORD *)v5 + 3) = *((_OWORD *)a1 + 3);
          *((_DWORD *)v5 + 2) = *((_DWORD *)a1 + 2);
          v5[4] = (void *)*((_QWORD *)a1 + 4);
          v5[5] = (void *)*((_QWORD *)a1 + 5);
          *((_OWORD *)v5 + 5) = *((_OWORD *)a1 + 5);
          *a2 = v5;
          return 0LL;
        }
        v13 = *(unsigned __int16 *)(v12 + 16);
        v7 = CTCoAllocPolicy::Alloc(v8, 1u, v13 + 18, v5 + 3);
        v9 = v7;
        if ( v7 >= 0 )
        {
          memcpy_0(v5[3], *((const void **)a1 + 3), v13 + 18);
          goto LABEL_13;
        }
        v16 = 2336LL;
        goto LABEL_19;
      }
      v11 = *(unsigned __int16 *)(v10 + 16);
      v7 = CTCoAllocPolicy::Alloc(v8, 1u, v11 + 18, v5 + 2);
      v9 = v7;
      if ( v7 >= 0 )
      {
        memcpy_0(v5[2], *((const void **)a1 + 2), v11 + 18);
        goto LABEL_10;
      }
      v16 = 2328LL;
    }
LABEL_19:
    v15 = (unsigned int)v7;
    goto LABEL_20;
  }
  v9 = -2147024882;
  v15 = 2147942414LL;
  v16 = 2320LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)v15,
    v17);
  ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(&v19);
  return v9;
}

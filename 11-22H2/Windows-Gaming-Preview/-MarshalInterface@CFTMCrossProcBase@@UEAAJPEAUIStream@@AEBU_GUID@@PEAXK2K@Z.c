/*
 * XREFs of ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18004A750
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008CE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180045404 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A9C4 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CoTaskMemFree_0 @ 0x18004C776 (CoTaskMemFree_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcBase::MarshalInterface(
        LPUNKNOWN punkOuter,
        struct IStream *pstm,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  void *v8; // rbx
  const struct _GUID *v12; // rdx
  HRESULT FTM; // edi
  _QWORD *v14; // rax
  unsigned __int64 lpVtbl_low; // rax
  unsigned __int64 v16; // rax
  ULONG v17; // r14d
  unsigned __int128 v18; // rax
  unsigned __int64 v19; // kr00_8
  int v20; // eax
  void *v22; // [rsp+40h] [rbp-20h] BYREF
  void *pv; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8h] BYREF

  v8 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  FTM = CFTMCrossProcBase::_GetFTM(punkOuter, v12, &v22);
  if ( FTM >= 0 )
  {
    FTM = (*(__int64 (__fastcall **)(void *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v22 + 40LL))(
            v22,
            pstm,
            a3,
            a4,
            a5,
            a6,
            a7);
    if ( FTM >= 0 && a5 != 3 )
    {
      v14 = (_QWORD *)((__int64 (__fastcall *)(LPUNKNOWN))punkOuter->lpVtbl[3].Release)(punkOuter);
      if ( *(_QWORD *)&GUID_NULL.Data1 != *v14 || *(_QWORD *)GUID_NULL.Data4 != v14[1] )
      {
        FTM = IStream_Write(pstm, &punkOuter[4], 4u);
        if ( FTM >= 0 )
        {
          FTM = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                  pstm,
                  0LL,
                  1LL,
                  &v25);
          if ( FTM >= 0 )
          {
            FTM = ((__int64 (__fastcall *)(LPUNKNOWN, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))punkOuter->lpVtbl[3].AddRef)(
                    punkOuter,
                    pstm,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7);
            if ( FTM >= 0 )
            {
              FTM = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                      pstm,
                      0LL,
                      1LL,
                      &v24);
              if ( FTM >= 0 )
              {
                lpVtbl_low = LODWORD(punkOuter[4].lpVtbl);
                if ( v24 - v25 <= lpVtbl_low )
                {
                  if ( v24 - v25 < lpVtbl_low )
                  {
                    v16 = lpVtbl_low - (v24 - v25);
                    if ( v16 > 0xFFFFFFFF )
                    {
                      FTM = -2147024362;
                    }
                    else
                    {
                      v17 = v16;
                      v19 = (unsigned int)v16;
                      v18 = (unsigned int)v16 * (unsigned __int128)1uLL;
                      pv = 0LL;
                      if ( is_mul_ok(v19, 1uLL) )
                      {
                        v20 = CTCoAllocPolicy::Alloc((IMalloc *)0xFFFFFFFFLL, *((__int64 *)&v18 + 1), v18, &pv);
                        v8 = pv;
                        FTM = v20;
                        if ( v20 >= 0 )
                          FTM = IStream_Write(pstm, pv, v17);
                      }
                      else
                      {
                        FTM = -2147024362;
                      }
                      CoTaskMemFree_0(v8);
                    }
                  }
                }
                else
                {
                  FTM = -2147467259;
                }
              }
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  return (unsigned int)FTM;
}

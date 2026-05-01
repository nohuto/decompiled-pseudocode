/*
 * XREFs of ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180049930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008C3C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800445C4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049B94 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CoTaskMemFree_0 @ 0x18004B886 (CoTaskMemFree_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
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
  HRESULT FTM; // esi
  _QWORD *v14; // rax
  unsigned __int64 lpVtbl_low; // rdi
  unsigned __int64 v16; // rdi
  int v17; // eax
  void *v19; // [rsp+40h] [rbp-20h] BYREF
  void *pv; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h] BYREF

  v8 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  FTM = CFTMCrossProcBase::_GetFTM(punkOuter, v12, &v19);
  if ( FTM >= 0 )
  {
    FTM = (*(__int64 (__fastcall **)(void *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v19 + 40LL))(
            v19,
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
                  &v22);
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
                      &v21);
              if ( FTM >= 0 )
              {
                lpVtbl_low = LODWORD(punkOuter[4].lpVtbl);
                if ( v21 - v22 <= lpVtbl_low )
                {
                  if ( v21 - v22 < lpVtbl_low )
                  {
                    v16 = lpVtbl_low - (v21 - v22);
                    if ( v16 <= 0xFFFFFFFF )
                    {
                      pv = 0LL;
                      if ( is_mul_ok((unsigned int)v16, 1uLL) )
                      {
                        v17 = CTCoAllocPolicy::Alloc(
                                (IMalloc *)(unsigned int)v16,
                                ((unsigned int)v16 * (unsigned __int128)1uLL) >> 64,
                                (unsigned int)v16,
                                &pv);
                        v8 = pv;
                        FTM = v17;
                        if ( v17 >= 0 )
                          FTM = IStream_Write(pstm, pv, v16);
                      }
                      else
                      {
                        FTM = -2147024362;
                      }
                      CoTaskMemFree_0(v8);
                    }
                    else
                    {
                      FTM = -2147024362;
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
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  return (unsigned int)FTM;
}

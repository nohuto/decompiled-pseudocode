/*
 * XREFs of ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049B94
 * Callers:
 *     ?GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x1800495D0 (-GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z.c)
 *     ?DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z @ 0x180049720 (-DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z.c)
 *     ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1800497A0 (-GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z.c)
 *     ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180049930 (-MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008C3C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18002A2AC (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CopyTo@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180034580 (-CopyTo@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CoCreateFreeThreadedMarshaler_0 @ 0x18004B89E (CoCreateFreeThreadedMarshaler_0.c)
 */

__int64 __fastcall CFTMCrossProcBase::_GetFTM(LPUNKNOWN punkOuter, IUnknown *a2, void **a3)
{
  RTL_SRWLOCK *v3; // rbp
  LPUNKNOWN v5; // rsi
  struct IUnknownVtbl *lpVtbl; // rbx
  signed int v7; // edi
  HRESULT v8; // ebx
  LPUNKNOWN v9; // rdi
  LPUNKNOWN v11; // [rsp+50h] [rbp+8h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+58h] [rbp+10h] BYREF

  ppunkMarshal = a2;
  *a3 = 0LL;
  v3 = (RTL_SRWLOCK *)&punkOuter[5];
  AcquireSRWLockShared((PSRWLOCK)&punkOuter[5]);
  v5 = punkOuter + 6;
  lpVtbl = punkOuter[6].lpVtbl;
  v7 = lpVtbl == 0LL ? 0x80004005 : 0;
  ReleaseSRWLockShared(v3);
  if ( !lpVtbl )
  {
    ppunkMarshal = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
    v8 = CoCreateFreeThreadedMarshaler_0(punkOuter, &ppunkMarshal);
    if ( v8 < 0 )
    {
      v7 = v8;
    }
    else
    {
      AcquireSRWLockExclusive(v3);
      v7 = v5->lpVtbl == 0LL ? 0x80004005 : 0;
      if ( !v5->lpVtbl )
      {
        v9 = ppunkMarshal;
        if ( ppunkMarshal )
        {
          v11 = ppunkMarshal;
          Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v11);
          v11 = (LPUNKNOWN)v5->lpVtbl;
          v5->lpVtbl = (struct IUnknownVtbl *)v9;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
        }
        v7 = v8;
      }
      ReleaseSRWLockExclusive(v3);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
  }
  if ( v7 >= 0 )
    return (unsigned int)Microsoft::WRL::ComPtr<IUnknown>::CopyTo(&punkOuter[6].lpVtbl);
  return (unsigned int)v7;
}

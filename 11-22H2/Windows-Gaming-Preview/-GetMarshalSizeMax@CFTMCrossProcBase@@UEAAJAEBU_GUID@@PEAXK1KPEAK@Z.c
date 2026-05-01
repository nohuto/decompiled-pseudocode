/*
 * XREFs of ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18004A5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008CE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A9C4 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcBase::GetMarshalSizeMax(
        LPUNKNOWN punkOuter,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rsi
  const struct _GUID *v12; // rdx
  signed int FTM; // ebx
  _QWORD *v14; // rax
  unsigned int lpVtbl; // ecx
  unsigned int v16; // ecx
  int v17; // eax
  void *v19[2]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v19[0] = 0LL;
  *a7 = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v19);
  FTM = CFTMCrossProcBase::_GetFTM(punkOuter, v12, v19);
  if ( FTM >= 0 )
  {
    FTM = (*(__int64 (__fastcall **)(void *, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int *))(*(_QWORD *)v19[0] + 32LL))(
            v19[0],
            a2,
            a3,
            a4,
            a5,
            a6,
            v7);
    if ( FTM >= 0 && a4 != 3 )
    {
      v14 = (_QWORD *)((__int64 (__fastcall *)(LPUNKNOWN))punkOuter->lpVtbl[3].Release)(punkOuter);
      if ( *(_QWORD *)&GUID_NULL.Data1 != *v14 || *(_QWORD *)GUID_NULL.Data4 != v14[1] )
      {
        FTM = ((__int64 (__fastcall *)(LPUNKNOWN, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))punkOuter->lpVtbl[3].QueryInterface)(
                punkOuter,
                a2,
                a3,
                a4,
                a5,
                a6,
                &a7);
        if ( FTM >= 0 )
        {
          _InterlockedExchange((volatile __int32 *)&punkOuter[4], (__int32)a7);
          lpVtbl = (unsigned int)punkOuter[4].lpVtbl;
          if ( lpVtbl + 4 < lpVtbl )
          {
            FTM = -2147024362;
          }
          else
          {
            v16 = lpVtbl + 4 + *v7;
            v17 = -1;
            if ( v16 >= *v7 )
              v17 = v16;
            FTM = v16 < *v7 ? 0x80070216 : 0;
            *v7 = v17;
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v19);
  return (unsigned int)FTM;
}

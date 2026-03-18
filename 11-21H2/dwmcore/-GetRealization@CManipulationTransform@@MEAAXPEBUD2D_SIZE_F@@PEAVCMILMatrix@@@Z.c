/*
 * XREFs of ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180018720
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18000E410 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333333333@Z @ 0x180224654 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333333333@Z @ 0x180224788 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTempl.c)
 */

void __fastcall CManipulationTransform::GetRealization(
        CManipulationTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // r9d
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // [rsp+A0h] [rbp+7h] BYREF
  int v15; // [rsp+A4h] [rbp+Bh] BYREF
  int v16; // [rsp+A8h] [rbp+Fh] BYREF
  int v17; // [rsp+ACh] [rbp+13h] BYREF
  int v18; // [rsp+B0h] [rbp+17h] BYREF
  int v19; // [rsp+B4h] [rbp+1Bh] BYREF
  int v20; // [rsp+B8h] [rbp+1Fh] BYREF
  int v21; // [rsp+BCh] [rbp+23h] BYREF
  int v22; // [rsp+C0h] [rbp+27h] BYREF
  int v23; // [rsp+C4h] [rbp+2Bh] BYREF
  int v24; // [rsp+C8h] [rbp+2Fh] BYREF
  int v25; // [rsp+CCh] [rbp+33h] BYREF
  _DWORD v26[8]; // [rsp+D0h] [rbp+37h] BYREF
  int v27; // [rsp+100h] [rbp+67h] BYREF
  int v28; // [rsp+110h] [rbp+77h] BYREF
  int v29; // [rsp+118h] [rbp+7Fh] BYREF

  if ( *((_BYTE *)this + 272) )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      (CManipulationTransform *)((char *)this + 160),
      (CManipulationTransform *)((char *)this + 184),
      (CManipulationTransform *)((char *)this + 196),
      (CManipulationTransform *)((char *)this + 208));
    *((_BYTE *)this + 272) = 0;
  }
  v5 = *((_OWORD *)this + 14);
  v6 = *((_OWORD *)this + 15);
  v7 = *((_OWORD *)this + 16);
  *(_OWORD *)a3 = *((_OWORD *)this + 13);
  *((_OWORD *)a3 + 1) = v5;
  *((_OWORD *)a3 + 2) = v6;
  *((_OWORD *)a3 + 3) = v7;
  *((_DWORD *)a3 + 16) = 0;
  if ( (unsigned int)dword_1803D0EF0 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1803D0EF0, 1LL) )
    {
      v27 = *((_DWORD *)this + 67);
      v28 = *((_DWORD *)this + 66);
      v29 = *((_DWORD *)this + 65);
      v23 = *((_DWORD *)this + 64);
      v24 = *((_DWORD *)this + 63);
      v25 = *((_DWORD *)this + 62);
      v26[0] = *((_DWORD *)this + 61);
      v14 = *((_DWORD *)this + 60);
      v15 = *((_DWORD *)this + 59);
      v16 = *((_DWORD *)this + 58);
      v17 = *((_DWORD *)this + 57);
      v18 = *((_DWORD *)this + 56);
      v19 = *((_DWORD *)this + 55);
      v20 = *((_DWORD *)this + 54);
      v21 = *((_DWORD *)this + 53);
      v22 = *((_DWORD *)this + 52);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        (unsigned int)&unk_1803715E1,
        v9,
        v10,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27);
      v10 = dword_1803D0EF0;
    }
    if ( v10 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1803D0EF0, 1LL) )
      {
        v27 = *((_DWORD *)this + 51);
        v28 = *((_DWORD *)this + 50);
        v29 = *((_DWORD *)this + 49);
        v22 = *((_DWORD *)this + 48);
        v21 = *((_DWORD *)this + 47);
        v20 = *((_DWORD *)this + 46);
        v19 = *((_DWORD *)this + 45);
        v18 = *((_DWORD *)this + 44);
        v17 = *((_DWORD *)this + 43);
        v16 = *((_DWORD *)this + 42);
        v15 = *((_DWORD *)this + 41);
        v14 = *((_DWORD *)this + 40);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v11,
          (unsigned int)&unk_180371666,
          v12,
          v13,
          (__int64)&v14,
          (__int64)&v15,
          (__int64)&v16,
          (__int64)&v17,
          (__int64)&v18,
          (__int64)&v19,
          (__int64)&v20,
          (__int64)&v21,
          (__int64)&v22,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27);
      }
    }
  }
}

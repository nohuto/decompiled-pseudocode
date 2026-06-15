/*
 * XREFs of ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z @ 0x180028A10
 * Callers:
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800286F8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180065D10 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_G.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x18010CAD0 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteri.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CConstraintModel::GetEndpointInformationFromId(
        CConstraintModel *this,
        struct IMMDevice *a2,
        unsigned __int16 *a3,
        int a4,
        unsigned __int16 *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int16 *v9; // rsi
  unsigned int *v10; // rdi
  signed int v11; // ebx
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  _WORD *v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+58h] [rbp-8h]
  LPVOID pv; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+50h] BYREF
  int v29; // [rsp+B8h] [rbp+58h] BYREF

  v29 = a4;
  *a3 = 0;
  v9 = a5;
  *a5 = 0;
  v10 = a7;
  *a7 = 0;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  a5 = 0LL;
  v28 = 0LL;
  pv = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 *))a2->lpVtbl->Activate)(
          a2,
          &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
          23LL,
          0LL,
          &v24);
  if ( v11 < 0 )
    goto LABEL_29;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v24 + 32LL))(v24, 0LL, &v23);
  if ( v11 < 0
    || (v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 64LL))(v23, &v22), v11 < 0)
    || (v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, unsigned __int16 **))v22)(
                v22,
                &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
                &a5),
        v11 < 0)
    || (v29 = 0, v11 = (*(__int64 (__fastcall **)(unsigned __int16 *, int *))(*(_QWORD *)a5 + 32LL))(a5, &v29), v11 < 0)
    || (*v10 = (unsigned __int16)v29,
        v11 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64 *))(*(_QWORD *)a5 + 96LL))(a5, &v28),
        v11 < 0)
    || (v11 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v28 + 64LL))(v28, &pv), v11 < 0) )
  {
LABEL_29:
    v12 = pv;
    goto LABEL_30;
  }
  v12 = pv;
  v13 = -1LL;
  do
    ++v13;
  while ( *((_WORD *)pv + v13) );
  while ( *((_WORD *)pv + v13) != 92 )
    --v13;
  v14 = -1LL;
  do
    ++v14;
  while ( *((_WORD *)pv + v14) );
  if ( (unsigned __int64)(v14 - v13) <= 0x105 )
  {
    v15 = v13 + 1;
    v16 = -1LL;
    do
      ++v16;
    while ( *((_WORD *)pv + v16) );
    if ( v15 <= v16 )
    {
      v17 = (char *)pv + 2 * v15;
      v18 = (char *)&v9[-v13 - 1] - (_BYTE *)pv;
      do
      {
        *(_WORD *)((char *)v17 + v18) = *v17;
        ++v15;
        ++v17;
        v19 = -1LL;
        do
          ++v19;
        while ( v12[v19] );
      }
      while ( v15 <= v19 );
    }
    a7 = 0LL;
    *(_OWORD *)pvar = 0LL;
    v26 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, unsigned int **))a2->lpVtbl->OpenPropertyStore)(
            a2,
            0LL,
            &a7);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(unsigned int *, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)a7 + 40LL))(
              a7,
              &DEVPKEY_Device_MatchingDeviceId,
              pvar);
      if ( v11 >= 0 )
      {
        if ( LOWORD(pvar[0]) == 31 )
        {
          v20 = _o_wcscpy_s(a3, 201LL, pvar[1]);
          v11 = v20;
          if ( v20 > 0 )
            v11 = (unsigned __int16)v20 | 0x80070000;
        }
        else
        {
          v11 = -2147467259;
        }
      }
    }
    PropVariantClear(pvar);
    if ( a7 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a7 + 16LL))(a7);
    goto LABEL_29;
  }
  v11 = -2147024774;
LABEL_30:
  CoTaskMemFree(v12);
  pv = 0LL;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( a5 )
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)a5 + 16LL))(a5);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)v11;
}

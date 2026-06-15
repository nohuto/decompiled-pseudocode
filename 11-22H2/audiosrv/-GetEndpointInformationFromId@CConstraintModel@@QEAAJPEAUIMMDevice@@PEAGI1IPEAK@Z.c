/*
 * XREFs of ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z @ 0x18000CC44
 * Callers:
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18000FD84 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180011F60 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_G.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x180101390 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteri.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CConstraintModel::GetEndpointInformationFromId(
        CConstraintModel *this,
        struct IMMDevice *a2,
        unsigned __int16 *a3,
        int a4,
        unsigned __int16 *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int16 *v9; // rdi
  unsigned int *v10; // rsi
  signed int v11; // ebx
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _WORD *v18; // r8
  signed __int64 v19; // rdi
  unsigned __int64 v20; // rax
  int v21; // eax
  __int64 (__fastcall ***v23)(_QWORD, GUID *, unsigned __int16 **); // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h]
  LPVOID pv; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+50h] BYREF
  int v30; // [rsp+B8h] [rbp+58h] BYREF

  v30 = a4;
  *a3 = 0;
  v9 = a5;
  *a5 = 0;
  v10 = a7;
  *a7 = 0;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  a5 = 0LL;
  v29 = 0LL;
  pv = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 *))a2->lpVtbl->Activate)(
          a2,
          &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
          23LL,
          0LL,
          &v25);
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v25 + 32LL))(v25, 0LL, &v24);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, unsigned __int16 **)))(*(_QWORD *)v24 + 64LL))(
              v24,
              &v23);
      if ( v11 >= 0 )
      {
        v11 = (**v23)(v23, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &a5);
        if ( v11 >= 0 )
        {
          v30 = 0;
          v11 = (*(__int64 (__fastcall **)(unsigned __int16 *, int *))(*(_QWORD *)a5 + 32LL))(a5, &v30);
          if ( v11 >= 0 )
          {
            *v10 = (unsigned __int16)v30;
            v11 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64 *))(*(_QWORD *)a5 + 96LL))(a5, &v29);
            if ( v11 >= 0 )
            {
              v11 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v29 + 64LL))(v29, &pv);
              if ( v11 >= 0 )
              {
                v12 = pv;
                v13 = -1LL;
                do
                  ++v13;
                while ( *((_WORD *)pv + v13) );
                while ( 1 )
                {
                  v14 = 2 * v13;
                  if ( *((_WORD *)pv + v13) == 92 )
                    break;
                  --v13;
                }
                v15 = -1LL;
                do
                  ++v15;
                while ( *((_WORD *)pv + v15) );
                if ( (unsigned __int64)(v15 - v13) > 0x105 )
                {
                  v11 = -2147024774;
                  goto LABEL_29;
                }
                v16 = v13 + 1;
                v17 = -1LL;
                do
                  ++v17;
                while ( *((_WORD *)pv + v17) );
                if ( v16 <= v17 )
                {
                  v18 = (char *)pv + 2 * v16;
                  v19 = (char *)&v9[v14 / 0xFFFFFFFFFFFFFFFEuLL] - (_BYTE *)pv;
                  do
                  {
                    *(_WORD *)((char *)v18 + v19 - 2) = *v18;
                    ++v16;
                    ++v18;
                    v20 = -1LL;
                    do
                      ++v20;
                    while ( v12[v20] );
                  }
                  while ( v16 <= v20 );
                }
                a7 = 0LL;
                *(_OWORD *)pvar = 0LL;
                v27 = 0LL;
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
                      v21 = _o_wcscpy_s(a3, 201LL, pvar[1]);
                      v11 = v21;
                      if ( v21 > 0 )
                        v11 = (unsigned __int16)v21 | 0x80070000;
                    }
                    else
                    {
                      v11 = -2147467259;
                    }
                  }
                }
                PropVariantClear(pvar);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&a7);
              }
            }
          }
        }
      }
    }
  }
  v12 = pv;
LABEL_29:
  CoTaskMemFree(v12);
  pv = 0LL;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v29);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&a5);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v23);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
  return (unsigned int)v11;
}

/*
 * XREFs of HUBDESC_ValidateBOSDescriptorSet @ 0x1C0039550
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0028588 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x1C002E5EC (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     WPP_RECORDER_SF_Ddd @ 0x1C0032CA4 (WPP_RECORDER_SF_Ddd.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C003323C (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0038C7C (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C00391A4 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0043B00 (memset.c)
 */

bool __fastcall HUBDESC_ValidateBOSDescriptorSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int128 *a5,
        _BYTE *a6,
        _WORD *a7,
        unsigned __int16 *a8,
        _BYTE *a9,
        int *a10,
        _DWORD *a11,
        _BYTE *a12,
        _BYTE *a13,
        __int64 a14)
{
  int v14; // r12d
  __int64 v15; // rdi
  __int64 v18; // rsi
  __int128 v19; // xmm0
  _BYTE *v20; // rbx
  __int128 v21; // xmm1
  __int64 v22; // xmm1_8
  _BYTE *v23; // r13
  __int64 v24; // r14
  bool v25; // bl
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int8 *v29; // rdi
  bool v30; // al
  _DWORD *v31; // rdi
  _BYTE *v32; // rax
  int v34; // [rsp+20h] [rbp-D9h]
  __int64 v35; // [rsp+28h] [rbp-D1h]
  __int64 v36; // [rsp+30h] [rbp-C9h]
  _OWORD v37[3]; // [rsp+60h] [rbp-99h] BYREF
  __int64 v38; // [rsp+90h] [rbp-69h]
  __int64 v39; // [rsp+98h] [rbp-61h]
  unsigned __int64 v40; // [rsp+A0h] [rbp-59h]
  int v41; // [rsp+A8h] [rbp-51h]
  int v42; // [rsp+ACh] [rbp-4Dh]
  _BYTE *v43; // [rsp+B0h] [rbp-49h]
  __int64 v44; // [rsp+B8h] [rbp-41h]
  _BYTE v45[112]; // [rsp+C0h] [rbp-39h] BYREF
  unsigned int v47; // [rsp+148h] [rbp+4Fh] BYREF
  int v48; // [rsp+158h] [rbp+5Fh] BYREF

  v14 = 0;
  v15 = a4;
  v48 = 0;
  v47 = 0;
  v42 = 0;
  memset(v45, 0, 0x40uLL);
  v18 = (__int64)a5;
  v40 = a2 + v15;
  v44 = a3;
  v19 = *a5;
  v20 = v45;
  v41 = v15;
  v21 = a5[1];
  if ( a6 )
    v20 = a6;
  v37[0] = v19;
  v37[1] = v21;
  v22 = *((_QWORD *)a5 + 6);
  v39 = a2;
  v38 = v22;
  v37[2] = a5[2];
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a12 )
    *a12 = 0;
  v23 = a13;
  if ( a13 )
    *a13 = 0;
  memset(v20, 0, 0x40uLL);
  v43 = v20;
  if ( (unsigned int)v15 < 5 )
  {
    v24 = a14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(a14, 2u, 5u, 0xE8u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v15, 5);
    (*(void (__fastcall **)(_QWORD, __int64))(v18 + 24))(*(_QWORD *)(v18 + 40), 23LL);
    goto LABEL_15;
  }
  v24 = a14;
  HUBDESC_InternalValidateBOSDescriptor((unsigned __int8 *)a2, (__int64)v37, &v47, &v48, a14);
  if ( v48 == 1 )
  {
LABEL_15:
    v25 = 0;
    goto LABEL_55;
  }
  v26 = *(unsigned __int16 *)(a2 + 2);
  v25 = v48 != 2;
  if ( (unsigned int)v15 < v26 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v18 + 24))(*(_QWORD *)(v18 + 40), 23LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ddd(v24, v27, v28, 0xE9u, v34);
    LOWORD(v26) = *(_WORD *)(a2 + 2);
    v25 = 0;
  }
  if ( (unsigned int)v15 > (unsigned __int16)v26 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v18 + 32))(*(_QWORD *)(v18 + 40), 22LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        v24,
        2u,
        5u,
        0xEAu,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        v15,
        *(unsigned __int16 *)(a2 + 2));
  }
  v29 = (unsigned __int8 *)(a2 + v47);
  if ( (unsigned __int64)v29 < v40 )
  {
    while ( 1 )
    {
      v48 = 0;
      HUBDESC_InternalValidateCommonDescriptorHeader(v29, (__int64)v37, &v47, &v48, v24);
      if ( v48 == 1 )
        break;
      v30 = v25;
      if ( v48 == 2 )
        v30 = 0;
      v48 = 0;
      v25 = v30;
      if ( v29[1] == 16 )
      {
        HUBDESC_InternalValidateDeviceCapabilityDescriptor(
          v29,
          (__int64)v37,
          &v47,
          &v48,
          a7,
          a8,
          a9,
          a10,
          a12,
          v23,
          v24);
        if ( v48 == 1 )
        {
          v25 = 0;
          goto LABEL_55;
        }
        if ( v48 == 2 )
          v25 = 0;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v36) = v29[1];
          LODWORD(v35) = (_DWORD)v29 - a2;
          WPP_RECORDER_SF_DD(v24, 2u, 5u, 0xEBu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v35, v36);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v18 + 32))(*(_QWORD *)(v18 + 40), 28LL);
      }
      ++v14;
      v29 += v47;
      if ( (unsigned __int64)v29 >= v40 )
        goto LABEL_36;
    }
    v25 = 0;
    goto LABEL_55;
  }
LABEL_36:
  if ( *(unsigned __int8 *)(a2 + 4) != v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v36) = *(unsigned __int8 *)(a2 + 4);
      LODWORD(v35) = v14;
      WPP_RECORDER_SF_DD(v24, 2u, 5u, 0xECu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v35, v36);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v18 + 24))(*(_QWORD *)(v18 + 40), 25LL);
    v25 = 0;
  }
  v31 = a11;
  if ( *((_QWORD *)v43 + 1) )
  {
    if ( a11 )
      *a11 |= 0x800u;
  }
  else if ( DWORD1(v37[0]) == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v24, 2u, 5u, 0xEDu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(v18 + 24))(*(_QWORD *)(v18 + 40), 26LL);
    v25 = 0;
  }
  HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode(a1);
  if ( v31 )
  {
    v32 = v43;
    if ( *((_QWORD *)v43 + 2) )
      *v31 |= 0x1000u;
    if ( v32[42] )
      *v31 |= 0x10000u;
  }
  if ( !v25 )
  {
LABEL_55:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v24, 2u, 5u, 0xEEu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
  }
  return v25;
}

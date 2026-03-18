/*
 * XREFs of HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C003774C
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0038C7C (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0026F14 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0032B34 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        _BYTE *a5,
        _BYTE *a6,
        __int64 a7)
{
  int *v7; // rdi
  __int64 v10; // r12
  int v11; // r15d
  __int64 result; // rax
  unsigned int *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  unsigned int v18; // [rsp+90h] [rbp+8h]
  int v19; // [rsp+98h] [rbp+10h] BYREF
  unsigned int *v20; // [rsp+A0h] [rbp+18h]

  v20 = (unsigned int *)a3;
  v19 = 0;
  v7 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v7 = &v19;
  }
  v10 = a7;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v18 = *(_DWORD *)(a2 + 72) - v11;
  if ( *a1 < 8u )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 262LL);
    if ( v18 < 8 )
    {
      *v7 = 1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      result = WPP_RECORDER_SF_DDD(
                 v10,
                 2u,
                 a3,
                 0xA6u,
                 (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
                 v11,
                 *a1,
                 8);
      goto LABEL_44;
    }
    v13 = v20;
    *v7 = 2;
    *v13 = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v10,
        2u,
        5u,
        0xA5u,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        v11,
        *a1,
        8,
        8);
  }
  if ( *a1 > 8u )
  {
    if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
      *v7 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = 8;
      LODWORD(v16) = *a1;
      LODWORD(v15) = v11;
      WPP_RECORDER_SF_DDD(v10, 2u, a3, 0xA7u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v15, v16, v17);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 264LL);
  }
  if ( *v20 <= v18 )
  {
    if ( a1[3] )
    {
      if ( *((_DWORD *)a1 + 1) >= 4u )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v7 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v15) = *((_DWORD *)a1 + 1);
          WPP_RECORDER_SF_d(v10, 2u, 5u, 0xAAu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v15);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 265LL);
      }
      result = *((unsigned int *)a1 + 1);
      if ( (result & 1) != 0 && a5 )
      {
        *a5 = 1;
        result = *((unsigned int *)a1 + 1);
      }
      if ( (result & 2) != 0 )
      {
        result = (__int64)a6;
        if ( a6 )
          *a6 = 1;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = (*((_DWORD *)a1 + 1) >> 1) & 1;
        LODWORD(v15) = *((_DWORD *)a1 + 1) & 1;
        result = WPP_RECORDER_SF_DD(
                   v10,
                   4u,
                   5u,
                   0xABu,
                   (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
                   v15,
                   v16);
      }
      goto LABEL_44;
    }
    *v7 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = a1[3];
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0xA9u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v15);
    }
    v14 = 265LL;
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v7 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v11;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0xA8u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v15);
    }
    v14 = 261LL;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v14);
LABEL_44:
  if ( *v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_(v10, 2u, 5u, 0xACu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
  }
  return result;
}

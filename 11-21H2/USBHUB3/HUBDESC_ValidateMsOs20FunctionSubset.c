/*
 * XREFs of HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C003B190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x1C003AD3C (HUBDESC_GetNextMsOs20Descriptor.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0043B00 (memset.c)
 */

char __fastcall HUBDESC_ValidateMsOs20FunctionSubset(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int64 a4)
{
  char v7; // di
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // rdx
  unsigned __int16 *v12; // r13
  char v13; // r12
  __int64 (__fastcall **v14)(); // r9
  unsigned int v15; // ecx
  unsigned __int8 (__fastcall *v16)(__int64, _BYTE *, unsigned __int16 *, char *); // r8
  __int64 v18; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v19; // [rsp+30h] [rbp-D8h]
  unsigned __int16 *v20; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int8 (__fastcall *v21)(__int64, _BYTE *, unsigned __int16 *, char *); // [rsp+40h] [rbp-C8h]
  _BYTE v22[112]; // [rsp+50h] [rbp-B8h] BYREF

  v7 = 0;
  memset(v22, 0, 0x68uLL);
  if ( *a3 != 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x13Cu,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        *a3);
    v9 = 161LL;
    goto LABEL_30;
  }
  v10 = a3[3];
  if ( (unsigned int)v10 < 0xC )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x13Du,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        v10);
    v9 = 162LL;
    goto LABEL_30;
  }
  v11 = (char *)a3 + v10;
  v19 = (unsigned __int64)a3 + v10;
  if ( (unsigned __int64)a3 + v10 > a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x13Eu,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        v10);
    v9 = 163LL;
LABEL_30:
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v9);
LABEL_31:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x142u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
    return v7;
  }
  v12 = a3 + 4;
  v13 = 1;
  v20 = a3 + 4;
  v14 = &MsOs20DispatchTable;
  do
  {
    v15 = v12[1];
    if ( v15 >= 9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v12[1];
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x140u,
          (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
          v18);
      }
    }
    else
    {
      v16 = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, char *))*(&MsOs20DispatchTable
                                                                                          + 2 * v12[1]);
      v21 = v16;
      if ( !*((_BYTE *)&MsOs20DispatchTable + 16 * v15 + 9) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v18) = v15;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a2 + 96),
            2u,
            5u,
            0x13Fu,
            (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
            v18);
        }
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, char *), __int64 (__fastcall **)()))(a1 + 24))(
          *(_QWORD *)(a1 + 40),
          164LL,
          v16,
          v14);
        v11 = (char *)v19;
        v13 = 0;
      }
      if ( !v21(a1, v22, v12, v11) )
        v13 = 0;
    }
    if ( !HUBDESC_GetNextMsOs20Descriptor(v19, &v20) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x141u,
          (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
      v9 = 165LL;
      goto LABEL_30;
    }
    v12 = v20;
    v14 = &MsOs20DispatchTable;
    v11 = (char *)v19;
  }
  while ( v20 );
  v7 = v13;
  if ( v13 != 1 )
    goto LABEL_31;
  *(_DWORD *)a2 |= 0x10u;
  return v7;
}

/*
 * XREFs of HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x1C003A324
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1C001FD10 (HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v7; // bl
  __int64 v8; // rdx
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]

  v7 = 1;
  if ( a2 != 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(a4, 2u, 5u, 0x111u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, a2, 16);
    v8 = 122LL;
LABEL_5:
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), v8);
    v7 = 0;
    goto LABEL_23;
  }
  if ( *(_WORD *)(a1 + 4) != 256 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        a4,
        2u,
        5u,
        0x112u,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        *(unsigned __int16 *)(a1 + 4),
        256);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 120LL);
    v7 = 0;
  }
  if ( *(_WORD *)(a1 + 6) != 4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = 4;
      LODWORD(v10) = *(unsigned __int16 *)(a1 + 6);
      WPP_RECORDER_SF_DD(a4, 2u, 5u, 0x113u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v10, v11);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 125LL);
    v7 = 0;
  }
  if ( *(_BYTE *)(a1 + 8) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x114u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
    v8 = 121LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)a1 == 40 )
  {
    if ( v7 )
      return v7;
  }
  else
  {
    v7 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = 40;
      LODWORD(v10) = *(_DWORD *)a1;
      WPP_RECORDER_SF_DD(a4, 2u, 5u, 0x115u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v10, v11);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 127LL);
  }
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x116u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
  return v7;
}

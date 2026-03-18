/*
 * XREFs of HUBDESC_ValidateMsOs20DescriptorSetHeader @ 0x1C003ADB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20DescriptorSetHeader(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  char v4; // di
  char v7; // dl

  v4 = 0;
  v7 = 1;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x132u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 154LL);
    v7 = 0;
  }
  if ( *a3 == 10 )
  {
    v4 = v7;
    if ( v7 == 1 )
    {
      *(_DWORD *)a2 |= 2u;
      return v4;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x133u,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        *a3);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 155LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x134u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
  return v4;
}

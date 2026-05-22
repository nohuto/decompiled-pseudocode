/*
 * XREFs of ?QueryInterface@CCompositionSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002AC50
 * Callers:
 *     ?QueryInterface@CCompositionSurface@DirectComposition@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8290 (-QueryInterface@CCompositionSurface@DirectComposition@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurface@DirectComposition@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A82B0 (-QueryInterface@CCompositionSurface@DirectComposition@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSurface::QueryInterface(
        DirectComposition::CCompositionSurface *this,
        const struct _GUID *a2,
        DirectComposition::CCompositionSurface **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  DirectComposition::CCompositionSurface *v10; // rax

  if ( !a3 )
    return 2147942487LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5680c979_14c8_48b5_8b92_3247379fd907.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5680c979_14c8_48b5_8b92_3247379fd907.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5680c979_14c8_48b5_8b92_3247379fd907.Data4;
  if ( !v3 )
    goto LABEL_21;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c9f54a6b_06fb_4465_9edc_590cacccb47a.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c9f54a6b_06fb_4465_9edc_590cacccb47a.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c9f54a6b_06fb_4465_9edc_590cacccb47a.Data4;
  if ( !v4 )
    goto LABEL_21;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_43390de3_ac87_4fc4_a8ee_be3a1f43ebdd.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_43390de3_ac87_4fc4_a8ee_be3a1f43ebdd.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_43390de3_ac87_4fc4_a8ee_be3a1f43ebdd.Data4;
  if ( !v5 )
  {
    v10 = (DirectComposition::CCompositionSurface *)((char *)this + 8);
    if ( !this )
      v10 = 0LL;
    goto LABEL_22;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bb8a4953_2c99_4f5a_96f5_4819027fa3ac.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bb8a4953_2c99_4f5a_96f5_4819027fa3ac.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bb8a4953_2c99_4f5a_96f5_4819027fa3ac.Data4;
  if ( !v6 )
    goto LABEL_21;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4.Data4;
  if ( v7 )
  {
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v8 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
LABEL_21:
    v10 = this;
LABEL_22:
    *a3 = v10;
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    return 0LL;
  }
  if ( !this )
  {
    v10 = 0LL;
    goto LABEL_22;
  }
  *a3 = (DirectComposition::CCompositionSurface *)((char *)this + 16);
  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  return 0LL;
}

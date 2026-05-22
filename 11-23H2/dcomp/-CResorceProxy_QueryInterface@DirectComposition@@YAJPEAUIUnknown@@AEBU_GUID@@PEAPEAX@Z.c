/*
 * XREFs of ?CResorceProxy_QueryInterface@DirectComposition@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180011EBC
 * Callers:
 *     ?QueryInterface@CVisualProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011EB0 (-QueryInterface@CVisualProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCursorVisualProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECC10 (-QueryInterface@CCursorVisualProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?IsVersionSupported@DirectComposition@@YA_NPEAUIUnknown@@W4DeviceVersion@1@@Z @ 0x180011F64 (-IsVersionSupported@DirectComposition@@YA_NPEAUIUnknown@@W4DeviceVersion@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CResorceProxy_QueryInterface(
        DirectComposition *this,
        struct IUnknown *a2,
        struct _GUID *a3,
        void **a4)
{
  unsigned int v4; // ebx
  struct _GUID *v5; // r11
  char *v8; // rax
  char *v9; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax

  v4 = 0;
  v5 = a3;
  if ( a3 )
  {
    v8 = (char *)a2->lpVtbl - *(_QWORD *)&GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data1;
    if ( a2->lpVtbl == *(struct IUnknownVtbl **)&GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data1 )
      v8 = (char *)a2[1].lpVtbl - *(_QWORD *)GUID_4d93059d_097b_4651_9a60_f0f25116e2f3.Data4;
    if ( !v8 )
      goto LABEL_9;
    v9 = (char *)a2->lpVtbl - *(_QWORD *)&GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data1;
    if ( a2->lpVtbl == *(struct IUnknownVtbl **)&GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data1 )
      v9 = (char *)a2[1].lpVtbl - *(_QWORD *)GUID_e8de1639_4331_4b26_bc5f_6a321d347a85.Data4;
    if ( !v9 && (unsigned __int8)DirectComposition::IsVersionSupported(this, a2, a3, a4) )
      goto LABEL_9;
    v11 = (char *)a2->lpVtbl - *(_QWORD *)&GUID_fed2b808_5eb4_43a0_aea3_35f65280f91b.Data1;
    if ( a2->lpVtbl == *(struct IUnknownVtbl **)&GUID_fed2b808_5eb4_43a0_aea3_35f65280f91b.Data1 )
      v11 = (char *)a2[1].lpVtbl - *(_QWORD *)GUID_fed2b808_5eb4_43a0_aea3_35f65280f91b.Data4;
    if ( !v11 && (unsigned __int8)DirectComposition::IsVersionSupported(this, a2, a3, a4) )
      goto LABEL_9;
    v12 = (char *)a2->lpVtbl - *(_QWORD *)&GUID_2775f462_b6c1_4015_b0be_b3e7d6a4976d.Data1;
    if ( a2->lpVtbl == *(struct IUnknownVtbl **)&GUID_2775f462_b6c1_4015_b0be_b3e7d6a4976d.Data1 )
      v12 = (char *)a2[1].lpVtbl - *(_QWORD *)GUID_2775f462_b6c1_4015_b0be_b3e7d6a4976d.Data4;
    if ( !v12 && (unsigned __int8)DirectComposition::IsVersionSupported(this, a2, a3, a4) )
      goto LABEL_9;
    v13 = (char *)a2->lpVtbl - *(_QWORD *)&GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data1;
    if ( a2->lpVtbl == *(struct IUnknownVtbl **)&GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data1 )
      v13 = (char *)a2[1].lpVtbl - *(_QWORD *)GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67.Data4;
    if ( !v13 )
      goto LABEL_9;
    v14 = (char *)a2->lpVtbl - *(_QWORD *)&GUID_c12a8aa7_363a_4145_9cc4_b011da247d4e.Data1;
    if ( a2->lpVtbl == *(struct IUnknownVtbl **)&GUID_c12a8aa7_363a_4145_9cc4_b011da247d4e.Data1 )
      v14 = (char *)a2[1].lpVtbl - *(_QWORD *)GUID_c12a8aa7_363a_4145_9cc4_b011da247d4e.Data4;
    if ( !v14 )
      goto LABEL_9;
    v15 = (char *)a2->lpVtbl - *(_QWORD *)&GUID_7d1f5393_33d8_47a0_9437_2e77fb5c10af.Data1;
    if ( a2->lpVtbl == *(struct IUnknownVtbl **)&GUID_7d1f5393_33d8_47a0_9437_2e77fb5c10af.Data1 )
      v15 = (char *)a2[1].lpVtbl - *(_QWORD *)GUID_7d1f5393_33d8_47a0_9437_2e77fb5c10af.Data4;
    if ( !v15 )
      goto LABEL_9;
    v16 = (char *)a2->lpVtbl - *(_QWORD *)&GUID_f2011fdf_3a34_4ec6_ae59_2ddd1bc9b6a1.Data1;
    if ( a2->lpVtbl == *(struct IUnknownVtbl **)&GUID_f2011fdf_3a34_4ec6_ae59_2ddd1bc9b6a1.Data1 )
      v16 = (char *)a2[1].lpVtbl - *(_QWORD *)GUID_f2011fdf_3a34_4ec6_ae59_2ddd1bc9b6a1.Data4;
    if ( !v16 )
      goto LABEL_9;
    v17 = (char *)a2->lpVtbl - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( a2->lpVtbl == *(struct IUnknownVtbl **)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v17 = (char *)a2[1].lpVtbl - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v17 )
    {
      *(_QWORD *)&v5->Data1 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_9:
      *(_QWORD *)&v5->Data1 = this;
      (*(void (__fastcall **)(DirectComposition *, struct IUnknown *, struct _GUID *, void **))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        a4);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}

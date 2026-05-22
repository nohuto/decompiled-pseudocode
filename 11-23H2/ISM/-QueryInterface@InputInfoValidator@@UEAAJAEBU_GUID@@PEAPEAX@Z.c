/*
 * XREFs of ?QueryInterface@InputInfoValidator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B5160
 * Callers:
 *     <none>
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801B5678 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall InputInfoValidator::QueryInterface(InputInfoValidator *this, struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  int v6; // edx
  int v7; // ecx

  v3 = 0;
  if ( a3 )
  {
    if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      (*(void (__fastcall **)(InputInfoValidator *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else
    {
      v3 = -2147467262;
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        McTemplateU0sqq_EventWriteTransfer(v7, v6, (unsigned int)"InputInfoValidator::QueryInterface", 243, 2);
    }
  }
  else
  {
    v3 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer(
        (_DWORD)this,
        (_DWORD)a2,
        (unsigned int)"InputInfoValidator::QueryInterface",
        232,
        87);
  }
  return v3;
}

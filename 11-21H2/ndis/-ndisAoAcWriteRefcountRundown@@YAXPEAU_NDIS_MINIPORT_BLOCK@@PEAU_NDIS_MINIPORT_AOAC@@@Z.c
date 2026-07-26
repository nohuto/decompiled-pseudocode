/*
 * XREFs of ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00535A8
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C0053870 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1C0014084 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     McTemplateK0xq_EtwWriteTransfer @ 0x1C0055E10 (McTemplateK0xq_EtwWriteTransfer.c)
 *     McTemplateK0xqq_EtwWriteTransfer @ 0x1C0055E88 (McTemplateK0xqq_EtwWriteTransfer.c)
 */

void __fastcall ndisAoAcWriteRefcountRundown(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_AOAC *a2)
{
  _GUID *p_InterfaceGuid; // rsi
  unsigned int v5; // edi
  _DWORD *v6; // r14
  __int64 v7; // rcx
  _NET_LUID_LH v8; // [rsp+28h] [rbp-10h]

  p_InterfaceGuid = &a1->InterfaceGuid;
  if ( (byte_1C00EE583 & 4) != 0 )
  {
    v8.Value = (ULONG64)a1->NetLuid;
    McTemplateK0jqx_EtwWriteTransfer();
  }
  v5 = 0;
  v6 = (_DWORD *)((char *)a2 + 468);
  do
  {
    v7 = (unsigned int)*v6;
    if ( (int)v7 > 0 && (byte_1C00EE583 & 4) != 0 )
      McTemplateK0xqq_EtwWriteTransfer(v7, (_DWORD)a2, (_DWORD)p_InterfaceGuid, a1->NetLuid.Value, v5, *v6);
    ++v5;
    ++v6;
  }
  while ( v5 < 0x11 );
  if ( (byte_1C00EE583 & 4) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))McTemplateK0xq_EtwWriteTransfer)(
      v7,
      &NicActiveRefRundownEnd,
      p_InterfaceGuid,
      (_NET_LUID_LH)a1->NetLuid.Value,
      *((_DWORD *)a2 + 95),
      (_NET_LUID_LH)v8.Value);
}

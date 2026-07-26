/*
 * XREFs of ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00589B8
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C0058C80 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1C0017C64 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     McTemplateK0xq_EtwWriteTransfer @ 0x1C005B264 (McTemplateK0xq_EtwWriteTransfer.c)
 *     McTemplateK0xqq_EtwWriteTransfer @ 0x1C005B2DC (McTemplateK0xqq_EtwWriteTransfer.c)
 */

void __fastcall ndisAoAcWriteRefcountRundown(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_AOAC *a2)
{
  _GUID *p_InterfaceGuid; // rbp
  unsigned int v5; // ebx
  _DWORD *v6; // rsi
  __int64 v7; // rcx

  p_InterfaceGuid = &a1->InterfaceGuid;
  if ( (byte_1C00F7643 & 4) != 0 )
    McTemplateK0jqx_EtwWriteTransfer(
      (__int64)a1,
      &NicActiveRefRundownBegin,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value);
  v5 = 0;
  v6 = (_DWORD *)((char *)a2 + 468);
  do
  {
    v7 = (unsigned int)*v6;
    if ( (int)v7 > 0 && (byte_1C00F7643 & 4) != 0 )
      McTemplateK0xqq_EtwWriteTransfer(v7, (_DWORD)a2, (_DWORD)p_InterfaceGuid, a1->NetLuid.Value, v5, *v6);
    ++v5;
    ++v6;
  }
  while ( v5 < 0x11 );
  if ( (byte_1C00F7643 & 4) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))McTemplateK0xq_EtwWriteTransfer)(
      v7,
      &NicActiveRefRundownEnd,
      p_InterfaceGuid,
      (_NET_LUID_LH)a1->NetLuid.Value,
      *((_DWORD *)a2 + 95));
}

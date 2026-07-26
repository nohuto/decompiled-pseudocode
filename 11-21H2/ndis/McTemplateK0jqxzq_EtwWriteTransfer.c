/*
 * XREFs of McTemplateK0jqxzq_EtwWriteTransfer @ 0x1C001FD98
 * Callers:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001FE70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0jqxzq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // rax

  if ( a7 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(a7 + 2 * v7) );
  }
  return McGenEventWrite_EtwWriteTransfer(&NDIS_PROVIDER_ID_Context);
}

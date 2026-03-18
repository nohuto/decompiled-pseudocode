/*
 * XREFs of McTemplateU0pffffss_EventWriteTransfer @ 0x180131B40
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800517A0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0pffffss_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rax
  __int64 v10; // rcx

  v9 = -1LL;
  if ( a8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(a8 + v10) );
  }
  if ( a9 )
  {
    do
      ++v9;
    while ( *(_BYTE *)(a9 + v9) );
  }
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_VISUAL_RENDERCONTENT);
}

/*
 * XREFs of ?GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z @ 0x1C023A208
 * Callers:
 *     ?SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C023A3E8 (-SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 * Callees:
 *     GreGetBitmapBits @ 0x1C00E67A4 (GreGetBitmapBits.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CursorApiRouter::GetCursorMaskAndXorBits(
        HSURF a1,
        const struct tagBITMAP *a2,
        unsigned __int8 **a3,
        unsigned int *a4)
{
  ULONG BitmapBits; // eax
  ULONG v9; // edi
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rbx
  bool result; // al
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  if ( *(_DWORD *)&a2->bmPlanes == 65537 )
  {
    v13 = 0;
    BitmapBits = GreGetBitmapBits(a1, 0, 0LL, &v13);
    v9 = BitmapBits;
    if ( BitmapBits )
    {
      v10 = (unsigned __int8 *)Win32AllocPoolZInit(BitmapBits, 1919964227LL);
      v11 = v10;
      if ( v10 )
      {
        if ( (unsigned int)GreGetBitmapBits(a1, v9, v10, &v13) == v9 )
        {
          if ( v9 >= a2->bmHeight * (((a2->bmWidth + 15) >> 3) & 0xFFFFFFFE) )
          {
            *a3 = v11;
            result = 1;
            *a4 = v9;
            return result;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        }
        Win32FreePool(v11);
      }
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  return 0;
}

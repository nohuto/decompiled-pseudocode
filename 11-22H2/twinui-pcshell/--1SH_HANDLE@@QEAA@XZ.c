/*
 * XREFs of ??1SH_HANDLE@@QEAA@XZ @ 0x180286130
 * Callers:
 *     ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x180265588 (-IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SH_HANDLE::~SH_HANDLE(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}

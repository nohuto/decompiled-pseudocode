/*
 * XREFs of ?GetMute@CMuteControlBase@@UEAAJPEAH@Z @ 0x180048690
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CMuteControlBase::GetMute(CMuteControlBase *this, int *a2)
{
  unsigned int v2; // ebx

  v2 = -2147467261;
  if ( a2 )
  {
    v2 = 0;
    *a2 = *((_DWORD *)this + 6);
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::GetMute", 245, -2147467261);
  }
  return v2;
}

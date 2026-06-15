/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x140005FD8
 * Callers:
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x1400031A0 (-Resume@CAudioPump@@UEAAJXZ.c)
 *     ?Pause@CAudioPump@@UEAAJXZ @ 0x1400058E0 (-Pause@CAudioPump@@UEAAJXZ.c)
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140005DA0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14004F464 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x924, v2, v3);
}

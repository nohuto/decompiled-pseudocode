/*
 * XREFs of TelGetRegionalSettingsValue @ 0x180002AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHeapPointer@@YAXPEAX@Z @ 0x1800012C8 (-CloseHeapPointer@@YAXPEAX@Z.c)
 *     TelpReadRegistryString @ 0x180001380 (TelpReadRegistryString.c)
 *     ?TelpGetTelemetryClientRegPath@@YAPEAGXZ @ 0x180001578 (-TelpGetTelemetryClientRegPath@@YAPEAGXZ.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180002C84 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180004360 (__security_check_cookie.c)
 *     memset_0 @ 0x180004E0A (memset_0.c)
 */

__int64 __fastcall TelGetRegionalSettingsValue(const WCHAR *a1, void *a2, unsigned int *a3)
{
  __int64 v6; // rcx
  unsigned __int16 *TelemetryClientRegPath; // rbx
  signed __int64 v8; // r8
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int16 *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int16 v14; // ax
  unsigned __int16 *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  int RegistryString; // eax
  unsigned int v19; // r8d
  int v21; // [rsp+20h] [rbp-258h]
  int v22; // [rsp+20h] [rbp-258h]
  unsigned __int16 v23[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( a1 && a3 )
  {
    memset_0(v23, 0, 0x208uLL);
    TelemetryClientRegPath = TelpGetTelemetryClientRegPath(v6);
    if ( TelemetryClientRegPath )
    {
      v8 = (char *)TelemetryClientRegPath - (char *)v23;
      v12 = v23;
      v13 = 260LL;
      do
      {
        if ( v13 == -2147483386LL )
          break;
        v14 = *(unsigned __int16 *)((char *)v12 + v8);
        if ( !v14 )
          break;
        *v12++ = v14;
        --v13;
      }
      while ( v13 );
      v15 = v12 - 1;
      if ( v13 )
        v15 = v12;
      *v15 = 0;
      v9 = v13 == 0 ? 0x8007007A : 0;
      if ( v13 )
      {
        v16 = StringCchCatW(v23, v13, L"\\RegionalSettings");
        v9 = v16;
        if ( v16 >= 0 )
        {
          RegistryString = TelpReadRegistryString(v17, v23, a1, a2, a3);
          v9 = RegistryString;
          if ( RegistryString < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x6FD,
              v19,
              (const char *)(unsigned int)RegistryString,
              v22);
          goto LABEL_19;
        }
        v11 = (unsigned int)v16;
        v10 = 1780LL;
      }
      else
      {
        v11 = v9;
        v10 = 1779LL;
      }
    }
    else
    {
      v9 = -2147467259;
      v10 = 1776LL;
      v11 = 2147500037LL;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v10, v8, (const char *)v11, v21);
    if ( !TelemetryClientRegPath )
      return v9;
LABEL_19:
    CloseHeapPointer(TelemetryClientRegPath);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6E7, (unsigned int)a3, (const char *)0x80070057LL, v21);
  return 2147942487LL;
}

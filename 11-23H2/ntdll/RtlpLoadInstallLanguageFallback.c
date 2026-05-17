/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x18008E5F8
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x180012D30 (RtlpGetSystemDefaultUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180115154 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1801154B0 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     LdrpQueryValueKey @ 0x18000BAC0 (LdrpQueryValueKey.c)
 *     _MuiRegAllocArray @ 0x180015CD8 (_MuiRegAllocArray.c)
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  _WORD *v5; // rsi
  _WORD *v6; // rax
  int v7; // ebx
  WCHAR v9; // ax
  const WCHAR *v10; // rdi
  WCHAR *v11; // rcx
  WCHAR i; // ax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  int v15; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  __int128 v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v21; // [rsp+C8h] [rbp+48h] BYREF

  Handle = 0LL;
  v5 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v6 = (_WORD *)MuiRegAllocArray(a1, 0xACu);
    v5 = v6;
    if ( v6 )
    {
      memset_thunk_772440563353939046(v6, 0, 0x158uLL);
      *a2 = 0;
      v20 = 0;
      *a3 = 0;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v15 = 48;
      p_DestinationString = &DestinationString;
      v16 = 0LL;
      v18 = 64;
      v19 = 0LL;
      v7 = NtOpenKey(&Handle, 131097LL, &v15);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"InstallLanguageFallback");
        v21 = 344;
        v7 = LdrpQueryValueKey((__int64)Handle, (__int64)&DestinationString, &v20, v5, &v21);
        if ( v7 >= 0 )
        {
          if ( v20 != 1 )
            goto LABEL_15;
          v9 = *v5;
          v10 = v5;
          while ( v9 )
          {
            v11 = (WCHAR *)(v10 + 1);
            if ( v9 == 44 )
            {
              *v10++ = 0;
              for ( i = *v11; i == 32; i = *v10 )
                ++v10;
              break;
            }
            v9 = *v11;
            ++v10;
          }
          RtlInitUnicodeString(&DestinationString, v5);
          if ( RtlCultureNameToLCID(&DestinationString.Length, &v20) )
          {
            *a2 = v20;
            if ( *v10 )
            {
              RtlInitUnicodeString(&DestinationString, v10);
              if ( RtlCultureNameToLCID(&DestinationString.Length, &v20) )
              {
                *a3 = v20;
              }
              else
              {
                v7 = -1073741823;
                *a2 = 0;
              }
            }
          }
          else
          {
LABEL_15:
            v7 = -1073741823;
          }
        }
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( Handle )
    NtClose(Handle);
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v5);
  return (unsigned int)v7;
}

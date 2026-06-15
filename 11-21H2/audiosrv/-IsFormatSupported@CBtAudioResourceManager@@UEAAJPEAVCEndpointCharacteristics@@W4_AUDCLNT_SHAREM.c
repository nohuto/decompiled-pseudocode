/*
 * XREFs of ?IsFormatSupported@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@PEBUtWAVEFORMATEX@@PEAPEAU4@@Z @ 0x180116970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBtAudioResourceManager::IsFormatSupported(
        CBtAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        enum _AUDCLNT_SHAREMODE a3,
        const struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX **a5)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int SharedModeEnginePeriodicity; // eax
  __int128 v11; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a3 != AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v7 = 1110LL;
LABEL_3:
    v8 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)0x8000FFFFLL);
    return v8;
  }
  v8 = 0;
  if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a2 + 56LL))(a2) )
  {
    v7 = 1113LL;
    goto LABEL_3;
  }
  *a5 = 0LL;
  v11 = xmmword_1801951A8;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  (__int64)a2,
                                  0,
                                  a4,
                                  &v11,
                                  0,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL);
  if ( SharedModeEnginePeriodicity < 0 )
    return (unsigned int)SharedModeEnginePeriodicity;
  return v8;
}

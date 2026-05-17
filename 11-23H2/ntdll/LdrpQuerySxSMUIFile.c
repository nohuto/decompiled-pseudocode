/*
 * XREFs of LdrpQuerySxSMUIFile @ 0x180076384
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180014A70 (RtlCompareUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x180015D90 (RtlLcidToLocaleName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlFindActivationContextSectionString @ 0x18001D420 (RtlFindActivationContextSectionString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026AE0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028AE0 (RtlActivateActivationContextUnsafeFast.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpQuerySxSMUIFile(_BYTE *a1, unsigned __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // r15d
  __int64 v9; // rdi
  int ActivationContextSectionString; // ebx
  int v12; // [rsp+50h] [rbp-1E8h] BYREF
  int v13; // [rsp+54h] [rbp-1E4h]
  unsigned __int16 v14; // [rsp+58h] [rbp-1E0h] BYREF
  unsigned __int16 v15; // [rsp+5Ah] [rbp-1DEh]
  __int64 v16; // [rsp+60h] [rbp-1D8h]
  __int64 v17; // [rsp+68h] [rbp-1D0h] BYREF
  unsigned __int16 v18[4]; // [rsp+70h] [rbp-1C8h] BYREF
  char *v19; // [rsp+78h] [rbp-1C0h]
  int v20; // [rsp+80h] [rbp-1B8h] BYREF
  _DWORD v21[13]; // [rsp+84h] [rbp-1B4h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-180h]
  char v23; // [rsp+C4h] [rbp-174h]
  __int64 v24; // [rsp+C8h] [rbp-170h]
  __int64 v25; // [rsp+D0h] [rbp-168h]
  __int64 v26; // [rsp+F0h] [rbp-148h] BYREF
  int v27; // [rsp+F8h] [rbp-140h]
  __int128 v28; // [rsp+100h] [rbp-138h]
  __int128 v29; // [rsp+110h] [rbp-128h]
  __int128 v30; // [rsp+120h] [rbp-118h]
  __int64 v31; // [rsp+130h] [rbp-108h]
  char v32; // [rsp+140h] [rbp-F8h] BYREF

  v7 = a2;
  v9 = 0LL;
  v17 = 0LL;
  v15 = 0;
  v12 = 0;
  v20 = 112;
  memset_thunk_772440563353939046(v21, 0, 0x6CuLL);
  v26 = 72LL;
  v27 = 1;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                     1u,
                                     a1,
                                     0LL,
                                     a3,
                                     (_OWORD *)a4,
                                     a5,
                                     &v12,
                                     0LL,
                                     0LL);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( LdrpCreateActCtxLanguageW )
    {
      if ( (v12 & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7, 0LL, 2, (int)a1, (__int64)&v20);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( v21[0] == 1 )
          {
            if ( (v23 & 1) == 0 )
            {
              v9 = v22;
              if ( (v23 & 2) != 0 )
                v9 = -4LL;
            }
            v22 = v9;
            v15 = *(_WORD *)(v24 + 92);
            v14 = v15;
            v16 = v25 + *(unsigned int *)(v24 + 96);
            v19 = &v32;
            v18[1] = 170;
            ActivationContextSectionString = RtlLcidToLocaleName(v7, (__int64)v18, 2, 0);
            if ( ActivationContextSectionString >= 0 )
            {
              if ( (unsigned int)RtlCompareUnicodeString(&v14, v18, 1) )
              {
                ActivationContextSectionString = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))LdrpCreateActCtxLanguageW)(
                                                   v9,
                                                   (unsigned __int16)v7,
                                                   &v17);
                if ( ActivationContextSectionString >= 0 )
                {
                  if ( v17 != -1 )
                  {
                    RtlActivateActivationContextUnsafeFast((__int64)&v26, v17);
                    if ( *(_QWORD *)(a4 + 8) )
                      RtlFreeUnicodeString((PUNICODE_STRING)a4);
                    ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                       0,
                                                       a1,
                                                       0LL,
                                                       a3,
                                                       (_OWORD *)a4,
                                                       a5,
                                                       &v12,
                                                       0LL,
                                                       0LL);
                    v13 = ActivationContextSectionString;
                    if ( ActivationContextSectionString >= 0 )
                    {
                      ActivationContextSectionString = RtlFindActivationContextSectionString(
                                                         7,
                                                         0LL,
                                                         2,
                                                         (int)a1,
                                                         (__int64)&v20);
                      v13 = ActivationContextSectionString;
                      if ( ActivationContextSectionString >= 0 )
                      {
                        if ( v21[0] == 1 )
                        {
                          v15 = *(_WORD *)(v24 + 92);
                          v14 = v15;
                          v16 = v25 + *(unsigned int *)(v24 + 96);
                          if ( (unsigned int)RtlCompareUnicodeString(&v14, v18, 1) )
                            ActivationContextSectionString = -1072365564;
                        }
                        else
                        {
                          ActivationContextSectionString = -1072365563;
                        }
                        v13 = ActivationContextSectionString;
                      }
                    }
                    RtlDeactivateActivationContextUnsafeFast((__int64)&v26);
                  }
                  if ( LdrpReleaseActCtxW )
                    LdrpReleaseActCtxW();
                }
              }
            }
          }
          else
          {
            return (unsigned int)-1072365563;
          }
        }
      }
    }
  }
  return (unsigned int)ActivationContextSectionString;
}

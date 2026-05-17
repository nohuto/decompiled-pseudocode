/*
 * XREFs of LdrpQuerySxSMUIFile @ 0x18007E478
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003F140 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003FEF0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlFindActivationContextSectionString @ 0x180045CB0 (RtlFindActivationContextSectionString.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x18004B900 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall LdrpQuerySxSMUIFile(__int128 *a1, unsigned __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // r15d
  __int64 v9; // rdi
  int ActivationContextSectionString; // ebx
  int v12; // eax
  int v13; // [rsp+50h] [rbp-1E8h] BYREF
  int v14; // [rsp+54h] [rbp-1E4h]
  unsigned __int16 v15; // [rsp+58h] [rbp-1E0h] BYREF
  unsigned __int16 v16; // [rsp+5Ah] [rbp-1DEh]
  __int64 v17; // [rsp+60h] [rbp-1D8h]
  __int64 v18; // [rsp+68h] [rbp-1D0h] BYREF
  unsigned __int16 v19[4]; // [rsp+70h] [rbp-1C8h] BYREF
  char *v20; // [rsp+78h] [rbp-1C0h]
  _QWORD v21[14]; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v22; // [rsp+F0h] [rbp-148h] BYREF
  int v23; // [rsp+F8h] [rbp-140h]
  __int128 v24; // [rsp+100h] [rbp-138h]
  __int128 v25; // [rsp+110h] [rbp-128h]
  __int128 v26; // [rsp+120h] [rbp-118h]
  __int64 v27; // [rsp+130h] [rbp-108h]
  char v28; // [rsp+140h] [rbp-F8h] BYREF

  v7 = a2;
  v9 = 0LL;
  v18 = 0LL;
  v16 = 0;
  v13 = 0;
  LODWORD(v21[0]) = 112;
  memset((char *)v21 + 4, 0, 0x6CuLL);
  v22 = 72LL;
  v23 = 1;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                     1,
                                     a1,
                                     0LL,
                                     a3,
                                     (_OWORD *)a4,
                                     a5,
                                     &v13,
                                     0LL,
                                     0LL);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( LdrpCreateActCtxLanguageW )
    {
      if ( (v13 & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7, 0LL, 2, (int)a1, (__int64)v21);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( HIDWORD(v21[0]) == 1 )
          {
            if ( (v21[8] & 0x100000000LL) == 0 )
            {
              v9 = v21[7];
              if ( (v21[8] & 0x200000000LL) != 0 )
                v9 = -4LL;
            }
            v21[7] = v9;
            v16 = *(_WORD *)(v21[9] + 92LL);
            v15 = v16;
            v17 = v21[10] + *(unsigned int *)(v21[9] + 96LL);
            v20 = &v28;
            v19[1] = 170;
            ActivationContextSectionString = RtlLcidToLocaleName(v7, (__int64)v19, 2, 0);
            if ( ActivationContextSectionString >= 0 )
            {
              if ( (unsigned int)RtlCompareUnicodeString(&v15, v19, 1) )
              {
                v12 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))LdrpCreateActCtxLanguageW)(
                        v9,
                        (unsigned __int16)v7,
                        &v18);
                ActivationContextSectionString = v12;
                if ( v12 >= 0 )
                {
                  if ( v18 != -1 )
                  {
                    RtlActivateActivationContextUnsafeFast((__int64)&v22, v18);
                    if ( *(_QWORD *)(a4 + 8) )
                      RtlFreeUnicodeString((PUNICODE_STRING)a4);
                    ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                       0,
                                                       a1,
                                                       0LL,
                                                       a3,
                                                       (_OWORD *)a4,
                                                       a5,
                                                       &v13,
                                                       0LL,
                                                       0LL);
                    v14 = ActivationContextSectionString;
                    if ( ActivationContextSectionString >= 0 )
                    {
                      ActivationContextSectionString = RtlFindActivationContextSectionString(
                                                         7,
                                                         0LL,
                                                         2,
                                                         (int)a1,
                                                         (__int64)v21);
                      v14 = ActivationContextSectionString;
                      if ( ActivationContextSectionString >= 0 )
                      {
                        if ( HIDWORD(v21[0]) == 1 )
                        {
                          v16 = *(_WORD *)(v21[9] + 92LL);
                          v15 = v16;
                          v17 = v21[10] + *(unsigned int *)(v21[9] + 96LL);
                          if ( (unsigned int)RtlCompareUnicodeString(&v15, v19, 1) )
                            ActivationContextSectionString = -1072365564;
                        }
                        else
                        {
                          ActivationContextSectionString = -1072365563;
                        }
                        v14 = ActivationContextSectionString;
                      }
                    }
                    RtlDeactivateActivationContextUnsafeFast((__int64)&v22);
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

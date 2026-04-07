/*
 * XREFs of ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003E928
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003E0B4 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18003EAB0 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x1800B91CC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@QEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800B93E0 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 */

__int64 __fastcall CDisplayModeChangeHelper::IsModeChangeBetweenDuplicateAndExtend(
        CDWMDisplaySet *this,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v5; // esi
  int v6; // ecx
  __int64 v9; // r14
  const struct CDWMDisplay *v10; // rdi
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  bool v12; // zf
  const struct CDWMDisplay *v13; // r12
  unsigned __int64 v14; // r9
  const struct CDWMDisplay **v16; // rdx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  void *v20; // rdx
  int *v21; // rax
  const struct CDWMDisplay **v22; // rdx
  const struct CDWMDisplay **v23; // rdx
  int v24; // r9d
  int *v25; // [rsp+30h] [rbp-A9h]
  int *v26; // [rsp+38h] [rbp-A1h]
  int *v27; // [rsp+40h] [rbp-99h]
  int *v28; // [rsp+48h] [rbp-91h]
  BOOL *v29; // [rsp+50h] [rbp-89h]
  const struct CDWMDisplay *v30; // [rsp+60h] [rbp-79h] BYREF
  int v31; // [rsp+68h] [rbp-71h] BYREF
  __int128 v32; // [rsp+70h] [rbp-69h]
  BOOL v33; // [rsp+80h] [rbp-59h] BYREF
  int v34; // [rsp+84h] [rbp-55h] BYREF
  int v35; // [rsp+88h] [rbp-51h] BYREF
  int v36; // [rsp+8Ch] [rbp-4Dh] BYREF
  int v37; // [rsp+90h] [rbp-49h] BYREF
  int v38; // [rsp+94h] [rbp-45h] BYREF
  BOOL v39; // [rsp+98h] [rbp-41h] BYREF
  int v40; // [rsp+9Ch] [rbp-3Dh] BYREF
  int v41; // [rsp+A0h] [rbp-39h] BYREF
  int v42; // [rsp+A4h] [rbp-35h] BYREF
  int v43; // [rsp+A8h] [rbp-31h] BYREF
  int v44; // [rsp+ACh] [rbp-2Dh] BYREF
  BOOL v45; // [rsp+B0h] [rbp-29h] BYREF
  int v46; // [rsp+B4h] [rbp-25h] BYREF
  int v47; // [rsp+B8h] [rbp-21h] BYREF
  int v48; // [rsp+BCh] [rbp-1Dh] BYREF
  int v49; // [rsp+C0h] [rbp-19h] BYREF
  _BYTE v50[32]; // [rsp+C8h] [rbp-11h] BYREF
  int *v51; // [rsp+E8h] [rbp+Fh]
  int v52; // [rsp+F0h] [rbp+17h]
  int v53; // [rsp+F4h] [rbp+1Bh]

  v3 = *a3;
  a3[1] = *a3;
  v5 = 0;
  v6 = *(_DWORD *)(a2 + 64);
  if ( v6 != *((_DWORD *)this + 16) )
    return 0LL;
  v9 = 0LL;
  if ( !v6 )
    goto LABEL_9;
  do
  {
    v30 = *(const struct CDWMDisplay **)(*(_QWORD *)(a2 + 40) + 8 * v9);
    v10 = v30;
    MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(this, v30);
    if ( !MatchedPhysicalDisplayNoRef )
      goto LABEL_7;
    v12 = *((_BYTE *)MatchedPhysicalDisplayNoRef + 252) == 0;
    v13 = (const struct CDWMDisplay *)((char *)v10 + 96);
    v32 = *(_OWORD *)((char *)v10 + 56);
    if ( v12 )
    {
      if ( !*((_BYTE *)v10 + 252) )
      {
LABEL_6:
        if ( (*((_QWORD *)MatchedPhysicalDisplayNoRef + 11) != (_QWORD)MatchedPhysicalDisplayNoRef) != (*((_QWORD *)v10 + 11) != (_QWORD)v10) )
        {
          v23 = (const struct CDWMDisplay **)a3[1];
          v5 = 14;
          if ( v23 == (const struct CDWMDisplay **)a3[2] )
          {
            std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(a3, v23, &v30);
            v10 = v30;
          }
          else
          {
            *v23 = v10;
            a3[1] += 8LL;
          }
          if ( (unsigned int)dword_1801418A0 > 5 && tlgKeywordOn((__int64)&dword_1801418A0, 1LL) )
          {
            v20 = &unk_18011F755;
            v45 = *((_QWORD *)v10 + 11) != (_QWORD)v10;
            v46 = *((unsigned __int8 *)v10 + 252);
            v47 = HIDWORD(v32);
            v48 = DWORD2(v32);
            v49 = DWORD1(v32);
            v31 = v32;
            v29 = &v45;
            v28 = &v46;
            v27 = &v47;
            v26 = &v48;
            v25 = &v49;
            v21 = &v31;
            goto LABEL_32;
          }
        }
        goto LABEL_7;
      }
      v22 = (const struct CDWMDisplay **)a3[1];
      v5 = 7;
      if ( v22 == (const struct CDWMDisplay **)a3[2] )
      {
        std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(a3, v22, &v30);
        v10 = v30;
      }
      else
      {
        *v22 = v10;
        a3[1] += 8LL;
      }
      if ( (unsigned int)dword_1801418A0 > 5 && tlgKeywordOn((__int64)&dword_1801418A0, 1LL) )
      {
        v20 = &unk_18011F7E3;
        v39 = *((_QWORD *)v10 + 11) != (_QWORD)v10;
        v40 = *((unsigned __int8 *)v10 + 252);
        v41 = HIDWORD(v32);
        v42 = DWORD2(v32);
        v43 = DWORD1(v32);
        v44 = v32;
        v29 = &v39;
        v28 = &v40;
        v27 = &v41;
        v26 = &v42;
        v25 = &v43;
        v21 = &v44;
        goto LABEL_32;
      }
    }
    else
    {
      if ( *((_BYTE *)v10 + 252) )
        goto LABEL_6;
      v16 = (const struct CDWMDisplay **)a3[1];
      v5 = 3;
      if ( v16 == (const struct CDWMDisplay **)a3[2] )
      {
        std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(a3, v16, &v30);
        v10 = v30;
      }
      else
      {
        *v16 = v10;
        a3[1] += 8LL;
      }
      if ( (unsigned int)dword_1801418A0 > 5 && tlgKeywordOn((__int64)&dword_1801418A0, 1LL) )
      {
        v20 = &unk_18011F873;
        v33 = *((_QWORD *)v10 + 11) != (_QWORD)v10;
        v34 = *((unsigned __int8 *)v10 + 252);
        v35 = HIDWORD(v32);
        v36 = DWORD2(v32);
        v37 = DWORD1(v32);
        v38 = v32;
        v29 = &v33;
        v28 = &v34;
        v27 = &v35;
        v26 = &v36;
        v25 = &v37;
        v21 = &v38;
LABEL_32:
        v30 = v13;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v17,
          (_DWORD)v20,
          v18,
          v19,
          (__int64)&v30,
          (__int64)v21,
          (__int64)v25,
          (__int64)v26,
          (__int64)v27,
          (__int64)v28,
          (__int64)v29);
      }
    }
LABEL_7:
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < *(_DWORD *)(a2 + 64) );
  v3 = *a3;
LABEL_9:
  v14 = (a3[1] - v3) >> 3;
  if ( v14 == 1 )
    return v5;
  if ( v14 <= 1 )
    return 0LL;
  if ( (unsigned int)dword_1801418A0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1801418A0, 1LL) )
    {
      v53 = 0;
      v51 = &v31;
      v31 = v24;
      v52 = 4;
      tlgWriteTransfer_EtwEventWriteTransfer(
        (unsigned int)&dword_1801418A0,
        (unsigned int)&unk_18011F6EE,
        0,
        0,
        3,
        (__int64)v50);
    }
  }
  return 14LL;
}

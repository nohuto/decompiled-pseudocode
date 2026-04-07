/*
 * XREFs of ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180054B00
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180054830 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180008020 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18005AF50 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x1800BCA0C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@QEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800BCC20 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 */

__int64 __fastcall CDisplayModeChangeHelper::IsModeChangeBetweenDuplicateAndExtend(
        CDWMDisplaySet *this,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // esi
  int v5; // eax
  __int64 v8; // r14
  const struct CDWMDisplay *v9; // rdi
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  bool v14; // zf
  const struct CDWMDisplay *v15; // r12
  unsigned __int64 v16; // rdx
  const struct CDWMDisplay **v18; // rdx
  void *v19; // rdx
  int *v20; // rax
  const struct CDWMDisplay **v21; // rdx
  const struct CDWMDisplay **v22; // rdx
  int *v23; // [rsp+30h] [rbp-A9h]
  int *v24; // [rsp+38h] [rbp-A1h]
  int *v25; // [rsp+40h] [rbp-99h]
  int *v26; // [rsp+48h] [rbp-91h]
  BOOL *v27; // [rsp+50h] [rbp-89h]
  const struct CDWMDisplay *v28; // [rsp+60h] [rbp-79h] BYREF
  int v29; // [rsp+68h] [rbp-71h] BYREF
  __int128 v30; // [rsp+70h] [rbp-69h]
  BOOL v31; // [rsp+80h] [rbp-59h] BYREF
  int v32; // [rsp+84h] [rbp-55h] BYREF
  int v33; // [rsp+88h] [rbp-51h] BYREF
  int v34; // [rsp+8Ch] [rbp-4Dh] BYREF
  int v35; // [rsp+90h] [rbp-49h] BYREF
  int v36; // [rsp+94h] [rbp-45h] BYREF
  BOOL v37; // [rsp+98h] [rbp-41h] BYREF
  int v38; // [rsp+9Ch] [rbp-3Dh] BYREF
  int v39; // [rsp+A0h] [rbp-39h] BYREF
  int v40; // [rsp+A4h] [rbp-35h] BYREF
  int v41; // [rsp+A8h] [rbp-31h] BYREF
  int v42; // [rsp+ACh] [rbp-2Dh] BYREF
  BOOL v43; // [rsp+B0h] [rbp-29h] BYREF
  int v44; // [rsp+B4h] [rbp-25h] BYREF
  int v45; // [rsp+B8h] [rbp-21h] BYREF
  int v46; // [rsp+BCh] [rbp-1Dh] BYREF
  int v47; // [rsp+C0h] [rbp-19h] BYREF
  _BYTE v48[32]; // [rsp+C8h] [rbp-11h] BYREF
  int *v49; // [rsp+E8h] [rbp+Fh]
  int v50; // [rsp+F0h] [rbp+17h]
  int v51; // [rsp+F4h] [rbp+1Bh]

  v3 = 0;
  a3[1] = *a3;
  v5 = *(_DWORD *)(a2 + 64);
  if ( v5 != *((_DWORD *)this + 16) )
    return 0LL;
  v8 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v28 = *(const struct CDWMDisplay **)(*(_QWORD *)(a2 + 40) + 8 * v8);
      v9 = v28;
      MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(this, v28);
      if ( MatchedPhysicalDisplayNoRef )
        break;
LABEL_7:
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)(a2 + 64) )
        goto LABEL_8;
    }
    v14 = *((_BYTE *)MatchedPhysicalDisplayNoRef + 268) == 0;
    v15 = (const struct CDWMDisplay *)((char *)v9 + 96);
    v30 = *(_OWORD *)((char *)v9 + 56);
    if ( v14 )
    {
      if ( !*((_BYTE *)v9 + 268) )
      {
LABEL_6:
        LOBYTE(v11) = *((_QWORD *)MatchedPhysicalDisplayNoRef + 11) != (_QWORD)MatchedPhysicalDisplayNoRef;
        if ( (_BYTE)v11 == (*((_QWORD *)v9 + 11) != (_QWORD)v9) )
          goto LABEL_7;
        v22 = (const struct CDWMDisplay **)a3[1];
        v3 = 14;
        if ( v22 == (const struct CDWMDisplay **)a3[2] )
        {
          std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(a3, v22, &v28);
          v9 = v28;
        }
        else
        {
          *v22 = v9;
          a3[1] += 8LL;
        }
        if ( (unsigned int)dword_180147058 <= 5 || (byte_180147068 & 1) == 0 || (qword_180147070 & 1) != qword_180147070 )
          goto LABEL_7;
        v19 = &unk_180126255;
        v43 = *((_QWORD *)v9 + 11) != (_QWORD)v9;
        v44 = *((unsigned __int8 *)v9 + 268);
        v45 = HIDWORD(v30);
        v46 = DWORD2(v30);
        v47 = DWORD1(v30);
        v29 = v30;
        v27 = &v43;
        v26 = &v44;
        v25 = &v45;
        v24 = &v46;
        v23 = &v47;
        v20 = &v29;
        goto LABEL_34;
      }
      v21 = (const struct CDWMDisplay **)a3[1];
      v3 = 7;
      if ( v21 == (const struct CDWMDisplay **)a3[2] )
      {
        std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(a3, v21, &v28);
        v9 = v28;
      }
      else
      {
        *v21 = v9;
        a3[1] += 8LL;
      }
      if ( (unsigned int)dword_180147058 <= 5 || (byte_180147068 & 1) == 0 || (qword_180147070 & 1) != qword_180147070 )
        goto LABEL_7;
      v19 = &unk_1801262E3;
      v37 = *((_QWORD *)v9 + 11) != (_QWORD)v9;
      v38 = *((unsigned __int8 *)v9 + 268);
      v39 = HIDWORD(v30);
      v40 = DWORD2(v30);
      v41 = DWORD1(v30);
      v42 = v30;
      v27 = &v37;
      v26 = &v38;
      v25 = &v39;
      v24 = &v40;
      v23 = &v41;
      v20 = &v42;
    }
    else
    {
      if ( *((_BYTE *)v9 + 268) )
        goto LABEL_6;
      v18 = (const struct CDWMDisplay **)a3[1];
      v3 = 3;
      if ( v18 == (const struct CDWMDisplay **)a3[2] )
      {
        std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(a3, v18, &v28);
        v9 = v28;
      }
      else
      {
        *v18 = v9;
        a3[1] += 8LL;
      }
      if ( (unsigned int)dword_180147058 <= 5 || (byte_180147068 & 1) == 0 || (qword_180147070 & 1) != qword_180147070 )
        goto LABEL_7;
      v19 = &unk_180126373;
      v31 = *((_QWORD *)v9 + 11) != (_QWORD)v9;
      v32 = *((unsigned __int8 *)v9 + 268);
      v33 = HIDWORD(v30);
      v34 = DWORD2(v30);
      v35 = DWORD1(v30);
      v36 = v30;
      v27 = &v31;
      v26 = &v32;
      v25 = &v33;
      v24 = &v34;
      v23 = &v35;
      v20 = &v36;
    }
LABEL_34:
    v28 = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (_DWORD)v19,
      v12,
      v13,
      (__int64)&v28,
      (__int64)v20,
      (__int64)v23,
      (__int64)v24,
      (__int64)v25,
      (__int64)v26,
      (__int64)v27);
    goto LABEL_7;
  }
LABEL_8:
  v16 = (__int64)(a3[1] - *a3) >> 3;
  if ( v16 == 1 )
    return v3;
  if ( v16 <= 1 )
    return 0LL;
  if ( (unsigned int)dword_180147058 > 5 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
  {
    v51 = 0;
    v49 = &v29;
    v29 = v16;
    v50 = 4;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_180147058, byte_1801261EE, 0LL, 0LL, 3, (__int64)v48);
  }
  return 14LL;
}

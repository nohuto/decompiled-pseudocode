/*
 * XREFs of ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18017E6BC
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D310 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@433@Z @ 0x180001BD8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U1@U1@@-$_tlgWrit.c)
 *     _tlgKeywordOn @ 0x180040AFC (_tlgKeywordOn.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18005A9C4 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?EdgyLocationToString@ShellEdgyRecognizer@@AEAAPEBGXZ @ 0x180074DFC (-EdgyLocationToString@ShellEdgyRecognizer@@AEAAPEBGXZ.c)
 *     ?FailureReasonToString@ShellEdgyRecognizer@@AEAAPEBGXZ @ 0x180074E48 (-FailureReasonToString@ShellEdgyRecognizer@@AEAAPEBGXZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800B27E0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetPointerInfoTimePoint@QpcTimeConverter@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@PEBUtagPOINTER_INFO@@@Z @ 0x18017B808 (-GetPointerInfoTimePoint@QpcTimeConverter@@QEBA-AV-$time_point@Usteady_clock@chrono@std@@V-$dura.c)
 *     ?CheckForGesture@ShellEdgyRecognizer@@AEAA?AW4GestureRecognizerState@@XZ @ 0x18017E39C (-CheckForGesture@ShellEdgyRecognizer@@AEAA-AW4GestureRecognizerState@@XZ.c)
 *     ?DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18017E4E8 (-DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV-$optional@ULastUpData@ShellEdgyRecognizer@@@std@@.c)
 *     ?HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA?AW4EdgyLocation@1@UtagPOINT@@@Z @ 0x18017E604 (-HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA-AW4EdgyLocation@1@UtagPOINT@@@Z.c)
 */

char __fastcall ShellEdgyRecognizer::ProcessInput(ShellEdgyRecognizer *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v5; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  gsl::details *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r12d
  char v14; // r13
  __int64 v15; // r15
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // xmm1_8
  __int64 v19; // r9
  ShellEdgyRecognizer *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // [rsp+50h] [rbp-30h] BYREF
  const WCHAR *v26; // [rsp+58h] [rbp-28h] BYREF
  const WCHAR *v27; // [rsp+60h] [rbp-20h] BYREF
  __int128 v28; // [rsp+68h] [rbp-18h] BYREF
  __int64 v29; // [rsp+78h] [rbp-8h]
  __int64 v30; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+58h] BYREF

  v4 = 1;
  v5 = *(_DWORD *)this - 1;
  if ( (v5 & 0xFFFFFFFD) == 0 )
    return v5;
  v8 = a2 + 320;
  gsl::details::extent_type<-1>::extent_type<-1>(&v28, *(unsigned int *)(a2 + 316), a3, a4);
  LOBYTE(v5) = v28;
  if ( (_QWORD)v28 == -1LL || !v8 && (_QWORD)v28 )
  {
    gsl::details::terminate(v10, v9, v11, v12);
    JUMPOUT(0x18017E934LL);
  }
  v13 = 0;
  v14 = 0;
  v15 = v8 + 144 * v28;
  if ( v8 == v15 )
    goto LABEL_30;
  v16 = v8 + 12;
  do
  {
    if ( (*(_BYTE *)v16 & 4) != 0 )
    {
      ++v13;
      if ( (*(_DWORD *)v16 & 0x2000) != 0 )
      {
        if ( !*(_DWORD *)this )
        {
          *((_DWORD *)this + 5) = *(_DWORD *)(v16 + 44);
          *((_DWORD *)this + 6) = *(_DWORD *)(v16 + 48);
          *((_QWORD *)this + 4) = *QpcTimeConverter::GetPointerInfoTimePoint(
                                     (ShellEdgyRecognizer *)((char *)this + 64),
                                     &v30,
                                     v16 - 12);
        }
        *((_DWORD *)this + 10) = *(_DWORD *)(v16 + 44);
        *((_DWORD *)this + 11) = *(_DWORD *)(v16 + 48);
        v14 = 1;
        *((_QWORD *)this + 6) = *QpcTimeConverter::GetPointerInfoTimePoint(
                                   (ShellEdgyRecognizer *)((char *)this + 64),
                                   &v31,
                                   v16 - 12);
        *((_QWORD *)this + 7) = *(_QWORD *)(v16 + 4);
      }
    }
    if ( (*(_DWORD *)v16 & 0x40000) != 0 )
    {
      QpcTimeConverter::GetPointerInfoTimePoint((ShellEdgyRecognizer *)((char *)this + 64), &v28, v16 - 12);
      v17 = *(_BYTE *)(a3 + 24) == 0;
      *((_QWORD *)&v28 + 1) = *(_QWORD *)(v16 + 4);
      v29 = *(_QWORD *)(v16 + 44);
      v18 = v29;
      *(_OWORD *)a3 = v28;
      *(_QWORD *)(a3 + 16) = v18;
      if ( v17 )
        *(_BYTE *)(a3 + 24) = 1;
    }
    v16 += 144LL;
    LOBYTE(v5) = v16 - 12;
  }
  while ( v16 - 12 != v15 );
  if ( !v14 )
    goto LABEL_30;
  if ( v13 != 1 )
    goto LABEL_30;
  LOBYTE(v5) = ShellEdgyRecognizer::DetectInOutIn((__int64)this, a3);
  if ( (_BYTE)v5 )
    goto LABEL_30;
  if ( *(_DWORD *)this )
  {
    if ( *(_DWORD *)this != 2 )
      return v5;
    goto LABEL_23;
  }
  v5 = ShellEdgyRecognizer::HitTestEdgyRegion((__int64)this, *(POINT *)((char *)this + 20));
  if ( !v5 )
  {
LABEL_30:
    *(_DWORD *)this = 1;
    return v5;
  }
  *((_DWORD *)this + 1) = v5;
  *(_DWORD *)this = 2;
LABEL_23:
  v5 = ShellEdgyRecognizer::CheckForGesture((__int64)this);
  *(_DWORD *)this = v5;
  if ( v5 != 3 )
  {
    if ( v5 != 1 )
      return v5;
    v4 = 0;
  }
  if ( (unsigned int)dword_180275498 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)&dword_180275498, 0x200000000000LL);
    if ( (_BYTE)v5 )
    {
      v31 = (int)v19;
      v25 = SHIDWORD(v19);
      v26 = ShellEdgyRecognizer::FailureReasonToString(this);
      LODWORD(v30) = v4;
      v27 = ShellEdgyRecognizer::EdgyLocationToString(v20);
      *(_QWORD *)&v28 = 0x2000000LL;
      LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                     v21,
                     (int)&unk_180236C1B,
                     v22,
                     v23,
                     (__int64)&v28,
                     &v27,
                     (__int64)&v30,
                     &v26,
                     (__int64)&v25,
                     (__int64)&v31);
    }
  }
  return v5;
}

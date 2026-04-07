/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18009DA14
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18009DEA0 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800A9F80 (-NotifyFailure@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800D0BA0 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800E6310 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??$_Emplace_reallocate@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAPEAVStoredFailureInfo@wil@@QEAV23@AEBUFailureInfo@3@@Z @ 0x1800EF5A4 (--$_Emplace_reallocate@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 *     ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1800F32E8 (-log_failure@-$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800158CC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x18009A7C8 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18009A83C (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x18009D790 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x18009D7BC (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x18009E350 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdi
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rdi
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rdi
  const char *v9; // rdx
  __int64 v10; // rdi
  const char *v11; // rdx
  __int64 v12; // rdi
  const char *v13; // rdx
  __int64 v14; // rdi
  const char *v15; // rdx
  __int64 v16; // rdi
  const char *v17; // rdx
  __int64 v18; // rdi
  const char *v19; // rdx
  __int64 v20; // rdi
  const char *v21; // rdx
  unsigned __int64 v22; // rdi
  _DWORD *v23; // rcx
  __int64 *v24; // rbx
  __int64 v25; // rdx
  unsigned __int16 *v26; // rcx
  const char *v27; // rbx
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  unsigned __int16 *v34; // rax
  char *v35; // rax
  unsigned __int16 *v36; // rax
  char *v37; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
  v4 = wil::details::ResultStringSize(*((wil::details **)a2 + 15), (const unsigned __int16 *)a2);
  v6 = wil::details::ResultStringSize(*((wil::details **)a2 + 12), v5) + v4;
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 3), v7) + v6;
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 14), v9) + v8;
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 11), v11) + v10;
  v14 = wil::details::ResultStringSize(*((wil::details **)a2 + 9), v13) + v12;
  v16 = wil::details::ResultStringSize(*((wil::details **)a2 + 7), v15) + v14;
  v18 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), v17) + v16;
  v20 = wil::details::ResultStringSize(*((wil::details **)a2 + 5), v19) + v18;
  v22 = wil::details::ResultStringSize(*((wil::details **)a2 + 16), v21) + v20;
  v23 = (_DWORD *)*((_QWORD *)this + 19);
  if ( v23 && *v23 == 1 )
  {
    v24 = (__int64 *)((char *)this + 160);
    if ( *((_QWORD *)this + 20) >= v22 )
      goto LABEL_7;
  }
  else
  {
    v24 = (__int64 *)((char *)this + 160);
  }
  wil::details::shared_buffer::reset((volatile signed __int32 **)this + 19);
  wil::details::shared_buffer::create((wil::StoredFailureInfo *)((char *)this + 152), 0LL, v22);
  v23 = (_DWORD *)*((_QWORD *)this + 19);
LABEL_7:
  v25 = *v24;
  v26 = (unsigned __int16 *)((unsigned __int64)(v23 + 1) & -(__int64)(v23 != 0LL));
  if ( v26 )
  {
    v27 = (char *)v26 + v25;
    v28 = wil::details::WriteResultString<unsigned short const *>(
            v26,
            (unsigned __int16 *)((char *)v26 + v25),
            *((wil::details **)a2 + 3),
            (unsigned __int16 **)this + 3);
    v29 = wil::details::WriteResultString<char const *>(v28, v27, *((wil::details **)a2 + 5), (char **)this + 5);
    v30 = wil::details::WriteResultString<char const *>(v29, v27, *((wil::details **)a2 + 6), (char **)this + 6);
    v31 = wil::details::WriteResultString<char const *>(v30, v27, *((wil::details **)a2 + 7), (char **)this + 7);
    v32 = wil::details::WriteResultString<char const *>(v31, v27, *((wil::details **)a2 + 9), (char **)this + 9);
    v33 = wil::details::WriteResultString<char const *>(v32, v27, *((wil::details **)a2 + 16), (char **)this + 16);
    v34 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(
                                v33,
                                v27,
                                *((wil::details **)a2 + 14),
                                (char **)this + 14);
    v35 = wil::details::WriteResultString<unsigned short const *>(
            v34,
            (const unsigned __int16 *)v27,
            *((wil::details **)a2 + 15),
            (unsigned __int16 **)this + 15);
    v36 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(
                                v35,
                                v27,
                                *((wil::details **)a2 + 11),
                                (char **)this + 11);
    v37 = wil::details::WriteResultString<unsigned short const *>(
            v36,
            (const unsigned __int16 *)v27,
            *((wil::details **)a2 + 12),
            (unsigned __int16 **)this + 12);
    memset_0(v37, 0, v27 - v37);
  }
}

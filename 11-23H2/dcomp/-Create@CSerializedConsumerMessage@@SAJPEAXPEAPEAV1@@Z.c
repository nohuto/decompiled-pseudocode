/*
 * XREFs of ?Create@CSerializedConsumerMessage@@SAJPEAXPEAPEAV1@@Z @ 0x1801B092C
 * Callers:
 *     ?GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z @ 0x1801AD880 (-GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800862B4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall CSerializedConsumerMessage::Create(void *a1, struct CSerializedConsumerMessage **a2)
{
  char *v4; // rax
  char *v5; // rbx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  size_t v12; // rax
  size_t v13; // rdi
  int NextMessageToProducer; // eax
  unsigned int v15; // edx
  unsigned int v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0;
  v4 = (char *)operator new(0x18uLL);
  v5 = v4;
  if ( !v4 )
  {
    v8 = -2147024882;
    DoStackCaptureDirect(-2147024882, 0x11u);
    return v8;
  }
  *(_QWORD *)v4 = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  *((_QWORD *)v4 + 2) = 0LL;
  v6 = NtFlipObjectQueryNextMessageToProducer(a1, &v17);
  v7 = HRESULTFromNTSTATUS(v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v15 = 22;
    goto LABEL_14;
  }
  v9 = *((_QWORD *)v5 + 1);
  v10 = *(_QWORD *)v5;
  v11 = v9 - *(_QWORD *)v5;
  if ( v17 < v11 )
  {
    v12 = v10 + v17;
LABEL_9:
    *((_QWORD *)v5 + 1) = v12;
    goto LABEL_10;
  }
  if ( v17 > v11 )
  {
    if ( v17 <= (unsigned __int64)(*((_QWORD *)v5 + 2) - v10) )
    {
      v13 = v17 - v11;
      memset_0(*((void **)v5 + 1), 0, v13);
      v12 = v13 + v9;
      goto LABEL_9;
    }
    std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v5, v17);
  }
LABEL_10:
  NextMessageToProducer = NtFlipObjectReadNextMessageToProducer(a1, v17, *(_QWORD *)v5);
  v7 = HRESULTFromNTSTATUS(NextMessageToProducer);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *a2 = (struct CSerializedConsumerMessage *)v5;
    return v8;
  }
  v15 = 31;
LABEL_14:
  DoStackCaptureDirect(v7, v15);
  if ( *(_QWORD *)v5 )
  {
    std::_Deallocate<16,0>(*(void **)v5, *((_QWORD *)v5 + 2) - *(_QWORD *)v5);
    *(_QWORD *)v5 = 0LL;
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
  }
  operator delete(v5);
  return v8;
}

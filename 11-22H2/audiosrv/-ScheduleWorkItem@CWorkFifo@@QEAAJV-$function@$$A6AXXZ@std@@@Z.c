/*
 * XREFs of ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1801365B0
 * Callers:
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x180048A50 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180134C74 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1801354D0 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x1801356D0 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180136424 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180022838 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800CF0BC (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$_Emplace_back_internal@AEBV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@1@@Z @ 0x180133204 (--$_Emplace_back_internal@AEBV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@@-$deque@V-$shared_ptr@VWo.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x180134EFC (-Initialize@CWorkFifo@@AEAAJXZ.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180134F84 (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWorkFifo::ScheduleWorkItem(CWorkFifo *this, __int64 a2)
{
  __int64 v2; // r14
  int v4; // eax
  int v5; // eax
  void *v6; // rdx
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  std::_Ref_count_base *v10; // rax
  std::_Ref_count_base *v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v17; // rdx
  int v18[2]; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v19; // [rsp+28h] [rbp-60h]
  _BYTE v20[88]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct _Mtx_internal_imp_t *v22; // [rsp+90h] [rbp+8h]

  v2 = a2;
  v22 = (CWorkFifo *)((char *)this + 144);
  v4 = _Mtx_lock((CWorkFifo *)((char *)this + 144));
  if ( v4 )
    std::_Throw_C_error(v4);
  if ( *((_BYTE *)this + 136) )
    goto LABEL_24;
  v5 = CWorkFifo::Initialize((wil::details **)this);
  v7 = v5;
  if ( v5 >= 0 )
  {
    wil::details::ResetEvent(*((wil::details **)this + 28), v6);
    v8 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      *v8 = 0LL;
      v8[1] = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    v10 = (std::_Ref_count_base *)operator new(0x18uLL);
    v11 = v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 2) = 1;
      *((_DWORD *)v10 + 3) = 1;
      *(_QWORD *)v10 = &std::_Ref_count<CWorkFifo::WorkItem>::`vftable';
      *((_QWORD *)v10 + 2) = v9;
    }
    else
    {
      v11 = 0LL;
    }
    *(_QWORD *)v18 = v9;
    v19 = v11;
    if ( !v9 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)0x8007000ELL);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
LABEL_28:
      v7 = -2147024882;
      goto LABEL_29;
    }
    v12 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v20, v2);
    v13 = CWorkFifo::WorkItem::Initialize(v9, v12);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)(unsigned int)v13);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      v7 = v14;
      goto LABEL_29;
    }
    try
    {
      std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Emplace_back_internal<std::shared_ptr<CWorkFifo::WorkItem> const &>(
        (_QWORD *)this + 12,
        v18);
      if ( *((_QWORD *)this + 16) == 1LL && !*((_BYTE *)this + 137) )
        SubmitThreadpoolWork(*((PTP_WORK *)this + 2));
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)0x8007000ELL);
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      v2 = a2;
      goto LABEL_28;
    }
LABEL_24:
    _Mtx_unlock(v22);
    std::_Func_class<void,>::_Tidy(v2, v15);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
    (const char *)(unsigned int)v5);
LABEL_29:
  _Mtx_unlock(v22);
  std::_Func_class<void,>::_Tidy(v2, v17);
  return v7;
}

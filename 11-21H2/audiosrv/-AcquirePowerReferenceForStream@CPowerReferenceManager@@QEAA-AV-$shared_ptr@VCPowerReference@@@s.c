/*
 * XREFs of ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800222B0
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x1800238C0 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV?$shared_ptr@VCSleepStudyPowerReference@@@std@@@Z @ 0x1800225A0 (-CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV-$sha.c)
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180022820 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180023330 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180023580 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800483C0 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C6C2C (--4-$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@QEAV21@AEBV21@@Z @ 0x1801034E8 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@-$vector@V-$shared_pt.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_CXvmPowerReferenceManager_________lambda_99dc9de587906d6f38e02b4d1e0ae12d___ @ 0x1801038B8 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_CXvmPower.c)
 *     ??$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA?AV?$shared_ptr@VCXvmPowerReferenceManager@@@0@$$QEBU_GUID@@0@Z @ 0x1801039B8 (--$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA-AV-$shared_ptr@VCXvmPower.c)
 *     ?AcquirePowerReference@CXvmPowerReferenceManager@@QEAA?AV?$shared_ptr@VCXvmPowerReference@@@std@@XZ @ 0x180104100 (-AcquirePowerReference@CXvmPowerReferenceManager@@QEAA-AV-$shared_ptr@VCXvmPowerReference@@@std@.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x1801042E0 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K_N0@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CPowerReferenceManager::AcquirePowerReferenceForStream(__int64 a1, _QWORD *a2, __int64 a3)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  std::_Ref_count_base *v9; // rcx
  _QWORD *v10; // r8
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  __int64 *v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  _QWORD *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  std::_Ref_count_base *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  int PowerReferenceSubBlocker; // eax
  __int64 *v30; // rcx
  _QWORD *v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  std::_Ref_count_base *v34; // rcx
  _DWORD *v35; // rax
  __int64 v36; // r8
  _DWORD *v37; // rcx
  _QWORD *v38; // rdx
  std::_Ref_count_base *v39; // rax
  __int64 v40; // rdx
  struct _Mtx_internal_imp_t *v41; // rbx
  int v42; // eax
  __int64 v43; // rax
  CXvmPowerReferenceManager *v44; // r13
  volatile signed __int32 *v45; // r12
  CXvmPowerReferenceManager **v46; // rdx
  __int64 v47; // rax
  std::_Ref_count_base *v48; // rcx
  __int64 v49; // rax
  int v50; // [rsp+20h] [rbp-228h]
  __int64 v51; // [rsp+30h] [rbp-218h] BYREF
  __int128 v52; // [rsp+38h] [rbp-210h] BYREF
  int v53; // [rsp+48h] [rbp-200h]
  CXvmPowerReferenceManager **v54; // [rsp+50h] [rbp-1F8h] BYREF
  struct _Mtx_internal_imp_t *v55; // [rsp+58h] [rbp-1F0h]
  _QWORD *v56; // [rsp+60h] [rbp-1E8h]
  _BYTE v57[8]; // [rsp+68h] [rbp-1E0h] BYREF
  std::_Ref_count_base *v58; // [rsp+70h] [rbp-1D8h]
  __int64 v59; // [rsp+78h] [rbp-1D0h]
  std::_Ref_count_base *v60; // [rsp+90h] [rbp-1B8h]
  int v61; // [rsp+98h] [rbp-1B0h]
  _QWORD v62[3]; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 (__fastcall **v63)(); // [rsp+B8h] [rbp-190h] BYREF
  int v64; // [rsp+C0h] [rbp-188h]
  __int64 v65; // [rsp+C8h] [rbp-180h]
  __int64 v66; // [rsp+D0h] [rbp-178h]
  __int64 v67; // [rsp+D8h] [rbp-170h]
  __int64 (__fastcall ***v68)(); // [rsp+F0h] [rbp-158h]
  _BYTE v69[8]; // [rsp+F8h] [rbp-150h] BYREF
  std::_Ref_count_base *v70; // [rsp+100h] [rbp-148h]
  _BYTE v71[8]; // [rsp+108h] [rbp-140h] BYREF
  std::_Ref_count_base *v72; // [rsp+110h] [rbp-138h]
  __int128 v73; // [rsp+118h] [rbp-130h]
  __int128 v74; // [rsp+130h] [rbp-118h]
  __int128 v75; // [rsp+140h] [rbp-108h]
  __int128 v76; // [rsp+150h] [rbp-F8h]
  __int128 v77; // [rsp+160h] [rbp-E8h]
  _OWORD v78[5]; // [rsp+170h] [rbp-D8h] BYREF
  __int128 v79; // [rsp+1C0h] [rbp-88h]
  __int128 v80; // [rsp+1D0h] [rbp-78h]
  __int128 v81; // [rsp+1E0h] [rbp-68h] BYREF
  __int128 v82; // [rsp+1F0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  v59 = a1;
  v56 = a2;
  v51 = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v53 = 1;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x80uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *((_DWORD *)v7 + 3) = 1;
    *v7 = &std::_Ref_count_obj2<CPowerReference>::`vftable';
    memset_0(v7 + 3, 0, 0x68uLL);
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    v8[5] = 0LL;
    v8[6] = 0LL;
    v8[7] = 0LL;
    v8[8] = 0LL;
    v8[9] = 0LL;
    v8[10] = 0LL;
    v8[11] = 0LL;
    v8[12] = 0LL;
    v8[13] = 0LL;
    v8[14] = 0LL;
    v8[15] = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = v8 + 2;
  v9 = (std::_Ref_count_base *)a2[1];
  a2[1] = v8;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v73 = 0LL;
  v10 = (_QWORD *)v51;
  if ( (!g_ADGProcess || LODWORD(g_ADGProcess[2].OwningThread) != *(_DWORD *)(v51 + 64))
    && (*(_DWORD *)(v51 + 264) || (*(_BYTE *)(v51 + 268) & 1) == 0 || *(_DWORD *)(v51 + 276)) )
  {
    v11 = (__int64 *)CPdcActivationClient::AcquirePdcTimerActivation(a1, v69, v51);
    v10 = (_QWORD *)*a2;
    v12 = *v11;
    v13 = v11[1];
    *v11 = 0LL;
    v11[1] = 0LL;
    *v10 = v12;
    v14 = (std::_Ref_count_base *)v10[1];
    v10[1] = v13;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    if ( v70 )
      std::_Ref_count_base::_Decref(v70);
  }
  v15 = (__int64 *)CSebNotifier::AcquireSebReference(a1 + 112, v71, v10);
  v16 = (_QWORD *)*a2;
  v17 = *v15;
  v18 = v15[1];
  *v15 = 0LL;
  v15[1] = 0LL;
  v16[2] = v17;
  v19 = (std::_Ref_count_base *)v16[3];
  v16[3] = v18;
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  if ( v72 )
    std::_Ref_count_base::_Decref(v72);
  v20 = *(_QWORD *)(v51 + 192);
  if ( !v20 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v20 + 8) + 64LL))(v20 + 8) )
  {
    v21 = (__int64 *)CPlaybackNotifier::AcquireReference((_Mtx_t)(a1 + 216));
    v22 = (_QWORD *)*a2;
    v23 = *v21;
    v24 = v21[1];
    *v21 = 0LL;
    v21[1] = 0LL;
    v22[4] = v23;
    v25 = (std::_Ref_count_base *)v22[5];
    v22[5] = v24;
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    if ( v60 )
      std::_Ref_count_base::_Decref(v60);
LABEL_23:
    v26 = v51;
    goto LABEL_24;
  }
  v26 = v51;
  if ( *(_BYTE *)(v51 + 272) )
  {
    v74 = *(_OWORD *)(v51 + 280);
    v75 = *(_OWORD *)(v51 + 296);
    v76 = *(_OWORD *)(v51 + 312);
    v77 = *(_OWORD *)(v51 + 328);
    v78[0] = *(_OWORD *)(v51 + 344);
    v78[1] = *(_OWORD *)(v51 + 360);
    v78[2] = *(_OWORD *)(v51 + 376);
    v78[3] = *(_OWORD *)(v51 + 392);
    v78[4] = *(_OWORD *)(v51 + 408);
    v79 = *(_OWORD *)(v51 + 424);
    memset((char *)v78 + 8, 0, 56);
    v30 = (__int64 *)CCaptureNotifier::AcquireReference((_Mtx_t)(a1 + 312), *((_QWORD *)&v79 + 1) > 0LL);
    v31 = (_QWORD *)*a2;
    v32 = *v30;
    v33 = v30[1];
    *v30 = 0LL;
    v30[1] = 0LL;
    v31[6] = v32;
    v34 = (std::_Ref_count_base *)v31[7];
    v31[7] = v33;
    if ( v34 )
      std::_Ref_count_base::_Decref(v34);
    if ( v60 )
      std::_Ref_count_base::_Decref(v60);
    v35 = operator new(0x18uLL);
    v37 = v35;
    if ( v35 )
    {
      v35[2] = 1;
      v35[3] = 1;
      *(_QWORD *)v35 = &std::_Ref_count_obj2<wil::com_ptr_t<Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession,wil::err_returncode_policy>>::`vftable';
      *((_QWORD *)v35 + 2) = 0LL;
    }
    else
    {
      v37 = 0LL;
    }
    v38 = (_QWORD *)*a2;
    v38[8] = v37 + 4;
    v39 = (std::_Ref_count_base *)v38[9];
    v38[9] = v37;
    if ( v39 )
      std::_Ref_count_base::_Decref(v39);
    v40 = *a2 + 64LL;
    v61 = *(_DWORD *)(v51 + 64);
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v62, v40, v36);
    v63 = off_18016C060;
    v64 = v61;
    v65 = v62[0];
    v66 = v62[1];
    v67 = a1;
    v68 = &v63;
    CSerialWorkQueue::QueueWorkItem(a1 + 440, &v63);
    goto LABEL_23;
  }
LABEL_24:
  v80 = *(_OWORD *)(v26 + 296);
  v27 = v80 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)v80 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v27 = *((_QWORD *)&v80 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v27 )
  {
    v41 = (struct _Mtx_internal_imp_t *)(a1 + 656);
    v55 = (struct _Mtx_internal_imp_t *)(a1 + 656);
    v42 = _Mtx_lock((_Mtx_t)(a1 + 656));
    if ( v42 )
      std::_Throw_C_error(v42);
    std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_CXvmPowerReferenceManager_________lambda_99dc9de587906d6f38e02b4d1e0ae12d___(
      &v54,
      *(_QWORD *)(a1 + 736),
      *(_QWORD *)(a1 + 744),
      &v51);
    if ( v54 == *(CXvmPowerReferenceManager ***)(a1 + 744) )
    {
      v52 = 0LL;
      v81 = *(_OWORD *)(v51 + 312);
      v82 = *(_OWORD *)(v51 + 296);
      v43 = std::make_shared<CXvmPowerReferenceManager,_GUID const,_GUID const>(v57, &v82, &v81);
      v44 = *(CXvmPowerReferenceManager **)v43;
      v45 = *(volatile signed __int32 **)(v43 + 8);
      *(_QWORD *)v43 = 0LL;
      *(_QWORD *)(v43 + 8) = 0LL;
      *(_QWORD *)&v52 = v44;
      *((_QWORD *)&v52 + 1) = v45;
      if ( v58 )
        std::_Ref_count_base::_Decref(v58);
      if ( v44 )
      {
        v46 = *(CXvmPowerReferenceManager ***)(a1 + 744);
        if ( v46 == *(CXvmPowerReferenceManager ***)(a1 + 752) )
        {
          std::vector<std::shared_ptr<CXvmPowerReferenceManager>>::_Emplace_reallocate<std::shared_ptr<CXvmPowerReferenceManager> const &>(
            a1 + 736,
            v46,
            &v52);
          v45 = (volatile signed __int32 *)*((_QWORD *)&v52 + 1);
          v44 = (CXvmPowerReferenceManager *)v52;
        }
        else
        {
          *v46 = 0LL;
          v46[1] = 0LL;
          if ( v45 )
          {
            _InterlockedIncrement(v45 + 2);
            v41 = v55;
            v45 = (volatile signed __int32 *)*((_QWORD *)&v52 + 1);
            v44 = (CXvmPowerReferenceManager *)v52;
          }
          *v46 = v44;
          v46[1] = (CXvmPowerReferenceManager *)v45;
          *(_QWORD *)(a1 + 744) += 16LL;
        }
        v47 = CXvmPowerReferenceManager::AcquirePowerReference(v44);
        std::shared_ptr<CXvmPowerReference>::operator=(*a2 + 80LL, v47);
        if ( v58 )
          std::_Ref_count_base::_Decref(v58);
      }
      if ( !v45 )
        goto LABEL_61;
      v48 = (std::_Ref_count_base *)v45;
    }
    else
    {
      v49 = CXvmPowerReferenceManager::AcquirePowerReference(*v54);
      std::shared_ptr<CXvmPowerReference>::operator=(*a2 + 80LL, v49);
      v48 = v58;
      if ( !v58 )
      {
LABEL_61:
        _Mtx_unlock(v41);
        v26 = v51;
        goto LABEL_27;
      }
    }
    std::_Ref_count_base::_Decref(v48);
    goto LABEL_61;
  }
LABEL_27:
  PowerReferenceSubBlocker = CSleepStudyPowerReferenceManager::CreatePowerReferenceSubBlocker(a1 + 408, v26, *a2 + 96LL);
  if ( PowerReferenceSubBlocker < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      (const char *)(unsigned int)PowerReferenceSubBlocker,
      v50);
  return a2;
}

/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAUIAudioProcessingObject@@@Z @ 0x14001DAE8
 * Callers:
 *     ?UnregisterAPOFromProcessingHost@CAPOProcessingHost@@UEAAXPEAUIAudioProcessingObject@@@Z @ 0x14001DBB0 (-UnregisterAPOFromProcessingHost@CAPOProcessingHost@@UEAAXPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Find_last@PEAUIAudioProcessingObject@@@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAUIAudioProcessingObject@@_K@Z @ 0x14001CC50 (--$_Find_last@PEAUIAudioProcessingObject@@@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1400282EC (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::erase(
        _QWORD *a1,
        const unsigned __int8 *a2)
{
  __int64 appended; // rsi
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((unsigned __int64)a1, a2, 8uLL);
  v5 = (_QWORD *)std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::_Find_last<IAudioProcessingObject *>(
                   a1,
                   v11,
                   v4,
                   appended)[1];
  if ( !v5 )
    return 0LL;
  v6 = a1[3];
  v7 = 2 * (appended & a1[6]);
  if ( *(_QWORD **)(v6 + 16 * (appended & a1[6]) + 8) == v5 )
  {
    if ( *(_QWORD **)(v6 + 16 * (appended & a1[6])) == v5 )
    {
      v8 = a1[1];
      *(_QWORD *)(v6 + 16 * (appended & a1[6])) = v8;
    }
    else
    {
      v8 = v5[1];
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
  }
  else if ( *(_QWORD **)(v6 + 16 * (appended & a1[6])) == v5 )
  {
    *(_QWORD *)(v6 + 16 * (appended & a1[6])) = *v5;
  }
  v9 = *v5;
  --a1[2];
  *(_QWORD *)v5[1] = v9;
  *(_QWORD *)(v9 + 8) = v5[1];
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v5 + 3);
  std::_Deallocate<16,0>(v5, 32LL);
  return 1LL;
}

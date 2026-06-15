/*
 * XREFs of ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18001F6D4
 * Callers:
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18002145C (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ABD0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800200C4 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 *     ??1?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002010C (--1-$_Flist_insert_after_op2@V-$allocator@U-$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::forward_list<IAudioSessionInfo *>::_Assign_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<IAudioSessionInfo *>>,std::_Iterator_base0>,std::_Default_sentinel>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  _QWORD *v11; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *i; // [rsp+38h] [rbp-18h]
  _QWORD *v13; // [rsp+40h] [rbp-10h]

  v3 = a1;
  while ( 1 )
  {
    v4 = a1;
    a1 = (_QWORD *)*a1;
    if ( !a2 )
      break;
    if ( !a1 )
    {
      v11 = v3;
      i = 0LL;
      v9 = v3;
      v10 = 0LL;
      v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      v6 = v5;
      v5[1] = a2[1];
      v13 = v5;
      for ( i = v5; ; i = v5 )
      {
        a2 = (_QWORD *)*a2;
        v7 = v5;
        v10 = 0LL;
        if ( !a2 )
          break;
        v10 = 0LL;
        v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
        v5[1] = a2[1];
        *v7 = v5;
      }
      std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>(&v9);
      if ( v7 )
      {
        *v7 = *v4;
        *v4 = v6;
        i = 0LL;
      }
      std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>::~_Flist_insert_after_op2<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>(&v11);
      return;
    }
    a1[1] = a2[1];
    a2 = (_QWORD *)*a2;
  }
  *v4 = 0LL;
  if ( a1 )
  {
    do
    {
      v8 = (_QWORD *)*a1;
      std::_Deallocate<16,0>(a1, 0x10uLL);
      a1 = v8;
    }
    while ( v8 );
  }
}

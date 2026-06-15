/*
 * XREFs of ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x1800EB69C
 * Callers:
 *     ?PublishAudioEffects@CAudioStream@@AEAAXXZ @ 0x1800ECAE0 (-PublishAudioEffects@CAudioStream@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXXZ @ 0x18004A8FC (-_Tidy@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAXXZ.c)
 *     ??1?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ @ 0x1800EB344 (--1-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ.c)
 *     ?GetControllableEffects@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800EBB88 (-GetControllableEffects@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudi.c)
 *     ?GetDiscoveredEffects@CAudioStream@@AEAAJAEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@@Z @ 0x1800EBD94 (-GetDiscoveredEffects@CAudioStream@@AEAAJAEAV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@@.c)
 *     ?MergeEffectsLists@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@3@0@Z @ 0x1800EC968 (-MergeEffectsLists@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::GetAudioEffects(CAudioStream *this, struct AudioEffectInternal **a2, unsigned int *a3)
{
  int ControllableEffects; // eax
  unsigned int v7; // ebx
  int DiscoveredEffects; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  _DWORD *v13; // rbx
  unsigned __int64 v14; // rdi
  struct AudioEffectInternal *v15; // rdx
  __int64 v17; // r9
  _DWORD *v18; // r8
  __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h]
  __int128 v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  *a2 = 0LL;
  *a3 = 0;
  v24 = 0LL;
  v25 = 0LL;
  ControllableEffects = CAudioStream::GetControllableEffects(this, &v24);
  v7 = ControllableEffects;
  if ( ControllableEffects < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A0,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)ControllableEffects);
LABEL_13:
    std::vector<AudioEffectInternal>::~vector<AudioEffectInternal>((__int64)&v24);
    return v7;
  }
  v22 = 0LL;
  v23 = 0LL;
  DiscoveredEffects = CAudioStream::GetDiscoveredEffects(this, &v22);
  v7 = DiscoveredEffects;
  if ( DiscoveredEffects < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)DiscoveredEffects);
LABEL_12:
    std::vector<_GUID>::_Tidy((__int64)&v22);
    goto LABEL_13;
  }
  v20 = 0LL;
  v21 = 0LL;
  v10 = CAudioStream::MergeEffectsLists(v9, &v24, &v22, &v20);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 1959LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v11);
    std::vector<AudioEffectInternal>::~vector<AudioEffectInternal>((__int64)&v20);
    goto LABEL_12;
  }
  v13 = (_DWORD *)v20;
  if ( (_QWORD)v20 == *((_QWORD *)&v20 + 1) )
  {
    std::vector<AudioEffectInternal>::~vector<AudioEffectInternal>((__int64)&v20);
    std::vector<_GUID>::_Tidy((__int64)&v22);
    v7 = 0;
    goto LABEL_13;
  }
  v14 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)&v20 + 1) - v20) >> 3);
  v15 = (struct AudioEffectInternal *)CoTaskMemAlloc(8 * ((__int64)(*((_QWORD *)&v20 + 1) - v20) >> 3));
  if ( !v15 )
  {
    v7 = -2147024882;
    v11 = 2147942414LL;
    v12 = 1967LL;
    goto LABEL_11;
  }
  v17 = 0LL;
  v18 = v13;
  do
  {
    v19 = 3 * v17;
    *(_OWORD *)((char *)v15 + 8 * v19) = *(_OWORD *)v18;
    *((_DWORD *)v15 + 2 * v19 + 4) = v18[4];
    *((_DWORD *)v15 + 2 * v19 + 5) = v18[5];
    v17 = (unsigned int)(v17 + 1);
    v18 += 6;
  }
  while ( v18 != *((_DWORD **)&v20 + 1) );
  *a2 = v15;
  *a3 = v14;
  if ( v13 )
    std::_Deallocate<16,0>(v13, 8 * ((v21 - (__int64)v13) >> 3));
  std::vector<_GUID>::_Tidy((__int64)&v22);
  if ( (_QWORD)v24 )
    std::_Deallocate<16,0>((void *)v24, 8 * ((v25 - (__int64)v24) >> 3));
  return 0LL;
}

/*
 * XREFs of ?MergeEffectsLists@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@3@0@Z @ 0x1800EC9B8
 * Callers:
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x1800EB6EC (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAAPEAUAudioEffectInternal@@QEAU2@AEBU2@@Z @ 0x1800EA770 (--$_Emplace_reallocate@AEBUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAu.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CAudioStream::MergeEffectsLists(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  _QWORD *v8; // rdx
  _QWORD *i; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rsi
  _QWORD *v13; // rdx
  _QWORD *j; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int128 v18; // [rsp+28h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h]

  v6 = *a2;
  v7 = a2[1];
  while ( v6 != v7 )
  {
    v8 = *(_QWORD **)(a4 + 8);
    for ( i = *(_QWORD **)a4; i != v8; i += 3 )
    {
      v10 = *(_QWORD *)v6 - *i;
      if ( *(_QWORD *)v6 == *i )
        v10 = *(_QWORD *)(v6 + 8) - i[1];
      if ( !v10 )
        break;
    }
    if ( i == v8 )
    {
      if ( v8 == *(_QWORD **)(a4 + 16) )
      {
        std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal const &>((const void **)a4, v8, v6);
      }
      else
      {
        *(_OWORD *)v8 = *(_OWORD *)v6;
        v8[2] = *(_QWORD *)(v6 + 16);
        *(_QWORD *)(a4 + 8) += 24LL;
      }
    }
    else
    {
      *((_DWORD *)i + 5) |= *(_DWORD *)(v6 + 20);
      *((_DWORD *)i + 4) |= *(_DWORD *)(v6 + 16);
    }
    v6 += 24LL;
  }
  v11 = *(_QWORD **)a3;
  v12 = *(_QWORD **)(a3 + 8);
  while ( v11 != v12 )
  {
    v13 = *(_QWORD **)(a4 + 8);
    for ( j = *(_QWORD **)a4; j != v13; j += 3 )
    {
      v15 = *v11 - *j;
      if ( *v11 == *j )
        v15 = v11[1] - j[1];
      if ( !v15 )
        break;
    }
    if ( j == v13 )
    {
      v16 = *(_OWORD *)v11;
      v18 = *(_OWORD *)v11;
      v19 = 0x100000000LL;
      if ( v13 == *(_QWORD **)(a4 + 16) )
      {
        std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal const &>(
          (const void **)a4,
          v13,
          (__int64)&v18);
      }
      else
      {
        *(_OWORD *)v13 = v16;
        v13[2] = v19;
        *(_QWORD *)(a4 + 8) += 24LL;
      }
    }
    v11 += 2;
  }
  return 0LL;
}

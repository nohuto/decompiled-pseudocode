/*
 * XREFs of ??$emplace@AEA_KPEAUAudioStateMonitor@@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x180039470
 * Callers:
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x1800399B0 (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 * Callees:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180039EFC (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::emplace<unsigned __int64 &,AudioStateMonitor *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  _QWORD *v13; // rbp
  HANDLE ProcessHeap; // rax
  _QWORD *v15; // rbx
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  float v18; // xmm0_4
  __int64 v19; // rcx
  float v20; // xmm1_4
  __int64 v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // r8
  _QWORD *v29; // [rsp+20h] [rbp-38h]

  v8 = 0LL;
  v9 = 0xCBF29CE484222325uLL;
  do
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v8++) ^ (unsigned __int64)v9);
  while ( v8 < 8 );
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8);
  v12 = (_QWORD *)(a1 + 8);
  v13 = *(_QWORD **)(a1 + 8);
  if ( v11 == v13 )
    goto LABEL_11;
  while ( *a3 != v11[2] )
  {
    if ( v11 == *(_QWORD **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48))) )
    {
      v13 = v11;
      v11 = 0LL;
      goto LABEL_9;
    }
    v11 = (_QWORD *)v11[1];
  }
  v13 = (_QWORD *)*v11;
LABEL_9:
  if ( !v11 )
  {
LABEL_11:
    if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
    v15[2] = *a3;
    v15[3] = *a4;
    v16 = *(_QWORD *)(a1 + 16);
    v17 = v16 + 1;
    if ( v16 + 1 < 0 )
      v18 = (float)(int)(v17 & 1 | (v17 >> 1)) + (float)(int)(v17 & 1 | (v17 >> 1));
    else
      v18 = (float)(int)v17;
    v19 = *(_QWORD *)(a1 + 56);
    if ( v19 < 0 )
    {
      v21 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v19 >> 1);
      v20 = (float)(int)v21 + (float)(int)v21;
    }
    else
    {
      v20 = (float)(int)v19;
    }
    if ( (float)(v18 / v20) > *(float *)a1 )
    {
      std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Rehash_for_1(a1);
      v22 = *(_QWORD *)(a1 + 24);
      v23 = *(_QWORD **)(v22 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8);
      if ( v23 == (_QWORD *)*v12 )
      {
        v29 = (_QWORD *)*v12;
      }
      else
      {
        while ( v15[2] != v23[2] )
        {
          if ( v23 == *(_QWORD **)(v22 + 16 * (v9 & *(_QWORD *)(a1 + 48))) )
          {
            v29 = v23;
            goto LABEL_27;
          }
          v23 = (_QWORD *)v23[1];
        }
        v29 = (_QWORD *)*v23;
      }
LABEL_27:
      v16 = *(_QWORD *)(a1 + 16);
      v13 = v29;
    }
    v24 = (_QWORD *)v13[1];
    *(_QWORD *)(a1 + 16) = v16 + 1;
    *v15 = v13;
    v15[1] = v24;
    *v24 = v15;
    v13[1] = v15;
    v25 = *(_QWORD *)(a1 + 24);
    v26 = 2 * (v9 & *(_QWORD *)(a1 + 48));
    v27 = *(_QWORD **)(v25 + 16 * (v9 & *(_QWORD *)(a1 + 48)));
    if ( v27 == (_QWORD *)*v12 )
    {
      *(_QWORD *)(v25 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v15;
LABEL_33:
      *(_QWORD *)(v25 + 8 * v26 + 8) = v15;
      goto LABEL_34;
    }
    if ( v27 == v13 )
    {
      *(_QWORD *)(v25 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v15;
    }
    else if ( *(_QWORD **)(v25 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8) == v24 )
    {
      goto LABEL_33;
    }
LABEL_34:
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  *(_QWORD *)a2 = v11;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}

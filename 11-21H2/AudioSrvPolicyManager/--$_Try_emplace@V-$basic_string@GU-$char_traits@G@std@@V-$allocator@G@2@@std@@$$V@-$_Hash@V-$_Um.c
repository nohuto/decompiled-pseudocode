/*
 * XREFs of ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18000EDD4
 * Callers:
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18000FAB0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18000FDD0 (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800118C0 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 * Callees:
 *     ??$?8GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18000E9F8 (--$-8GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18000F594 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_trai.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180013158 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Try_emplace<std::wstring,>(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  __int64 v6; // r8
  char *v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // r11
  _QWORD *v13; // r12
  _QWORD *v14; // rbp
  _QWORD *v15; // rsi
  _QWORD *v16; // r11
  HANDLE ProcessHeap; // rax
  char *v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  float v21; // xmm0_4
  __int64 v22; // rcx
  float v23; // xmm1_4
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r11
  _QWORD *v27; // rbp
  _QWORD *v28; // r11
  char **v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  _QWORD *v32; // rdx
  _QWORD *v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+30h] [rbp-38h] BYREF
  char *v36; // [rsp+38h] [rbp-30h]

  v6 = *((_QWORD *)a3 + 2);
  v7 = a3;
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    v7 = *(char **)a3;
  v8 = 0xCBF29CE484222325uLL;
  v9 = 0LL;
  v10 = 2 * v6;
  if ( v10 )
  {
    do
      v8 = 0x100000001B3LL * ((unsigned __int8)v7[v9++] ^ (unsigned __int64)v8);
    while ( v9 < v10 );
  }
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_QWORD **)(v11 + 16 * (*(_QWORD *)(a1 + 48) & v8) + 8);
  v13 = (_QWORD *)(a1 + 8);
  v14 = *(_QWORD **)(a1 + 8);
  if ( v12 == v14 )
    goto LABEL_14;
  v15 = *(_QWORD **)(v11 + 16 * (*(_QWORD *)(a1 + 48) & v8));
  while ( !std::operator==<unsigned short>(a3, v12 + 2) )
  {
    if ( v16 == v15 )
    {
      v14 = v16;
      v16 = 0LL;
      goto LABEL_12;
    }
    v12 = (_QWORD *)v16[1];
  }
  v14 = (_QWORD *)*v16;
LABEL_12:
  if ( !v16 )
  {
LABEL_14:
    if ( *(_QWORD *)(a1 + 16) == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v35 = a1 + 8;
    ProcessHeap = GetProcessHeap();
    v18 = (char *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
    v36 = v18;
    *((_QWORD *)v18 + 4) = 0LL;
    *((_QWORD *)v18 + 5) = 0LL;
    *((_OWORD *)v18 + 1) = *(_OWORD *)a3;
    *((_OWORD *)v18 + 2) = *((_OWORD *)a3 + 1);
    *((_QWORD *)a3 + 2) = 0LL;
    *((_QWORD *)a3 + 3) = 7LL;
    *(_WORD *)a3 = 0;
    *((_DWORD *)v18 + 12) = 0;
    v19 = *(_QWORD *)(a1 + 16);
    v20 = v19 + 1;
    if ( v19 + 1 < 0 )
      v21 = (float)(int)(v20 & 1 | (v20 >> 1)) + (float)(int)(v20 & 1 | (v20 >> 1));
    else
      v21 = (float)(int)v20;
    v22 = *(_QWORD *)(a1 + 56);
    if ( v22 < 0 )
    {
      v24 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v22 >> 1);
      v23 = (float)(int)v24 + (float)(int)v24;
    }
    else
    {
      v23 = (float)(int)v22;
    }
    if ( (float)(v21 / v23) > *(float *)a1 )
    {
      std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Rehash_for_1(a1);
      v25 = *(_QWORD *)(a1 + 24);
      v26 = *(_QWORD *)(v25 + 16 * (*(_QWORD *)(a1 + 48) & v8) + 8);
      if ( v26 == *v13 )
      {
        v34 = (_QWORD *)*v13;
      }
      else
      {
        v27 = *(_QWORD **)(v25 + 16 * (*(_QWORD *)(a1 + 48) & v8));
        while ( !std::operator==<unsigned short>(v18 + 16, (_QWORD *)(v26 + 16)) )
        {
          if ( v28 == v27 )
          {
            v34 = v28;
            goto LABEL_31;
          }
          v26 = v28[1];
        }
        v34 = (_QWORD *)*v28;
      }
LABEL_31:
      v19 = *(_QWORD *)(a1 + 16);
      v14 = v34;
    }
    v36 = 0LL;
    v29 = (char **)v14[1];
    *(_QWORD *)(a1 + 16) = v19 + 1;
    *(_QWORD *)v18 = v14;
    *((_QWORD *)v18 + 1) = v29;
    *v29 = v18;
    v14[1] = v18;
    v30 = *(_QWORD *)(a1 + 24);
    v31 = 2 * (*(_QWORD *)(a1 + 48) & v8);
    v32 = *(_QWORD **)(v30 + 8 * v31);
    if ( v32 == (_QWORD *)*v13 )
    {
      *(_QWORD *)(v30 + 8 * v31) = v18;
LABEL_37:
      *(_QWORD *)(v30 + 8 * v31 + 8) = v18;
      goto LABEL_38;
    }
    if ( v32 == v14 )
    {
      *(_QWORD *)(v30 + 8 * v31) = v18;
    }
    else if ( *(char ***)(v30 + 8 * v31 + 8) == v29 )
    {
      goto LABEL_37;
    }
LABEL_38:
    *(_QWORD *)a2 = v18;
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>,void *>>>(&v35);
    return a2;
  }
  *(_QWORD *)a2 = v16;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}

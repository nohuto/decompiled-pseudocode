/*
 * XREFs of ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x180013170
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E20 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180009F20 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000AA00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000BBC0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000CCA0 (--2@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetValueAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEBAAEAPEAIH@Z @ 0x180015CFC (-GetValueAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CS.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180017648 (memset_0.c)
 *     ?Add@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBQEAI@Z @ 0x1800256FC (-Add@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSimpleMa.c)
 *     memmove_0 @ 0x180047698 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcess::GetActiveStreamCountStatsForEndpoint(
        CProcess *this,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned int **a4)
{
  __int64 v6; // r12
  char *v7; // r12
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // r14
  void *v15; // r15
  _QWORD *v16; // r9
  unsigned __int16 *v17; // rax
  __int64 v18; // rcx
  unsigned __int16 v19; // dx
  void *v20; // rdi
  void *v21; // rax
  __int64 v23; // r8
  bool v24; // bl
  void *v25; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v26[2]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+40h] [rbp-48h]

  v6 = 280LL;
  if ( !(_DWORD)a3 )
    v6 = 256LL;
  v7 = (char *)this + v6;
  v26[0] = 0LL;
  v27 = 0LL;
  v28 = 7LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  if ( v8 > 7 )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(v26, v8, a3, a2);
  }
  else
  {
    v27 = v8;
    v9 = 2 * v8;
    memmove_0(v26, a2, 2 * v8);
    *(_WORD *)((char *)v26 + v9) = 0;
  }
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = v28;
  v15 = (void *)v26[0];
  while ( v12 < *((int *)v7 + 4) )
  {
    v16 = (_QWORD *)(v13 + *(_QWORD *)v7);
    v17 = (unsigned __int16 *)v26;
    if ( v28 >= 8 )
      v17 = (unsigned __int16 *)v26[0];
    v18 = v16[2];
    if ( v16[3] >= 8uLL )
      v16 = (_QWORD *)*v16;
    if ( v18 == v27 )
    {
      if ( !v18 )
      {
LABEL_22:
        if ( v11 != -1 )
        {
          v20 = *(void **)ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::GetValueAt(
                            v7,
                            v11,
                            v10,
                            v16);
          v14 = v28;
          v15 = (void *)v26[0];
          goto LABEL_25;
        }
        break;
      }
      v16 = (_QWORD *)((char *)v16 - (__int64)v17);
      while ( 1 )
      {
        v19 = *(unsigned __int16 *)((char *)v17 + (_QWORD)v16);
        if ( v19 < *v17 || v19 > *v17 )
          break;
        if ( v18 == 1 )
          goto LABEL_22;
        --v18;
        ++v17;
      }
    }
    ++v11;
    ++v12;
    v13 += 32LL;
  }
  v20 = 0LL;
LABEL_25:
  if ( v14 >= 8 )
    std::_Deallocate<16,0>(v15, 2 * v14 + 2);
  if ( !v20 )
  {
    v21 = operator new(0x60uLL);
    v20 = v21;
    v25 = v21;
    if ( !v21 )
    {
      operator delete(0LL, 4uLL);
      return 2147942414LL;
    }
    memset_0(v21, 0, 0x60uLL);
    std::wstring::wstring(v26, a2, v23);
    v24 = (unsigned int)ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::Add(
                          v7,
                          v26,
                          &v25) == 0;
    std::wstring::~wstring(v26);
    if ( v24 )
    {
      operator delete(v20, 4uLL);
      return 2147942414LL;
    }
    operator delete(0LL, 4uLL);
  }
  *a4 = (unsigned int *)v20;
  return 0LL;
}

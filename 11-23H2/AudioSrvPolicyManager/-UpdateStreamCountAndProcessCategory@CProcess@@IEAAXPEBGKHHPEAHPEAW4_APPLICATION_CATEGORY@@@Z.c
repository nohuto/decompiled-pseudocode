/*
 * XREFs of ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000AD90
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CCE0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180009F20 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000AA00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000BBC0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000CCA0 (--2@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x1800135B0 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?GetValueAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEBAAEAPEAIH@Z @ 0x180015CFC (-GetValueAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CS.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180017648 (memset_0.c)
 *     ?Add@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBQEAI@Z @ 0x1800256FC (-Add@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSimpleMa.c)
 *     ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x180026810 (-EnsureBamExemption@CProcess@@IEAAXXZ.c)
 *     ?ScheduleDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x180029C50 (-ScheduleDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 *     WPP_SF_dSS @ 0x18002BB14 (WPP_SF_dSS.c)
 *     memmove_0 @ 0x180047698 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CProcess::UpdateStreamCountAndProcessCategory(
        CProcess *this,
        unsigned __int16 *Src,
        __int64 a3,
        int a4,
        int a5,
        int *a6,
        enum _APPLICATION_CATEGORY *a7)
{
  int v9; // ecx
  unsigned __int64 v10; // rdx
  __int64 v11; // r13
  char *v12; // r13
  __int64 v13; // rbx
  unsigned int v14; // ebx
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // r15
  __int64 v18; // r12
  _QWORD *v19; // r9
  unsigned __int16 *v20; // rax
  __int64 v21; // r8
  unsigned __int16 v22; // cx
  void *v23; // rdi
  void *v24; // rax
  __int64 v25; // r8
  bool v26; // bl
  int v27; // eax
  __int64 v28; // rax
  int v29; // [rsp+30h] [rbp-A8h]
  int v30; // [rsp+34h] [rbp-A4h]
  unsigned int v31; // [rsp+38h] [rbp-A0h]
  void *v33; // [rsp+40h] [rbp-98h] BYREF
  enum _APPLICATION_CATEGORY *v34; // [rsp+48h] [rbp-90h]
  int *v35; // [rsp+50h] [rbp-88h]
  _QWORD v36[2]; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-70h]
  unsigned __int64 v38; // [rsp+70h] [rbp-68h]
  _QWORD v39[4]; // [rsp+78h] [rbp-60h] BYREF

  v31 = a3;
  v35 = a6;
  v34 = a7;
  v30 = *((_DWORD *)this + 78);
  v9 = 1;
  v10 = -1LL;
  if ( !a4 )
    v9 = -1;
  v29 = v9;
  v11 = 280LL;
  if ( !a5 )
    v11 = 256LL;
  v12 = (char *)this + v11;
  v36[0] = 0LL;
  v37 = 0LL;
  v38 = 7LL;
  do
    ++v10;
  while ( Src[v10] );
  if ( v10 > 7 )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(v36, v10, a3, Src);
  }
  else
  {
    v37 = v10;
    v13 = 2 * v10;
    memmove_0(v36, Src, 2 * v10);
    *(_WORD *)((char *)v36 + v13) = 0;
  }
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = v38;
  v18 = v36[0];
  while ( v15 < *((int *)v12 + 4) )
  {
    v19 = (_QWORD *)(v16 + *(_QWORD *)v12);
    v20 = (unsigned __int16 *)v36;
    if ( v38 >= 8 )
      v20 = (unsigned __int16 *)v36[0];
    v21 = v19[2];
    if ( v19[3] >= 8uLL )
      v19 = (_QWORD *)*v19;
    if ( v21 == v37 )
    {
      if ( !v21 )
      {
LABEL_24:
        if ( v14 != -1 )
        {
          v23 = *(void **)ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::GetValueAt(
                            v12,
                            v14,
                            v21,
                            v19);
          v17 = v38;
          v18 = v36[0];
          goto LABEL_27;
        }
        break;
      }
      v19 = (_QWORD *)((char *)v19 - (__int64)v20);
      while ( 1 )
      {
        v22 = *(unsigned __int16 *)((char *)v20 + (_QWORD)v19);
        if ( v22 < *v20 || v22 > *v20 )
          break;
        if ( v21 == 1 )
          goto LABEL_24;
        --v21;
        ++v20;
      }
    }
    ++v14;
    ++v15;
    v16 += 32LL;
  }
  v23 = 0LL;
LABEL_27:
  if ( v17 >= 8 )
    std::_Deallocate<16,0>(v18, 2 * v17 + 2);
  v37 = 0LL;
  v38 = 7LL;
  LOWORD(v36[0]) = 0;
  if ( !v23 )
  {
    v24 = operator new(0x60uLL);
    v23 = v24;
    v33 = v24;
    if ( !v24 )
    {
      operator delete(0LL, 4uLL);
      goto LABEL_52;
    }
    memset_0(v24, 0, 0x60uLL);
    std::wstring::wstring(v39, Src, v25);
    v26 = (unsigned int)ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::Add(
                          v12,
                          v39,
                          &v33) == 0;
    std::wstring::~wstring(v39);
    if ( v26 )
    {
      operator delete(v23, 4uLL);
      goto LABEL_52;
    }
    operator delete(0LL, 4uLL);
  }
  *((_DWORD *)v23 + v31) += v29;
  if ( a5 )
  {
    *((_DWORD *)this + 77) += v29;
  }
  else
  {
    *((_DWORD *)this + 76) += v29;
    if ( CProcess::GetActiveRenderStreamCount(this, 3u) || CProcess::GetActiveRenderStreamCount(this, 8u) )
    {
      *((_DWORD *)this + 78) = 0;
    }
    else if ( CProcess::GetActiveRenderStreamCount(this, 2u) )
    {
      *((_DWORD *)this + 78) = 1;
    }
    else if ( CProcess::GetActiveRenderStreamCount(this, 0xBu)
           || CProcess::GetActiveRenderStreamCount(this, 0xAu)
           || CProcess::GetActiveRenderStreamCount(this, 1u) )
    {
      *((_DWORD *)this + 78) = 2;
    }
    else
    {
      *((_DWORD *)this + 78) = (CProcess::GetActiveRenderStreamCount(this, 7u) == 0) + 3;
    }
  }
  v27 = *((_DWORD *)this + 77) + *((_DWORD *)this + 76);
  if ( a4 )
  {
    if ( v27 == 1 )
      CProcess::EnsureBamExemption(this);
  }
  else if ( !v27 )
  {
    CProcess::ScheduleDeferredBamExemptionRelease(this);
  }
LABEL_52:
  if ( v34 )
    *(_DWORD *)v34 = v30;
  if ( v35 )
    *v35 = v30 != *((_DWORD *)this + 78);
  v28 = *((int *)this + 78);
  if ( v30 != (_DWORD)v28
    && WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dSS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v30,
      (unsigned int)off_18004F628,
      *((_DWORD *)this + 40),
      (__int64)off_18004F628[v30],
      (__int64)off_18004F628[v28]);
  }
}

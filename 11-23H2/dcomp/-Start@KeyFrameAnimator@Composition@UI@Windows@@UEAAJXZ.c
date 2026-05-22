/*
 * XREFs of ?Start@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x1800197B0
 * Callers:
 *     ?Resume@Api@AnimationController@Composition@UI@Windows@@UEAAJXZ @ 0x18011BCD0 (-Resume@Api@AnimationController@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateBatchSet@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@PEAPEAVCompositionBatch@234@@Z @ 0x18001AB58 (-CreateBatchSet@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@PEAPEAVComposit.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 *     ?CreateBatchSetImpl@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@I@Z @ 0x18015AE8C (-CreateBatchSetImpl@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@I@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimator::Start(Windows::UI::Composition::KeyFrameAnimator *this)
{
  int v2; // ebp
  int v3; // esi
  DirectComposition::CDevice *v4; // rdi
  struct Windows::UI::Composition::BatchSet *v5; // rcx
  void (__fastcall ***v6)(_QWORD); // rcx
  int v7; // esi
  DirectComposition::CDevice *v8; // rdi
  struct Windows::UI::Composition::BatchSet *v9; // rax
  void (__fastcall ***v10)(_QWORD); // rcx
  __int64 v11; // rcx
  bool v12; // zf
  __int64 *v13; // r14
  __int64 v14; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v16; // ecx
  __int64 i; // rax
  struct Windows::UI::Composition::CompositionBatch *v18; // rsi
  struct Windows::UI::Composition::CompositionBatch *v19; // rbp
  unsigned int v20; // r12d
  DWORD v21; // eax
  __int64 v22; // rcx
  struct Windows::UI::Composition::BatchSet *v23; // rax
  __int64 *v24; // r14
  __int64 v25; // rdi
  DWORD v26; // eax
  DWORD v27; // ecx
  __int64 j; // rax
  unsigned int v29; // ebp
  DWORD v30; // eax
  __int64 v31; // rcx
  struct Windows::UI::Composition::BatchSet *v32; // rax
  int v34; // eax
  unsigned int v35; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::UI::Composition::BatchSet *v37; // [rsp+50h] [rbp+8h] BYREF
  struct Windows::UI::Composition::CompositionBatch *v38; // [rsp+58h] [rbp+10h] BYREF

  if ( !*((_DWORD *)this + 78) )
  {
    v2 = *((_DWORD *)this + 32);
    v3 = *((_DWORD *)this + 84) + 1;
    *((_DWORD *)this + 84) = v3;
    if ( v2 )
    {
      v4 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v4, 0x18u, (void **)&v37, 0);
      v5 = v37;
      *(_DWORD *)v37 = 8;
      *((_DWORD *)v5 + 1) = v2;
      *((_DWORD *)v5 + 2) = 21;
      *((_QWORD *)v5 + 2) = v3;
      v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v4 + 10);
      if ( v6 )
        (**v6)(v6);
    }
  }
  if ( (*((_DWORD *)this + 78) & 0xFFFFFFFD) != 0 )
    return 0LL;
  v7 = *((_DWORD *)this + 32);
  if ( v7 )
  {
    v8 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v8, 0x18u, (void **)&v37, 0);
    v9 = v37;
    *(_DWORD *)v37 = 8;
    *((_DWORD *)v9 + 1) = v7;
    *((_DWORD *)v9 + 2) = 20;
    *((_QWORD *)v9 + 2) = 1LL;
    v10 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v8 + 10);
    if ( v10 )
      (**v10)(v10);
  }
  v11 = *((_QWORD *)this + 40);
  if ( !v11 || (v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11), v35 = v34, v34 >= 0) )
  {
    v12 = (*((_BYTE *)this + 152) & 4) == 0;
    *((_DWORD *)this + 78) = 1;
    if ( !v12 )
      return 0LL;
    v13 = (__int64 *)((char *)this + 224);
    v14 = *((_QWORD *)this + 3) + 680LL;
    CurrentThreadId = GetCurrentThreadId();
    v16 = CurrentThreadId;
    if ( *((_QWORD *)this + 28) || *((_QWORD *)this + 29) )
      goto LABEL_66;
    if ( CurrentThreadId == *(_DWORD *)(v14 + 64) )
    {
      *v13 = *(_QWORD *)(v14 + 16) | 1LL;
      *(_QWORD *)(v14 + 16) = v13;
    }
    for ( i = *(_QWORD *)(v14 + 32); i; i = *(_QWORD *)(i + 192) )
    {
      if ( *(_DWORD *)(i + 136) == v16 )
        ++*(_DWORD *)(i + 140);
    }
    v18 = 0LL;
    v37 = 0LL;
    v19 = 0LL;
    v38 = 0LL;
    if ( GetCurrentThreadId() == *(_DWORD *)(v14 + 64) )
    {
      if ( !*(_QWORD *)(v14 + 8) )
      {
        v20 = 0;
        *(_QWORD *)(v14 + 8) = 0LL;
        v21 = GetCurrentThreadId();
        v22 = *(_QWORD *)(v14 + 32);
        if ( v22 )
        {
          do
          {
            if ( *(_DWORD *)(v22 + 136) == v21 )
            {
              if ( !v19 )
                v19 = (struct Windows::UI::Composition::CompositionBatch *)v22;
              ++v20;
            }
            v22 = *(_QWORD *)(v22 + 192);
          }
          while ( v22 );
          if ( v20 > 1 )
            Windows::UI::Composition::BatchController::CreateBatchSetImpl(
              (Windows::UI::Composition::BatchController *)v14,
              (struct Windows::UI::Composition::BatchSet **)(v14 + 8),
              v20);
        }
      }
      v23 = *(struct Windows::UI::Composition::BatchSet **)(v14 + 8);
      if ( !v23 )
        goto LABEL_27;
      ++*(_DWORD *)v23;
    }
    else
    {
      Windows::UI::Composition::BatchController::CreateBatchSet(
        (Windows::UI::Composition::BatchController *)v14,
        &v37,
        &v38);
      v23 = v37;
      v19 = v38;
    }
    if ( v23 )
    {
      *((_QWORD *)this + 29) = (unsigned __int64)v23 | 1;
LABEL_28:
      if ( (*((_BYTE *)this + 152) & 8) == 0 )
      {
LABEL_46:
        *((_BYTE *)this + 152) |= 4u;
        return 0LL;
      }
      v24 = (__int64 *)((char *)this + 240);
      v25 = *((_QWORD *)this + 3) + 608LL;
      v26 = GetCurrentThreadId();
      v27 = v26;
      if ( !*((_QWORD *)this + 30) && !*((_QWORD *)this + 31) )
      {
        if ( v26 == *(_DWORD *)(v25 + 64) )
        {
          *v24 = *(_QWORD *)(v25 + 16) | 1LL;
          *(_QWORD *)(v25 + 16) = v24;
        }
        for ( j = *(_QWORD *)(v25 + 32); j; j = *(_QWORD *)(j + 192) )
        {
          if ( *(_DWORD *)(j + 136) == v27 )
            ++*(_DWORD *)(j + 140);
        }
        v37 = 0LL;
        v38 = 0LL;
        if ( GetCurrentThreadId() == *(_DWORD *)(v25 + 64) )
        {
          if ( !*(_QWORD *)(v25 + 8) )
          {
            *(_QWORD *)(v25 + 8) = 0LL;
            v29 = 0;
            v30 = GetCurrentThreadId();
            v31 = *(_QWORD *)(v25 + 32);
            if ( v31 )
            {
              do
              {
                if ( *(_DWORD *)(v31 + 136) == v30 )
                {
                  if ( !v18 )
                    v18 = (struct Windows::UI::Composition::CompositionBatch *)v31;
                  ++v29;
                }
                v31 = *(_QWORD *)(v31 + 192);
              }
              while ( v31 );
              if ( v29 > 1 )
                Windows::UI::Composition::BatchController::CreateBatchSetImpl(
                  (Windows::UI::Composition::BatchController *)v25,
                  (struct Windows::UI::Composition::BatchSet **)(v25 + 8),
                  v29);
            }
          }
          v32 = *(struct Windows::UI::Composition::BatchSet **)(v25 + 8);
          if ( !v32 )
          {
LABEL_45:
            *((_QWORD *)this + 31) = v18;
            goto LABEL_46;
          }
          ++*(_DWORD *)v32;
        }
        else
        {
          Windows::UI::Composition::BatchController::CreateBatchSet(
            (Windows::UI::Composition::BatchController *)v25,
            &v37,
            &v38);
          v32 = v37;
          v18 = v38;
        }
        if ( v32 )
        {
          *((_QWORD *)this + 31) = (unsigned __int64)v32 | 1;
          goto LABEL_46;
        }
        goto LABEL_45;
      }
LABEL_66:
      Microsoft::WRL2::FailFast::Do();
    }
LABEL_27:
    *((_QWORD *)this + 29) = v19;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x273,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimator.cpp",
    (const char *)(unsigned int)v34);
  return v35;
}

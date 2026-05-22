/*
 * XREFs of ?AnimationEnded@CompositionPropertyAnimator@Composition@UI@Windows@@AEAAJW4AnimationEventType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18004FB60
 * Callers:
 *     ?Thunk_Message_Matrix4x4AnimationEnded_44@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18000C960 (-Thunk_Message_Matrix4x4AnimationEnded_44@-$IAnimationEvent_Receive@VCompositionPropertyAnimator.c)
 *     ?Thunk_Message_Vector2AnimationEnded_8@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180081180 (-Thunk_Message_Vector2AnimationEnded_8@-$IAnimationEvent_Receive@VCompositionPropertyAnimator@Co.c)
 *     ?Thunk_Message_ScalarAnimationEnded_4@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180082730 (-Thunk_Message_ScalarAnimationEnded_4@-$IAnimationEvent_Receive@VCompositionPropertyAnimator@Com.c)
 *     ?Thunk_Message_BooleanAnimationEnded_0@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180082DE0 (-Thunk_Message_BooleanAnimationEnded_0@-$IAnimationEvent_Receive@VCompositionPropertyAnimator@Co.c)
 *     ?Thunk_Message_Vector3AnimationEnded_14@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180084CE0 (-Thunk_Message_Vector3AnimationEnded_14@-$IAnimationEvent_Receive@VCompositionPropertyAnimator@C.c)
 *     ?Thunk_Message_ColorAnimationEnded_26@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180086120 (-Thunk_Message_ColorAnimationEnded_26@-$IAnimationEvent_Receive@VCompositionPropertyAnimator@Com.c)
 *     ?Thunk_Message_Matrix3x2AnimationEnded_38@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18008BD00 (-Thunk_Message_Matrix3x2AnimationEnded_38@-$IAnimationEvent_Receive@VCompositionPropertyAnimator.c)
 *     ?Thunk_Message_PathAnimationEnded_50@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1801913C0 (-Thunk_Message_PathAnimationEnded_50@-$IAnimationEvent_Receive@VCompositionPropertyAnimator@Comp.c)
 *     ?Thunk_Message_QuaternionAnimationEnded_32@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180191410 (-Thunk_Message_QuaternionAnimationEnded_32@-$IAnimationEvent_Receive@VCompositionPropertyAnimato.c)
 *     ?Thunk_Message_Vector4AnimationEnded_20@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180191430 (-Thunk_Message_Vector4AnimationEnded_20@-$IAnimationEvent_Receive@VCompositionPropertyAnimator@C.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?OnAnimatorStateChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAXPEAVCompositionPropertyAnimator@234@W4AnimationEventType@@IIPEAGPEA_N@Z @ 0x18004FEC0 (-OnAnimatorStateChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAXPEAVCompositionProp.c)
 *     ??0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x180072B5C (--0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x18019144C (McTemplateU0qqq_EventWriteTransfer.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertyAnimator::AnimationEnded(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r15
  int v19; // r14d
  DirectComposition::CDevice *v20; // rbx
  _DWORD *v21; // rax
  void (__fastcall ***v22)(_QWORD); // rcx
  volatile signed __int32 *v23; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v24; // rcx
  int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  Windows::UI::Composition::AnimationBindingManager *v30; // rax
  __int64 v31; // rax
  Windows::UI::Composition::AnimationBindingManager *v32; // rax
  __int64 v33; // rax
  Windows::UI::Composition::AnimationBindingManager *v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // [rsp+20h] [rbp-78h]
  _BYTE v38[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v39; // [rsp+54h] [rbp-44h] BYREF
  __int16 v40; // [rsp+58h] [rbp-40h] BYREF
  void *v41; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 v43; // [rsp+A0h] [rbp+8h] BYREF

  v43 = 0;
  v39 = 0;
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x200) != 0 )
    McTemplateU0qqq_EventWriteTransfer((_DWORD)a1, a2, a2, *((_DWORD *)a1 + 32), *((_DWORD *)a1 + 30));
  v6 = a1[3];
  v7 = *(_QWORD *)(v6 + 832);
  if ( !v7 )
  {
    v30 = (Windows::UI::Composition::AnimationBindingManager *)DefaultHeap::AllocClear(0x130uLL);
    if ( v30 )
    {
      v31 = Windows::UI::Composition::AnimationBindingManager::AnimationBindingManager(v30);
      *(_QWORD *)(v6 + 832) = v31;
      v7 = v31;
      if ( v31 )
        goto LABEL_4;
    }
    else
    {
      *(_QWORD *)(v6 + 832) = 0LL;
    }
    Microsoft::WRL2::FailFast::OutOfMemory(v7);
  }
LABEL_4:
  Windows::UI::Composition::AnimationBindingManager::OnAnimatorStateChanged(
    v7,
    a1,
    a2,
    *((unsigned int *)a1 + 43),
    *((_DWORD *)a1 + 44),
    &v39,
    &v43);
  if ( *((_DWORD *)a1 + 45) == -1 )
  {
    v8 = v43;
    v9 = v39;
    goto LABEL_6;
  }
  v28 = a1[3];
  v38[0] = 0;
  v40 = 0;
  v29 = *(_QWORD *)(v28 + 832);
  if ( !v29 )
  {
    v32 = (Windows::UI::Composition::AnimationBindingManager *)DefaultHeap::AllocClear(0x130uLL);
    if ( v32 )
    {
      v33 = Windows::UI::Composition::AnimationBindingManager::AnimationBindingManager(v32);
      *(_QWORD *)(v28 + 832) = v33;
      v29 = v33;
      if ( v33 )
        goto LABEL_32;
    }
    else
    {
      *(_QWORD *)(v28 + 832) = 0LL;
    }
    Microsoft::WRL2::FailFast::OutOfMemory(v29);
  }
LABEL_32:
  Windows::UI::Composition::AnimationBindingManager::OnAnimatorStateChanged(
    v29,
    a1,
    a2,
    *((unsigned int *)a1 + 43),
    *((_DWORD *)a1 + 45),
    &v40,
    v38);
  if ( v38[0] )
  {
    LOBYTE(v8) = 0;
    v43 = 0;
  }
  else
  {
    v8 = v43;
  }
  v9 = v39;
  if ( v40 )
  {
    LOWORD(v9) = ~v40 & v39;
    v39 = v9;
  }
LABEL_6:
  v10 = a1[20];
  if ( v10 && ((_WORD)v9 || (_BYTE)v8) )
  {
    LOBYTE(v37) = (_WORD)v9 != 0;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 208LL))(
            v10,
            *((unsigned int *)a1 + 43),
            *((unsigned int *)a1 + 44),
            a3);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x423,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyanimator.cpp",
        (const char *)(unsigned int)v11,
        v37);
  }
  v12 = *a1;
  if ( a2 != 1 )
  {
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v12 + 432))(a1, v9, v8);
    if ( ((a2 - 8) & 0xFFFFFFF7) == 0 )
      goto LABEL_11;
    return 0LL;
  }
  v26 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v12 + 400))(a1, v9, v8);
  v27 = v26;
  if ( v26 >= 0 )
  {
    (*(void (__fastcall **)(__int64 *))(*a1 + 432))(a1);
    if ( (a1[19] & 0x10) != 0 )
    {
LABEL_11:
      v14 = a1[3];
      v15 = *(_QWORD *)(v14 + 832);
      if ( v15 )
      {
LABEL_12:
        v16 = *(_QWORD *)(v15 + 288);
        if ( v16 )
        {
          do
          {
            v17 = *(_QWORD *)(v16 + 8);
            v18 = *(_QWORD *)(v16 + 24);
            if ( (*(_BYTE *)(v17 + 152) & 1) != 0 )
            {
              v19 = *(_DWORD *)(v17 + 128);
              if ( v19 )
              {
                v20 = *(DirectComposition::CDevice **)(*(_QWORD *)(v17 + 24) + 456LL);
                DirectComposition::CDevice::BeginKernelCommand(v20, 0x18u, &v41, 0);
                v21 = v41;
                *(_DWORD *)v41 = 8;
                v21[1] = v19;
                v21[2] = 1;
                *((_QWORD *)v21 + 2) = 0LL;
                v22 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v20 + 10);
                if ( v22 )
                  (**v22)(v22);
              }
              *(_BYTE *)(v17 + 152) &= ~1u;
            }
            v23 = *(volatile signed __int32 **)(v16 + 8);
            if ( v23 )
            {
              *(_QWORD *)(v16 + 8) = 0LL;
              if ( _InterlockedExchangeAdd(v23 + 4, 0xFFFFFFFF) == 1 )
              {
                LOBYTE(v13) = 1;
                (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v23 + 64LL))(v23, v13);
              }
            }
            if ( *(_QWORD *)v16 )
              operator delete(*(void **)v16, 8uLL);
            v24 = *(Microsoft::WRL2::NestableRuntimeClass **)(v16 + 8);
            if ( v24 )
            {
              *(_QWORD *)(v16 + 8) = 0LL;
              Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v24);
            }
            operator delete((void *)v16, 0x20uLL);
            v16 = v18;
          }
          while ( v18 );
        }
        *(_QWORD *)(v15 + 288) = 0LL;
        return 0LL;
      }
      v34 = (Windows::UI::Composition::AnimationBindingManager *)DefaultHeap::AllocClear(0x130uLL);
      if ( v34 )
      {
        v36 = Windows::UI::Composition::AnimationBindingManager::AnimationBindingManager(v34);
        *(_QWORD *)(v14 + 832) = v36;
        v15 = v36;
        if ( v36 )
          goto LABEL_12;
      }
      else
      {
        *(_QWORD *)(v14 + 832) = 0LL;
      }
      Microsoft::WRL2::FailFast::OutOfMemory(v35);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42E,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyanimator.cpp",
    (const char *)(unsigned int)v26);
  return v27;
}

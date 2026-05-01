/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18009FA24
 * Callers:
 *     ??$InvokeDelegates@V_lambda_d6aa439010436c493593067787cb4742_@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_d6aa439010436c493593067787cb4742_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18009F144 (--$InvokeDelegates@V_lambda_d6aa439010436c493593067787cb4742_@@U-$ITypedEventHandler@PEAVStartEx.c)
 *     ?remove_Destroyed@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1800A1EE0 (-remove_Destroyed@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_SetForegroundFailed@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180181180 (-remove_SetForegroundFailed@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_ExitTransitionToCortanaCompleted@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1801811B0 (-remove_ExitTransitionToCortanaCompleted@CStartExperienceManager@@UEAAJUEventRegistrationToken@@.c)
 *     ?remove_DismissRequested@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1801811E0 (-remove_DismissRequested@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_NotifyFocus@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180181210 (-remove_NotifyFocus@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_Hidden@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180181240 (-remove_Hidden@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_Shown@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180181270 (-remove_Shown@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??$InvokeDelegates@V_lambda_935b208d2dc4ddd225967dd1ee56400c_@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_935b208d2dc4ddd225967dd1ee56400c_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18036E248 (--$InvokeDelegates@V_lambda_935b208d2dc4ddd225967dd1ee56400c_@@U-$ITypedEventHandler@PEAVStartEx.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800A00EC (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1800A1F08 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v4; // esi
  _QWORD *Ptr; // rax
  struct IUnknown **v7; // rcx
  Microsoft::WRL::Details::EventTargetArray *v8; // r13
  bool v9; // r15
  __int64 v10; // r12
  __int64 v11; // r12
  PVOID v12; // rax
  int v14; // edi
  struct IUnknown ***v15; // rax
  struct IUnknown **v16; // rdi
  void **v17; // rcx
  RTL_SRWLOCK *v18; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v19; // [rsp+28h] [rbp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+70h] [rbp+40h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v21; // [rsp+80h] [rbp+50h] BYREF
  PVOID v22; // [rsp+88h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0;
  v22 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v19 = v2;
  if ( Ptr )
  {
    v7 = (struct IUnknown **)Ptr[2];
    v8 = 0LL;
    v9 = 0;
    v10 = Ptr[3] - (_QWORD)v7;
    v20 = 0LL;
    v11 = (v10 >> 3) - 1;
    v21 = (Microsoft::WRL::Details::EventTargetArray *)v11;
    if ( v11 )
    {
      v14 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
              &v20,
              &v21);
      if ( v14 < 0 )
      {
        Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v20);
        v4 = v14;
        goto LABEL_9;
      }
      v15 = (struct IUnknown ***)a1->Ptr;
      v16 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
      v17 = (void **)*((_QWORD *)a1->Ptr + 4);
      v21 = (Microsoft::WRL::Details::EventTargetArray *)v17;
      if ( v16 != v15[3] )
      {
        v8 = v20;
        while ( 1 )
        {
          if ( v9 || a2 != *v16 )
          {
            if ( !v11 )
              goto LABEL_4;
            Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v16, *v17);
            v17 = (void **)((char *)v21 + 8);
            v21 = (Microsoft::WRL::Details::EventTargetArray *)((char *)v21 + 8);
            --v11;
          }
          else
          {
            v9 = 1;
          }
          if ( ++v16 == *((struct IUnknown ***)a1->Ptr + 3) )
            goto LABEL_4;
        }
      }
    }
    else
    {
      v9 = *v7 == a2;
LABEL_4:
      if ( v9 )
      {
        AcquireSRWLockExclusive(a1 + 1);
        v18 = a1 + 1;
        v12 = 0LL;
        if ( &v20 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
        {
          v12 = a1->Ptr;
          a1->Ptr = 0LL;
        }
        v20 = 0LL;
        v22 = v12;
        Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v20);
        v21 = (Microsoft::WRL::Details::EventTargetArray *)a1->Ptr;
        v20 = 0LL;
        a1->Ptr = v8;
        Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v21);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v18);
      }
    }
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v20);
  }
LABEL_9:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v19);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v22);
  return v4;
}

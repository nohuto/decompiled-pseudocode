/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18009F5FC
 * Callers:
 *     ??$InvokeDelegates@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180018E94 (--$InvokeDelegates@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@U-$ITypedEventHandler@PEAUIClient.c)
 *     ?remove_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x18009F070 (-remove_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@.c)
 *     ??$InvokeDelegates@V_lambda_183e354435f860d04c2ca8d3ac2ebf61_@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_183e354435f860d04c2ca8d3ac2ebf61_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18040E69C (--$InvokeDelegates@V_lambda_183e354435f860d04c2ca8d3ac2ebf61_@@U-$ITypedEventHandler@PEAUIClient.c)
 *     ?remove_ClientWindowReadyForPresentationChanged@UwpWindowWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x18041A4E0 (-remove_ClientWindowReadyForPresentationChanged@UwpWindowWrapperBase@@UEAAJUEventRegistrationTok.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18009FEF8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800A00EC (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1800A1F08 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v4; // esi
  _QWORD *Ptr; // rax
  struct IUnknown **v7; // rcx
  bool v8; // r15
  __int64 v9; // r12
  __int64 v10; // r12
  int v12; // edi
  struct IUnknown **v13; // rdi
  void **v14; // r13
  RTL_SRWLOCK *v15; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+80h] [rbp+50h] BYREF
  RTL_SRWLOCK *v18; // [rsp+88h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0;
  v17 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v15 = v2;
  if ( Ptr )
  {
    v7 = (struct IUnknown **)Ptr[2];
    v8 = 0;
    v9 = Ptr[3] - (_QWORD)v7;
    v16 = 0LL;
    v10 = (v9 >> 3) - 1;
    v18 = (RTL_SRWLOCK *)v10;
    if ( v10 )
    {
      v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
              &v16,
              &v18);
      if ( v12 < 0 )
      {
        Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v16);
        v4 = v12;
        goto LABEL_7;
      }
      v13 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
      v14 = (void **)*((_QWORD *)a1->Ptr + 4);
      if ( v13 == *((struct IUnknown ***)a1->Ptr + 3) )
        goto LABEL_6;
      do
      {
        if ( v8 || a2 != *v13 )
        {
          if ( !v10 )
            break;
          Microsoft::WRL::Details::EventTargetArray::AddTail(v16, *v13, *v14++);
          --v10;
        }
        else
        {
          v8 = 1;
        }
        ++v13;
      }
      while ( v13 != *((struct IUnknown ***)a1->Ptr + 3) );
    }
    else
    {
      v8 = *v7 == a2;
    }
    if ( v8 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      v18 = a1 + 1;
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v17, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v16);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v18);
    }
LABEL_6:
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v16);
  }
LABEL_7:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v15);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v17);
  return v4;
}

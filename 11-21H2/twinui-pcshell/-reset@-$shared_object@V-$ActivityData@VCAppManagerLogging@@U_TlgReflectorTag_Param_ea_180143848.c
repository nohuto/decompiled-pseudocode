/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180143848
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::_scalar_deleting_destructor_ @ 0x180077960 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___--_scala.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x180079DF0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802DF4F4 (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802F3DA4 (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P_ea_1802F3DA4.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEEA4 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v3; // rcx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  void *v6; // rbx
  HANDLE v7; // rax
  __int64 v8; // rdx
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPINIT_ONCE v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  if ( *a1 )
  {
    if ( _InterlockedExchangeAdd(*a1, 0xFFFFFFFF) == 1 )
    {
      v2 = *a1;
      if ( *a1 )
      {
        v3 = (volatile signed __int32 *)*((_QWORD *)v2 + 30);
        if ( v3 )
        {
          if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
          {
            v4 = (void *)*((_QWORD *)v2 + 30);
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v4);
          }
          *((_QWORD *)v2 + 30) = 0LL;
          *((_QWORD *)v2 + 31) = 0LL;
        }
        if ( *((_BYTE *)v2 + 72) )
        {
          v6 = (void *)*((_QWORD *)v2 + 8);
          v7 = GetProcessHeap();
          HeapFree(v7, 0, v6);
          *((_BYTE *)v2 + 72) = 0;
        }
        *((_QWORD *)v2 + 8) = 0LL;
        if ( *((_DWORD *)v2 + 2) == 1 )
        {
          Context = 0LL;
          *((_DWORD *)v2 + 2) = 2;
          if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
          {
            if ( fPending )
            {
              v10 = &`CAppManagerLogging::Instance'::`2'::wrapper;
              Context = &qword_1807B3D58;
              qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
              qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
              v11 = 0;
              wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v10, v8, v9);
            }
          }
          _tlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), v2 + 4);
        }
        *((_DWORD *)v2 + 2) = 3;
        operator delete((void *)v2, 0x108uLL);
      }
    }
    *a1 = 0LL;
  }
}

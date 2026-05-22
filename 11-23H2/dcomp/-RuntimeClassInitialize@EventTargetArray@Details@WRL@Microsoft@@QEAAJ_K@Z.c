/*
 * XREFs of ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18002DDD0
 * Callers:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000EDBC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18002DAE8 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompleted.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180065400 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x18008EB50 (--0AgileRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800E3DC8 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
        Microsoft::WRL::Details::EventTargetArray *this,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  bool v5; // cf
  SIZE_T v6; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  Microsoft::WRL::AgileRef *v10; // rsi
  unsigned __int64 i; // rbx
  SIZE_T v12; // rbx
  HANDLE v13; // rax
  LPVOID v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax

  v4 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, v6);
  if ( v8 )
  {
    *v8 = a2;
    v9 = v8 + 1;
    v10 = (Microsoft::WRL::AgileRef *)(v8 + 1);
    for ( i = a2; i; --i )
    {
      Microsoft::WRL::AgileRef::AgileRef(v10);
      v10 = (Microsoft::WRL::AgileRef *)((char *)v10 + 8);
    }
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 2) = v9;
  v12 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v12 = -1LL;
  v13 = GetProcessHeap();
  v14 = HeapAlloc(v13, 0, v12);
  v15 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 4) = v14;
  if ( v15 )
  {
    if ( v14 )
    {
      *((_QWORD *)this + 3) = v15;
      return 0LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'();
  }
  operator delete(*((void **)this + 4));
  *((_QWORD *)this + 2) = 0LL;
  result = 2147942414LL;
  *((_QWORD *)this + 4) = 0LL;
  return result;
}

/*
 * XREFs of ?GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18013ED18
 * Callers:
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18013EE60 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800E02A0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18013B8CC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputETW::DragNDrop::GetDragManager(
        struct tagPOINT a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  int v4; // edi
  LONG x; // ebx
  int v6; // esi
  union _RTL_RUN_ONCE *v7; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  WINBOOL fPending; // [rsp+58h] [rbp+7h] BYREF
  int v12; // [rsp+5Ch] [rbp+Bh] BYREF
  int v13; // [rsp+60h] [rbp+Fh] BYREF
  LPVOID Context; // [rsp+68h] [rbp+17h] BYREF
  __int64 v15; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+78h] [rbp+27h] BYREF
  LPINIT_ONCE v17; // [rsp+80h] [rbp+2Fh] BYREF
  int v18; // [rsp+88h] [rbp+37h]
  LONG y; // [rsp+BCh] [rbp+6Bh]

  y = a1.y;
  v4 = a4;
  x = a1.x;
  v6 = a3;
  v7 = (union _RTL_RUN_ONCE *)a2;
  if ( InputETW::IsEnabled(a1.x) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v17 = &`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v18 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v17);
    }
    v10 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u
      && (*(_BYTE *)(v10 + 16) & 1) != 0
      && (*(_QWORD *)(v10 + 24) & 1LL) == *(_QWORD *)(v10 + 24) )
    {
      v15 = y;
      v16 = x;
      v12 = v4;
      v13 = v6;
      v17 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        byte_180204E6C,
        v8,
        v9,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}

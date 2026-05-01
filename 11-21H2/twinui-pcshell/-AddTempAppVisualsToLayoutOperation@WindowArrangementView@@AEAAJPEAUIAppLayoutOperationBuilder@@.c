/*
 * XREFs of ?AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@@Z @ 0x180518920
 * Callers:
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18051AFC0 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1805370FC (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowArrangementView::AddTempAppVisualsToLayoutOperation(
        const struct _GUID *this,
        struct IAppLayoutOperationBuilder *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  void *v6; // rbx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-10h] BYREF
  void *v20; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v22; // [rsp+70h] [rbp+40h] BYREF
  __int64 v23; // [rsp+78h] [rbp+48h] BYREF

  v20 = 0LL;
  v4 = CTempAppVisualArray::CreateInstance(this, &v20);
  v5 = v4;
  v6 = v20;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5EB,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_23;
  }
  v19 = 0LL;
  v7 = *(_QWORD *)this[4].Data4;
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 40LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  v9 = v8(v7, &v19);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v6 + 48LL))(v6, v19);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 1520LL;
      goto LABEL_7;
    }
    v23 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)&this[5].Data1 + 104LL))(
            *(_QWORD *)&this[5].Data1,
            &v23);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 1524LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_20;
    }
    v11 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v6 + 48LL))(v6, v23);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 1525LL;
      goto LABEL_12;
    }
    v22 = 0LL;
    v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[4].Data4;
    v14 = **v13;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v22);
    v15 = v14(v13, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v22);
    v5 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v6 + 40LL))(v6, v22);
      v5 = v15;
      if ( v15 >= 0 )
      {
        (*(void (__fastcall **)(struct IAppLayoutOperationBuilder *, void *))(*(_QWORD *)a2 + 32LL))(a2, v6);
        v5 = 0;
        goto LABEL_19;
      }
      v16 = 1530LL;
    }
    else
    {
      v16 = 1529LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v15);
LABEL_19:
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v22);
LABEL_20:
    v17 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    goto LABEL_22;
  }
  v10 = 1519LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v9);
LABEL_22:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
LABEL_23:
  if ( v6 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  return v5;
}

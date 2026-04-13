/*
 * XREFs of _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x18005898C
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x180052028 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180059D74 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z @ 0x18005FE4C (-IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator()(__int64 a1, unsigned int a2)
{
  HSTRING *v4; // r15
  unsigned int StringRawBuffer; // edi
  const unsigned __int16 *v6; // rbx
  CreativeFramework::CreativeEventStore *v7; // rax
  int v8; // eax
  ContentManagement *v9; // rax
  const unsigned __int16 *v10; // rdx
  void *v11; // rdx
  _QWORD *v12; // r8
  _QWORD *v13; // rdi
  int v14; // ebx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _DWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 (__fastcall **v19)(_QWORD, _QWORD); // r8
  __int64 v20; // rax
  _QWORD *v21; // r9
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  int v24; // eax
  _BYTE *v25; // rcx
  _BYTE *v26; // rdx
  _BYTE *v27; // rdx
  const unsigned __int16 *v29; // [rsp+20h] [rbp-39h]
  int v30; // [rsp+20h] [rbp-39h]
  int v31; // [rsp+20h] [rbp-39h]
  _QWORD v32[3]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD *v33; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v34[3]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD *v35; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v36[24]; // [rsp+68h] [rbp+Fh] BYREF
  _BYTE *v37; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  LODWORD(v29) = 0;
  v4 = *(HSTRING **)(a1 + 16);
  StringRawBuffer = (unsigned int)WindowsGetStringRawBuffer(*v4, 0LL);
  v6 = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 8), 0LL);
  v7 = (CreativeFramework::CreativeEventStore *)WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  v8 = CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
         v7,
         v6,
         (const unsigned __int16 *)a2,
         StringRawBuffer,
         v29);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      521LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v8,
      v30);
  v9 = (ContentManagement *)WindowsGetStringRawBuffer(*v4, 0LL);
  if ( ContentManagement::IsHighPriorityEvent(v9, v10) )
  {
    v34[0] = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
    v34[1] = ContentManagement::BatterySaverOverrideEventNotificationHandler;
    v12 = v34;
    v35 = v34;
    v13 = v34;
    v14 = 1;
    v15 = &v35;
    v16 = v33;
  }
  else
  {
    v17 = &unk_1801AD190;
    while ( *v17 != **(_DWORD **)(a1 + 24) )
    {
      v17 += 10;
      v11 = &unk_1801AD208;
      if ( v17 == (_DWORD *)&unk_1801AD208 )
      {
        v32[0] = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
        v32[1] = ContentManagement::NormalEventNotificationHandler;
        v16 = v32;
        v33 = v32;
        goto LABEL_14;
      }
    }
    v18 = v17 + 2;
    v33 = 0LL;
    v16 = (_QWORD *)v18[3];
    if ( v16 )
    {
      v19 = (__int64 (__fastcall **)(_QWORD, _QWORD))*v16;
      if ( v16 == v18 )
        v20 = (*v19)(v16, v32);
      else
        v20 = (*v19)(v16, 0LL);
      v33 = (_QWORD *)v20;
      v16 = (_QWORD *)v20;
    }
    else
    {
      v33 = 0LL;
    }
LABEL_14:
    v13 = v32;
    v14 = 6;
    v15 = &v33;
    v12 = v35;
  }
  v31 = v14;
  v37 = 0LL;
  v21 = (_QWORD *)v13[3];
  if ( v21 )
  {
    if ( v21 == v13 )
    {
      v37 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*v21 + 8LL))(v13[3], v36);
      v22 = (_QWORD *)v13[3];
      if ( v22 )
      {
        LOBYTE(v11) = v22 != v13;
        (*(void (__fastcall **)(_QWORD *, void *))(*v22 + 32LL))(v22, v11);
        v13[3] = 0LL;
      }
    }
    else
    {
      v37 = (_BYTE *)v13[3];
      *v15 = 0LL;
    }
    v12 = v35;
    v16 = v33;
  }
  else
  {
    v37 = 0LL;
  }
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    v31 = v14;
    if ( v16 )
    {
      v23 = v32;
      LOBYTE(v23) = v16 != v32;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v16 + 32LL))(v16, v23);
      v33 = 0LL;
      v12 = v35;
    }
  }
  if ( (v14 & 1) != 0 && v12 )
  {
    LOBYTE(v11) = v12 != v34;
    (*(void (__fastcall **)(_QWORD *, void *))(*v12 + 32LL))(v12, v11);
    v35 = 0LL;
  }
  if ( !v37 )
    std::_Xbad_function_call();
  v24 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v24,
      v31);
  v25 = v37;
  if ( v37 )
  {
    v26 = v36;
    LOBYTE(v26) = v37 != v36;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v37 + 32LL))(v37, v26);
    v25 = 0LL;
    v37 = 0LL;
  }
  if ( v25 )
  {
    v27 = v36;
    LOBYTE(v27) = v25 != v36;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v25 + 32LL))(v25, v27);
  }
  return 0LL;
}

/*
 * XREFs of ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180042E40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18003BF8C (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800FCF5C (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ?Disconnect@SipcEndpoint@@QEAAX_N@Z @ 0x1800FDF44 (-Disconnect@SipcEndpoint@@QEAAX_N@Z.c)
 *     ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x1800FE034 (-DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z.c)
 *     ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x1800FE1E0 (-FailFast_Unexpected@in1diag0@details@wil@@YAXXZ.c)
 *     ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x1800FE3EC (-FreeSection@SipcPort@@QEAAJPEAX@Z.c)
 *     ?RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z @ 0x1800FF500 (-RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z.c)
 */

signed int __fastcall SipcServer::DispatchNextCallback(unsigned __int64 this)
{
  void **v2; // r14
  void *v3; // rsi
  signed int result; // eax
  wil::details::in1diag0 *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  bool v9; // sf
  int v10; // r15d
  int v11; // edx
  int v12; // ebx
  SipcServer *v13; // rax
  struct SipcEndpoint **v14; // rbx
  __int64 *j; // rbx
  _QWORD *v16; // rax
  unsigned int v17; // edx
  SipcServer::EndpointListEntry *v18; // rcx
  int v19; // eax
  __int64 *i; // rbx
  int v21; // [rsp+30h] [rbp-30h] BYREF
  void *v22; // [rsp+38h] [rbp-28h]
  DWORD NumberOfBytesTransferred; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 CompletionKey; // [rsp+98h] [rbp+38h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+A0h] [rbp+40h] BYREF

  v2 = (void **)(this + 56);
  v3 = 0LL;
  if ( GetQueuedCompletionStatus(*(HANDLE *)(this + 56), &NumberOfBytesTransferred, &CompletionKey, &Overlapped, 0) )
  {
    v6 = (_QWORD *)CompletionKey;
    v3 = *(void **)(CompletionKey + 16);
    CloseHandle(*(HANDLE *)(CompletionKey + 24));
    operator delete(v2[2], 0x20uLL);
    v7 = *v6;
    v8 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v2[5] = (char *)v2[5] - 1;
    v2[2] = v6;
LABEL_3:
    if ( v3 != (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 48) + 40LL))(*(_QWORD *)(this + 48)) )
    {
      if ( !v3 )
        return 1;
      for ( i = *(__int64 **)(this + 104); ; i = (__int64 *)*i )
      {
        if ( i == (__int64 *)(this + 104) )
          wil::details::in1diag0::FailFast_Unexpected(v5);
        if ( v3 == (void *)i[4] || v3 == (void *)i[5] )
          break;
      }
      if ( (int)SipcEndpoint::DispatchNextCallback((SipcEndpoint *)i[2], v3) < 0
        || (int)AggregateWaitHandle::AddHandle((AggregateWaitHandle *)v2, v3) < 0 )
      {
        SipcEndpoint::Disconnect((SipcEndpoint *)i[2], 1);
        SipcServer::RemoveEndpoint((SipcServer *)(this + 8), (struct SipcEndpoint *)i[2]);
      }
      return 0;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(this + 48) + 32LL))(*(_QWORD *)(this + 48), &v21);
    if ( v10 )
      goto LABEL_42;
    switch ( v21 )
    {
      case 2:
        for ( j = *(__int64 **)(this + 104); j != (__int64 *)(this + 104); j = (__int64 *)*j )
        {
          if ( (void *)j[6] == v22 )
          {
            SipcEndpoint::Disconnect((SipcEndpoint *)j[2], 1);
            SipcServer::RemoveEndpoint((SipcServer *)(this + 8), (struct SipcEndpoint *)j[2]);
            break;
          }
        }
        v16 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v16 )
        {
          v16[2] = 0LL;
          v16[3] = 0LL;
          v16[4] = 0LL;
          v16[5] = 0LL;
          *((_DWORD *)v16 + 12) = 0;
          *((_DWORD *)v16 + 13) = 0;
        }
        *(_QWORD *)(this + 128) = v16;
        if ( !v16 )
        {
          v12 = -2147024882;
          goto LABEL_36;
        }
        v16[3] = this - 16;
        *(_QWORD *)(*(_QWORD *)(this + 128) + 48LL) = v22;
        (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD))(this + 136))(
          *(_QWORD *)(this + 144),
          this & -(__int64)(this != 16),
          (unsigned int)v22,
          HIDWORD(v22));
        if ( *(_QWORD *)(this + 128) )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(this + 48) + 16LL))(*(_QWORD *)(this + 48));
          v18 = *(SipcServer::EndpointListEntry **)(this + 128);
          if ( v18 )
            SipcServer::EndpointListEntry::`scalar deleting destructor'(v18, v17);
          *(_QWORD *)(this + 128) = 0LL;
        }
        break;
      case 3:
        v13 = *(SipcServer **)(this + 104);
        if ( v13 != (SipcServer *)(this + 104) )
        {
          v14 = (struct SipcEndpoint **)v22;
          while ( v13 != v22 )
          {
            v13 = *(SipcServer **)v13;
            if ( v13 == (SipcServer *)(this + 104) )
              goto LABEL_42;
          }
          SipcEndpoint::Disconnect(*((SipcEndpoint **)v22 + 2), 1);
          SipcServer::RemoveEndpoint((SipcServer *)(this + 8), v14[2]);
        }
        break;
      case 6:
        v12 = SipcPort::FreeSection(*(SipcPort **)(this + 48), v22);
        if ( v12 >= 0 )
          break;
LABEL_36:
        wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)v12, v11);
        return v12;
      default:
        return -2147418113;
    }
LABEL_42:
    v19 = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)v2, v3);
    if ( v19 < 0 )
      return v19;
    return v10;
  }
  result = GetLastError();
  if ( result == 258 )
    goto LABEL_3;
  v9 = result < 0;
  if ( result > 0 )
  {
    result = (unsigned __int16)result | 0x80070000;
    v9 = result < 0;
  }
  if ( !v9 )
    goto LABEL_3;
  return result;
}

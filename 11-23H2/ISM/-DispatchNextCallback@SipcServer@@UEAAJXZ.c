/*
 * XREFs of ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180017640
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18004085C (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x180118344 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x180118B2C (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ?Disconnect@SipcEndpoint@@QEAAX_N@Z @ 0x180119B74 (-Disconnect@SipcEndpoint@@QEAAX_N@Z.c)
 *     ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x180119C60 (-DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z.c)
 *     ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x180119E58 (-FailFast_Unexpected@in1diag0@details@wil@@YAXXZ.c)
 *     ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x18011A064 (-FreeSection@SipcPort@@QEAAJPEAX@Z.c)
 *     ?RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z @ 0x18011B1D0 (-RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z.c)
 */

signed int __fastcall SipcServer::DispatchNextCallback(unsigned __int64 this)
{
  void **v2; // r15
  void *v3; // rsi
  signed int result; // eax
  wil::details::in1diag0 *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  bool v9; // sf
  int v10; // r14d
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  struct SipcEndpoint **v14; // rbx
  _QWORD *k; // rax
  __int64 *j; // rbx
  _QWORD *v17; // rax
  unsigned int v18; // edx
  SipcServer::EndpointListEntry *v19; // rcx
  __int64 *i; // rbx
  unsigned int v21; // [rsp+30h] [rbp-30h] BYREF
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
    --*(_QWORD *)(this + 96);
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
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(this + 48) + 32LL))(
            *(_QWORD *)(this + 48),
            &v21);
    if ( v10 )
      goto LABEL_20;
    if ( v21 >= 2 )
    {
      switch ( v21 )
      {
        case 2u:
          for ( j = *(__int64 **)(this + 104); j != (__int64 *)(this + 104); j = (__int64 *)*j )
          {
            if ( (void *)j[6] == v22 )
            {
              SipcEndpoint::Disconnect((SipcEndpoint *)j[2], 1);
              SipcServer::RemoveEndpoint((SipcServer *)(this + 8), (struct SipcEndpoint *)j[2]);
              break;
            }
          }
          v17 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v17 )
          {
            v17[2] = 0LL;
            v17[3] = 0LL;
            v17[4] = 0LL;
            v17[5] = 0LL;
            *((_DWORD *)v17 + 12) = 0;
            *((_DWORD *)v17 + 13) = 0;
          }
          *(_QWORD *)(this + 128) = v17;
          if ( v17 )
          {
            v17[3] = this - 16;
            *(_QWORD *)(*(_QWORD *)(this + 128) + 48LL) = v22;
            (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD))(this + 136))(
              *(_QWORD *)(this + 144),
              this & -(__int64)(this != 16),
              (unsigned int)v22,
              HIDWORD(v22));
            if ( *(_QWORD *)(this + 128) )
            {
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(this + 48) + 16LL))(*(_QWORD *)(this + 48));
              v19 = *(SipcServer::EndpointListEntry **)(this + 128);
              if ( v19 )
                SipcServer::EndpointListEntry::`scalar deleting destructor'(v19, v18);
              *(_QWORD *)(this + 128) = 0LL;
            }
            goto LABEL_20;
          }
          v12 = -2147024882;
LABEL_37:
          wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)v12, v11);
          return v12;
        case 3u:
          v14 = (struct SipcEndpoint **)v22;
          for ( k = *(_QWORD **)(this + 104); k != (_QWORD *)(this + 104); k = (_QWORD *)*k )
          {
            if ( k == v22 )
            {
              SipcEndpoint::Disconnect(*((SipcEndpoint **)v22 + 2), 1);
              SipcServer::RemoveEndpoint((SipcServer *)(this + 8), v14[2]);
              goto LABEL_20;
            }
          }
          goto LABEL_20;
        case 6u:
          v12 = SipcPort::FreeSection(*(SipcPort **)(this + 48), v22);
          if ( v12 >= 0 )
          {
LABEL_20:
            v13 = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)v2, v3);
            if ( v13 < 0 )
              return v13;
            return v10;
          }
          goto LABEL_37;
      }
    }
    return -2147418113;
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

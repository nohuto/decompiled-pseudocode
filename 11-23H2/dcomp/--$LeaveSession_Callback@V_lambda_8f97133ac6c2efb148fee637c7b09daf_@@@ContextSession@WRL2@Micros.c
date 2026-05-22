/*
 * XREFs of ??$LeaveSession_Callback@V_lambda_8f97133ac6c2efb148fee637c7b09daf_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_8f97133ac6c2efb148fee637c7b09daf_@@@Z @ 0x180051C60
 * Callers:
 *     ??$InvokePropertyChange_Callback@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUVector3@Numerics@Foundation@3@@Z @ 0x18004DD40 (--$InvokePropertyChange_Callback@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextSession::LeaveSession_Callback<_lambda_8f97133ac6c2efb148fee637c7b09daf_>(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *v4; // rdi
  int v5; // ecx
  _DWORD *v6; // r14
  _DWORD *v7; // rsi
  int v8; // eax
  __int64 *v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int128 *v15; // r9
  __int64 *v16; // rcx
  __int64 v17; // rax
  _OWORD *v18; // r9
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 result; // rax
  __int64 v23; // [rsp+50h] [rbp-C8h] BYREF
  int v24; // [rsp+58h] [rbp-C0h]
  __int128 v25; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+80h] [rbp-98h] BYREF
  __int64 v27; // [rsp+90h] [rbp-88h]
  _OWORD v28[7]; // [rsp+A0h] [rbp-78h] BYREF
  const void *retaddr; // [rsp+118h] [rbp+0h]

  v4 = (volatile signed __int32 *)(a1 + 16);
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v5 = *(_DWORD *)(a1 + 88);
  v6 = (_DWORD *)(a1 + 80);
  if ( (v5 > 0 || *(_DWORD *)(a1 + 92) != *v6) && !*(_BYTE *)(a1 + 97) )
    Microsoft::WRL2::FailFast::Unexpected("Begin callback preconditions");
  v7 = (_DWORD *)(a1 + 84);
  v8 = *(_DWORD *)(a1 + 84) + 1;
  *(_DWORD *)(a1 + 84) = v8;
  if ( *v6 != v5 + v8 )
    Microsoft::WRL2::FailFast::Unexpected("Begin callback counts");
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  if ( *(_DWORD *)a2 == 52 )
  {
    v9 = *(__int64 **)(a2 + 32);
    v10 = *(__int64 **)(a2 + 8);
    v11 = *v10;
    v23 = *v9;
    v24 = *((_DWORD *)v9 + 2);
    v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v11 + 72))(
            v10,
            *(_QWORD *)(a2 + 16),
            *(unsigned int *)(a2 + 24),
            &v23);
  }
  else
  {
    switch ( *(_DWORD *)a2 )
    {
      case 0x11:
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 88LL))(
                *(_QWORD *)(a2 + 8),
                *(_QWORD *)(a2 + 16),
                *(unsigned int *)(a2 + 24),
                **(unsigned __int8 **)(a2 + 32));
        break;
      case 0x12:
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 56LL))(
                *(_QWORD *)(a2 + 8),
                *(_QWORD *)(a2 + 16),
                *(unsigned int *)(a2 + 24));
        break;
      case 0x23:
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 64LL))(
                *(_QWORD *)(a2 + 8),
                *(_QWORD *)(a2 + 16),
                *(unsigned int *)(a2 + 24),
                **(_QWORD **)(a2 + 32));
        break;
      case 0x45:
        v13 = *(__int64 **)(a2 + 8);
        v14 = *v13;
        v25 = *(_OWORD *)*(_QWORD *)(a2 + 32);
        v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int128 *))(v14 + 80))(
                v13,
                *(_QWORD *)(a2 + 16),
                *(unsigned int *)(a2 + 24),
                &v25);
        break;
      case 0x68:
        v15 = *(__int128 **)(a2 + 32);
        v16 = *(__int64 **)(a2 + 8);
        v17 = *v16;
        v26 = *v15;
        v27 = *((_QWORD *)v15 + 2);
        v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int128 *))(v17 + 32))(
                v16,
                *(_QWORD *)(a2 + 16),
                *(unsigned int *)(a2 + 24),
                &v26);
        break;
      case 0x109:
        v18 = *(_OWORD **)(a2 + 32);
        v19 = *(__int64 **)(a2 + 8);
        v20 = *v19;
        v28[0] = *v18;
        v28[1] = v18[1];
        v28[2] = v18[2];
        v28[3] = v18[3];
        v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _OWORD *))(v20 + 40))(
                v19,
                *(_QWORD *)(a2 + 16),
                *(unsigned int *)(a2 + 24),
                v28);
        break;
      default:
        Microsoft::WRL2::FailFast::Unexpected(0LL);
    }
  }
  if ( v12 < 0 )
    Microsoft::WRL2::FailFast::ForHR(v12, retaddr);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v21 = (unsigned int)*v7;
  if ( *v6 != (_DWORD)v21 + *(_DWORD *)(a1 + 88) )
    Microsoft::WRL2::FailFast::Unexpected("End callback counts");
  *v7 = v21 - 1;
  result = (unsigned int)_InterlockedExchangeAdd(v4, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    LOBYTE(v21) = 1;
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, v21);
  }
  return result;
}

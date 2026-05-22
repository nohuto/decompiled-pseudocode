/*
 * XREFs of ??$LeaveSession_Callback@V_lambda_73f74ce7a9ee67debdc7d7eec37e79c2_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_73f74ce7a9ee67debdc7d7eec37e79c2_@@@Z @ 0x18002D160
 * Callers:
 *     ??$InvokePropertyChange_Callback@UVector2@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUVector2@Numerics@Foundation@3@@Z @ 0x18002D428 (--$InvokePropertyChange_Callback@UVector2@Numerics@Foundation@Windows@@@ProxyObject@Composition@.c)
 * Callees:
 *     ?BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18002CA28 (-BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextSession::LeaveSession_Callback<_lambda_73f74ce7a9ee67debdc7d7eec37e79c2_>(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2)
{
  volatile signed __int32 *p_OwningThread; // rsi
  int v5; // eax
  _OWORD *v6; // r9
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int128 *v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // r9
  __int64 *v15; // rcx
  __int64 v16; // rax
  _BYTE *v17; // r9
  __int64 DebugInfo_high; // rdx
  __int64 result; // rax
  __int64 v20; // [rsp+50h] [rbp-A8h] BYREF
  int v21; // [rsp+58h] [rbp-A0h]
  __int128 v22; // [rsp+70h] [rbp-88h] BYREF
  __int128 v23; // [rsp+80h] [rbp-78h] BYREF
  __int64 v24; // [rsp+90h] [rbp-68h]
  _OWORD v25[5]; // [rsp+A0h] [rbp-58h] BYREF
  const void *retaddr; // [rsp+F8h] [rbp+0h]

  p_OwningThread = (volatile signed __int32 *)&this->OwningThread;
  if ( _InterlockedIncrement((volatile signed __int32 *)&this->OwningThread) == 1 )
    (*(void (__fastcall **)(struct _RTL_CRITICAL_SECTION *))&this->DebugInfo[1].EntryCount)(this);
  Microsoft::WRL2::ContextSession::BeginApiCallback(this);
  switch ( *(_DWORD *)a2 )
  {
    case 0x11:
      v17 = *(_BYTE **)(a2 + 32);
      LOBYTE(v17) = *v17;
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _BYTE *))(**(_QWORD **)(a2 + 8) + 88LL))(
             *(_QWORD *)(a2 + 8),
             *(_QWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 24),
             v17);
      break;
    case 0x12:
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 56LL))(
             *(_QWORD *)(a2 + 8),
             *(_QWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 24));
      break;
    case 0x23:
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 64LL))(
             *(_QWORD *)(a2 + 8),
             *(_QWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 24),
             **(_QWORD **)(a2 + 32));
      break;
    case 0x34:
      v14 = *(__int64 **)(a2 + 32);
      v15 = *(__int64 **)(a2 + 8);
      v16 = *v15;
      v20 = *v14;
      v21 = *((_DWORD *)v14 + 2);
      v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v16 + 72))(
             v15,
             *(_QWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 24),
             &v20);
      break;
    case 0x45:
      v12 = *(__int64 **)(a2 + 8);
      v13 = *v12;
      v22 = *(_OWORD *)*(_QWORD *)(a2 + 32);
      v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int128 *))(v13 + 80))(
             v12,
             *(_QWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 24),
             &v22);
      break;
    case 0x68:
      v9 = *(__int128 **)(a2 + 32);
      v10 = *(__int64 **)(a2 + 8);
      v11 = *v10;
      v23 = *v9;
      v24 = *((_QWORD *)v9 + 2);
      v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int128 *))(v11 + 32))(
             v10,
             *(_QWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 24),
             &v23);
      break;
    case 0x109:
      v6 = *(_OWORD **)(a2 + 32);
      v7 = *(__int64 **)(a2 + 8);
      v8 = *v7;
      v25[0] = *v6;
      v25[1] = v6[1];
      v25[2] = v6[2];
      v25[3] = v6[3];
      v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _OWORD *))(v8 + 40))(
             v7,
             *(_QWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 24),
             v25);
      break;
    default:
      Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  if ( v5 < 0 )
    Microsoft::WRL2::FailFast::ForHR(v5, retaddr);
  EnterCriticalSection(this + 1);
  DebugInfo_high = HIDWORD(this[2].DebugInfo);
  if ( LODWORD(this[2].DebugInfo) != (_DWORD)DebugInfo_high + this[2].LockCount )
    Microsoft::WRL2::FailFast::Unexpected("End callback counts");
  HIDWORD(this[2].DebugInfo) = DebugInfo_high - 1;
  result = (unsigned int)_InterlockedExchangeAdd(p_OwningThread, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    LOBYTE(DebugInfo_high) = 1;
    return ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64))this->DebugInfo[1].ProcessLocksList.Flink)(
             this,
             DebugInfo_high);
  }
  return result;
}

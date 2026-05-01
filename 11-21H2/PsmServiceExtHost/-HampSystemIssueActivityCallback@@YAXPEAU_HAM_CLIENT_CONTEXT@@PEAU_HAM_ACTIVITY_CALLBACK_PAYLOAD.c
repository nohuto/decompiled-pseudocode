/*
 * XREFs of ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800372BC
 * Callers:
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180036C24 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180036CE0 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180077A3C (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18008EF5C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall HampSystemIssueActivityCallback(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  int v6; // ebx
  char *Heap; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  if ( (*((_BYTE *)a1 + 128) & 2) != 0 )
  {
    (*((void (__fastcall **)(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *, _QWORD))a1 + 13))(a2, *((_QWORD *)a1 + 15));
  }
  else
  {
    v4 = *((_QWORD *)a1 + 14);
    v5 = v4 + 24;
    RtlAcquireSRWLockExclusive(v4 + 24);
    if ( *(_BYTE *)(v4 + 32) || (int)RtlQueryWnfMetaNotification(&v14, 2LL, *((_QWORD *)a1 + 13)) >= 0 && !v14 )
    {
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x5CuLL);
      v8 = Heap;
      if ( Heap )
      {
        *((_QWORD *)Heap + 2) = *((_QWORD *)a1 + 13);
        *(_OWORD *)(Heap + 28) = *(_OWORD *)a2;
        *(_OWORD *)(Heap + 44) = *((_OWORD *)a2 + 1);
        *(_OWORD *)(Heap + 60) = *((_OWORD *)a2 + 2);
        *(_OWORD *)(Heap + 76) = *((_OWORD *)a2 + 3);
        *((_DWORD *)Heap + 6) = 64;
        v9 = *(_QWORD **)(v4 + 8);
        if ( *v9 != v4 )
          __fastfail(3u);
        *v8 = v4;
        v8[1] = v9;
        *v9 = v8;
        *(_QWORD *)(v4 + 8) = v8;
        if ( !*(_BYTE *)(v4 + 32) )
        {
          v10 = *(_QWORD *)(v4 + 16);
          *(_BYTE *)(v4 + 32) = 1;
          TpPostWork(v10);
        }
        v6 = 0;
      }
      else
      {
        v6 = -1073741801;
      }
    }
    else
    {
      v6 = RtlPublishWnfStateData(*((_QWORD *)a1 + 13), 0LL, a2, 64LL, 0LL);
    }
    RtlReleaseSRWLockExclusive(v5);
    if ( v6 < 0 && (unsigned int)dword_1800DC218 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800DC218, 0x400000000008LL) )
      {
        v14 = *((_DWORD *)a2 + 4);
        v16 = *(_QWORD *)a2;
        v15 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v11,
          (unsigned int)&unk_1800C60D4,
          v12,
          v13,
          (__int64)&v16,
          (__int64)&v14,
          (__int64)&v15);
      }
    }
  }
}

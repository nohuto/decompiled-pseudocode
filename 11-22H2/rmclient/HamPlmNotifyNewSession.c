/*
 * XREFs of HamPlmNotifyNewSession @ 0x18000A0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HamPlmNotifyNewSession(LPUNKNOWN pUnk)
{
  void *v2; // r14
  PVOID Heap; // rsi
  int v4; // r15d
  HRESULT v5; // eax
  HGLOBAL v6; // rax
  CLIENT_CALL_RETURN v7; // rbx
  unsigned int v9; // eax
  __int64 mshlflags; // [rsp+28h] [rbp-70h]
  int Pointer; // [rsp+30h] [rbp-68h]
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp-60h] BYREF
  SIZE_T Size[11]; // [rsp+40h] [rbp-58h] BYREF
  int v14; // [rsp+A8h] [rbp+10h] BYREF
  int v15; // [rsp+B0h] [rbp+18h]
  LPSTREAM ppstm; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0LL;
  ppstm = 0LL;
  Heap = 0LL;
  Size[3] = 0LL;
  Binding = 0LL;
  v4 = 0;
  v5 = CoInitializeEx(0LL, 0);
  if ( v5 < 0 )
    goto LABEL_22;
  v4 = 1;
  v15 = 1;
  v6 = GlobalAlloc(2u, 0LL);
  v2 = v6;
  Size[1] = (SIZE_T)v6;
  if ( !v6 )
  {
LABEL_25:
    LODWORD(v7.Pointer) = -1073741801;
LABEL_26:
    Pointer = (int)v7.Pointer;
    goto LABEL_11;
  }
  v5 = CreateStreamOnHGlobal(v6, 1, &ppstm);
  if ( v5 < 0
    || (v5 = CoMarshalInterface(ppstm, &riid, pUnk, 0, 0LL, 1u), v5 < 0)
    || (v5 = (*(__int64 (__fastcall **)(LPSTREAM, _QWORD, __int64, SIZE_T *))(*(_QWORD *)ppstm + 40LL))(
               ppstm,
               0LL,
               2LL,
               Size),
        v5 < 0) )
  {
LABEL_22:
    LODWORD(v7.Pointer) = (unsigned __int16)v5;
    v9 = (unsigned __int16)v5 | 0xC0070000;
    if ( LODWORD(v7.Pointer) )
      LODWORD(v7.Pointer) = v9;
    goto LABEL_26;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, LODWORD(Size[0]));
  Size[2] = (SIZE_T)Heap;
  if ( !Heap )
    goto LABEL_25;
  v5 = (*(__int64 (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
  if ( v5 < 0 )
    goto LABEL_22;
  v5 = (*(__int64 (__fastcall **)(LPSTREAM, PVOID, _QWORD, int *))(*(_QWORD *)ppstm + 24LL))(
         ppstm,
         Heap,
         LODWORD(Size[0]),
         &v14);
  if ( v5 < 0 )
    goto LABEL_22;
  LODWORD(v7.Pointer) = sub_180005FC0(&unk_1800207D0, &Binding);
  Pointer = (int)v7.Pointer;
  if ( SLODWORD(v7.Simple) >= 0 )
  {
    LODWORD(mshlflags) = v14;
    v7.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 0x17u, 0LL, Binding, Heap, mshlflags).Pointer;
    Size[4] = (SIZE_T)v7.Pointer;
    Pointer = (int)v7.Pointer;
  }
LABEL_11:
  if ( v2 )
    GlobalFree(v2);
  if ( ppstm )
  {
    (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
    CoReleaseMarshalData(ppstm);
    (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)ppstm + 16LL))(ppstm);
  }
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    LODWORD(v7.Pointer) = Pointer;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( v4 )
    CoUninitialize();
  return LODWORD(v7.Pointer);
}

/*
 * XREFs of DxgkDispMgrCreate @ 0x1C0161580
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001E3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ??0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z @ 0x1C016176C (--0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z.c)
 */

__int64 __fastcall DxgkDispMgrCreate(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v5; // rcx
  DXGDISPLAYMANAGEROBJECT *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  DXGDISPLAYMANAGEROBJECT *v9; // rbx
  int v10; // eax
  __int64 v11; // r14
  PVOID v12; // r14
  NTSTATUS inserted; // eax
  _QWORD *v14; // rdx
  const wchar_t *v16; // r9
  ACCESS_MASK DesiredAccess[4]; // [rsp+50h] [rbp-38h]
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF
  ReferenceCounted *v20; // [rsp+A0h] [rbp+18h] BYREF

  v5 = a1 + 24;
  if ( v5 < a1 || v5 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)DesiredAccess = *(_OWORD *)a1;
  Handle = *(HANDLE *)(a1 + 16);
  v6 = (DXGDISPLAYMANAGEROBJECT *)operator new[](0xC0uLL, 0x4B677844u, 256LL, a4);
  if ( v6 )
    v9 = DXGDISPLAYMANAGEROBJECT::DXGDISPLAYMANAGEROBJECT(v6, DesiredAccess[3] & 1);
  else
    v9 = 0LL;
  v20 = v9;
  if ( !v9 || !*((_BYTE *)v9 + 64) )
  {
    WdLogSingleEntry1(6LL, 776LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for DXGDISPLAYMANAGEROBJECT",
      776LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v11) = -1073741801;
    goto LABEL_15;
  }
  Object = 0LL;
  LOBYTE(v8) = 1;
  LOBYTE(v7) = 1;
  v10 = ObCreateObject(v7, g_pDxgkDisplayManagerObjectType, *(_QWORD *)DesiredAccess, v8, 0LL, 16, 208, 0, &Object);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL, v10);
    v16 = L"Failed to create NT object for display manager (0x%I64x)";
LABEL_19:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v11, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  *(_OWORD *)Object = 0LL;
  v12 = Object;
  if ( *((_QWORD *)v9 + 9) )
  {
    WdLogSingleEntry1(1LL, 562LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Object == nullptr", 562LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)v9 + 9) = v12;
  v20 = 0LL;
  *(_QWORD *)Object = v9;
  inserted = ObInsertObject(Object, 0LL, DesiredAccess[2], 0, 0LL, &Handle);
  v11 = inserted;
  if ( inserted < 0 )
  {
    WdLogSingleEntry1(2LL, inserted);
    v16 = L"Failed to create NT handle for display manager object (0x%I64x)";
    goto LABEL_19;
  }
  v14 = (_QWORD *)(a1 + 16);
  if ( a1 + 16 >= MmUserProbeAddress )
    v14 = (_QWORD *)MmUserProbeAddress;
  *v14 = Handle;
LABEL_15:
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v20, 0LL);
  return (unsigned int)v11;
}

/*
 * XREFs of ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18001BDE4
 * Callers:
 *     ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x18001BC30 (-UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18004D68C (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1801C56F4 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x1801C7080 (-NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DWMInputRouter::RemoveTarget(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rbp
  int v8; // eax
  _QWORD *v9; // rdi
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 i; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD *result; // rax
  int v21; // eax
  int v22; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v24; // [rsp+60h] [rbp+18h]
  __int64 v25; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3[7];
  v4 = 0LL;
  v25 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v3)(v3, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, &v25) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v25 + 24LL))(v25, 0LL, 0LL);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6C5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v8,
        v22);
    v9 = (_QWORD *)a1[80];
    v10 = (_QWORD *)a1[81];
    while ( v9 != v10 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 24LL))(*v9, v25);
      if ( v21 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6C9,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v21,
          v22);
      ++v9;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v11 = 0xCBF29CE484222325uLL;
  a3[7] = 0LL;
  v12 = 0xCBF29CE484222325uLL;
  v24 = *((_DWORD *)a3 + 4);
  for ( i = 0LL; i < 4; ++i )
  {
    v14 = *((unsigned __int8 *)&v24 + i);
    v12 = 0x100000001B3LL * (v14 ^ v12);
  }
  v24 = *((_DWORD *)a3 + 5);
  do
  {
    v15 = *((unsigned __int8 *)&v24 + v4++);
    v11 = 0x100000001B3LL * (v15 ^ v11);
  }
  while ( v4 < 4 );
  v16 = a1[14];
  v17 = 2 * (a1[17] & (v12 ^ v11));
  if ( *(_QWORD **)(v16 + 8 * v17 + 8) == a3 )
  {
    if ( *(_QWORD **)(v16 + 8 * v17) == a3 )
    {
      v18 = a1[12];
      *(_QWORD *)(v16 + 8 * v17) = v18;
    }
    else
    {
      v18 = a3[1];
    }
    *(_QWORD *)(v16 + 8 * v17 + 8) = v18;
  }
  else if ( *(_QWORD **)(v16 + 8 * v17) == a3 )
  {
    *(_QWORD *)(v16 + 8 * v17) = *a3;
  }
  v19 = *a3;
  --a1[13];
  *(_QWORD *)a3[1] = v19;
  *(_QWORD *)(v19 + 8) = a3[1];
  operator delete(a3, 0x40uLL);
  result = a2;
  *a2 = v19;
  return result;
}

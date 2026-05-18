/*
 * XREFs of sub_1800E7220 @ 0x1800E7220
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18003D350 @ 0x18003D350 (sub_18003D350.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E2DE0 @ 0x1800E2DE0 (sub_1800E2DE0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall sub_1800E7220(__int64 a1, __int64 a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 *v8; // rbx
  bool v9; // zf
  __int64 v10; // rax
  void (__fastcall *v11)(__int64 *, __int64); // r14
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64 *, _QWORD, __int64); // r14
  __int64 v14; // rcx
  int v15; // r14d
  __int64 *v16; // rax
  __int64 v17; // rbx
  int (__fastcall *v18)(__int64, void *, __int64); // rdi
  __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-29h] BYREF
  __int64 v21[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 *v22; // [rsp+40h] [rbp-9h] BYREF
  __int128 v23; // [rsp+50h] [rbp+7h]
  char *v24; // [rsp+68h] [rbp+1Fh] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp+37h]

  if ( !sub_18003D350(a1, a2) )
  {
    sub_18001F2B4(&stru_1801EA548, 3, "Failed to create CommandList object");
    return 0;
  }
  v4 = (__int64 *)(a1 + 144);
  if ( sub_1800E2DE0((_QWORD *)(a1 + 144)) )
  {
    v20 = 0LL;
    v5 = *(_QWORD *)(a1 + 80);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      while ( v6 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
        if ( v7 == v6 )
        {
          v20 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    if ( *((_QWORD *)&v20 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL));
    v23 = v20;
    sub_180018704((__int64)v21);
    sub_1800DA968(v21[0], &v22);
    v8 = v22;
    v9 = ((*(__int64 (__fastcall **)(__int64 *))(*v22 + 304))(v22) & 1) == 0;
    v10 = *v8;
    if ( v9 )
    {
      v13 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v10 + 352);
      v14 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = v13(v8, 0LL, a1 + 144);
      sub_1800DD668(v21[0], v15);
      if ( v15 < 0 )
      {
        sub_18001F2B4(&stru_1801EA548, 3, "Failed to create DeferredContext with HRESULT error 0x%.8x", v15);
        (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
        sub_180010910((__int64)v21);
        sub_180010910((__int64)&v20);
        return 0;
      }
      v16 = sub_18002B9EC(a1, (__int64 *)&v24);
      if ( (unsigned __int64)v16[3] >= 0x10 )
        v16 = (__int64 *)*v16;
      sub_180011AC0(*v4, (const char *)v16);
      if ( v25 >= 0x10 )
        sub_180010884(v24, v25 + 1);
    }
    else
    {
      v11 = *(void (__fastcall **)(__int64 *, __int64))(v10 + 344);
      v12 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v11(v8, a1 + 144);
    }
    (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
    sub_180010910((__int64)v21);
    sub_180010910((__int64)&v20);
  }
  if ( sub_1800E2DE0((_QWORD *)(a1 + 152)) )
  {
    v17 = *v4;
    v18 = **(int (__fastcall ***)(__int64, void *, __int64))*v4;
    v19 = *(_QWORD *)(a1 + 152);
    if ( v19 )
    {
      *(_QWORD *)(a1 + 152) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    if ( v18(v17, &unk_1801BC2A8, a1 + 152) < 0 )
      return 0;
  }
  return 1;
}

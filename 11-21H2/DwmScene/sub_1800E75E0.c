/*
 * XREFs of sub_1800E75E0 @ 0x1800E75E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800DEA0C @ 0x1800DEA0C (sub_1800DEA0C.c)
 *     sub_1800E6A0C @ 0x1800E6A0C (sub_1800E6A0C.c)
 *     sub_1800E77D8 @ 0x1800E77D8 (sub_1800E77D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800E75E0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  int v10; // edx
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-29h] BYREF
  __int64 v15; // [rsp+28h] [rbp-21h] BYREF
  __int128 v16; // [rsp+30h] [rbp-19h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v18[2]; // [rsp+50h] [rbp+7h] BYREF
  char *v19; // [rsp+60h] [rbp+17h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp+2Fh]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 56LL))(*a2);
  if ( !(_BYTE)result )
  {
    sub_1800DEA0C(v18, a2);
    sub_1800E77D8(v18[0], &v15);
    v14 = 0LL;
    v5 = v15;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 912LL))(v15, 0LL, &v14);
    v16 = 0LL;
    v7 = *(_QWORD *)(a1 + 80);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      while ( v8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
        if ( v9 == v8 )
        {
          v16 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
      v5 = v15;
    }
    sub_1800E6A0C(v17, &v16);
    sub_180010910((__int64)&v16);
    v10 = v6;
    v11 = v17[0];
    sub_1800DD668(v17[0], v10);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11) )
    {
      v12 = sub_18002B9EC(*a2, (__int64 *)&v19);
      if ( (unsigned __int64)v12[3] >= 0x10 )
        v12 = (__int64 *)*v12;
      sub_180011AC0(v14, (const char *)v12);
      if ( v20 >= 0x10 )
        sub_180010884(v19, v20 + 1);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 464LL))(
        *(_QWORD *)(a1 + 144),
        v14,
        0LL);
    }
    sub_180010910((__int64)v17);
    v13 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    return sub_180010910((__int64)v18);
  }
  return result;
}

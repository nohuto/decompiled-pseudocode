/*
 * XREFs of sub_1800DD040 @ 0x1800DD040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002858C @ 0x18002858C (sub_18002858C.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 *     sub_18002AB08 @ 0x18002AB08 (sub_18002AB08.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800DD040(__int64 a1, int a2)
{
  int v3; // edi
  __int64 result; // rax
  unsigned int v5; // r12d
  unsigned int i; // r15d
  __int64 v7; // r14
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 *v16; // rax
  void (__fastcall *v17)(__int64); // rbx
  _QWORD v18[2]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v20; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v21[2]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v22[2]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v23; // [rsp+88h] [rbp-29h] BYREF
  char v24; // [rsp+90h] [rbp-21h]
  __int64 v25; // [rsp+118h] [rbp+67h]
  int v26; // [rsp+128h] [rbp+77h] BYREF
  int v27; // [rsp+12Ch] [rbp+7Bh]
  __int64 v28; // [rsp+130h] [rbp+7Fh] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 416) = a2;
  result = sub_180028614(a1);
  v5 = result;
  for ( i = 0; i < v5; ++i )
  {
    sub_18002858C(a1, v18, i);
    v7 = v18[0];
    sub_18002C460(v18[0] + 8LL, (__int64)&v23);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 112LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 120LL))(v7);
    v8 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 152LL))(v7);
    v9 = v8[1];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = v8[1];
      v7 = v18[0];
    }
    v10 = *v8;
    v22[0] = v10;
    v22[1] = v9;
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 464);
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
        v11 = *(_QWORD *)(v10 + 464);
        v7 = v18[0];
      }
      v19[0] = *(_QWORD *)(v10 + 456);
      v19[1] = v11;
      v12 = v19;
      v3 |= 1u;
    }
    else
    {
      v20 = 0LL;
      v12 = (__int64 *)&v20;
      v3 |= 2u;
    }
    v13 = v12[1];
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v7 = v18[0];
    }
    v14 = *v12;
    v21[0] = v14;
    v21[1] = v13;
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~2u;
      sub_180010910((__int64)&v20);
    }
    if ( (v3 & 1) != 0 )
    {
      v3 &= ~1u;
      sub_180010910((__int64)v19);
    }
    v25 = 0LL;
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 136);
      if ( v15 )
      {
        v16 = sub_18005E244(v15, &v28);
      }
      else
      {
        v26 = 0;
        v27 = 0;
        v16 = (__int64 *)&v26;
      }
      v25 = *v16;
    }
    v17 = *(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 104LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
    v17(v7);
    if ( v14 )
      sub_18002AB08(v14, v25);
    sub_180010910((__int64)v21);
    sub_180010910((__int64)v22);
    if ( v24 )
      j_LanguageEnumProc(v23);
    result = sub_180010910((__int64)v18);
  }
  return result;
}

/*
 * XREFs of sub_180011C6C @ 0x180011C6C
 * Callers:
 *     sub_180019410 @ 0x180019410 (sub_180019410.c)
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180011C6C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 *v12; // r8
  __int64 v13; // rdx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int128 v22; // [rsp+40h] [rbp-49h] BYREF
  __int64 v23; // [rsp+50h] [rbp-39h] BYREF
  char v24; // [rsp+58h] [rbp-31h]
  _BYTE v25[8]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v26; // [rsp+68h] [rbp-21h]
  _DWORD v27[12]; // [rsp+70h] [rbp-19h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1) )
  {
    if ( a3 < *(_DWORD *)(a1 + 1704) )
      a3 = *(_DWORD *)(a1 + 1704);
    if ( a4 < *(_DWORD *)(a1 + 1708) )
      a4 = *(_DWORD *)(a1 + 1708);
    v8 = *(_DWORD *)(a1 + 1712);
    v9 = a3 + v8 - 1 - (a3 + v8 - 1) % v8;
    v10 = a4 + v8 - 1 - (a4 + v8 - 1) % v8;
    a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    if ( a3 < v9 )
      a3 = v9;
    a4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    if ( a4 < v10 )
      a4 = v10;
    if ( a4 * a3 - v10 * v9 >= (int)(float)((float)(int)(a4 * a3) * *(float *)(a1 + 1716)) )
    {
      a3 = v9;
      a4 = v10;
    }
  }
  else if ( a2 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a2 + 80LL))(a2, v27);
    a3 = v27[0];
    a4 = v27[1];
  }
  if ( *(_QWORD *)(a1 + 1696) != a2
    || a3 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1)
    || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1), a4 != (_DWORD)result) )
  {
    v12 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v25);
    v22 = 0LL;
    v13 = v12[1];
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      while ( v14 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14);
        if ( v15 == v14 )
        {
          v16 = *v12;
          v22 = *(_OWORD *)v12;
          goto LABEL_23;
        }
      }
    }
    v16 = v22;
LABEL_23:
    v17 = v26;
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v17 + 8LL))(v17, v13, v12);
      v16 = v22;
    }
    if ( v16 )
    {
      sub_18002C460(v16 + 24, &v23);
      v18 = *(_QWORD *)(a1 + 1696);
      if ( v18 != a2 )
      {
        if ( a2 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
          v18 = *(_QWORD *)(a1 + 1696);
        }
        *(_QWORD *)(a1 + 1696) = a2;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 144LL))(v16, 0LL);
      if ( v24 )
        j_LanguageEnumProc(v23, v19, v20, v21);
    }
    return sub_180010910((__int64)&v22);
  }
  return result;
}

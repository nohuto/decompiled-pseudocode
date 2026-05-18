/*
 * XREFs of sub_180099D5C @ 0x180099D5C
 * Callers:
 *     sub_180057108 @ 0x180057108 (sub_180057108.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180099D5C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 *v14; // rdx
  __int64 *v15; // rax
  __int64 *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // [rsp+30h] [rbp-99h] BYREF
  __int64 v23; // [rsp+38h] [rbp-91h]
  __int128 v24; // [rsp+40h] [rbp-89h] BYREF
  char *v25; // [rsp+50h] [rbp-79h] BYREF
  char *v26; // [rsp+58h] [rbp-71h]
  __int64 v27; // [rsp+60h] [rbp-69h]
  _QWORD v28[2]; // [rsp+68h] [rbp-61h] BYREF
  _QWORD v29[4]; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v30[4]; // [rsp+98h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-11h] BYREF

  if ( *(_BYTE *)(a1 + 152) )
  {
    sub_1800113D0(v30, "Shader::Load() -- this function can only be called once per shader instance");
    v20 = sub_1800113D0(
            v29,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v20, v21, (__int64)v30, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = a2[1];
  v5 = 0LL;
  v6 = 0LL;
  if ( v4 )
  {
    v5 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    v6 = v4;
  }
  *(_QWORD *)(a1 + 120) = v5;
  v7 = *(volatile signed __int32 **)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v6;
  if ( v7 && _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  *(_BYTE *)(a1 + 152) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  sub_180039EBC(v8, &v25);
  v9 = (__int64 *)v25;
  v10 = (__int64)v26;
  if ( v25 != v26 )
  {
    do
    {
      v24 = 0LL;
      v11 = v9[1];
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
        v11 = v9[1];
      }
      v12 = *v9;
      *(_QWORD *)&v24 = v12;
      *((_QWORD *)&v24 + 1) = v11;
      if ( v12 )
      {
        v13 = sub_180028544(v12);
        if ( v13 )
        {
          v14 = *(__int64 **)(a1 + 136);
          v15 = (__int64 *)v14[1];
          v16 = v14;
          while ( !*((_BYTE *)v15 + 25) )
          {
            if ( *((_DWORD *)v15 + 8) >= v13 )
            {
              v16 = v15;
              v15 = (__int64 *)*v15;
            }
            else
            {
              v15 = (__int64 *)v15[2];
            }
          }
          if ( *((_BYTE *)v16 + 25) || v13 < *((_DWORD *)v16 + 8) || v16 == v14 )
          {
            (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int128 *))(*(_QWORD *)a1 + 48LL))(a1, &v22, *a2, &v24);
            v17 = (_QWORD *)sub_180029E58((__int64 *)(a1 + 136), v13);
            v18 = v23;
            if ( v23 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
              v18 = v23;
            }
            v28[0] = *v17;
            *v17 = v22;
            v28[1] = v17[1];
            v17[1] = v18;
            sub_180010910((__int64)v28);
            if ( sub_1800122B0(&v22) )
              *(_BYTE *)(a1 + 152) = 0;
            sub_180010910((__int64)&v22);
          }
        }
      }
      sub_180010910((__int64)&v24);
      v9 += 2;
    }
    while ( v9 != (__int64 *)v10 );
    v10 = (__int64)v26;
    v9 = (__int64 *)v25;
  }
  if ( v9 )
  {
    sub_1800126E8((__int64)v9, v10);
    sub_180010884(v25, (v27 - (_QWORD)v25) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return 1;
}

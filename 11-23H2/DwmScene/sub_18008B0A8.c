/*
 * XREFs of sub_18008B0A8 @ 0x18008B0A8
 * Callers:
 *     sub_18004FECC @ 0x18004FECC (sub_18004FECC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180015630 @ 0x180015630 (sub_180015630.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18008B0A8(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rax
  unsigned int v13; // [rsp+30h] [rbp-79h] BYREF
  __int64 v14; // [rsp+38h] [rbp-71h] BYREF
  __int64 v15; // [rsp+40h] [rbp-69h]
  __int64 v16[3]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v18; // [rsp+80h] [rbp-29h] BYREF
  __int64 v19; // [rsp+88h] [rbp-21h]
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp-9h] BYREF

  if ( *(_BYTE *)(a1 + 152) )
  {
    sub_180010DD0(&v18, (__int64)"Shader::Load() -- this function can only be called once per shader instance");
    v4 = sub_180010DD0(
           v17,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)&v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180015630((_QWORD *)(a1 + 120), a2);
  *(_BYTE *)(a1 + 152) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  sub_18003655C(v6, v16);
  v7 = (_QWORD *)v16[0];
  v8 = v16[1];
  while ( v7 != (_QWORD *)v8 )
  {
    sub_18001246C(&v14, v7);
    if ( v14 )
    {
      v9 = sub_180026650(v14);
      v10 = v9;
      if ( v9 )
      {
        v13 = v9;
        if ( sub_1800435C8(a1 + 136, (__int64)&v13) == *(_QWORD *)(a1 + 136) )
        {
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v18, *a2, &v14);
          v13 = v10;
          v11 = sub_180054270((__int64 *)(a1 + 136), (__int64)v17, &v13);
          sub_1800124F8((__int64 *)(*(_QWORD *)v11 + 40LL), &v18);
          if ( sub_180011DD0(&v18) )
            *(_BYTE *)(a1 + 152) = 0;
          if ( v19 )
            sub_180010530(v19);
        }
      }
    }
    if ( v15 )
      sub_180010530(v15);
    v7 += 2;
  }
  sub_180013300((__int64)v16);
  return 1;
}

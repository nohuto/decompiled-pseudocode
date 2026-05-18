/*
 * XREFs of sub_180099870 @ 0x180099870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_18002B740 @ 0x18002B740 (sub_18002B740.c)
 *     sub_180099288 @ 0x180099288 (sub_180099288.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180099870(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // [rsp+30h] [rbp-59h] BYREF
  __int64 v16; // [rsp+38h] [rbp-51h]
  __int128 v17; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v19[4]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp+7h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    sub_18002B740(a1, a2);
    v17 = 0LL;
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      while ( v6 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
        if ( v7 == v6 )
        {
          v8 = *(_QWORD *)(a1 + 120);
          v17 = *(_OWORD *)(a1 + 120);
          goto LABEL_7;
        }
      }
    }
    v8 = v17;
LABEL_7:
    if ( !v8 )
    {
      sub_1800113D0(v19, "Shader::AttachDevice() -- shader program no longer available for creating new device shader");
      v13 = sub_1800113D0(
              v18,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader.cpp");
      sub_180099288(pExceptionObject, (__int64)v13, v14, (const char *)v19);
      throw (Spectre::Engine::EngineUnexpectedException *)pExceptionObject;
    }
    v9 = sub_180028544(*a2);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v15, v10, a2);
    v11 = (_QWORD *)sub_180029E58((__int64 *)(a1 + 136), v9);
    v12 = v16;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v12 = v16;
    }
    v18[0] = *v11;
    *v11 = v15;
    v18[1] = v11[1];
    v11[1] = v12;
    sub_180010910((__int64)v18);
    if ( sub_1800122B0(&v15) )
      *(_BYTE *)(a1 + 152) = 0;
    sub_180010910((__int64)&v15);
    return sub_180010910((__int64)&v17);
  }
  return result;
}

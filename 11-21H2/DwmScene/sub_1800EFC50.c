/*
 * XREFs of sub_1800EFC50 @ 0x1800EFC50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001872C @ 0x18001872C (sub_18001872C.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_18001FB60 @ 0x18001FB60 (sub_18001FB60.c)
 *     sub_18002BBC0 @ 0x18002BBC0 (sub_18002BBC0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_1800EFC50(__int64 a1, __int64 a2)
{
  char v4; // cl
  __int64 v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, _QWORD, __int64); // rdi
  __int64 *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // edi
  const char *v17; // rdi
  __int64 v18; // r15
  void (__fastcall *v19)(__int64, void *, _QWORD, const char *); // r12
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // [rsp+30h] [rbp-59h] BYREF
  __int64 v27[4]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v28[4]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF

  v4 = *(_BYTE *)(a1 + 96);
  if ( v4 )
  {
    sub_1800113D0(v28, "GeometryShaderD3D11::Load() -- this function can only be called once per shader instance");
    v24 = sub_1800113D0(
            v27,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\geometryshaderd3d11.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v24, v25, (__int64)v28, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) || *(_DWORD *)(a2 + 32) != *(_DWORD *)(a2 + 24) )
  {
    *(_OWORD *)v28 = 0LL;
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
          *(_OWORD *)v28 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    sub_18001872C(v27, v28);
    sub_1800DA968(v27[0], &v26);
    v8 = v26;
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v26 + 104LL);
    v10 = (__int64 *)(a1 + 104);
    v11 = *(_QWORD *)(a1 + 104);
    if ( v11 )
    {
      *v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 8) )
    {
      v12 = *(_QWORD *)(a2 + 24);
      v13 = (unsigned int)(*(_DWORD *)(a2 + 32) - v12);
    }
    else
    {
      v12 = sub_18001FB60(*(_QWORD *)a2);
      v13 = v15 - v14;
    }
    v16 = v9(v8, v12, v13, 0LL, a1 + 104);
    sub_1800DD668(v27[0], v16);
    if ( v16 < 0 )
    {
      sub_18001F2B4(&stru_1801EA588, 5, "ERROR: Failed to create Geometry shader.\n");
    }
    else
    {
      *(_BYTE *)(a1 + 96) = 1;
      v17 = (const char *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 32) >= 0x10uLL )
        v17 = *(const char **)v17;
      v18 = *v10;
      if ( v18 )
      {
        v19 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v18 + 40LL);
        if ( v17 )
          v20 = strnlen(v17, 0x7FFFFFFFuLL);
        else
          v20 = 0;
        v19(v18, &unk_180127F58, v20, v17);
      }
      v21 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)a2 == v21 )
        v22 = (unsigned int)(*(_DWORD *)(a2 + 32) - *(_DWORD *)(a2 + 24));
      else
        v22 = v21 - *(_QWORD *)a2;
      sub_18002BBC0(a1, v22);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    sub_180010910((__int64)v27);
    sub_180010910((__int64)v28);
    return *(_BYTE *)(a1 + 96);
  }
  return v4;
}

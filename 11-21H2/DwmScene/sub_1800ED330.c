/*
 * XREFs of sub_1800ED330 @ 0x1800ED330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001872C @ 0x18001872C (sub_18001872C.c)
 *     sub_18001FB60 @ 0x18001FB60 (sub_18001FB60.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BBC0 @ 0x18002BBC0 (sub_18002BBC0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800ED330(__int64 a1, __int64 a2)
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
  __int64 *v17; // rax
  const char *v18; // rdi
  __int64 v19; // r15
  void (__fastcall *v20)(__int64, void *, _QWORD, const char *); // r12
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 v27; // [rsp+30h] [rbp-69h] BYREF
  __int128 v28; // [rsp+38h] [rbp-61h] BYREF
  __int64 v29[4]; // [rsp+48h] [rbp-51h] BYREF
  char *v30[3]; // [rsp+68h] [rbp-31h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-19h]
  _QWORD pExceptionObject[7]; // [rsp+88h] [rbp-11h] BYREF

  v4 = *(_BYTE *)(a1 + 96);
  if ( v4 )
  {
    sub_1800113D0(v29, "PixelShaderD3D11::Load() -- this function can only be called once per shader instance");
    v25 = sub_1800113D0(
            v30,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\pixelshaderd3d11.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v25, v26, (__int64)v29, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) || *(_DWORD *)(a2 + 32) != *(_DWORD *)(a2 + 24) )
  {
    v28 = 0LL;
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
          v28 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    sub_18001872C(v29, (__int64 *)&v28);
    sub_1800DA968(v29[0], &v27);
    v8 = v27;
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v27 + 120LL);
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
    sub_1800DD668(v29[0], v16);
    if ( v16 >= 0 )
    {
      *(_BYTE *)(a1 + 96) = 1;
      v17 = sub_18002B9EC(a1, (__int64 *)v30);
      v18 = (const char *)v17;
      if ( (unsigned __int64)v17[3] >= 0x10 )
        v18 = (const char *)*v17;
      v19 = *v10;
      if ( v19 )
      {
        v20 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v19 + 40LL);
        if ( v18 )
          v21 = strnlen(v18, 0x7FFFFFFFuLL);
        else
          v21 = 0;
        v20(v19, &unk_180127F58, v21, v18);
      }
      if ( v31 >= 0x10 )
        sub_180010884(v30[0], v31 + 1);
      v22 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)a2 == v22 )
        v23 = (unsigned int)(*(_DWORD *)(a2 + 32) - *(_DWORD *)(a2 + 24));
      else
        v23 = v22 - *(_QWORD *)a2;
      sub_18002BBC0(a1, v23);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    sub_180010910((__int64)v29);
    sub_180010910((__int64)&v28);
    return *(_BYTE *)(a1 + 96);
  }
  return v4;
}

/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEAG_KPEA_N@Z @ 0x1800443D0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800398D0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal(
        __int64 a1,
        wil *a2,
        unsigned __int16 *a3,
        const struct wil::FailureInfo *a4)
{
  int v8; // eax
  __int64 result; // rax
  const wil::ResultException *v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  unsigned __int16 **v13; // rbp
  wil *v14; // rcx
  __int64 v15; // rbx
  const struct wil::FailureInfo *v16; // r9
  _BYTE *v17; // rbp
  unsigned __int16 *v18; // rbx
  __int64 v19; // rax
  _BYTE *v20; // rbp
  unsigned __int16 *v21; // rbx
  __int64 v22; // rax
  _BYTE *v23; // rdx
  _BYTE *v24; // rdx
  _BYTE *v25; // rdx
  _BYTE v26[32]; // [rsp+0h] [rbp-88h] BYREF
  const wil::ResultException *v27; // [rsp+20h] [rbp-68h] BYREF
  const wil::ResultException *v28; // [rsp+28h] [rbp-60h] BYREF
  const std::bad_alloc *v29; // [rsp+30h] [rbp-58h] BYREF
  const std::bad_alloc *v30; // [rsp+38h] [rbp-50h] BYREF
  exception *v31; // [rsp+40h] [rbp-48h] BYREF
  __int64 v32; // [rsp+48h] [rbp-40h]
  int v33; // [rsp+50h] [rbp-38h]

  if ( a2 )
    *(_WORD *)a2 = 0;
  *(_BYTE *)a4 = 0;
  if ( g_pfnResultFromCaughtException_CppWinRt )
  {
    v8 = g_pfnResultFromCaughtException_CppWinRt(a2, a3, a4);
    if ( v8 < 0 )
      goto LABEL_5;
  }
  if ( g_pfnResultFromCaughtException_WinRt )
  {
    v8 = g_pfnResultFromCaughtException_WinRt(a2, a3, a4);
LABEL_5:
    LODWORD(v32) = v8;
    HIDWORD(v32) = wil::details::HrToNtStatus((wil::details *)(unsigned int)v8);
    LOBYTE(v33) = 0;
    *(_QWORD *)a1 = v32;
    *(_DWORD *)(a1 + 8) = v33;
    return a1;
  }
  try
  {
    if ( wil::g_pfnResultFromCaughtException )
      throw;
  }
  catch ( const wil::ResultException *v27 )
  {
    *(_BYTE *)a4 = 1;
    v10 = v27;
    if ( a2 )
      wil::GetFailureLogString(a2, a3, (__int64)v27 + 24, a4);
    v32 = *((_QWORD *)v10 + 4);
    LOBYTE(v33) = (*((_BYTE *)v10 + 28) & 8) != 0;
    goto LABEL_11;
  }
  catch ( const std::bad_alloc *v29 )
  {
    if ( a2 )
    {
      v11 = (*(__int64 (__fastcall **)(const std::bad_alloc *))(*(_QWORD *)v29 + 8LL))(v29);
      StringCchPrintfW((unsigned __int16 *)a2, (unsigned __int64)a3, L"std::exception: %hs", v11);
    }
    LODWORD(v32) = -2147024882;
    HIDWORD(v32) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL);
    LOBYTE(v33) = 0;
    goto LABEL_11;
  }
  catch ( ... )
  {
    v12 = wil::details::RecognizeCaughtExceptionFromCallback(a2, a3);
    if ( v12 < 0 )
    {
      LODWORD(v32) = v12;
      HIDWORD(v32) = wil::details::HrToNtStatus((wil::details *)(unsigned int)v12);
      LOBYTE(v33) = 0;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v28 )
  {
    v23 = v26;
    v13 = (unsigned __int16 **)v23;
    **((_BYTE **)v23 + 21) = 1;
    v14 = (wil *)*((_QWORD *)v23 + 19);
    v15 = *((_QWORD *)v23 + 5);
    if ( v14 )
      wil::GetFailureLogString(v14, v13[20], v15 + 24, v16);
    *((_DWORD *)v13 + 18) = *(_DWORD *)(v15 + 32);
    *((_DWORD *)v13 + 19) = *(_DWORD *)(v15 + 36);
    *((_BYTE *)v13 + 80) = (*(_BYTE *)(v15 + 28) & 8) != 0;
    goto LABEL_11;
  }
  catch ( const std::bad_alloc *v30 )
  {
    v24 = v26;
    v17 = v24;
    v18 = (unsigned __int16 *)*((_QWORD *)v24 + 19);
    if ( v18 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v17 + 7) + 8LL))(*((_QWORD *)v17 + 7));
      StringCchPrintfW(v18, *((_QWORD *)v17 + 20), L"std::exception: %hs", v19);
    }
    *((_DWORD *)v17 + 18) = -2147024882;
    *((_DWORD *)v17 + 19) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL);
    v17[80] = 0;
    goto LABEL_11;
  }
  catch ( exception *v31 )
  {
    v25 = v26;
    v20 = v25;
    v21 = (unsigned __int16 *)*((_QWORD *)v25 + 19);
    if ( v21 )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v20 + 8) + 8LL))(*((_QWORD *)v20 + 8));
      StringCchPrintfW(v21, *((_QWORD *)v20 + 20), L"std::exception: %hs", v22);
    }
    *((_DWORD *)v20 + 18) = -2147024322;
    *((_DWORD *)v20 + 19) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
    v20[80] = 0;
    goto LABEL_11;
  }
  catch ( ... )
  {
LABEL_10:
    LODWORD(v32) = 0;
    HIDWORD(v32) = wil::details::HrToNtStatus(0LL);
    LOBYTE(v33) = 0;
LABEL_11:
    result = a1;
    *(_QWORD *)a1 = v32;
    *(_DWORD *)(a1 + 8) = v33;
    return result;
  }
  return result;
}

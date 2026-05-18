/*
 * XREFs of sub_1800E4630 @ 0x1800E4630
 * Callers:
 *     sub_1800E3C50 @ 0x1800E3C50 (sub_1800E3C50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180020FCC @ 0x180020FCC (sub_180020FCC.c)
 *     sub_18002BBC0 @ 0x18002BBC0 (sub_18002BBC0.c)
 *     sub_18005C638 @ 0x18005C638 (sub_18005C638.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E32C8 @ 0x1800E32C8 (sub_1800E32C8.c)
 *     sub_1800E39FC @ 0x1800E39FC (sub_1800E39FC.c)
 *     sub_1800E4DA0 @ 0x1800E4DA0 (sub_1800E4DA0.c)
 *     sub_1800E5D28 @ 0x1800E5D28 (sub_1800E5D28.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 *__fastcall sub_1800E4630(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        void *a9)
{
  unsigned int v12; // r12d
  unsigned int v13; // r14d
  void *v14; // r13
  __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // eax
  int v18; // ecx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __int64 v23; // rbx
  int v24; // eax
  ULONG_PTR v25; // r15
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *result; // rax
  LPVOID **v30; // rsi
  LPVOID *v31; // rdx
  LPVOID *v32; // rbx
  void *v33; // rbx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // r8
  unsigned int v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v39; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v43; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v44; // [rsp+78h] [rbp-88h] BYREF
  LPVOID lpMem[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47[5]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v49; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v50; // [rsp+E0h] [rbp-20h]
  int v51; // [rsp+F0h] [rbp-10h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+100h] [rbp+0h] BYREF
  __int64 v53[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+1C0h] [rbp+C0h] BYREF
  void *retaddr; // [rsp+238h] [rbp+138h]

  LODWORD(v41) = a2;
  v12 = a6;
  v13 = a8;
  LODWORD(v40) = a2;
  v39 = a3;
  v44 = a4;
  v43 = a6;
  v42 = a7;
  v37 = a8;
  v14 = a9;
  if ( (a8 & 1) != 0 && a6 == 17 )
  {
    sub_1800113D0(v53, "Unsupported texture options: Format::UInt8_RGBA cannot be used with BindToShader");
    v35 = sub_1800113D0(
            v47,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_180079B60(pExceptionObject, (__int64)v35, v36, (const char *)v53, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v15 = sub_1800E39FC((__int64)v47, a3, a4, a6, a7, a8);
  v49 = *(_OWORD *)v15;
  v50 = *(_OWORD *)(v15 + 16);
  v16 = *(_DWORD *)(v15 + 32);
  v51 = v16;
  DWORD2(v49) = a5;
  if ( (v13 & 0x20) != 0 )
  {
    v17 = a4;
    if ( a3 >= a4 )
      v17 = a3;
    v18 = 0;
    while ( v17 > 1 )
    {
      v17 >>= 1;
      ++v18;
    }
    HIDWORD(v49) = v18 != -1;
    v51 = v16 | 1;
    DWORD2(v50) |= 0x20u;
    *(_BYTE *)(a1 + 208) = 1;
  }
  lpMem[0] = v14;
  LODWORD(lpMem[1]) = v41;
  HIDWORD(lpMem[1]) = sub_1800E5D28(v12, a3, a4, &v40);
  if ( (v13 & 0x20) != 0 )
  {
    v19 = 4LL * *(_QWORD *)(a1 + 200) / 3uLL;
    *(_QWORD *)(a1 + 200) = v19;
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 200);
  }
  sub_18002BBC0(a1, v19);
  v48 = *(_OWORD *)lpMem;
  v38 = 0LL;
  *(_OWORD *)v53 = 0LL;
  v20 = *(_QWORD *)(a1 + 80);
  if ( v20 )
  {
    v21 = *(_DWORD *)(v20 + 8);
    while ( v21 )
    {
      v22 = v21;
      v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 8), v21 + 1, v21);
      if ( v22 == v21 )
      {
        *(_OWORD *)v53 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
    v13 = v37;
  }
  sub_180020FCC(v47, v53);
  sub_180010910((__int64)v53);
  sub_1800DA968(v47[0], &v41);
  v23 = v41;
  v24 = (*(__int64 (__fastcall **)(__int64, __int128 *, unsigned __int64, __int64 *))(*(_QWORD *)v41 + 48LL))(
          v41,
          &v49,
          (unsigned __int64)&v48 & -(__int64)(v14 != 0LL),
          &v38);
  v25 = v24;
  sub_1800DD668(v47[0], v24);
  if ( (v25 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v25;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  sub_180010910((__int64)v47);
  sub_18005C638((__int64 *)&v40, &v39, &v44, &a5, &v43, &v37, &v42);
  sub_1800E4DA0(a1, (unsigned int)&v46, v38, v13, HIDWORD(v49));
  v26 = v38;
  v38 = 0LL;
  v27 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 176) = v26;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v28 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 160) = v46;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v39 = 1;
  result = sub_1800E32C8((__int64 *)lpMem, (__int64 *)&v40, (int *)&v49 + 3, (int *)&v39);
  v30 = (LPVOID **)(a1 + 112);
  if ( v30 != (LPVOID **)result )
  {
    v31 = (LPVOID *)*result;
    *result = 0LL;
    v32 = *v30;
    *v30 = v31;
    if ( v32 )
    {
      if ( *v32 )
        sub_18000B998(*v32);
      result = (__int64 *)sub_18000B998(v32);
    }
  }
  v33 = lpMem[0];
  if ( lpMem[0] )
  {
    if ( *(_QWORD *)lpMem[0] )
      sub_18000B998(*(LPVOID *)lpMem[0]);
    result = (__int64 *)sub_18000B998(v33);
  }
  if ( v40 )
    result = (__int64 *)sub_18000B998(v40);
  v34 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    return (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  return result;
}

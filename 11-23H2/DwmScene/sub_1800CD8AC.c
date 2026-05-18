/*
 * XREFs of sub_1800CD8AC @ 0x1800CD8AC
 * Callers:
 *     sub_1800CD1B0 @ 0x1800CD1B0 (sub_1800CD1B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001FC84 @ 0x18001FC84 (sub_18001FC84.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 *     sub_180055070 @ 0x180055070 (sub_180055070.c)
 *     sub_180055734 @ 0x180055734 (sub_180055734.c)
 *     sub_180055754 @ 0x180055754 (sub_180055754.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800CB6E8 @ 0x1800CB6E8 (sub_1800CB6E8.c)
 *     sub_1800CC1C8 @ 0x1800CC1C8 (sub_1800CC1C8.c)
 *     sub_1800CC82C @ 0x1800CC82C (sub_1800CC82C.c)
 *     sub_1800CD024 @ 0x1800CD024 (sub_1800CD024.c)
 *     sub_1800CDE90 @ 0x1800CDE90 (sub_1800CDE90.c)
 *     sub_1800CEBF8 @ 0x1800CEBF8 (sub_1800CEBF8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800CD8AC(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        __int64 a9)
{
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  __int64 v14; // r12
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // eax
  int v20; // ecx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int128 *, unsigned __int64, __int64 *); // rdi
  int v23; // eax
  ULONG_PTR v24; // rbx
  __int64 *v25; // rax
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v34; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v35; // [rsp+88h] [rbp-78h] BYREF
  void *v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int128 v38; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+E0h] [rbp-20h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v43[5]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+1B8h] [rbp+B8h] BYREF
  void *retaddr; // [rsp+248h] [rbp+148h]

  LODWORD(v30) = a2;
  v12 = a8;
  v13 = a6;
  LODWORD(v31) = a2;
  v27 = a3;
  v35 = a4;
  v34 = a6;
  v32 = a7;
  v33 = a8;
  v14 = a9;
  if ( (a8 & 1) != 0 && a6 == 17 )
  {
    sub_180010DD0(v43, (__int64)"Unsupported texture options: Format::UInt8_RGBA cannot be used with BindToShader");
    v15 = sub_180010DD0(
            &v36,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_18006ED7C(pExceptionObject, (__int64)v15, v16, (const char *)v43, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v17 = sub_1800CD024((__int64)v43, a3, a4, a6, a7, a8);
  v39 = *(_OWORD *)v17;
  v40 = *(_OWORD *)(v17 + 16);
  v18 = *(_DWORD *)(v17 + 32);
  v41 = v18;
  DWORD2(v39) = a5;
  if ( (v12 & 0x20) != 0 )
  {
    v19 = a4;
    if ( a3 >= a4 )
      v19 = a3;
    v20 = 0;
    while ( v19 > 1 )
    {
      v19 >>= 1;
      ++v20;
    }
    HIDWORD(v39) = v20 != -1;
    v41 = v18 | 1;
    DWORD2(v40) |= 0x20u;
    *(_BYTE *)(a1 + 208) = 1;
  }
  *(_QWORD *)&v29 = v14;
  DWORD2(v29) = v30;
  HIDWORD(v29) = sub_1800CEBF8(v13, a3, a4, &v31);
  if ( (v12 & 0x20) != 0 )
    *(_QWORD *)(a1 + 200) = 4LL * *(_QWORD *)(a1 + 200) / 3uLL;
  sub_1800297B0(a1, *(_QWORD *)(a1 + 200), (v12 & 6) != 0 ? 3 : 11);
  v38 = v29;
  v28 = 0LL;
  sub_180011C50(a1 + 72, &v36);
  sub_18001FC84(&v29, (__int64 *)&v36);
  if ( v37 )
    sub_180010530(v37);
  sub_1800C589C(v29, &v31);
  v21 = v31;
  v22 = *(__int64 (__fastcall **)(__int64, __int128 *, unsigned __int64, __int64 *))(*(_QWORD *)v31 + 48LL);
  sub_18000E72C(&v28);
  v23 = v22(v21, &v39, (unsigned __int64)&v38 & -(__int64)(v14 != 0), &v28);
  v24 = v23;
  sub_1800C7750(v29, v23);
  if ( (v24 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v24;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18000E72C(&v31);
  if ( *((_QWORD *)&v29 + 1) )
    sub_180010530(*((__int64 *)&v29 + 1));
  sub_180055070((__int64 *)&v36, &v27, &v35, &a5, &v34, &v33, &v32);
  sub_1800CDE90(a1, (unsigned int)&v30, v28, v12, HIDWORD(v39));
  sub_1800CB6E8((__int64 *)(a1 + 176), &v28);
  sub_1800CB6E8((__int64 *)(a1 + 160), &v30);
  v27 = 1;
  v25 = sub_1800CC82C((__int64 *)&v29, (__int64 *)&v36, (int *)&v39 + 3, (int *)&v27);
  sub_1800CC1C8((void ***)(a1 + 112), (void ***)v25);
  sub_180055734(&v29);
  sub_18000E72C(&v30);
  sub_180055754(&v36);
  return sub_18000E72C(&v28);
}

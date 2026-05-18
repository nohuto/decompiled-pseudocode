/*
 * XREFs of sub_1800D85E8 @ 0x1800D85E8
 * Callers:
 *     sub_1800D3790 @ 0x1800D3790 (sub_1800D3790.c)
 *     sub_1800D8450 @ 0x1800D8450 (sub_1800D8450.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18006EDE8 @ 0x18006EDE8 (sub_18006EDE8.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800D85E8(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // eax
  __int128 *v9; // rcx
  __int128 *v10; // r14
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, int *, __int128 *, __int64 *); // rdi
  int v13; // ebx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v17[3]; // [rsp+38h] [rbp-A1h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-89h] BYREF
  int v19; // [rsp+70h] [rbp-69h] BYREF
  int v20; // [rsp+74h] [rbp-65h]
  int v21; // [rsp+78h] [rbp-61h]
  __int64 v22; // [rsp+7Ch] [rbp-5Dh]
  int v23; // [rsp+84h] [rbp-55h]
  _QWORD v24[4]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v26; // [rsp+E0h] [rbp+7h] BYREF

  v17[1] = (__int64)a1;
  v22 = 0LL;
  v23 = 0;
  v19 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v9 = &v26;
  do
  {
    *(_DWORD *)v9 = v8++;
    v9 = (__int128 *)((char *)v9 + 4);
  }
  while ( v8 < 4 );
  v20 = *((_DWORD *)&v26 + *(unsigned int *)(a4 + 24));
  v21 = a6;
  sub_1800C589C(a3, v17);
  v26 = 0LL;
  v10 = 0LL;
  if ( v20 == 2 )
  {
    LODWORD(v22) = 0x10000;
  }
  else
  {
    *(_QWORD *)&v26 = a5;
    v10 = &v26;
  }
  *a1 = 0LL;
  v11 = v17[0];
  v12 = *(__int64 (__fastcall **)(__int64, int *, __int128 *, __int64 *))(*(_QWORD *)v17[0] + 24LL);
  sub_18000E72C(a1);
  v13 = v12(v11, &v19, v10, a1);
  sub_1800C7750(a3, v13);
  if ( v13 < 0 )
  {
    sub_180010DD0(v24, (__int64)"D3DBufferUtils::CreateBuffer() - Direct3D could not create the buffer");
    v14 = sub_180010DD0(
            v18,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\d3dbufferutils.cpp");
    sub_18006EDE8(pExceptionObject, (__int64)v14, v15, v13, (const char *)v24, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18000E72C(v17);
  return a1;
}

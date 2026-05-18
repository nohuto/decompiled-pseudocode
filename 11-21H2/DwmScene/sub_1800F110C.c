/*
 * XREFs of sub_1800F110C @ 0x1800F110C
 * Callers:
 *     sub_1800EB150 @ 0x1800EB150 (sub_1800EB150.c)
 *     sub_1800F0F20 @ 0x1800F0F20 (sub_1800F0F20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180079BE8 @ 0x180079BE8 (sub_180079BE8.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800F110C(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // eax
  __int128 *v9; // rcx
  __int128 *v10; // r8
  __int64 v11; // rbx
  int v12; // esi
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD v16[3]; // [rsp+38h] [rbp-A1h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-89h] BYREF
  int v18; // [rsp+70h] [rbp-69h] BYREF
  int v19; // [rsp+74h] [rbp-65h]
  int v20; // [rsp+78h] [rbp-61h]
  __int64 v21; // [rsp+7Ch] [rbp-5Dh]
  int v22; // [rsp+84h] [rbp-55h]
  _QWORD v23[4]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v25; // [rsp+E0h] [rbp+7h] BYREF

  v16[1] = a1;
  v21 = 0LL;
  v22 = 0;
  v18 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v9 = &v25;
  do
  {
    *(_DWORD *)v9 = v8++;
    v9 = (__int128 *)((char *)v9 + 4);
  }
  while ( v8 < 4 );
  v19 = *((_DWORD *)&v25 + *(unsigned int *)(a4 + 24));
  v20 = a6;
  sub_1800DA968(a3, v16);
  v25 = 0LL;
  v10 = 0LL;
  if ( v19 == 2 )
  {
    LODWORD(v21) = 0x10000;
  }
  else
  {
    *(_QWORD *)&v25 = a5;
    v10 = &v25;
  }
  *a1 = 0LL;
  v11 = v16[0];
  v12 = (*(__int64 (__fastcall **)(_QWORD, int *, __int128 *, _QWORD *))(*(_QWORD *)v16[0] + 24LL))(
          v16[0],
          &v18,
          v10,
          a1);
  sub_1800DD668(a3, v12);
  if ( v12 < 0 )
  {
    sub_1800113D0(v23, "D3DBufferUtils::CreateBuffer() - Direct3D could not create the buffer");
    v14 = sub_1800113D0(
            v17,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\d3dbufferutils.cpp");
    sub_180079BE8(pExceptionObject, (__int64)v14, v15, v12, (const char *)v23, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return a1;
}

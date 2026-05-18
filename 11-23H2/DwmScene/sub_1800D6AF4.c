/*
 * XREFs of sub_1800D6AF4 @ 0x1800D6AF4
 * Callers:
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180016268 @ 0x180016268 (sub_180016268.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_1800D5C60 @ 0x1800D5C60 (sub_1800D5C60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800D6AF4(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 *v5; // rax
  int v6; // r14d
  __int64 v7; // rsi
  _QWORD *v8; // rax
  int v9; // r8d
  __int64 *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rax
  _QWORD *v19; // rax
  __int64 v21; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+38h] [rbp-61h]
  __int64 v23; // [rsp+40h] [rbp-59h]
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  __int64 v25; // [rsp+50h] [rbp-49h]
  _QWORD v26[4]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+88h] [rbp-11h] BYREF

  v23 = a2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v5 = sub_180016268(v4, &v21);
  sub_180011020((_QWORD *)(a1 + 128), v5);
  if ( v22 )
    sub_180010530(v22);
  v6 = 69;
  if ( *(_BYTE *)(a2 + 6) )
  {
    v6 = 325;
    sub_1800124F8((__int64 *)(a1 + 176), (_QWORD *)(a1 + 128));
  }
  v7 = a2 + 8;
  v8 = sub_18001246C(&v21, (_QWORD *)(a1 + 128));
  sub_1800D5C60(a2 + 8, (__int64)v8, v9, v6);
  v10 = sub_1800566F0(*(_QWORD *)(a1 + 128), &v21, *(_DWORD *)(a1 + 88));
  sub_180011020((_QWORD *)(a1 + 96), v10);
  if ( v22 )
    sub_180010530(v22);
  if ( *(_BYTE *)(a2 + 5) )
  {
    sub_180010DD0(v26, (__int64)"Single sampled stencil reads are not supported");
    v12 = sub_180010DD0(
            &v24,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v12, v13, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_BYTE *)(a2 + 4) )
  {
    if ( *(_DWORD *)a2 != 2 )
    {
      sub_180010DD0(&v24, (__int64)"Single sampled readable depth is only supported for Depth32 format");
      v14 = sub_180010DD0(
              v26,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
      sub_18003AF58(pExceptionObject, (__int64)v14, v15, (__int64)&v24, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    sub_180011C50(a1 + 72, &v24);
    v16 = sub_180016268(v4, &v21);
    sub_180011020((_QWORD *)(a1 + 160), v16);
    if ( v22 )
      sub_180010530(v22);
    v17 = sub_18001246C(&v21, (_QWORD *)(a1 + 160));
    sub_1800D5C60(v7, (__int64)v17, 3, 64);
    v18 = sub_180016268(v4, &v21);
    sub_180011020((_QWORD *)(a1 + 144), v18);
    if ( v22 )
      sub_180010530(v22);
    v19 = sub_18001246C(&v21, (_QWORD *)(a1 + 144));
    sub_1800D5C60(v7, (__int64)v19, 3, 1);
    if ( v25 )
      sub_180010530(v25);
  }
  return sub_18001DE1C(v7, v11);
}

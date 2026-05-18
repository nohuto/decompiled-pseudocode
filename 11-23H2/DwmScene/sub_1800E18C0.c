/*
 * XREFs of sub_1800E18C0 @ 0x1800E18C0
 * Callers:
 *     sub_1800E2990 @ 0x1800E2990 (sub_1800E2990.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_1800E1AFC @ 0x1800E1AFC (sub_1800E1AFC.c)
 *     sub_1800E1F58 @ 0x1800E1F58 (sub_1800E1F58.c)
 *     sub_1800E2F50 @ 0x1800E2F50 (sub_1800E2F50.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E18C0(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v12; // r11d
  _QWORD *v13; // r9
  unsigned __int8 v14; // si
  __int64 v15; // rbx
  unsigned int v16; // r15d
  __int64 result; // rax
  unsigned int v18; // ebp
  unsigned int v19; // r10d
  unsigned int v20; // r12d
  unsigned int v21; // r13d
  char v22; // di
  unsigned int v23; // [rsp+40h] [rbp-D8h]
  int v24; // [rsp+44h] [rbp-D4h]
  __int64 v26; // [rsp+70h] [rbp-A8h]
  _QWORD v27[4]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+A0h] [rbp-78h] BYREF

  v26 = a3;
  v12 = a1;
  v13 = a7;
  if ( a6 == 1 )
  {
    v14 = 1;
    v24 = 1;
  }
  else
  {
    v14 = 0;
    v24 = 3;
  }
  v15 = 0LL;
  v16 = 0;
  result = 2 * (unsigned int)v14;
  v18 = a4 - result;
  while ( (unsigned int)v15 < v18 )
  {
    v19 = *(_DWORD *)(a3 + 4 * v15);
    v23 = v19;
    v20 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v15 + 1));
    v21 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v15 + 2));
    if ( v19 >= a2 || v20 >= a2 || v21 >= a2 )
    {
      sub_180010DD0(v27, (__int64)"Index out of range while computing tangents and normals");
      sub_1800E1AFC(pExceptionObject, v27);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v13 && v16 == 100 * (v16 / 0x64) )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 40LL))(*v13);
      v19 = v23;
      v12 = a1;
    }
    v22 = v14 && (v15 & 1) != 0;
    sub_1800E2F50(v12, a5, v19, v20, v21, v22, a9, a10);
    result = sub_1800E1F58(a1, v23, v20, v21, v22, a8);
    v15 = (unsigned int)(v24 + v15);
    ++v16;
    a3 = v26;
    v13 = a7;
  }
  return result;
}

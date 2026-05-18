/*
 * XREFs of sub_1800FC9DC @ 0x1800FC9DC
 * Callers:
 *     sub_1800FD950 @ 0x1800FD950 (sub_1800FD950.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800FD04C @ 0x1800FD04C (sub_1800FD04C.c)
 *     sub_1800FE460 @ 0x1800FE460 (sub_1800FE460.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FC9DC(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9)
{
  int v11; // r11d
  _QWORD *v12; // r9
  unsigned __int8 v13; // di
  int v14; // r14d
  __int64 v15; // rbx
  unsigned int v16; // ebp
  __int64 result; // rax
  unsigned int v18; // r15d
  unsigned int v19; // r10d
  unsigned int v20; // r12d
  unsigned int v21; // r13d
  char v22; // al
  unsigned int v23; // [rsp+40h] [rbp-D8h]
  __int64 v25; // [rsp+68h] [rbp-B0h]
  _QWORD v26[4]; // [rsp+78h] [rbp-A0h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+98h] [rbp-80h] BYREF

  v25 = a3;
  v11 = a1;
  v12 = a7;
  if ( a6 == 1 )
  {
    v13 = 1;
    v14 = 1;
  }
  else
  {
    v13 = 0;
    v14 = 3;
  }
  v15 = 0LL;
  v16 = 0;
  result = 2 * (unsigned int)v13;
  v18 = a4 - result;
  if ( v18 )
  {
    do
    {
      v19 = *(_DWORD *)(a3 + 4 * v15);
      v23 = v19;
      v20 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v15 + 1));
      v21 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v15 + 2));
      if ( v19 >= a2 || v20 >= a2 || v21 >= a2 )
      {
        sub_1800113D0(v26, "Index out of range while computing tangents");
        sub_1800FD04C(pExceptionObject, v26);
        throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
      }
      if ( *v12 && v16 == 100 * (v16 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 40LL))(*v12);
        v19 = v23;
        v11 = a1;
      }
      v22 = v13 && (v15 & 1) != 0;
      result = sub_1800FE460(v11, a5, v19, v20, v21, v22, a8, a9);
      v15 = (unsigned int)(v14 + v15);
      ++v16;
      a3 = v25;
      v12 = a7;
      v11 = a1;
    }
    while ( (unsigned int)v15 < v18 );
  }
  return result;
}

/*
 * XREFs of sub_1800E16A4 @ 0x1800E16A4
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
__int64 __fastcall sub_1800E16A4(
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
  __int64 v11; // r9
  int v13; // r11d
  _QWORD *v14; // r10
  unsigned __int8 v15; // si
  __int64 v16; // rbx
  unsigned int v17; // r13d
  __int64 result; // rax
  unsigned int v19; // ebp
  unsigned int v20; // edx
  unsigned int v21; // r12d
  unsigned int v22; // r15d
  char v23; // di
  unsigned int v24; // [rsp+40h] [rbp-D8h]
  int v25; // [rsp+44h] [rbp-D4h]
  _QWORD v28[4]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+A0h] [rbp-78h] BYREF

  v11 = a3;
  v13 = a1;
  v14 = a7;
  if ( a6 == 1 )
  {
    v15 = 1;
    v25 = 1;
  }
  else
  {
    v15 = 0;
    v25 = 3;
  }
  v16 = 0LL;
  v17 = 0;
  result = 2 * (unsigned int)v15;
  v19 = a4 - result;
  while ( (unsigned int)v16 < v19 )
  {
    v20 = *(unsigned __int16 *)(v11 + 2 * v16);
    v24 = v20;
    if ( v20 >= a2
      || (v21 = *(unsigned __int16 *)(v11 + 2LL * (unsigned int)(v16 + 1)), v21 >= a2)
      || (v22 = *(unsigned __int16 *)(v11 + 2LL * (unsigned int)(v16 + 2)), v22 >= a2) )
    {
      sub_180010DD0(v28, (__int64)"Index out of range while computing tangents and normals");
      sub_1800E1AFC(pExceptionObject, v28);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v14 )
    {
      if ( v17 == 100 * (v17 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 40LL))(*v14);
        v13 = a1;
      }
      v20 = v24;
    }
    v23 = v15 && (v16 & 1) != 0;
    sub_1800E2F50(v13, a5, v20, v21, v22, v23, a9, a10);
    result = sub_1800E1F58(a1, v24, v21, v22, v23, a8);
    v16 = (unsigned int)(v25 + v16);
    ++v17;
    v11 = a3;
    v14 = a7;
  }
  return result;
}

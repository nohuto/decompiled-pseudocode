/*
 * XREFs of sub_1800FC4BC @ 0x1800FC4BC
 * Callers:
 *     sub_1800FD588 @ 0x1800FD588 (sub_1800FD588.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800FD04C @ 0x1800FD04C (sub_1800FD04C.c)
 *     sub_1800FD3E8 @ 0x1800FD3E8 (sub_1800FD3E8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FC4BC(int a1, unsigned int a2, __int64 a3, int a4, int a5, _QWORD *a6, __int64 a7)
{
  __int64 v8; // r9
  int v10; // r11d
  _QWORD *v11; // r10
  unsigned __int8 v12; // di
  int v13; // r14d
  __int64 v14; // rbx
  unsigned int v15; // ebp
  __int64 result; // rax
  unsigned int v17; // r15d
  unsigned int v18; // edx
  unsigned int v19; // r13d
  unsigned int v20; // r12d
  char v21; // al
  unsigned int v22; // [rsp+30h] [rbp-C8h]
  _QWORD v25[4]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-80h] BYREF

  v8 = a3;
  v10 = a1;
  v11 = a6;
  if ( a5 == 1 )
  {
    v12 = 1;
    v13 = 1;
  }
  else
  {
    v12 = 0;
    v13 = 3;
  }
  v14 = 0LL;
  v15 = 0;
  result = 2 * (unsigned int)v12;
  v17 = a4 - result;
  if ( v17 )
  {
    do
    {
      v18 = *(unsigned __int16 *)(v8 + 2 * v14);
      v22 = v18;
      if ( v18 >= a2
        || (v19 = *(unsigned __int16 *)(v8 + 2LL * (unsigned int)(v14 + 1)), v19 >= a2)
        || (v20 = *(unsigned __int16 *)(v8 + 2LL * (unsigned int)(v14 + 2)), v20 >= a2) )
      {
        sub_1800113D0(v25, "Index out of range while computing normals");
        sub_1800FD04C(pExceptionObject, v25);
        throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
      }
      if ( *v11 )
      {
        if ( v15 == 100 * (v15 / 0x64) )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 40LL))(*v11);
          v10 = a1;
        }
        v18 = v22;
      }
      v21 = v12 && (v14 & 1) != 0;
      result = sub_1800FD3E8(v10, v18, v19, v20, v21, a7);
      v14 = (unsigned int)(v13 + v14);
      ++v15;
      v8 = a3;
    }
    while ( (unsigned int)v14 < v17 );
  }
  return result;
}

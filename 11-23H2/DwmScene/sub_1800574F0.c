/*
 * XREFs of sub_1800574F0 @ 0x1800574F0
 * Callers:
 *     sub_180057484 @ 0x180057484 (sub_180057484.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180056CD4 @ 0x180056CD4 (sub_180056CD4.c)
 *     sub_180056FB8 @ 0x180056FB8 (sub_180056FB8.c)
 *     sub_180057A80 @ 0x180057A80 (sub_180057A80.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=6
int __fastcall sub_1800574F0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  char v7; // si
  struct _Mtx_internal_imp_t *v8; // rbx
  char v9; // r14
  bool v10; // r15
  unsigned int v11; // eax
  int v12; // r8d
  _QWORD *v13; // rax
  unsigned int v14; // eax
  int v15; // r8d
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v20; // [rsp+38h] [rbp-C8h]
  __int64 v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  _QWORD v26[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v30[56]; // [rsp+E0h] [rbp-20h] BYREF

  v22 = a4;
  v21 = a3;
  v7 = 0;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v25 = a1 + 128;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 128));
  sub_180011C50(*a2 + 56LL, &v23);
  v9 = 1;
  v10 = 1;
  if ( v23 )
  {
    v7 = 1;
    if ( *(_QWORD *)sub_18001265C(v23, &v27) )
      v10 = 0;
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( v28 )
      sub_180010530(v28);
  }
  if ( v10 )
  {
    sub_180010DD0(&v27, (__int64)"Cameras added to Displays must be attached to a scene.");
    v11 = (unsigned int)sub_180010DD0(
                          v26,
                          (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                   "source\\engine\\display.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v11, v12, (unsigned int)&v27, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180057A80(a1, &v27);
  if ( !v27 || (v13 = (_QWORD *)sub_18001265C(v23, &v19), v7 |= 2u, !sub_180011DF0(v13, &v27)) )
    v9 = 0;
  if ( (v7 & 2) != 0 && v20 )
    sub_180010530((__int64)v20);
  if ( v9 )
  {
    sub_180010DD0(pExceptionObject, (__int64)"Displays require that all cameras be in the same scene.");
    v14 = (unsigned int)sub_180010DD0(
                          v26,
                          (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                   "source\\engine\\display.cpp");
    sub_18006ED7C((unsigned int)v30, v14, v15, (unsigned int)pExceptionObject, 0);
    throw (Spectre::Engine::EngineException *)v30;
  }
  v16 = *(_QWORD **)(a1 + 48);
  if ( v16 == *(_QWORD **)(a1 + 56) )
  {
    sub_180056CD4((char **)(a1 + 40), *(char **)(a1 + 48), a2);
  }
  else
  {
    sub_18001246C(v16, a2);
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  sub_180015604(&v19, a2);
  v17 = *(_QWORD *)sub_180056FB8((__int64 *)(a1 + 88), (__int64)v26, (__int64)&v19);
  *(_QWORD *)(v17 + 48) = v21;
  *(_QWORD *)(v17 + 56) = v22;
  *(_DWORD *)(v17 + 64) = a5;
  if ( v20 )
    sub_180010574(v20);
  if ( v28 )
    sub_180010530(v28);
  if ( v24 )
    sub_180010530(v24);
  return Mtx_unlock(v8);
}

/*
 * XREFs of sub_180051780 @ 0x180051780
 * Callers:
 *     sub_18005346C @ 0x18005346C (sub_18005346C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800694C0 @ 0x1800694C0 (sub_1800694C0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_18008E3B8 @ 0x18008E3B8 (sub_18008E3B8.c)
 *     sub_180090184 @ 0x180090184 (sub_180090184.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180051780(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v27; // eax
  int v28; // r8d
  _QWORD v29[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v33[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v34[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v35[3]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v36[16]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v37[16]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v38[16]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v39[4]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v40[4]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+118h] [rbp+18h] BYREF

  v35[2] = a3;
  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3) )
  {
    sub_1800113D0(v40, "Out of range");
    v27 = (unsigned int)sub_1800113D0(
                          v39,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\meshinstance.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v27, v28, (unsigned int)v40, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 104) + 88 * a2);
  v6 = (_QWORD *)sub_1800694C0(*a3, 0LL);
  v7 = v6[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = v6[1];
  }
  v35[0] = *v6;
  v35[1] = v7;
  v8 = (__int64 *)sub_180090184(v35[0], v36);
  v9 = *v8;
  v10 = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  v29[0] = v5[3];
  v5[3] = v9;
  v29[1] = v5[4];
  v5[4] = v10;
  sub_180010910((__int64)v29);
  sub_180010910((__int64)v36);
  v11 = (_QWORD *)sub_1800694C0(*a3, 3LL);
  v12 = v11[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = v11[1];
  }
  v34[0] = *v11;
  v34[1] = v12;
  v13 = (__int64 *)sub_180090184(v34[0], v37);
  v14 = *v13;
  v15 = v13[1];
  *v13 = 0LL;
  v13[1] = 0LL;
  v30[0] = v5[5];
  v5[5] = v14;
  v30[1] = v5[6];
  v5[6] = v15;
  sub_180010910((__int64)v30);
  sub_180010910((__int64)v37);
  v16 = (_QWORD *)sub_1800694C0(*a3, 7LL);
  v17 = v16[1];
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v17 = v16[1];
  }
  v33[0] = *v16;
  v33[1] = v17;
  v18 = (__int64 *)sub_180090184(v33[0], v38);
  v19 = *v18;
  v20 = v18[1];
  *v18 = 0LL;
  v18[1] = 0LL;
  v31[0] = v5[7];
  v5[7] = v19;
  v31[1] = v5[8];
  v5[8] = v20;
  sub_180010910((__int64)v31);
  sub_180010910((__int64)v38);
  v21 = (_QWORD *)sub_1800694C0(*a3, 8LL);
  v22 = v21[1];
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    v22 = v21[1];
  }
  v40[0] = *v21;
  v40[1] = v22;
  v23 = (__int64 *)sub_180090184(v40[0], v39);
  v24 = *v23;
  v25 = v23[1];
  *v23 = 0LL;
  v23[1] = 0LL;
  v32[0] = v5[9];
  v5[9] = v24;
  v32[1] = v5[10];
  v5[10] = v25;
  sub_180010910((__int64)v32);
  sub_180010910((__int64)v39);
  sub_18008E3B8(a1);
  sub_180010910((__int64)v40);
  sub_180010910((__int64)v33);
  sub_180010910((__int64)v34);
  sub_180010910((__int64)v35);
  return sub_180010910((__int64)a3);
}

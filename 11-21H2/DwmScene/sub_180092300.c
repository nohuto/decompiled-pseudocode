/*
 * XREFs of sub_180092300 @ 0x180092300
 * Callers:
 *     sub_180049490 @ 0x180049490 (sub_180049490.c)
 *     sub_1800515D0 @ 0x1800515D0 (sub_1800515D0.c)
 *     sub_180091F9C @ 0x180091F9C (sub_180091F9C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18009079C @ 0x18009079C (sub_18009079C.c)
 *     sub_180091398 @ 0x180091398 (sub_180091398.c)
 *     sub_1800913B8 @ 0x1800913B8 (sub_1800913B8.c)
 *     sub_180091DD0 @ 0x180091DD0 (sub_180091DD0.c)
 *     sub_1800924F8 @ 0x1800924F8 (sub_1800924F8.c)
 *     sub_180092DB4 @ 0x180092DB4 (sub_180092DB4.c)
 *     sub_180092DC4 @ 0x180092DC4 (sub_180092DC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180092300(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r15d
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int8 (__fastcall *v22)(__int64, __int64, __int64, __int64, __int64); // r11
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26[2]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v27[3]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v28[4]; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v29[4]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-11h] BYREF

  v27[2] = (__int64)a2;
  if ( (unsigned int)sub_180028544(*a2) && a1[4] != a1[5] )
  {
    sub_18002C7C4(v4 + 24);
    v5 = a1 + 16;
    if ( sub_1800122B0(a1 + 16) )
    {
      v6 = (__int64 *)sub_18002850C(*a2);
      v7 = sub_180091398(v6, v27);
      v8 = *v7;
      v9 = v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      v26[0] = *v5;
      *v5 = v8;
      v26[1] = a1[17];
      a1[17] = v9;
      sub_180010910((__int64)v26);
      sub_180010910((__int64)v27);
    }
    v10 = sub_180028544(*a2);
    v11 = *(__int64 **)(*v5 + 112);
    v12 = (__int64 *)v11[1];
    v13 = v11;
    while ( !*((_BYTE *)v12 + 25) )
    {
      if ( *((_DWORD *)v12 + 8) >= v10 )
      {
        v13 = v12;
        v12 = (__int64 *)*v12;
      }
      else
      {
        v12 = (__int64 *)v12[2];
      }
    }
    if ( *((_BYTE *)v13 + 25) || v10 < *((_DWORD *)v13 + 8) || v13 == v11 )
    {
      sub_1800913B8(*a2, v26);
      v14 = v26[0];
      sub_18009079C(a1[2]);
      v15 = sub_180092DC4(a1);
      v19 = sub_180092DB4(v17, v16, v15, v18);
      if ( !v22(v14, v19, v21, 2LL, v20) )
      {
        sub_1800113D0(v29, "ShaderPropertyBlock::AttachDevice() -- failed to create constant buffer");
        v24 = sub_1800113D0(
                v28,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\sh"
                "aderpropertyblock.cpp");
        sub_18003F4DC(pExceptionObject, (__int64)v24, v25, (__int64)v29, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      sub_1800924F8(*v5, v26);
      *(_DWORD *)sub_180091DD0(a1 + 11, v10) = 0;
      sub_180010910((__int64)v26);
    }
  }
  return sub_180010910((__int64)a2);
}

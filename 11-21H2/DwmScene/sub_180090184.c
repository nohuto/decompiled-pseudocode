/*
 * XREFs of sub_180090184 @ 0x180090184
 * Callers:
 *     sub_180049514 @ 0x180049514 (sub_180049514.c)
 *     sub_180051780 @ 0x180051780 (sub_180051780.c)
 *     sub_180058180 @ 0x180058180 (sub_180058180.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180056B94 @ 0x180056B94 (sub_180056B94.c)
 *     sub_18008E894 @ 0x18008E894 (sub_18008E894.c)
 *     sub_18009319C @ 0x18009319C (sub_18009319C.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180090184(__int128 *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r9
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int128 v14; // [rsp+40h] [rbp-69h] BYREF
  _QWORD *v15; // [rsp+50h] [rbp-59h]
  __int64 v16; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v17[4]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v18[4]; // [rsp+88h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-1h] BYREF

  v15 = a2;
  if ( *((_DWORD *)a1 + 292) != 1 )
  {
    sub_1800113D0(
      v18,
      "ShaderPropertyLayout::CreateBlock() -- layout declaration must be complete before a property block can be created.");
    v12 = sub_1800113D0(
            v17,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v12, v13, (__int64)v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v14 = 0LL;
  v4 = *((_QWORD *)a1 + 1);
  if ( !v4 )
LABEL_14:
    sub_1800120F4();
  v5 = *(_DWORD *)(v4 + 8);
  do
  {
    if ( !v5 )
      goto LABEL_14;
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
  }
  while ( v6 != v5 );
  v14 = *a1;
  v7 = sub_18001D684();
  v8 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 12) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Engine::ShaderPropertyBlock>::`vftable';
    sub_18008E894();
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = v8 + 16;
  a2[1] = v8;
  sub_180010910((__int64)&v14);
  if ( *((_BYTE *)a1 + 1241) )
  {
    v9 = sub_180056B94(*((_QWORD *)a1 + 144), &v16);
    sub_18009319C(v10, v9);
  }
  return a2;
}

/*
 * XREFs of sub_18003D504 @ 0x18003D504
 * Callers:
 *     sub_18003B3E4 @ 0x18003B3E4 (sub_18003B3E4.c)
 *     sub_1800405C8 @ 0x1800405C8 (sub_1800405C8.c)
 *     sub_180041570 @ 0x180041570 (sub_180041570.c)
 *     sub_180041B20 @ 0x180041B20 (sub_180041B20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180012728 @ 0x180012728 (sub_180012728.c)
 *     sub_18002A6F0 @ 0x18002A6F0 (sub_18002A6F0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18003B728 @ 0x18003B728 (sub_18003B728.c)
 *     sub_18003C1F0 @ 0x18003C1F0 (sub_18003C1F0.c)
 *     sub_18003D07C @ 0x18003D07C (sub_18003D07C.c)
 *     sub_18003DF4C @ 0x18003DF4C (sub_18003DF4C.c)
 *     sub_18003E008 @ 0x18003E008 (sub_18003E008.c)
 *     sub_18003E0C8 @ 0x18003E0C8 (sub_18003E0C8.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 *     sub_180040C58 @ 0x180040C58 (sub_180040C58.c)
 *     sub_1800419A0 @ 0x1800419A0 (sub_1800419A0.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18003D504(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  char v9; // si
  char v10; // r14
  char v11; // r8
  char v12; // dl
  char v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rax
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h]
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int128 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h] BYREF
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v36[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+E8h] [rbp-18h] BYREF

  v34 = a2;
  sub_18003E370();
  sub_180011D4C(a1 + 8, &v23);
  if ( !*(_QWORD *)(a1 + 368) )
  {
    sub_180010DD0(
      v36,
      (__int64)"SceneNode::SetParent() -- Unique ID zero is reserved for root-level nodes -- this node must not be given a parent.");
    v4 = sub_180010DD0(
           &v32,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scenenode.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)v36, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( sub_180011DE0(a2) )
  {
    v6 = sub_18001246C(&v28, a2);
    if ( (unsigned __int8)sub_18003DF4C(a1, v6) )
    {
      sub_180010DD0(
        v36,
        (__int64)"SceneNode::SetParent() -- A node's parent cannot be set to node that is within the node's own tree (cyc"
                 "lic graph prohibited).");
      v7 = sub_180010DD0(
             &v32,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\scenenode.cpp");
      sub_18003AF58(pExceptionObject, (__int64)v7, v8, (__int64)v36, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  sub_180012624(a1, &v28);
  sub_18001265C(a1, &v30);
  v27 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( sub_180011DE0(&v28) )
  {
    v9 = 0;
    if ( sub_180011DD0(a2) )
      v9 = v11;
  }
  if ( sub_180011DD0(&v28) )
  {
    v10 = 0;
    if ( sub_180011DE0(a2) )
      v10 = v13;
  }
  if ( v12 )
    sub_18003D07C(v28, &v23);
  if ( sub_180011DE0(a2) )
  {
    sub_18003B728(*a2, &v23);
    v14 = (__int64 *)sub_18001265C(*a2, &v21);
    sub_180011020(&v27, v14);
    if ( v22 )
      sub_180010530(v22);
  }
  sub_18002A6F0((__int64 *)(a1 + 56), a2);
  if ( sub_180011DF0(&v30, &v27) )
  {
    sub_18003E0C8(a1);
    sub_18001246C(&v21, &v23);
    while ( sub_180011DE0(&v21) )
    {
      sub_18002A6F0((__int64 *)(v21 + 72), &v27);
      v15 = sub_18003C1F0(v23, &v25, &v21);
      sub_180011020(&v21, v15);
      if ( v26 )
        sub_180010530(v26);
    }
    if ( v22 )
      sub_180010530(v22);
    sub_18003E008(a1);
  }
  sub_18001246C(&v21, &v23);
  while ( sub_180011DE0(&v21) )
  {
    if ( v10 && sub_180011DE0(&v27) )
    {
      v16 = sub_18001246C(&v35, &v21);
      sub_1800419A0(v27, v16);
    }
    if ( v9 && sub_180011DE0(&v30) )
    {
      v17 = sub_18001246C(v36, &v21);
      sub_180040C58(v30, v17);
    }
    v18 = sub_18003C1F0(v23, &v32, &v21);
    sub_180011020(&v21, v18);
    if ( v33 )
      sub_180010530(v33);
  }
  if ( v22 )
    sub_180010530(v22);
  result = sub_180012728();
  if ( *((_QWORD *)&v27 + 1) )
    result = sub_180010530(*((__int64 *)&v27 + 1));
  if ( v31 )
    result = sub_180010530(v31);
  if ( v29 )
    result = sub_180010530(v29);
  if ( v24 )
    result = sub_180010530(v24);
  v20 = a2[1];
  if ( v20 )
    return sub_180010530(v20);
  return result;
}

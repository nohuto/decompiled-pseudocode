/*
 * XREFs of sub_18007F898 @ 0x18007F898
 * Callers:
 *     sub_18007D30C @ 0x18007D30C (sub_18007D30C.c)
 *     sub_18007F9C0 @ 0x18007F9C0 (sub_18007F9C0.c)
 * Callees:
 *     sub_18007CE58 @ 0x18007CE58 (sub_18007CE58.c)
 *     sub_18007EDF4 @ 0x18007EDF4 (sub_18007EDF4.c)
 *     sub_1800A8870 @ 0x1800A8870 (sub_1800A8870.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007F898(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int128 v10; // [rsp+30h] [rbp-49h] BYREF
  __int128 v11; // [rsp+40h] [rbp-39h] BYREF
  __int128 v12; // [rsp+50h] [rbp-29h] BYREF
  __int64 v13; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v14[7]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v15; // [rsp+A8h] [rbp+2Fh]

  v4 = *a2;
  v10 = 0LL;
  v5 = a1[45];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a1[45];
  }
  *(_QWORD *)&v10 = a1[44];
  *((_QWORD *)&v10 + 1) = v5;
  v15 = 0LL;
  if ( sub_18007CE58() )
  {
    v14[0] = &std::_Func_impl_no_alloc<_lambda_c3255ca82109f45dbf65110c90bf1ea2_,std::pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>,>::`vftable';
    v14[1] = a1;
    v15 = v14;
  }
  v6 = (unsigned int)sub_18007EDF4((__int64)a1, &v13, 0);
  v11 = 0LL;
  v7 = a1[39];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a1[39];
  }
  *(_QWORD *)&v11 = a1[38];
  *((_QWORD *)&v11 + 1) = v7;
  v12 = 0LL;
  v8 = a1[35];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a1[35];
  }
  *(_QWORD *)&v12 = a1[34];
  *((_QWORD *)&v12 + 1) = v8;
  sub_1800A8870(v4, (unsigned int)&v12, (unsigned int)&v11, v6, (__int64)v14, (__int64)&v10);
  return sub_180010910((__int64)a2);
}

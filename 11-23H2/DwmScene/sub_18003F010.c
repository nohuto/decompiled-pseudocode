/*
 * XREFs of sub_18003F010 @ 0x18003F010
 * Callers:
 *     sub_180040BB8 @ 0x180040BB8 (sub_180040BB8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18002A6F0 @ 0x18002A6F0 (sub_18002A6F0.c)
 *     sub_18003FED0 @ 0x18003FED0 (sub_18003FED0.c)
 */

_QWORD *__fastcall sub_18003F010(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // r8
  __int64 v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = sub_18001C190();
  v5 = 1LL;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::SceneNode>::`vftable';
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)(v4 + 16) = a2;
  }
  *a1 = a2;
  a1[1] = v4;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    v7 = (__int64 *)(a2 + 8);
    if ( !v6 || !*(_DWORD *)(v6 + 8) )
    {
      if ( v4 )
        _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
      v10 = a2;
      v11 = a1[1];
      v8 = v11;
      sub_18002A6F0(v7, &v10);
      if ( v8 )
        sub_180010530(v8);
    }
  }
  v12 = 0LL;
  sub_18003FED0(&v12, v5);
  return a1;
}

/*
 * XREFs of ?BeginCallback_Read@CompositionIslandEnvironment@Composition@UI@Windows@@AEAAXPEAV?$vector@PEAVCompositionIsland@Composition@UI@Windows@@V?$allocator@PEAVCompositionIsland@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180088F4C
 * Callers:
 *     ?ChangeValues_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@QEAAXUfloat3@Numerics@Foundation@4@MM@Z @ 0x180088E74 (-ChangeValues_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@QEAAXUfloat3@Numerics@.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAVCompositionIsland@Composition@UI@Windows@@V?$allocator@PEAVCompositionIsland@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180113DE4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAVCompositionIsland@Composition@UI@Windo.c)
 */

void __fastcall Windows::UI::Composition::CompositionIslandEnvironment::BeginCallback_Read(__int64 a1, __int64 *a2)
{
  char *v4; // rbp
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  char *v8; // rax
  size_t v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  Microsoft::WRL2::NestableRuntimeClass *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rax

  if ( !*(_DWORD *)(a1 + 96) )
    return;
  v4 = (char *)a2[1];
  v5 = *a2;
  v6 = *(unsigned int *)(a1 + 96);
  v7 = (__int64)&v4[-*a2] >> 3;
  if ( v6 < v7 )
  {
    v8 = (char *)(v5 + 8 * v6);
LABEL_9:
    a2[1] = (__int64)v8;
    goto LABEL_10;
  }
  if ( v6 > v7 )
  {
    if ( v6 <= (a2[2] - v5) >> 3 )
    {
      v9 = 8 * (v6 - v7);
      memset_0(v4, 0, v9);
      v8 = &v4[v9];
      goto LABEL_9;
    }
    std::vector<Windows::UI::Composition::CompositionIsland *>::_Resize_reallocate<std::_Value_init_tag>(
      a2,
      *(unsigned int *)(a1 + 96));
  }
LABEL_10:
  v10 = a1 + 104;
  v11 = *(_QWORD *)(a1 + 104);
  v12 = (Microsoft::WRL2::NestableRuntimeClass *)(v11 - 472);
  if ( v11 == a1 + 104 )
    v12 = 0LL;
  if ( v12 )
  {
    v13 = 0LL;
    do
    {
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v12);
      *(_QWORD *)(v13 + *a2) = v12;
      v13 += 8LL;
      v14 = *((_QWORD *)v12 + 59);
      v12 = (Microsoft::WRL2::NestableRuntimeClass *)(v14 - 472);
      if ( v14 == v10 )
        v12 = 0LL;
    }
    while ( v12 );
  }
}

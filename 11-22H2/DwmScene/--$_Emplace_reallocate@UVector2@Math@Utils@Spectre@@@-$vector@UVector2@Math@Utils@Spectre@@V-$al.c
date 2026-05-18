/*
 * XREFs of ??$_Emplace_reallocate@UVector2@Math@Utils@Spectre@@@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector2@Math@Utils@Spectre@@QEAU2345@$$QEAU2345@@Z @ 0x18008CBD4
 * Callers:
 *     ?push_back@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@QEAAX$$QEAUVector2@Math@Utils@Spectre@@@Z @ 0x18008D5DC (-push_back@-$vector@UVector2@Math@Utils@Spectre@@V-$allocator@UVector2@Math@Utils@Spectre@@@std@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017058 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x180074490 (-_Calculate_growth@-$vector@UMessageEvent@Engine@Spectre@@V-$allocator@UMessageEvent@Engine@Spec.c)
 *     ?_Change_array@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@AEAAXQEAUVector2@Math@Utils@Spectre@@_K1@Z @ 0x180085AD0 (-_Change_array@-$vector@UVector2@Math@Utils@Spectre@@V-$allocator@UVector2@Math@Utils@Spectre@@@.c)
 */

char *__fastcall std::vector<Spectre::Utils::Math::Vector2>::_Emplace_reallocate<Spectre::Utils::Math::Vector2>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v3; // rsi
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 size_of; // rax
  _QWORD *v11; // rax
  __int64 v12; // r10
  char *v13; // rsi
  char *v14; // r8
  char *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // xmm0_8
  __int64 v18; // xmm0_8
  char *v19; // rdx
  signed __int64 v20; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<Spectre::Engine::MessageEvent>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (__int64)v11;
  v13 = (char *)&v11[(a2 - v3) >> 3];
  *(_QWORD *)v13 = *a3;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v16 = v11;
    while ( v15 != v14 )
    {
      v17 = *(_QWORD *)v15;
      v15 += 8;
      *v16++ = v17;
    }
  }
  else
  {
    while ( v15 != a2 )
    {
      v18 = *(_QWORD *)v15;
      v15 += 8;
      *v11++ = v18;
    }
    v19 = a1[1];
    if ( a2 != v19 )
    {
      v20 = v13 - a2;
      do
      {
        *(_QWORD *)&a2[v20 + 8] = *(_QWORD *)a2;
        a2 += 8;
      }
      while ( a2 != v19 );
    }
  }
  std::vector<Spectre::Utils::Math::Vector2>::_Change_array((__int64)a1, v12, v8, v9);
  return v13;
}

/*
 * XREFs of ??$_Emplace_reallocate@AEBUVector3@Math@Utils@Spectre@@@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18008C9EC
 * Callers:
 *     Spectre::Engine::_anonymous_namespace_::GeneratePlaneGeometry @ 0x18008D268 (Spectre--Engine--_anonymous_namespace_--GeneratePlaneGeometry.c)
 * Callees:
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Uninitialized_move@PEAUVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@YAPEAUVector3@Math@Utils@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UVector3@Math@Utils@Spectre@@@0@@Z @ 0x1800842B0 (--$_Uninitialized_move@PEAUVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@.c)
 *     ?_Calculate_growth@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x180085A88 (-_Calculate_growth@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectr.c)
 *     ?_Change_array@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAXQEAUVector3@Math@Utils@Spectre@@_K1@Z @ 0x180085B38 (-_Change_array@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@@@.c)
 *     ?allocate@?$allocator@UVector3@Math@Utils@Spectre@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@_K@Z @ 0x180085D68 (-allocate@-$allocator@UVector3@Math@Utils@Spectre@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@_K@.c)
 */

char *__fastcall std::vector<Spectre::Utils::Math::Vector3>::_Emplace_reallocate<Spectre::Utils::Math::Vector3 const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  char *v11; // r8
  char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10

  v3 = *a1;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 2);
  if ( v7 == 0x1555555555555555LL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<Spectre::Utils::Math::Vector3>::_Calculate_growth(a1, v7 + 1);
  v11 = (char *)std::allocator<Spectre::Utils::Math::Vector3>::allocate(v10, v9);
  v12 = &v11[12 * ((a2 - v3) / 12)];
  *(_QWORD *)v12 = *(_QWORD *)a3;
  *((_DWORD *)v12 + 2) = *(_DWORD *)(a3 + 8);
  v13 = a1[1];
  v14 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<Spectre::Utils::Math::Vector3 *>(v14, a2, (__int64)v11);
    v13 = a1[1];
    v11 = v12 + 12;
    v14 = a2;
  }
  std::_Uninitialized_move<Spectre::Utils::Math::Vector3 *>(v14, v13, (__int64)v11);
  std::vector<Spectre::Utils::Math::Vector3>::_Change_array((__int64)a1, v15, v8, v9);
  return v12;
}

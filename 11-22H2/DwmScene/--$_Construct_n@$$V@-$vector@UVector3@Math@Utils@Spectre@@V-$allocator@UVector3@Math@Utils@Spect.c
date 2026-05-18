/*
 * XREFs of ??$_Construct_n@$$V@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008C848
 * Callers:
 *     ??0?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@QEAA@_KAEBV?$allocator@UVector3@Math@Utils@Spectre@@@1@@Z @ 0x18008CD28 (--0-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@Q.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x18008CD54 (--1-$_Tidy_guard@V-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre.c)
 *     ?_Buy_nonzero@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008D46C (-_Buy_nonzero@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@@@s.c)
 */

void __fastcall std::vector<Spectre::Utils::Math::Vector3>::_Construct_n<>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v2 = a2;
    std::vector<Spectre::Utils::Math::Vector3>::_Buy_nonzero();
    v4 = *(_DWORD **)a1;
    do
    {
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4 += 3;
      --v2;
    }
    while ( v2 );
    v5 = 0LL;
    *(_QWORD *)(a1 + 8) = v4;
    std::_Tidy_guard<std::vector<Spectre::Utils::Math::Vector3>>::~_Tidy_guard<std::vector<Spectre::Utils::Math::Vector3>>(&v5);
  }
}

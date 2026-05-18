/*
 * XREFs of ?_Change_array@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAXQEAUVector3@Math@Utils@Spectre@@_K1@Z @ 0x180085B38
 * Callers:
 *     ??$_Emplace_reallocate@AEBUVector3@Math@Utils@Spectre@@@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18008C9EC (--$_Emplace_reallocate@AEBUVector3@Math@Utils@Spectre@@@-$vector@UVector3@Math@Utils@Spectre@@V-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Spectre::Utils::Math::Vector3>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 12 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 12 * a4;
  return result;
}

/*
 * XREFs of ?_Change_array@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@AEAAXQEAUVector2@Math@Utils@Spectre@@_K1@Z @ 0x180085AD0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUVector2@Math@Utils@Spectre@@@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector2@Math@Utils@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18008C8D8 (--$_Emplace_reallocate@AEBUVector2@Math@Utils@Spectre@@@-$vector@UVector2@Math@Utils@Spectre@@V-.c)
 *     ??$_Emplace_reallocate@UVector2@Math@Utils@Spectre@@@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector2@Math@Utils@Spectre@@QEAU2345@$$QEAU2345@@Z @ 0x18008CBD4 (--$_Emplace_reallocate@UVector2@Math@Utils@Spectre@@@-$vector@UVector2@Math@Utils@Spectre@@V-$al.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Spectre::Utils::Math::Vector2>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

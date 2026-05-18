/*
 * XREFs of ??$_Uninitialized_move@PEAUVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@YAPEAUVector3@Math@Utils@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UVector3@Math@Utils@Spectre@@@0@@Z @ 0x1800842B0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUVector3@Math@Utils@Spectre@@@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18008C9EC (--$_Emplace_reallocate@AEBUVector3@Math@Utils@Spectre@@@-$vector@UVector3@Math@Utils@Spectre@@V-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move<Spectre::Utils::Math::Vector3 *>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rax
  int v4; // ecx

  for ( i = a1; i != a2; a3 += 12LL )
  {
    *(_QWORD *)a3 = *(_QWORD *)i;
    v4 = *(_DWORD *)(i + 8);
    i += 12LL;
    *(_DWORD *)(a3 + 8) = v4;
  }
  return a3;
}

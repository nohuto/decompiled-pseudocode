/*
 * XREFs of ?GetRandomPoint@CPathAreaSpawner@EmitterShapes@@UEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@M@Z @ 0x1802457B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRandomPoint@CPathEmitterArea@EmitterShapes@@QEAA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180269CB8 (-GetRandomPoint@CPathEmitterArea@EmitterShapes@@QEAA-AUfloat2@Numerics@Foundation@Windows@@AEAV-.c)
 */

__int64 __fastcall EmitterShapes::CPathAreaSpawner::GetRandomPoint(__int64 a1, __int64 a2)
{
  EmitterShapes::CPathEmitterArea::GetRandomPoint(*(_QWORD *)(a1 + 8));
  return a2;
}

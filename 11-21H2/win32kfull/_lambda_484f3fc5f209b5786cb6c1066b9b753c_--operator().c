/*
 * XREFs of _lambda_484f3fc5f209b5786cb6c1066b9b753c_::operator() @ 0x1C0120664
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C00A1484 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     _lambda_484f3fc5f209b5786cb6c1066b9b753c_::_lambda_invoker_cdecl_ @ 0x1C023C9C0 (_lambda_484f3fc5f209b5786cb6c1066b9b753c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_484f3fc5f209b5786cb6c1066b9b753c_::operator()(__int64 a1, unsigned __int8 a2, int a3)
{
  return (unsigned int)a2 <= *(_DWORD *)(gpDispInfo + 136LL)
      && a2 <= *((_BYTE *)&unk_1C032CF48 + a3 + 20)
      && a2 >= *((_BYTE *)&unk_1C032CF48 + a3);
}

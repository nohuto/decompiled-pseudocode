/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_d253d5d01bc5b20cb42527c72daa90e2___ @ 0x1800D1090
 * Callers:
 *     ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800D16A0 (-DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z.c)
 * Callees:
 *     ??$?4U?$default_delete@VCAppSubmixClient@@@std@@$0A@@?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CFBC0 (--$-4U-$default_delete@VCAppSubmixClient@@@std@@$0A@@-$unique_ptr@VCAppSubmixClient@@U-$default_.c)
 */

__int64 ***__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_d253d5d01bc5b20cb42527c72daa90e2___(
        __int64 ***a1,
        __int64 **a2,
        __int64 **a3,
        __int64 a4)
{
  __int64 **v6; // rdi
  __int64 **v8; // rsi
  __int64 ***v9; // rbp
  __int64 ***result; // rax

  v6 = a2;
  if ( a2 != a3 )
  {
    while ( *v6 != ***(__int64 ****)a4 )
    {
      if ( ++v6 == a3 )
        goto LABEL_6;
    }
    **(_BYTE **)(a4 + 8) = 1;
  }
LABEL_6:
  if ( v6 != a3 )
  {
    v8 = v6 + 1;
    if ( v6 + 1 != a3 )
    {
      v9 = *(__int64 ****)a4;
      do
      {
        if ( *v8 == **v9 )
          **(_BYTE **)(a4 + 8) = 1;
        else
          std::unique_ptr<CAppSubmixClient>::operator=<std::default_delete<CAppSubmixClient>,0>(v6++, v8);
        ++v8;
      }
      while ( v8 != a3 );
    }
  }
  result = a1;
  *a1 = v6;
  return result;
}

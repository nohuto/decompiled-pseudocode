/*
 * XREFs of ?GetBatchId@KernelChannel@DirectComposition@@UEAAJW4DCOMPOSITIONBATCHSELECTOR@@PEAK@Z @ 0x180075380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::KernelChannel::GetBatchId(__int64 a1)
{
  int result; // eax

  result = NtDCompositionGetBatchId(*(unsigned int *)(a1 + 8));
  if ( result )
  {
    if ( result <= -1073741801 )
    {
      switch ( result )
      {
        case -1073741801:
          return -2147024882;
        case -2143420410:
          return -2003302400;
        case -1073741823:
          return -2147467259;
        case -1073741822:
          return -2147467263;
      }
      if ( result != -1073741816 )
      {
        if ( result == -1073741811 )
          return -2147024809;
        return result | 0x10000000;
      }
      return -2147024890;
    }
    if ( result != -1073741790 )
    {
      if ( result != -1073741788 )
      {
        if ( result == -1073741637 )
          return -2147024809;
        return result | 0x10000000;
      }
      return -2147024890;
    }
    return -2147024891;
  }
  return result;
}

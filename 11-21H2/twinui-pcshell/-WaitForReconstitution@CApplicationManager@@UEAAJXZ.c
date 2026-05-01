/*
 * XREFs of ?WaitForReconstitution@CApplicationManager@@UEAAJXZ @ 0x18017A980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::WaitForReconstitution(CApplicationManager *this)
{
  PSRWLOCK v1; // rdi
  unsigned int v2; // ebx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  char CompareAddress; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 UnbiasedTime; // [rsp+58h] [rbp+20h] BYREF

  v1 = CApplicationManagerUtility::g_pIAMGlobals;
  v2 = 0;
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    QueryUnbiasedInterruptTime(&UnbiasedTime);
    for ( CompareAddress = BYTE5(v1[13].Ptr); CompareAddress != 1; CompareAddress = BYTE5(v1[13].Ptr) )
    {
      QueryUnbiasedInterruptTime(&v7);
      v4 = ((v7 - UnbiasedTime) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
      v5 = ((v4 + ((v7 - UnbiasedTime - v4) >> 1)) >> 9) / 0x3E8 / 0xA;
      if ( (unsigned int)v5 >= 0x7530 )
        break;
      if ( !WaitOnAddress((char *)&v1[13].Ptr + 5, &CompareAddress, 1uLL, 30000 - v5) )
        break;
    }
  }
  else
  {
    return (unsigned int)-2147024884;
  }
  return v2;
}

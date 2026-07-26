/*
 * XREFs of ndisEnsureBindingInfoLoaded @ 0x1C013C8B4
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0161738 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x1C013AFD8 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x1C013B168 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1C013B2FC (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x1C013B48C (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 *     ndisLoadNamedFilterAltitudes @ 0x1C013CDC8 (ndisLoadNamedFilterAltitudes.c)
 */

__int64 ndisEnsureBindingInfoLoaded()
{
  __int64 result; // rax

  result = ndisLoadNamedFilterAltitudes();
  if ( !(_DWORD)result )
  {
    result = netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058_();
    if ( !(_DWORD)result )
    {
      if ( !*((_BYTE *)qword_1C00F5730 + 96)
        || (result = netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09_(), !(_DWORD)result) )
      {
        result = netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6_();
        if ( !(_DWORD)result )
        {
          if ( *((_BYTE *)qword_1C00F5730 + 96) )
            return netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617_();
          else
            return 0LL;
        }
      }
    }
  }
  return result;
}

/*
 * XREFs of ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C0121594
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x1C011C558 (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x1C013AFD8 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x1C013B168 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1C013B2FC (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x1C013B48C (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 * Callees:
 *     netsetupGetPathForObjectType @ 0x1C011E22C (netsetupGetPathForObjectType.c)
 */

int __fastcall netsetupBuildStorePath(int a1, int a2)
{
  const wchar_t *PathForObjectType; // rax
  int v3; // r9d
  wchar_t *v4; // r10

  PathForObjectType = netsetupGetPathForObjectType(a2, a1);
  if ( v3 )
  {
    if ( v3 == 1 )
      LODWORD(PathForObjectType) = swprintf_s(
                                     v4,
                                     0x100uLL,
                                     L"\\Registry\\Machine\\DEVICES\\Networking\\%ws",
                                     PathForObjectType);
  }
  else
  {
    LODWORD(PathForObjectType) = swprintf_s(
                                   v4,
                                   0x100uLL,
                                   L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\%ws",
                                   PathForObjectType);
  }
  return (int)PathForObjectType;
}

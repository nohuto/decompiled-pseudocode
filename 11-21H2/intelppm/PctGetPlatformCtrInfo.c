/*
 * XREFs of PctGetPlatformCtrInfo @ 0x1C0024C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PctGetPlatformCtrInfo(int a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( a1 >= 5 )
    return 3221225485LL;
  *a2 = L"RAPL";
  result = 0LL;
  *a3 = (&PctPlatformCounterCfg)[5 * a1];
  return result;
}

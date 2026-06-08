/*
 * XREFs of GetHvLpCountForPhysicalCore @ 0x1C002495C
 * Callers:
 *     InitializeHvPhysicalCores @ 0x1C0005694 (InitializeHvPhysicalCores.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHvLpCountForPhysicalCore(int a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  _DWORD *v3; // rax
  bool v4; // zf
  unsigned int v5; // edx

  v1 = 0;
  if ( dword_1C0012A50 )
  {
    v2 = (unsigned int)dword_1C0012A50;
    v3 = (_DWORD *)(qword_1C0012A48 + 4);
    do
    {
      v4 = a1 == *v3;
      v5 = v1 + 1;
      v3 += 3;
      if ( !v4 )
        v5 = v1;
      v1 = v5;
      --v2;
    }
    while ( v2 );
  }
  return v1;
}

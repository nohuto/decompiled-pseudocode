/*
 * XREFs of GetHvLpCountForPackage @ 0x1C00253E0
 * Callers:
 *     RegisterHvPackage @ 0x1C003A500 (RegisterHvPackage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHvLpCountForPackage(int a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  _DWORD *v3; // rax
  bool v4; // zf
  unsigned int v5; // edx

  v1 = 0;
  if ( dword_1C001F590 )
  {
    v2 = (unsigned int)dword_1C001F590;
    v3 = (_DWORD *)(qword_1C001F588 + 8);
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

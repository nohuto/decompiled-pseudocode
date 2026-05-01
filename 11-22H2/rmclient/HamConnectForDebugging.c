/*
 * XREFs of HamConnectForDebugging @ 0x18000A3A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005824 @ 0x180005824 (sub_180005824.c)
 *     sub_180008C00 @ 0x180008C00 (sub_180008C00.c)
 */

__int64 __fastcall HamConnectForDebugging(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( a1 )
  {
    v6[1] = 0LL;
    v6[0] = a1;
    v3 = sub_180005824((__int64)v6, (__int64)&unk_180020BC0, 0, 0LL, &v7);
    if ( v3 < 0 )
    {
      v4 = v7;
    }
    else
    {
      v4 = 0LL;
      *a2 = v7;
      v3 = 0;
    }
    if ( v4 )
      sub_180008C00(v4);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v3;
}

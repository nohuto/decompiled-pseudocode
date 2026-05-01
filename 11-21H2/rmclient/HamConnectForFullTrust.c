/*
 * XREFs of HamConnectForFullTrust @ 0x18001CA50
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionCreate @ 0x180004700 (HampConnectionCreate.c)
 *     HampConnectionDestroy @ 0x180006630 (HampConnectionDestroy.c)
 */

__int64 __fastcall HamConnectForFullTrust(__int64 a1, __int64 *a2)
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
    v3 = HampConnectionCreate((__int64)v6, (__int64)&unk_180021C60, 0, 0LL, &v7);
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
      HampConnectionDestroy(v4);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v3;
}

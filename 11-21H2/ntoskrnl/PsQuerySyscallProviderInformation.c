/*
 * XREFs of PsQuerySyscallProviderInformation @ 0x1406591D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140659A48 @ 0x140659A48 (sub_140659A48.c)
 */

__int64 __fastcall PsQuerySyscallProviderInformation(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned int v5; // r10d
  unsigned int v6; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = -1073741821;
  if ( !a2 )
  {
    v8[0] = a4 >> 3;
    v6 = sub_140659A48(a1, v8);
    v5 = v6;
    if ( a5 )
    {
      if ( (int)(v6 + 0x80000000) < 0 || v6 == -2147483643 )
        *a5 = 8LL * v8[0];
    }
  }
  return v5;
}

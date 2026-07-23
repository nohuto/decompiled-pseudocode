/*
 * XREFs of sub_140830BF0 @ 0x140830BF0
 * Callers:
 *     sub_1408301C0 @ 0x1408301C0 (sub_1408301C0.c)
 *     sub_140A35D9C @ 0x140A35D9C (sub_140A35D9C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140830CCC @ 0x140830CCC (sub_140830CCC.c)
 *     sub_140830CF4 @ 0x140830CF4 (sub_140830CF4.c)
 *     RtlCultureNameToLCID @ 0x140830F20 (RtlCultureNameToLCID.c)
 */

__int64 __fastcall sub_140830BF0(__int64 a1, __int64 a2, const WCHAR *a3, __int16 a4)
{
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // r8d
  __int16 v12[2]; // [rsp+20h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+24h] [rbp-24h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-20h] BYREF

  DestinationString = 0LL;
  Lcid = 0;
  v12[0] = -1;
  RtlInitUnicodeString(&DestinationString, a3);
  if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
  {
    LOBYTE(v8) = 1;
    v9 = sub_140830CF4(a1, a3, v8, v12);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *(_WORD *)(a2 + 4) = Lcid;
      *(_WORD *)(a2 + 6) = v12[0];
      *(_WORD *)a2 = a4;
      *(_WORD *)(a2 + 2) = 0;
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(a2 + 24) = 0;
      if ( (a4 & 0x2000) == 0 )
        sub_140830CCC(a1, a2, (unsigned int)v9);
    }
  }
  else
  {
    return (unsigned int)-1073020924;
  }
  return v10;
}

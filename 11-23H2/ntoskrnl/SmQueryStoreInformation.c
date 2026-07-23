/*
 * XREFs of SmQueryStoreInformation @ 0x14084134C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     SmcProcessListRequest @ 0x140841444 (SmcProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x1408415C0 (SmProcessRegistrationRequest.c)
 *     SmProcessCompressionInfoRequest @ 0x1408417C4 (SmProcessCompressionInfoRequest.c)
 *     SmProcessListRequest @ 0x1409D6FAC (SmProcessListRequest.c)
 *     SmProcessProcessStoreInfoRequest @ 0x1409D7334 (SmProcessProcessStoreInfoRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7578 (SmProcessStatsRequest.c)
 *     SmcProcessStatsRequest @ 0x1409D8484 (SmcProcessStatsRequest.c)
 */

__int64 __fastcall SmQueryStoreInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // bl
  int v6; // ecx
  void *Src[2]; // [rsp+20h] [rbp-28h]
  size_t Size; // [rsp+30h] [rbp-18h]

  v5 = a4;
  if ( (_DWORD)a3 != 24 )
    return 3221225476LL;
  *(_OWORD *)Src = *(_OWORD *)a2;
  Size = *(_QWORD *)(a2 + 16);
  if ( (unsigned int)*(_OWORD *)a2 != 1 )
    return 3221225485LL;
  if ( HIDWORD(Src[0]) != 2 && HIDWORD(Src[0]) != 5 )
  {
    if ( HIDWORD(Src[0]) > 0x17 || (v6 = 12591360, !_bittest(&v6, HIDWORD(Src[0]))) )
    {
      if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
        return 3221225506LL;
    }
  }
  switch ( HIDWORD(Src[0]) )
  {
    case 2:
      LOBYTE(a4) = v5;
      return SmProcessStatsRequest(Src[1], (unsigned int)Size, a5, a4);
    case 5:
      return SmProcessListRequest(Src[1]);
    case 8:
      LOBYTE(a4) = v5;
      return SmcProcessListRequest(Src[1], (unsigned int)Size, a5, a4);
    case 0xD:
      LOBYTE(a4) = v5;
      return SmcProcessStatsRequest(Src[1], (unsigned int)Size, a5, a4);
    case 0xF:
      LOBYTE(a4) = v5;
      return SmProcessRegistrationRequest(Src[1], (unsigned int)Size, a5, a4);
    case 0x16:
      return SmProcessCompressionInfoRequest(Src[1], (unsigned int)Size);
    case 0x17:
      LOBYTE(a3) = v5;
      return SmProcessProcessStoreInfoRequest(Src[1], (unsigned int)Size, a3);
    default:
      return 3221225475LL;
  }
}

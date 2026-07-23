/*
 * XREFs of sub_140AF3434 @ 0x140AF3434
 * Callers:
 *     sub_140AF33B0 @ 0x140AF33B0 (sub_140AF33B0.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_14081D368 @ 0x14081D368 (sub_14081D368.c)
 *     sub_14081D380 @ 0x14081D380 (sub_14081D380.c)
 *     sub_14081D3A0 @ 0x14081D3A0 (sub_14081D3A0.c)
 *     sub_140A1D394 @ 0x140A1D394 (sub_140A1D394.c)
 *     sub_140B52CBC @ 0x140B52CBC (sub_140B52CBC.c)
 */

NTSTATUS sub_140AF3434()
{
  int v0; // eax
  __int64 v2; // rdx
  unsigned int v3; // [rsp+50h] [rbp+8h] BYREF
  int Buffer; // [rsp+58h] [rbp+10h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = -1LL;
  v5 = -1LL;
  xmmword_140C1F400 = 0LL;
  qword_140C1F410 = 0LL;
  if ( (int)sub_14081D3A0(&v6) >= 0 )
  {
    if ( (int)sub_140812B74(v6, (unsigned int *)&qword_14000F188, &v5) >= 0 )
    {
      v3 = 8;
      if ( (int)sub_14081D380(v5, 0x2500015Au, (GUID *)((char *)&xmmword_140C1F400 + 8), &v3) >= 0 )
      {
        sub_140A1D394((void *)v5, 0x2500015Au);
        LOBYTE(v2) = (BYTE8(xmmword_140C1F400) & 8) != 0;
        sub_140B52CBC(BYTE8(xmmword_140C1F400) & 7, v2);
        if ( (BYTE8(xmmword_140C1F400) & 7) != 0 )
          LOBYTE(xmmword_140C1F400) = 1;
      }
    }
    if ( v5 != -1 )
      sub_140812D00(v5);
  }
  if ( v6 != -1 )
    sub_14081D368(v6);
  v0 = 0;
  if ( (_BYTE)xmmword_140C1F400 )
    v0 = 2;
  Buffer = v0;
  return ZwUpdateWnfStateData(&stru_14000F180, &Buffer, 4u, 0LL, 0LL, 0, 0);
}

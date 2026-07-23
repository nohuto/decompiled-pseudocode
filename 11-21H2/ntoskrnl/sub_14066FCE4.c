/*
 * XREFs of sub_14066FCE4 @ 0x14066FCE4
 * Callers:
 *     sub_14066F980 @ 0x14066F980 (sub_14066F980.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1406608E8 @ 0x1406608E8 (sub_1406608E8.c)
 */

__int64 __fastcall sub_14066FCE4(unsigned __int64 *a1, int a2, int a3, char a4)
{
  char v5; // di
  __int64 HostSilo; // rax
  volatile signed __int64 *v9; // rax
  __int64 v10; // r10
  signed __int64 v11; // rdx
  bool v12; // zf
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v5 = a3;
  if ( (unsigned int)(a3 - 4) > 1 )
  {
    PsGetCurrentServerSilo();
    v9 = (volatile signed __int64 *)sub_140347DB0();
  }
  else
  {
    HostSilo = PsGetHostSilo();
    v9 = (volatile signed __int64 *)sub_140204738(HostSilo);
  }
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    result = sub_1406608E8(v10, v15);
    if ( (int)result < 0 )
      return result;
    v13 = v15[0];
  }
  else
  {
    do
    {
      v11 = _InterlockedExchangeAdd64(v9 + 120, 1uLL);
      v12 = v11 == -1;
      v13 = v11 + 1;
      v15[0] = v13;
    }
    while ( v12 );
  }
  if ( (v13 & 0xFFE0000000000000uLL) != 0 )
    return 3221225473LL;
  *a1 = (16 * ((v13 << 7) | a2 & 3)) | (a4 != 0 ? 0x400 : 0) | ((v5 & 0xF) << 6) & 0x7FEu | 1;
  return 0LL;
}

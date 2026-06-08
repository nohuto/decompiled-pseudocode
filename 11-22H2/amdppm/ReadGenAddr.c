/*
 * XREFs of ReadGenAddr @ 0x1C0003C2C
 * Callers:
 *     AmdPctSnapPlatformCtrsEx @ 0x1C0002E8C (AmdPctSnapPlatformCtrsEx.c)
 *     ReadGenAddrEx @ 0x1C0003C84 (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x1C0003CE0 (ReadGenAddrHidden.c)
 *     SetPerfStateIO @ 0x1C0009830 (SetPerfStateIO.c)
 *     C2Idle @ 0x1C0009AB0 (C2Idle.c)
 *     C3Idle @ 0x1C0009B70 (C3Idle.c)
 *     C3IdleCheck @ 0x1C0009C50 (C3IdleCheck.c)
 *     IoHaltC1Idle @ 0x1C0009D80 (IoHaltC1Idle.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0003DA0 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadGenAddr(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 IoMemRaw; // rax
  __int64 v4; // r10
  char v5; // cl
  unsigned __int8 v6; // cl

  if ( !a1 )
    return 0LL;
  if ( *(_BYTE *)a1 == 126 )
    return *(unsigned int *)(a1 + 4);
  IoMemRaw = ReadIoMemRaw();
  v2 = IoMemRaw;
  if ( IoMemRaw )
  {
    v5 = *(_BYTE *)(v4 + 2);
    if ( v5 )
      v2 = IoMemRaw >> v5;
    v6 = *(_BYTE *)(v4 + 1);
    if ( v6 < 0x40u )
      v2 &= (1LL << v6) - 1;
  }
  return v2;
}

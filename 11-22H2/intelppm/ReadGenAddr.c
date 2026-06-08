/*
 * XREFs of ReadGenAddr @ 0x1C0002000
 * Callers:
 *     GetCpcDifferentialFeedback @ 0x1C0001F10 (GetCpcDifferentialFeedback.c)
 *     ReadGenAddrEx @ 0x1C0003448 (ReadGenAddrEx.c)
 *     PctSnapPlatformCtrsEx @ 0x1C0003AD4 (PctSnapPlatformCtrsEx.c)
 *     MWaitIdleCheck @ 0x1C0008320 (MWaitIdleCheck.c)
 *     ReadGenAddrHidden @ 0x1C0008970 (ReadGenAddrHidden.c)
 *     C2Idle @ 0x1C0009740 (C2Idle.c)
 *     C3Idle @ 0x1C0009820 (C3Idle.c)
 *     C3IdleCheck @ 0x1C0009920 (C3IdleCheck.c)
 *     IoHaltC1Idle @ 0x1C00099A0 (IoHaltC1Idle.c)
 *     SetPerfStateIO @ 0x1C000D240 (SetPerfStateIO.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadGenAddr(unsigned __int8 *a1)
{
  int v2; // eax
  __int64 v3; // r9
  unsigned __int8 v4; // dl
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // cl
  unsigned __int32 v9; // eax
  unsigned __int16 v10; // ax
  unsigned __int8 v11; // al

  if ( !a1 )
    return 0LL;
  v2 = *a1;
  if ( (_BYTE)v2 != 126 )
  {
    v3 = *(_QWORD *)(a1 + 4);
    v4 = a1[3];
    if ( v2 != 1 )
    {
      if ( v2 == 127 && v4 == 64 )
      {
        v5 = __readmsr(v3);
        goto LABEL_7;
      }
      return 0LL;
    }
    switch ( v4 )
    {
      case 8u:
        v11 = __inbyte(v3);
        v5 = v11;
        break;
      case 0x10u:
        v10 = __inword(v3);
        v5 = v10;
        break;
      case 0x20u:
        v9 = __indword(v3);
        v5 = v9;
        break;
      default:
        return 0LL;
    }
LABEL_7:
    if ( v5 )
    {
      v6 = a1[2];
      if ( v6 )
        v5 >>= v6;
      v7 = a1[1];
      if ( v7 < 0x40u )
        v5 &= (1LL << v7) - 1;
    }
    return v5;
  }
  return *((unsigned int *)a1 + 1);
}

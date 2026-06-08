/*
 * XREFs of ReadIoMemRawEx @ 0x1C0003E48
 * Callers:
 *     PerfControlCpc @ 0x1C00018A0 (PerfControlCpc.c)
 *     WriteGenAddrEx @ 0x1C000292C (WriteGenAddrEx.c)
 *     PerfControlCppcRequestMsr @ 0x1C0003220 (PerfControlCppcRequestMsr.c)
 *     ReadGenAddrEx @ 0x1C0003CC4 (ReadGenAddrEx.c)
 *     PerfControlCpcSingleRegister @ 0x1C0005500 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0003DE0 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadIoMemRawEx(__int64 a1)
{
  unsigned int v2; // r9d
  int v3; // r8d
  unsigned __int8 *v4; // r9
  char v6; // dl
  unsigned __int8 *v7; // rax

  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 == 10 )
    {
      v2 = *(unsigned __int8 *)(a1 + 1) + *(unsigned __int8 *)(a1 + 2);
      if ( v2 > 8 )
      {
        if ( v2 > 0x10 )
        {
          v3 = 64;
          if ( v2 <= 0x20 )
            v3 = 32;
        }
        else
        {
          v3 = 16;
        }
      }
      else
      {
        v3 = 8;
      }
      v4 = (unsigned __int8 *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL));
      switch ( v3 )
      {
        case 8:
          return *v4;
        case 16:
          return *(unsigned __int16 *)v4;
        case 32:
          return *(unsigned int *)v4;
      }
      return *(_QWORD *)v4;
    }
    else
    {
      return ReadIoMemRaw(a1);
    }
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 3);
    v7 = *(unsigned __int8 **)(a1 + 16);
    switch ( v6 )
    {
      case 8:
        return *v7;
      case 16:
        return *(unsigned __int16 *)v7;
      case 32:
        return *(unsigned int *)v7;
      case 64:
        return *(_QWORD *)v7;
      default:
        return 0LL;
    }
  }
}

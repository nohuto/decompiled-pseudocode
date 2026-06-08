/*
 * XREFs of WriteIoMemRawEx @ 0x1C0003D04
 * Callers:
 *     WriteGenAddrEx @ 0x1C0001CA8 (WriteGenAddrEx.c)
 *     PerfControlCppcRequestMsr @ 0x1C0002F80 (PerfControlCppcRequestMsr.c)
 *     PerfControlCpcSingleRegister @ 0x1C0004B00 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     WriteIoMemRaw @ 0x1C0003C9C (WriteIoMemRaw.c)
 */

char __fastcall WriteIoMemRawEx(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  int v4; // r9d
  _BYTE *v5; // r8
  char v6; // r8
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !*(_BYTE *)a1 )
  {
    v6 = *(_BYTE *)(a1 + 3);
    v2 = *(_QWORD *)(a1 + 16);
    switch ( v6 )
    {
      case 8:
        *(_BYTE *)v2 = a2;
        break;
      case 16:
        *(_WORD *)v2 = a2;
        break;
      case 32:
        *(_DWORD *)v2 = a2;
        break;
      case 64:
        *(_QWORD *)v2 = a2;
        break;
      default:
        return v2;
    }
LABEL_25:
    _InterlockedOr(v8, 0);
    return v2;
  }
  if ( *(_BYTE *)a1 == 10 )
  {
    v3 = *(unsigned __int8 *)(a1 + 1) + *(unsigned __int8 *)(a1 + 2);
    if ( v3 > 8 )
    {
      if ( v3 > 0x10 )
      {
        v4 = 64;
        if ( v3 <= 0x20 )
          v4 = 32;
      }
      else
      {
        v4 = 16;
      }
    }
    else
    {
      v4 = 8;
    }
    v2 = *(_QWORD *)(a1 + 16);
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(v2 + 88));
    switch ( v4 )
    {
      case 8:
        *v5 = a2;
        break;
      case 16:
        *(_WORD *)v5 = a2;
        break;
      case 32:
        *(_DWORD *)v5 = a2;
        break;
      default:
        *(_QWORD *)v5 = a2;
        break;
    }
    goto LABEL_25;
  }
  LOBYTE(v2) = WriteIoMemRaw(a1, a2);
  return v2;
}

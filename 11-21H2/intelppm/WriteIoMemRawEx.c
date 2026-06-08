/*
 * XREFs of WriteIoMemRawEx @ 0x1C0001B38
 * Callers:
 *     PerfControlHwp @ 0x1C0001A80 (PerfControlHwp.c)
 *     WriteGenAddrEx @ 0x1C0002034 (WriteGenAddrEx.c)
 *     PerfControlCpcSingleRegister @ 0x1C0007950 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     WriteIoMemRaw @ 0x1C0001B64 (WriteIoMemRaw.c)
 */

__int64 __fastcall WriteIoMemRawEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  int v4; // r9d
  _BYTE *v5; // r8
  char v6; // r8
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 != 10 )
      return WriteIoMemRaw();
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
    result = *(_QWORD *)(a1 + 16);
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 4) + *(_QWORD *)(result + 88));
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
LABEL_26:
    _InterlockedOr(v7, 0);
    return result;
  }
  v6 = *(_BYTE *)(a1 + 3);
  result = *(_QWORD *)(a1 + 16);
  switch ( v6 )
  {
    case 8:
      *(_BYTE *)result = a2;
      goto LABEL_26;
    case 16:
      *(_WORD *)result = a2;
      goto LABEL_26;
    case 32:
      *(_DWORD *)result = a2;
      goto LABEL_26;
    case 64:
      *(_QWORD *)result = a2;
      goto LABEL_26;
  }
  return result;
}

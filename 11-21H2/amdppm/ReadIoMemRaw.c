/*
 * XREFs of ReadIoMemRaw @ 0x1C0003ACC
 * Callers:
 *     WriteGenAddr @ 0x1C0001BF8 (WriteGenAddr.c)
 *     ReadGenAddr @ 0x1C0003958 (ReadGenAddr.c)
 *     ReadIoMemRawEx @ 0x1C0003B30 (ReadIoMemRawEx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadIoMemRaw(__int64 a1)
{
  __int64 v1; // r9
  char v2; // dl
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 4);
  v2 = *(_BYTE *)(a1 + 3);
  if ( *(_BYTE *)a1 != 1 )
  {
    if ( *(_BYTE *)a1 == 127 && v2 == 64 )
      return __readmsr(v1);
    return 0LL;
  }
  switch ( v2 )
  {
    case 8:
      LOBYTE(result) = __inbyte(v1);
      return (unsigned __int8)result;
    case 16:
      LOWORD(result) = __inword(v1);
      return (unsigned __int16)result;
    case 32:
      LODWORD(result) = __indword(v1);
      return (unsigned int)result;
    default:
      return 0LL;
  }
}

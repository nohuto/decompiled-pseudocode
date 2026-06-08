/*
 * XREFs of ReadIoMemRaw @ 0x1C0001FC0
 * Callers:
 *     GetCpcDifferentialFeedback @ 0x1C0001F10 (GetCpcDifferentialFeedback.c)
 *     WriteGenAddr @ 0x1C00025EC (WriteGenAddr.c)
 *     ReadIoMemRawEx @ 0x1C00027F8 (ReadIoMemRawEx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadIoMemRaw(__int64 a1)
{
  __int64 v1; // r8
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

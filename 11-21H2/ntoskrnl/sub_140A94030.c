/*
 * XREFs of sub_140A94030 @ 0x140A94030
 * Callers:
 *     sub_140A938A4 @ 0x140A938A4 (sub_140A938A4.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     RtlFreeAnsiString @ 0x14070AFC0 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 */

__int64 __fastcall sub_140A94030(unsigned __int8 **a1, const UNICODE_STRING *a2, unsigned __int8 **a3)
{
  char *Buffer; // r9
  unsigned int v4; // edi
  int v5; // ebp
  unsigned __int8 **v6; // rbx
  unsigned __int8 *v9; // rax
  char *v10; // rax
  int v11; // r8d
  int v12; // ecx
  int v13; // eax
  unsigned __int8 *v14; // rax
  _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  Buffer = 0LL;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  v5 = 0;
  v6 = a3;
  if ( !*a3 )
    return v4;
  while ( 1 )
  {
    v9 = v6[2];
    if ( v9 == *a1 )
      break;
    if ( !v9 )
    {
      if ( !v5 )
      {
        while ( RtlUnicodeStringToAnsiString(&DestinationString, a2, 1u) < 0 )
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_140A75030);
        Buffer = DestinationString.Buffer;
        v5 = 1;
      }
      v10 = (char *)*v6;
      do
      {
        v11 = (unsigned __int8)v10[Buffer - (char *)*v6];
        v12 = (unsigned __int8)*v10 - v11;
        if ( v12 )
          break;
        ++v10;
      }
      while ( v11 );
      if ( !v12 )
        break;
    }
    v6 += 7;
    if ( !*v6 )
      goto LABEL_25;
  }
  if ( (unsigned int)sub_1402DA4B0() && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    goto LABEL_23;
  }
  v13 = *((_DWORD *)v6 + 8);
  if ( (v13 & 1) == 0 )
    goto LABEL_25;
  if ( (v13 & 4) != 0 )
  {
LABEL_23:
    *a1 = v6[1];
  }
  else
  {
    v14 = v6[5];
    if ( !*(_QWORD *)v14 )
      goto LABEL_25;
    *a1 = *(unsigned __int8 **)v14;
  }
  v4 = 1;
LABEL_25:
  if ( v5 )
    RtlFreeAnsiString(&DestinationString);
  return v4;
}

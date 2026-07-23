/*
 * XREFs of sub_1409777B4 @ 0x1409777B4
 * Callers:
 *     sub_1406C9390 @ 0x1406C9390 (sub_1406C9390.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14097323C @ 0x14097323C (sub_14097323C.c)
 */

__int64 __fastcall sub_1409777B4(UNICODE_STRING **a1, _DWORD *a2, int *a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v10; // rbx
  unsigned int v11; // edi
  unsigned __int16 Length; // bp
  unsigned __int64 v13; // rsi
  UNICODE_STRING *v14; // rax
  UNICODE_STRING *v15; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  DestinationString = 0LL;
  v10 = *((_QWORD *)KeGetCurrentThread() + 23);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = sub_14097323C(v10, *a3, a3[1], &DestinationString);
  if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741275 )
  {
    Length = DestinationString.Length;
    v13 = DestinationString.Length + 48LL;
    if ( a6 < v13 )
    {
      v11 = 0;
      *a1 = 0LL;
LABEL_10:
      *a2 = v13;
      goto LABEL_11;
    }
    v14 = (UNICODE_STRING *)sub_1402828F0(256, (unsigned int)v13, 0x71486D4Du);
    v11 = 0;
    v15 = v14;
    if ( v14 )
    {
      v14->Buffer = (wchar_t *)-1LL;
      *(_DWORD *)&v14->Length = 1;
      LODWORD(v14[1].Buffer) = a4;
      *(_QWORD *)&v14[1].Length = *(_QWORD *)a3;
      if ( Length )
      {
        v14[2].MaximumLength = Length;
        v14[2].Length = Length;
        v14[2].Buffer = &v14[3].Length;
        RtlCopyUnicodeString(v14 + 2, &DestinationString);
        v15[2].Buffer = (wchar_t *)((char *)v15[2].Buffer + a5 - (_QWORD)v15);
      }
      *a1 = v15;
      goto LABEL_10;
    }
    v11 = -1073741670;
  }
LABEL_11:
  RtlFreeUnicodeString(&DestinationString);
  return v11;
}

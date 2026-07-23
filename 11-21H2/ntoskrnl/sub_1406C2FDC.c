/*
 * XREFs of sub_1406C2FDC @ 0x1406C2FDC
 * Callers:
 *     sub_14066F678 @ 0x14066F678 (sub_14066F678.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406C2D34 @ 0x1406C2D34 (sub_1406C2D34.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_1406C2FDC(
        __int64 a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        char a4,
        unsigned __int8 a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        unsigned __int8 *a9)
{
  unsigned int v9; // edi
  unsigned int v14; // ebx
  _DWORD *i; // rsi
  __int64 v16; // r15
  __int64 *v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v20; // rcx
  char v21; // al
  unsigned __int8 v22; // bl
  unsigned __int8 v23; // si
  _BYTE *v24; // r15
  char v25; // al
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF

  v9 = 0;
  v14 = 0;
  if ( !a2 )
    return (unsigned int)-1073741275;
  for ( i = (_DWORD *)(a1 + 20); ; i += 6 )
  {
    v16 = v14;
    if ( RtlEqualUnicodeString(a3, (PCUNICODE_STRING)(a1 + 24LL * v14), 1u) )
    {
      if ( !*i || *i == dword_140C15C70 )
        break;
    }
    if ( ++v14 >= a2 )
      return (unsigned int)-1073741275;
  }
  v20 = 3LL * v14;
  v21 = *(_BYTE *)(a1 + 24LL * v14 + 18);
  if ( !v21 )
  {
    v22 = a5;
    if ( a5 )
    {
      v23 = a5;
      goto LABEL_10;
    }
  }
  v22 = *(_BYTE *)(a1 + 24 * v16 + 18);
  v23 = v22;
  if ( v21 )
  {
LABEL_10:
    v24 = a7;
    v17 = &qword_140A37E10;
    v20 = (unsigned __int64)v22 >> 4;
    *a7 = *((_BYTE *)&qword_140A37E10 + 2 * v20);
    v25 = *((_BYTE *)&qword_140A37E10 + 2 * v20 + 1);
    goto LABEL_11;
  }
  v24 = a7;
  *a7 = *(_BYTE *)(a1 + 8 * v20 + 16);
  v25 = *(_BYTE *)(a1 + 8 * v20 + 17);
LABEL_11:
  *a8 = v25;
  if ( !qword_140C1B8E0 || (LOBYTE(v20) = *v24, LOBYTE(v17) = a6, !(unsigned int)sub_14042A5E0(v20, v17)) )
    *v24 = a6;
  if ( !qword_140C1B8E0 || (LOBYTE(v20) = *a8, LOBYTE(v17) = a6, !(unsigned int)sub_14042A5E0(v20, v17)) )
    *a8 = a6;
  if ( (v22 & 7) != 1 && ((a4 & 1) != 0 || (v22 & 7) == 2) )
  {
    if ( (*a8 & 0xFu) < 4 )
      *a8 = *v24;
    v23 = v22 & 0xF2 | *a9 & 8 | 2;
  }
  *a9 = v23;
  Handle = 0LL;
  if ( !v23 && !*a8 && (int)sub_1406C2D34(&a3->Length, (__int64)v17, v18, &Handle) >= 0 )
  {
    RtlQueryImageFileKeyOption(Handle, 4, 0LL);
    ZwClose(Handle);
  }
  return v9;
}

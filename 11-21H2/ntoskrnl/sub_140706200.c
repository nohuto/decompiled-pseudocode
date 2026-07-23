/*
 * XREFs of sub_140706200 @ 0x140706200
 * Callers:
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 *     sub_14082CB7C @ 0x14082CB7C (sub_14082CB7C.c)
 *     sub_140B06E60 @ 0x140B06E60 (sub_140B06E60.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall sub_140706200(
        char *BaseOfImage,
        ULONG64 Size,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // r15
  NTSTATUS v10; // r10d
  WORD v11; // bx
  int v12; // esi
  __int64 v13; // r11
  char *v15; // rdi
  char *v16; // rax
  __int64 v17; // r11
  __int64 v18; // rax
  int v19; // edx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-30h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]

  v8 = (unsigned int)Size;
  OutHeaders = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  *a7 = 0;
  if ( a6 == 523 )
  {
    if ( a4 >= 0xE6 )
    {
      v11 = *(_WORD *)(a3 + 228);
      v12 = *(_DWORD *)(a3 + 224);
    }
    if ( a4 >= 0xC8 )
      v13 = *(_QWORD *)(a3 + 192);
  }
  else
  {
    if ( a4 >= 0x8E )
    {
      v11 = *(_WORD *)(a3 + 140);
      v12 = *(_DWORD *)(a3 + 136);
    }
    if ( a4 >= 0x7C )
      v13 = *(unsigned int *)(a3 + 120);
  }
  if ( v11 )
  {
    v15 = &BaseOfImage[(unsigned int)Size];
    v10 = RtlImageNtHeaderEx(0, BaseOfImage, (unsigned int)Size, &OutHeaders);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v11 > OutHeaders->FileHeader.NumberOfSections )
      return (unsigned int)-1073741701;
    v16 = (char *)OutHeaders + 40 * v11 + OutHeaders->FileHeader.SizeOfOptionalHeader - 16;
    if ( v15 <= v16 || v15 < v16 + 40 )
      return (unsigned int)-1073741701;
    _mm_lfence();
    v17 = (unsigned int)(v12 + *((_DWORD *)v16 + 3));
  }
  else
  {
    if ( !v13 )
      return (unsigned int)-1073741637;
    if ( a5 )
      v17 = (unsigned int)(v13 - a5);
    else
      v17 = (unsigned int)(v13 - (_DWORD)BaseOfImage);
  }
  if ( v17 + 8 < (unsigned __int64)(unsigned int)v17 )
    return (unsigned int)-1073741701;
  if ( v17 + 8 > v8 )
    return (unsigned int)-1073741701;
  v21 = *(_QWORD *)&BaseOfImage[v17];
  v18 = v21;
  v19 = HIDWORD(v21) + 8;
  if ( (unsigned int)(HIDWORD(v21) + 8) < HIDWORD(v21)
    || v19 + (int)v17 < (unsigned int)v17
    || v19 + (int)v17 > (unsigned int)v8 )
  {
    return (unsigned int)-1073741701;
  }
  else
  {
    *a7 = v17;
    if ( a8 )
      *a8 = v18;
  }
  return (unsigned int)v10;
}

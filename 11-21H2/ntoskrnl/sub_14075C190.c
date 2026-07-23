/*
 * XREFs of sub_14075C190 @ 0x14075C190
 * Callers:
 *     sub_14075C22C @ 0x14075C22C (sub_14075C22C.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     sub_14075AEA4 @ 0x14075AEA4 (sub_14075AEA4.c)
 */

unsigned __int64 __fastcall sub_14075C190(PVOID BaseOfImage, unsigned int a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v5; // rbp
  _DWORD *v8; // rax
  unsigned __int64 v9; // r8
  PIMAGE_NT_HEADERS v11; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &v11);
  v8 = sub_14075AEA4(BaseOfImage);
  *a3 = 0;
  if ( v8
    && *v8 >= 0x70u
    && (v9 = *((_QWORD *)v8 + 11), v9 > (unsigned __int64)BaseOfImage)
    && v9 < (unsigned __int64)BaseOfImage + v5 - 8 )
  {
    if ( a4 )
      *a4 = v8;
    return v9;
  }
  else
  {
    if ( a4 )
    {
      if ( v8 && *v8 >= 4u )
        *a4 = v8;
      else
        *a4 = 0LL;
    }
    return 0LL;
  }
}

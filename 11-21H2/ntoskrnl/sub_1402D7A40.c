/*
 * XREFs of sub_1402D7A40 @ 0x1402D7A40
 * Callers:
 *     sub_14075883C @ 0x14075883C (sub_14075883C.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D749C @ 0x1402D749C (sub_1402D749C.c)
 *     sub_1402D7BD4 @ 0x1402D7BD4 (sub_1402D7BD4.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 */

__int64 __fastcall sub_1402D7A40(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int j; // edi
  PIMAGE_NT_HEADERS v11; // rax
  WORD Magic; // cx
  __int64 SizeOfImage; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF

  v15[0] = 0LL;
  SizeOfImage = 0LL;
  sub_1402D749C();
  KeWaitForSingleObject(&Mutant, Executive, 0, 0, 0LL);
  *a4 = 0LL;
  v7 = dword_140C1BC58;
  for ( i = dword_140C1BC58 - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)((char *)P + v9 + 8) == a1 )
    {
      if ( v15[0] )
      {
        for ( j = v7; j >= 0; --j )
        {
          if ( *((_QWORD *)P + 8 * (__int64)j + 1) == a1
            && (unsigned __int8)sub_1402D7BD4((unsigned int)j, a3, v15, &SizeOfImage) )
          {
            v7 = j;
            goto LABEL_12;
          }
        }
        v7 = dword_140C1BC58;
        break;
      }
      v15[0] = *(_QWORD *)((char *)P + v9 + 32);
      SizeOfImage = *(_QWORD *)((char *)P + v9 + 48);
      v7 = i;
    }
  }
LABEL_12:
  if ( v7 == dword_140C1BC58 )
  {
    v15[0] = 0LL;
  }
  else
  {
    if ( !SizeOfImage )
    {
      v11 = RtlImageNtHeader((PVOID)(v15[0] & 0xFFFFFFFFFFFFFFFCuLL));
      if ( v11 )
      {
        Magic = v11->OptionalHeader.Magic;
        if ( Magic == 267 || Magic == 523 )
          SizeOfImage = v11->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  KeReleaseMutant(&Mutant, 1, 0, 0);
  return v15[0];
}

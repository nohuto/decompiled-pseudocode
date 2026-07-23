/*
 * XREFs of sub_140A71180 @ 0x140A71180
 * Callers:
 *     sub_140A70D60 @ 0x140A70D60 (sub_140A70D60.c)
 * Callees:
 *     sub_1403BECF8 @ 0x1403BECF8 (sub_1403BECF8.c)
 *     wcsncpy_s @ 0x1403E7870 (wcsncpy_s.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A71270 @ 0x140A71270 (sub_140A71270.c)
 */

__int64 __fastcall sub_140A71180(__int64 a1, __int64 a2)
{
  _OWORD *v3; // rcx
  __int64 v4; // rdx
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  ULONG_PTR v7; // rax
  int v8; // ecx
  void *Pool2; // rax
  __int64 v11; // rcx
  size_t v12; // rdi
  void *v13; // rax

  if ( !a2 )
    return 3221225485LL;
  if ( *(_BYTE *)(a2 + 19) )
    return 0LL;
  if ( qword_140C4BED0 && *(_BYTE *)(qword_140C4BED0 + 19) && (unsigned __int8)sub_140A71270() )
  {
    v3 = (_OWORD *)qword_140C4BED0;
    v4 = 2LL;
    v5 = (_OWORD *)a2;
    do
    {
      *v5 = *v3;
      v5[1] = v3[1];
      v5[2] = v3[2];
      v5[3] = v3[3];
      v5[4] = v3[4];
      v5[5] = v3[5];
      v5[6] = v3[6];
      v5 += 8;
      v6 = v3[7];
      v3 += 8;
      *(v5 - 1) = v6;
      --v4;
    }
    while ( v4 );
    *v5 = *v3;
    v7 = *(unsigned int *)(qword_140C4BED0 + 216);
    if ( !(_DWORD)v7 || !*(_QWORD *)(qword_140C4BED0 + 208) )
      goto LABEL_9;
    if ( qword_140C54AC0 )
      Pool2 = (void *)sub_1403BECF8((unsigned int)v7);
    else
      Pool2 = (void *)ExAllocatePool2(256LL, v7, 0x646C6148u);
    *(_QWORD *)(a2 + 208) = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *(const void **)(qword_140C4BED0 + 208), *(unsigned int *)(qword_140C4BED0 + 216));
LABEL_9:
      v8 = *(_DWORD *)(qword_140C4BED0 + 232);
      if ( !v8 || !*(_QWORD *)(qword_140C4BED0 + 224) )
        goto LABEL_10;
      v11 = (unsigned int)(v8 + 2);
      v12 = (unsigned int)v11;
      if ( qword_140C54AC0 )
        v13 = (void *)sub_1403BECF8(v11);
      else
        v13 = (void *)ExAllocatePool2(256LL, (unsigned int)v11, 0x646C6148u);
      *(_QWORD *)(a2 + 224) = v13;
      if ( v13 )
      {
        memset(v13, 0, v12);
        wcsncpy_s(
          *(wchar_t **)(a2 + 224),
          v12 >> 1,
          *(const wchar_t **)(qword_140C4BED0 + 224),
          (unsigned __int64)*(unsigned int *)(qword_140C4BED0 + 232) >> 1);
LABEL_10:
        *(_WORD *)(a2 + 18) = 256;
        return 0LL;
      }
    }
  }
  return 3221225473LL;
}

/*
 * XREFs of sub_14037D5E8 @ 0x14037D5E8
 * Callers:
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 * Callees:
 *     sub_1402365F4 @ 0x1402365F4 (sub_1402365F4.c)
 *     sub_14026B1C0 @ 0x14026B1C0 (sub_14026B1C0.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 */

__int64 __fastcall sub_14037D5E8(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 *a3,
        _OWORD *a4,
        __int64 *a5)
{
  unsigned int v5; // esi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  int v14; // edi
  char v15; // al
  char v16; // cl
  int v17; // r9d
  _QWORD *v18; // r8
  __int128 v20; // [rsp+20h] [rbp-10h]
  __int64 v21; // [rsp+60h] [rbp+30h]

  v5 = 0;
  *(_QWORD *)&v20 = 0LL;
  v9 = a2 | ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(qword_140C51F48
                                                           + 8
                                                           * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL))
                                               + 1172LL) << 60);
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v20 + 1) = 3LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( (unsigned int)sub_14027B080(v10) == 5 )
    {
      *(_QWORD *)&v20 = v10 - 1432;
      *((_QWORD *)&v20 + 1) = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      v11 = (__int64)(v10 << 25) >> 16;
      HIDWORD(v20) = HIDWORD(v11);
      if ( (unsigned int)sub_14027B080(v11) == 1
        || v11 <= 0x7FFFFFFEFFFFLL
        || v11 >= qword_140C540C0 && v11 <= qword_140C51BF0
        || v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v12 = sub_14026B1C0(BugCheckParameter2);
        if ( v12 == BugCheckParameter2 )
          return (unsigned int)-1073741253;
        v13 = (*(_QWORD *)v12 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
        *(_QWORD *)&v20 = v13;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned int)sub_14027B080(v11) == 1 )
        {
          v14 = v11 & 0xFFFFFFFC | 1;
        }
        else
        {
          if ( (unsigned int)sub_1402365F4(v13) )
            return (unsigned int)-1073741401;
          v14 = v11 & 0xFFFFFFFC;
        }
      }
      else
      {
        v14 = v11 & 0xFFFFFFFC | 2;
      }
      DWORD2(v20) = v14;
    }
  }
  v21 = *a5;
  v15 = sub_140273234(BugCheckParameter2);
  v16 = (*(_BYTE *)(BugCheckParameter2 + 34) & 0xC0) - 64;
  *a3 = v9;
  LODWORD(v21) = v17 | v21 & 0xFFF90C00 | (v16 != 0 ? 0x20000 : 0) | ((v15 & 7) << 13) | 0xC00;
  *v18 = v21;
  *a4 = v20;
  return v5;
}

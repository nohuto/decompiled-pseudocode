/*
 * XREFs of sub_140A934D8 @ 0x140A934D8
 * Callers:
 *     sub_140A89FE0 @ 0x140A89FE0 (sub_140A89FE0.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A81214 @ 0x140A81214 (sub_140A81214.c)
 *     sub_140A93C34 @ 0x140A93C34 (sub_140A93C34.c)
 *     sub_140A93DEC @ 0x140A93DEC (sub_140A93DEC.c)
 */

__int64 __fastcall sub_140A934D8(__int64 a1)
{
  __int64 v2; // rbp
  unsigned int v3; // r12d
  void *Pool2; // rdi
  __int64 result; // rax
  _QWORD *v6; // rsi
  ULONG v7; // r14d
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rdx
  int v13; // r11d
  __int64 v14; // rcx
  ULONG Size; // [rsp+68h] [rbp+10h] BYREF

  Size = 0;
  v2 = 0LL;
  v3 = 0;
  Pool2 = (void *)ExAllocatePool2(64LL, 24LL * (unsigned int)dword_140C1AA74, 0x6D4D7644u);
  if ( !Pool2 )
    return 3221225495LL;
  memset(Pool2, 0, 24LL * (unsigned int)dword_140C1AA74);
  result = (__int64)RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &Size);
  v6 = (_QWORD *)result;
  if ( result )
  {
    v7 = Size >> 3;
    v8 = (__int64 *)sub_140A93C34(result, Size >> 3);
    if ( !v7 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( v8 )
      {
        v9 = *v8;
        LODWORD(v10) = 0;
        if ( *v8 )
          break;
      }
LABEL_10:
      v12 = sub_140A93DEC(&xmmword_140C1B2B0, *v6);
      if ( v12 )
        goto LABEL_11;
LABEL_12:
      ++v6;
      if ( v13 + 1 >= v7 )
      {
        if ( (_DWORD)v2 )
          v3 = sub_140A81214((_QWORD *)a1, (int *)Pool2, v2);
LABEL_15:
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        ExFreePoolWithTag(Pool2, 0);
        return v3;
      }
    }
    v11 = *v6;
    while ( 1 )
    {
      v12 = sub_140A93DEC(v9 + 24, v11);
      if ( v12 )
        break;
      v10 = (unsigned int)(v10 + 1);
      v9 = v8[v10];
      if ( !v9 )
        goto LABEL_10;
    }
LABEL_11:
    v14 = 3 * v2;
    v2 = (unsigned int)(v2 + 1);
    *((_DWORD *)Pool2 + 2 * v14) = v13;
    *((_QWORD *)Pool2 + v14 + 1) = v12;
    goto LABEL_12;
  }
  return result;
}

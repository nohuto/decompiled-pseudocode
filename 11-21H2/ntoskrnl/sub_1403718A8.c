/*
 * XREFs of sub_1403718A8 @ 0x1403718A8
 * Callers:
 *     RtlAllocateHeap @ 0x140371850 (RtlAllocateHeap.c)
 *     sub_1405E511C @ 0x1405E511C (sub_1405E511C.c)
 * Callees:
 *     sub_140371588 @ 0x140371588 (sub_140371588.c)
 *     RtlFreeHeap @ 0x140371770 (RtlFreeHeap.c)
 *     sub_140371924 @ 0x140371924 (sub_140371924.c)
 *     sub_14037193C @ 0x14037193C (sub_14037193C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405E80B0 @ 0x1405E80B0 (sub_1405E80B0.c)
 *     sub_1405E8980 @ 0x1405E8980 (sub_1405E8980.c)
 *     sub_1405EAF08 @ 0x1405EAF08 (sub_1405EAF08.c)
 */

void *__fastcall sub_1403718A8(_DWORD *HeapHandle, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v5; // eax
  void *v6; // rdi
  int v8; // r14d
  unsigned __int64 v9; // r15
  int v10; // ebp
  __int64 v11; // r15
  __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // [rsp+70h] [rbp+8h]

  v3 = a2;
  if ( HeapHandle[4] == -857879331 )
  {
    if ( a2 > 0x20000 )
      return 0LL;
    v5 = sub_140371924(a3);
    return (void *)sub_14037193C(HeapHandle + 16, (unsigned int)v3, (unsigned int)v3, HeapHandle[5] | v5);
  }
  v8 = HeapHandle[29] | a3;
  v9 = 0LL;
  v15 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || !(unsigned int)sub_140371588(a2, (int)HeapHandle, (__int64)(HeapHandle + 94)) )
    goto LABEL_21;
  v10 = HeapHandle[36];
  if ( v10 )
  {
    if ( (v8 & 0x3C000102) != 0 )
    {
      v10 = 0;
    }
    else
    {
      if ( (_WORD)v10 != 1 || (int)sub_14042A5E0(HeapHandle, 0LL) < 0 )
        goto LABEL_21;
      v3 += 16LL;
      v15 = 16LL;
    }
  }
  v11 = 1LL;
  if ( v3 )
    v11 = v3;
  v9 = (v11 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = sub_1405E80B0((_DWORD)HeapHandle);
  v6 = (void *)v12;
  if ( !v12 )
    goto LABEL_22;
  if ( !v10 )
    return v6;
  v3 -= v15;
  v14 = sub_1405EAF08((_DWORD)HeapHandle, v8, v12, v13, v15, v10);
  v6 = (void *)v14;
  if ( (_WORD)v10 == 1 && (int)sub_14042A5E0(HeapHandle, v14) >= 0 )
    return v6;
  RtlFreeHeap(HeapHandle, 0, v6);
LABEL_21:
  v6 = 0LL;
LABEL_22:
  if ( (v8 & 4) != 0 )
  {
    if ( v9 )
      v3 = v9;
    sub_1405E8980(v3);
  }
  return v6;
}

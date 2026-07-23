/*
 * XREFs of sub_14078BF98 @ 0x14078BF98
 * Callers:
 *     sub_14076A3C4 @ 0x14076A3C4 (sub_14076A3C4.c)
 *     sub_140844A24 @ 0x140844A24 (sub_140844A24.c)
 * Callees:
 *     sub_140699C30 @ 0x140699C30 (sub_140699C30.c)
 *     sub_1406D27C8 @ 0x1406D27C8 (sub_1406D27C8.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077B4E4 @ 0x14077B4E4 (sub_14077B4E4.c)
 *     sub_14077B534 @ 0x14077B534 (sub_14077B534.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_140788E8C @ 0x140788E8C (sub_140788E8C.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14078BF98(unsigned int a1, _WORD *a2, __int64 *a3)
{
  unsigned int v3; // r14d
  __int64 v6; // r13
  __int64 Pool2; // rax
  __int64 v8; // rdi
  __int64 **v9; // rsi
  __int64 v10; // rcx
  signed int v11; // ebx
  __int64 *v12; // rdx
  __int64 *v13; // rdx
  wchar_t *v14; // rdx
  __int64 v15; // rcx
  wchar_t *v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int64 **v19; // r12
  __int64 *v20; // rsi
  unsigned int v22; // eax
  wchar_t *v23; // rax
  _QWORD *v24; // rax
  unsigned int v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 **v26; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-10h] BYREF
  char v29; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v26 = 0LL;
  v25 = 0;
  v29 = 0;
  sub_14077B4E4(a1, &v26, &v25);
  v6 = v25;
  Pool2 = ExAllocatePool2(256LL, 24 * v25 + 112, 1517317712LL);
  v8 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v9 = (__int64 **)(Pool2 + 16);
  *(_QWORD *)Pool2 = 0LL;
  *(_DWORD *)(Pool2 + 8) = 1;
  *(_DWORD *)(Pool2 + 28) = a1;
  v11 = sub_14077DE70(a2, 0x7FFFFFFFuLL, 0x5A706E50u, (PVOID *)(Pool2 + 16));
  if ( v11 < 0 )
    goto LABEL_40;
  v12 = *v9;
  if ( a1 == 3 )
  {
    v11 = sub_140788E8C(v10, v12, 0);
    if ( v11 >= 0 )
    {
      v13 = *v9;
      v11 = 0;
      String = 0LL;
      v14 = (wchar_t *)(v13 + 1);
      if ( !v14 )
        goto LABEL_11;
      v15 = 0x7FFFLL;
      v16 = v14;
      do
      {
        if ( !*v16 )
          break;
        ++v16;
        --v15;
      }
      while ( v15 );
      goto LABEL_9;
    }
LABEL_40:
    sub_14077B394((unsigned int *)v8);
    return (unsigned int)v11;
  }
  v11 = sub_140699C30(v10, (__int64)v12, a1);
  if ( v11 < 0 )
    goto LABEL_40;
  v14 = (wchar_t *)*v9;
  v11 = 0;
  String = 0LL;
  if ( v14 )
  {
    v15 = 0x7FFFLL;
    v23 = v14;
    do
    {
      if ( !*v23 )
        break;
      ++v23;
      --v15;
    }
    while ( v15 );
LABEL_9:
    v11 = v15 == 0 ? 0xC000000D : 0;
    if ( v15 )
    {
      String.Buffer = v14;
      String.Length = -2 - 2 * v15;
      String.MaximumLength = -2 * v15;
    }
  }
LABEL_11:
  if ( v11 < 0 )
    goto LABEL_40;
  v11 = RtlHashUnicodeString(&String, 1u, 0, (PULONG)(v8 + 24));
  if ( a1 == 1 )
  {
    v24 = (_QWORD *)(v8 + 88);
  }
  else if ( a1 == 2 || a1 == 4 )
  {
    v24 = (_QWORD *)(v8 + 40);
  }
  else
  {
    if ( a1 - 5 >= 2 )
      goto LABEL_16;
    *(_QWORD *)(v8 + 48) = v8 + 40;
    *(_QWORD *)(v8 + 40) = v8 + 40;
    v24 = (_QWORD *)(v8 + 64);
  }
  *v24 = v24;
  v24[1] = v24;
LABEL_16:
  if ( (_DWORD)v6 )
  {
    v17 = (_DWORD *)(v8 + 112);
    v18 = v6;
    do
    {
      *v17 = 1;
      v17 += 6;
      --v18;
    }
    while ( v18 );
  }
  v19 = v26;
  v20 = (__int64 *)off_140002428;
  do
  {
    if ( a1 == *((_DWORD *)v20 - 2) )
    {
      v22 = sub_14077B534((__int64)v19, v6, *v20);
      if ( v22 >= (unsigned int)v6 )
      {
        v11 = -1073741595;
        goto LABEL_40;
      }
      v11 = sub_1406D27C8(
              17,
              (__int128 *)&v29,
              1u,
              (int)v19[3 * v22 + 1],
              HIDWORD(v19[3 * v22 + 1]),
              v8 + 112 + 24LL * v22);
      if ( v11 < 0 )
        goto LABEL_40;
    }
    ++v3;
    v20 += 7;
  }
  while ( v3 < 3 );
  if ( v11 < 0 )
    goto LABEL_40;
  *a3 = v8;
  return (unsigned int)v11;
}

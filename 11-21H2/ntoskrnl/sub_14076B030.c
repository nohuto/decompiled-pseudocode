/*
 * XREFs of sub_14076B030 @ 0x14076B030
 * Callers:
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14094F860 @ 0x14094F860 (sub_14094F860.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14076B1A8 @ 0x14076B1A8 (sub_14076B1A8.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_140946EF8 @ 0x140946EF8 (sub_140946EF8.c)
 */

__int64 __fastcall sub_14076B030(void *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rax
  void *v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  int v13; // r8d
  __int64 v14; // rdx
  char v15; // al
  char v16; // al
  int v18; // eax
  int v19; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  int v23; // [rsp+A8h] [rbp+58h] BYREF

  Handle = a1;
  v3 = 0LL;
  v23 = 0;
  v19 = 0;
  v20 = 0;
  v6 = 1;
  v21 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = sub_140779C10(a2, 1433431632LL);
  v10 = (void *)v9;
  if ( !v9
    || (v11 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL), (v3 = v11) == 0)
    || (*(_DWORD *)(v11 + 396) & 0x2000) == 0
    || (v18 = *(_DWORD *)(v11 + 404), v18 != 22) && v18 != 29 )
  {
    v12 = sub_140779CA0(&v21, 0LL, a2);
    v8 = v21;
    if ( v12 >= 0 )
    {
      v13 = (int)Handle;
      if ( Handle )
      {
LABEL_6:
        v19 = 4;
        if ( (int)sub_14077CD90(qword_140D00AC0, v8, v13, 11, (__int64)&v20, (__int64)&v23, (__int64)&v19, 0) < 0
          || v20 == 4 && v19 == 4 )
        {
          v15 = v23;
        }
        else
        {
          v15 = 0;
          v23 = 0;
        }
        if ( (v15 & 1) != 0 )
        {
          v16 = 1;
          v23 = 1;
        }
        else
        {
          sub_14076B1A8(a2, v14, &v23);
          v16 = v23;
        }
        if ( (v16 & 7) != 0 )
        {
          v6 = 0;
          if ( a3 )
          {
            if ( v3 && (unsigned int)(*(_DWORD *)(v3 + 300) - 769) > 1 )
              sub_140946EF8(v3, 22LL);
          }
        }
LABEL_13:
        if ( !v10 )
          goto LABEL_15;
        goto LABEL_14;
      }
      if ( (int)sub_14077F2EC(qword_140D00AC0, v21, 16, 0, 131097, 0, (__int64)&Handle, 0LL) >= 0 )
      {
        v13 = (int)Handle;
        v7 = 1;
        goto LABEL_6;
      }
    }
    v6 = 0;
    goto LABEL_13;
  }
  v6 = 0;
LABEL_14:
  ObfDereferenceObjectWithTag(v10, 0x55706E50u);
LABEL_15:
  if ( v7 )
    ZwClose(Handle);
  if ( v8 )
    sub_14077BAB8(v8, a2);
  return v6;
}

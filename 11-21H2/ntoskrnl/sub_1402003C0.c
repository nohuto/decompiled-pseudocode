/*
 * XREFs of sub_1402003C0 @ 0x1402003C0
 * Callers:
 *     sub_140200230 @ 0x140200230 (sub_140200230.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14024A0FC @ 0x14024A0FC (sub_14024A0FC.c)
 *     sub_14024A2B8 @ 0x14024A2B8 (sub_14024A2B8.c)
 *     sub_14024A35C @ 0x14024A35C (sub_14024A35C.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_140590CF0 @ 0x140590CF0 (sub_140590CF0.c)
 */

volatile signed __int32 *__fastcall sub_1402003C0(ULONG_PTR *a1)
{
  ULONG_PTR v1; // r14
  ULONG_PTR v3; // rdi
  signed __int32 v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned __int16 v9; // bx
  char v10; // al
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdi
  BOOL v13; // ebp
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  ULONG_PTR v18; // rdi
  signed __int32 v19; // eax
  unsigned int v20; // ebx
  volatile signed __int32 *result; // rax
  __int64 v22; // [rsp+20h] [rbp-48h]
  char v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h] BYREF
  int v25; // [rsp+80h] [rbp+18h] BYREF
  int v26; // [rsp+88h] [rbp+20h] BYREF

  v1 = *a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = ~v4 & 0x80000000;
  if ( (v4 & 0x7FFFFFFF) != 0 )
  {
    v25 = 0;
    while ( (*(_DWORD *)v3 & 0x80000000) != v5 )
      sub_1402F32E0(&v25);
    goto LABEL_27;
  }
  *(_DWORD *)v3 = v5 | *(_DWORD *)(v3 + 4);
  if ( !*(_DWORD *)(v1 + 40) )
  {
    v6 = 48LL * *(_QWORD *)v1 - 0x220000000000LL;
    v22 = *(_QWORD *)(v1 + 8);
    v7 = *(_QWORD *)(v1 + 64);
    v8 = 0LL;
    v9 = (*(_QWORD *)(v1 + 56) != 0LL) + 1;
    v10 = sub_1402CF4F0(v7);
    v24 = 0;
    v23 = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v24);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL)) == *(_QWORD *)(v1 + 32) )
    {
      if ( (unsigned int)sub_14024A2B8(v6, v9) )
      {
        if ( ((sub_14024A35C(v6, v11) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
        {
          v11 = *(_QWORD *)(v6 + 8);
          if ( *(_QWORD *)(v1 + 48) == (__int64)(v11 << 25) >> 16 )
          {
            v8 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( (unsigned int)sub_14031DE00(v7, v8, 1LL) )
            {
              if ( v8 )
              {
                if ( *(_QWORD *)(v1 + 56) )
                {
                  sub_140336AD8(v6);
                  *(_QWORD *)(v1 + 56) = 0LL;
                }
                if ( (byte_140C506CE & 1) != 0 )
                {
                  if ( !(unsigned int)sub_14024A0FC(0LL, v6, 48 * v22 - 0x220000000000LL) )
                    sub_140590CF0(v1);
                }
                else
                {
                  v14 = sub_1402CC7C0(v22, 0LL, 0x80000000LL);
                  v15 = *(_QWORD *)(v1 + 16);
                  v16 = v14;
                  *(_QWORD *)(v1 + 16) = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  sub_140590CF0(v1);
                  LOBYTE(v17) = 17;
                  sub_1402BEDD0(v16, v17, 0x80000000LL);
                  *(_QWORD *)(v1 + 16) = v15;
                }
                *(_DWORD *)(v1 + 40) = 0;
                goto LABEL_13;
              }
            }
            else
            {
              v8 = 0LL;
            }
          }
        }
      }
    }
    *(_DWORD *)(v1 + 40) = -1073740748;
LABEL_13:
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 )
      sub_14020D8D0(v7, v8);
    LOBYTE(v11) = v23;
    sub_1402B0CE0(v7, v11);
    v12 = *(_QWORD **)(v1 + 16);
    v13 = 0;
    if ( (unsigned int)sub_140317A80(v12) )
      v13 = sub_140229550() != 0;
    *v12 = 0LL;
    if ( v13 )
      sub_1402294F0(v12, 0LL);
  }
LABEL_27:
  v18 = a1[2];
  v19 = _InterlockedDecrement((volatile signed __int32 *)v18);
  v20 = ~v19 & 0x80000000;
  if ( (v19 & 0x7FFFFFFF) != 0 )
  {
    v26 = 0;
    while ( (*(_DWORD *)v18 & 0x80000000) != v20 )
      sub_1402F32E0(&v26);
  }
  else
  {
    *(_DWORD *)v18 = v20 | *(_DWORD *)(v18 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}

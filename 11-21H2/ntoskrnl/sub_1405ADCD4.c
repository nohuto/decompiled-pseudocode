/*
 * XREFs of sub_1405ADCD4 @ 0x1405ADCD4
 * Callers:
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 * Callees:
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_1402680C0 @ 0x1402680C0 (sub_1402680C0.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 */

void __fastcall sub_1405ADCD4(ULONG_PTR *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  ULONG_PTR *v6; // rdi
  ULONG_PTR *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rsi
  ULONG_PTR v11; // rbx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = 0LL;
  v4 = a2;
  v6 = a1;
  if ( a2 )
  {
    v7 = a1;
    v8 = (unsigned int)v4;
    do
    {
      v9 = 48 * *v7++ - 0x220000000000LL;
      *(_QWORD *)(v9 + 16) = v3;
      v3 = v9;
      --v8;
    }
    while ( v8 );
  }
  sub_1402680C0(v3, a3, 0LL);
  if ( (_DWORD)v4 )
  {
    v10 = v4;
    do
    {
      v11 = *v6;
      sub_1402359C4(*v6, 1, a3);
      _InterlockedOr(v12, 0);
      sub_14033C33C(48 * v11 - 0x220000000000LL, dword_140D31080, 0);
      ++v6;
      --v10;
    }
    while ( v10 );
  }
}

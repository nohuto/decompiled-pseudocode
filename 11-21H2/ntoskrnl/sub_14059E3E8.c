/*
 * XREFs of sub_14059E3E8 @ 0x14059E3E8
 * Callers:
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 * Callees:
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 */

void __fastcall sub_14059E3E8(ULONG_PTR a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rax
  char v14; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    v14 = 17;
    v4 = 0LL;
    do
    {
      v11 = sub_140273AAC(a1, (__int64)&v14);
      do
      {
        v12 = *(_QWORD *)(a2 + 8 * v4);
        if ( v12 != 0x8000000000000000uLL )
        {
          v13 = sub_1402738F0((unsigned __int64 *)a1, 0LL);
          if ( v13 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(a2 + 8 * v4) = v12 | 0x4000000000000000LL;
          }
        }
        ++v3;
        a1 += 8LL;
        v4 = v3;
      }
      while ( v3 < a3 && (a1 & 0xFFF) != 0 );
      LOBYTE(v8) = v14;
      sub_140334790(v11, v8, v9, v10);
    }
    while ( v3 < a3 );
  }
}

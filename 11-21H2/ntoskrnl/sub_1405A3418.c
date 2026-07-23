/*
 * XREFs of sub_1405A3418 @ 0x1405A3418
 * Callers:
 *     sub_140976880 @ 0x140976880 (sub_140976880.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 */

__int64 __fastcall sub_1405A3418(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned int v10; // r15d
  unsigned __int64 v11; // r13
  int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rdi
  ULONG_PTR v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r9
  BOOL v19; // eax
  int v20; // r8d
  __int64 v21; // rdx
  bool v22; // zf
  unsigned __int64 v23; // [rsp+30h] [rbp-58h]
  unsigned __int64 v24; // [rsp+38h] [rbp-50h]
  ULONG_PTR v25; // [rsp+40h] [rbp-48h]
  __int64 v27; // [rsp+A8h] [rbp+20h]
  unsigned __int8 v28; // [rsp+A8h] [rbp+20h]

  v6 = *((_QWORD *)KeGetCurrentThread() + 23);
  result = sub_1407BE280(v6, a3);
  if ( (int)result >= 0 )
  {
    v8 = 0LL;
    v9 = a3 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | *(_DWORD *)(a1 + 52) & 0x7FFFFFFF);
    v27 = v6 + 1664;
    *(_DWORD *)(a1 + 52) ^= (v9 ^ *(_DWORD *)(a1 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(a1 + 34) = v9 >> 31;
    v10 = 0;
    v11 = a2;
    v23 = 0LL;
    v12 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
    v13 = sub_1402CCC50(32LL);
    v14 = sub_1402CCC50(96LL);
    v24 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = v24;
    v16 = v24 + 8 * (a3 - 1);
    v17 = v27;
    v25 = v16;
    v28 = sub_1402CF4F0(v27);
    if ( v24 <= v25 )
    {
      do
      {
        if ( v11 == a2 || (v15 & 0xFFF) == 0 )
        {
          if ( v10 )
          {
            sub_14028FB74(v23, v10);
            v10 = 0;
          }
          if ( v8 )
            sub_14020D8D0(v17, v8);
          LOBYTE(v18) = v28;
          v8 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          sub_14032CE60(v15, 0LL, v12, v18, 0);
          v23 = sub_1402D03D0(v11);
        }
        v19 = sub_140317A80(v15);
        v20 = 0;
        if ( (((_BYTE)v15 - (_BYTE)v24) & 8) != 0 )
        {
          v21 = v13;
          if ( v19 )
          {
            if ( (unsigned int)sub_140229550() )
            {
              v20 = 1;
              if ( !HIBYTE(word_140C51864) )
              {
                v22 = (v13 & 1) == 0;
                goto LABEL_23;
              }
            }
            else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
            {
              v22 = (v13 & 1) == 0;
LABEL_23:
              if ( !v22 )
                v21 |= 0x8000000000000000uLL;
            }
          }
        }
        else
        {
          v21 = v14;
          if ( v19 )
          {
            if ( (unsigned int)sub_140229550() )
            {
              v20 = 1;
              if ( !HIBYTE(word_140C51864) )
              {
                v22 = (v14 & 1) == 0;
                goto LABEL_23;
              }
            }
            else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
            {
              v22 = (v14 & 1) == 0;
              goto LABEL_23;
            }
          }
        }
        *(_QWORD *)v15 = v21;
        if ( v20 )
          sub_1402294F0(v15, v21);
        ++v10;
        v15 += 8LL;
        v11 += 4096LL;
      }
      while ( v15 <= v25 );
    }
    sub_14028FB74(v23, v10);
    sub_14020D8D0(v17, v8);
    sub_1402B0CE0(v17, v28);
    return 0LL;
  }
  return result;
}

/*
 * XREFs of sub_140598DA4 @ 0x140598DA4
 * Callers:
 *     sub_14027CE40 @ 0x14027CE40 (sub_14027CE40.c)
 * Callees:
 *     sub_1402270B8 @ 0x1402270B8 (sub_1402270B8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_1405C19F8 @ 0x1405C19F8 (sub_1405C19F8.c)
 */

__int64 __fastcall sub_140598DA4(__int64 a1, volatile signed __int64 *a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // rbp
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  unsigned int v8; // edx
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  int v21; // edi
  bool v22; // zf
  __int64 result; // rax
  int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = a3;
  if ( (*(_DWORD *)(v3 + 128) & 0x80u) != 0 && (unsigned int)(a3 - 1) <= 1 )
  {
    v7 = sub_1402CFEB0((unsigned __int64)a2);
    if ( v7 >= *(_QWORD *)(v6 + 32) )
    {
      v8 = 1;
      if ( v5 > 1 )
      {
        v9 = v5 - 1;
        do
        {
          --v8;
          --v9;
        }
        while ( v9 );
      }
      v10 = v8;
      if ( v7 + (qword_14001C780[v8] << 12) - 1 <= *(_QWORD *)(v6 + 40) )
      {
        v11 = (__int64 *)(v3 + 24LL * v8);
        v12 = *v11;
        if ( (__int64 *)*v11 != v11 || v8 && (sub_1405C19F8(v3), v12 = *v11, (__int64 *)*v11 != v11) )
        {
          if ( *(__int64 **)(v12 + 8) != v11 || (v13 = *(_QWORD *)v12, *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12) )
            __fastfail(3u);
          *v11 = v13;
          *(_QWORD *)(v13 + 8) = v11;
          --v11[2];
          v17 = sub_14033AC10((unsigned __int64)a2);
          v18 = 48 * v17 - 0x220000000000LL;
          v24 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v24, v14, v15, v16);
            while ( *(__int64 *)(v18 + 24) < 0 );
          }
          v19 = 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v25 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v25, v19, v15, v16);
            while ( *(__int64 *)(v12 + 24) < 0 );
          }
          *(_QWORD *)(v12 + 8) = a2;
          *(_QWORD *)(v12 + 16) = sub_1402CCC50(128LL);
          *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 6;
          sub_14033C3E0(v12, v17);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v20 = sub_1402CBD10(
                  (unsigned __int64)a2,
                  0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4),
                  -2080374780);
          if ( (sub_140317A10((unsigned __int64)a2) & 1) != 0 )
          {
            sub_1402270B8(a2, (unsigned __int64)a2, v20, v5);
LABEL_31:
            result = 1LL;
            *(_QWORD *)(v3 + 112) += qword_14001C780[v10];
            return result;
          }
          v21 = 0;
          if ( sub_140317A80((unsigned __int64)a2) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              v21 = 1;
              if ( !HIBYTE(word_140C51864) )
              {
                v22 = (v20 & 1) == 0;
                goto LABEL_27;
              }
            }
            else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
            {
              v22 = (v20 & 1) == 0;
LABEL_27:
              if ( !v22 )
                v20 |= 0x8000000000000000uLL;
            }
          }
          *a2 = v20;
          if ( v21 )
            sub_1402294F0((__int64)a2, v20);
          goto LABEL_31;
        }
      }
    }
  }
  return 0LL;
}

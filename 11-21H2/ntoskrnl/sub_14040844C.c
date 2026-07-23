/*
 * XREFs of sub_14040844C @ 0x14040844C
 * Callers:
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 * Callees:
 *     sub_1404000A8 @ 0x1404000A8 (sub_1404000A8.c)
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 *     sub_14040721C @ 0x14040721C (sub_14040721C.c)
 */

__int64 __fastcall sub_14040844C(__int64 a1)
{
  int v2; // r12d
  int v3; // r13d
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  int v8; // ebx
  int v9; // r14d
  int v10; // ebp
  int v11; // eax
  unsigned __int64 v12; // rsi
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // ebx
  int v16; // edi
  unsigned int v17; // ebx
  __int64 result; // rax
  unsigned int v19; // edx

  v2 = sub_140400AB4();
  v3 = sub_140401368(*(_QWORD *)(a1 + 616));
  v4 = (unsigned int)((v2 << 8) + 64);
  v5 = (unsigned int)(v2 << 6) + 64LL + v4 + 2 * ((unsigned int)(v2 << 6) + 64LL) + (unsigned int)(v2 << 8);
  v6 = (unsigned int)sub_140401350();
  v7 = v5;
  if ( v4 > v5 )
    v7 = (unsigned int)((v2 << 8) + 64);
  if ( v6 <= v7 )
  {
    v8 = 704 * v2 + 256;
    if ( v4 > v5 )
      v8 = v4;
  }
  else
  {
    v8 = sub_140401350();
  }
  v9 = *(_DWORD *)(a1 + 36);
  v10 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 44) = v8;
  v11 = sub_140401350();
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 48) = v8 + v11 + 6 * v3;
  v12 = (unsigned int)((v10 << 8) + 64);
  v13 = sub_14040721C(v9, 4u);
  v14 = 704 * v10 + 256;
  if ( v12 > v12 + (unsigned int)(v10 << 6) + 64LL + 2 * ((unsigned int)(v10 << 6) + 64LL) + (unsigned int)(v10 << 8) )
    v14 = v12;
  v15 = v14 + v13 + 2 * v9;
  *(_DWORD *)(a1 + 56) = v15;
  if ( v15 <= (unsigned int)sub_140401350() )
    v15 = sub_140401350();
  v16 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 56) = v15;
  sub_1404000A8(a1);
  v17 = v16 + sub_140401350();
  if ( v17 <= (unsigned int)sub_14040721C(v16, *(_DWORD *)(a1 + 8) & 0xF) )
  {
    result = sub_14040721C(*(_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 8) & 0xF);
  }
  else
  {
    sub_1404000A8(a1);
    result = *(_DWORD *)(a1 + 36) + (unsigned int)sub_140401350();
  }
  v19 = *(_DWORD *)(a1 + 48);
  if ( v19 <= *(_DWORD *)(a1 + 56) )
    v19 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 60) = result + v19;
  return result;
}

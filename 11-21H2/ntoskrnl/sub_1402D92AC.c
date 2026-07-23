/*
 * XREFs of sub_1402D92AC @ 0x1402D92AC
 * Callers:
 *     sub_1402D8F30 @ 0x1402D8F30 (sub_1402D8F30.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 */

__int64 __fastcall sub_1402D92AC(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v8; // rbp
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rdi
  char v18; // r14
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  bool v26; // zf
  int v27; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp+10h] BYREF
  int v29; // [rsp+70h] [rbp+18h] BYREF

  v29 = a3;
  v3 = 0LL;
  v5 = a1;
  if ( (unsigned __int64)a1 <= a2 )
  {
    while ( 1 )
    {
      v6 = sub_140317A10(v5);
      if ( (v6 & 1) == 0 && (v6 & 0x400) != 0 )
        break;
LABEL_3:
      if ( (unsigned __int64)++v5 > a2 )
        return v3;
    }
    v28 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v8 = 48 * (((unsigned __int64)sub_140317A10(&v28) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( *(__int64 *)(v8 + 40) < 0 )
    {
      v11 = sub_1402CCC50((*(_QWORD *)(v8 + 8) << 16) | 0x400LL);
      if ( v23 >= 0 && (v24 & 0x10000000000LL) == 0 && v23 )
        v11 |= 0x800uLL;
    }
    else
    {
      v9 = (*(_DWORD *)(v8 + 16) >> 5) & 0x1F;
      v10 = sub_140317A10(&v28);
      v11 = sub_1402E4D28((v10 >> 12) & 0xFFFFFFFFFFLL, v9);
    }
    v12 = 0;
    if ( !(unsigned int)sub_140317A80(v5) )
    {
LABEL_9:
      *v5 = v11;
      if ( v12 )
        sub_1402294F0((__int64)v5, v11);
      v16 = 0LL;
      v17 = (volatile signed __int32 *)(v8 + 24);
      v29 = 0;
      while ( _interlockedbittestandset64(v17, 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v29);
        while ( *(__int64 *)v17 < 0 );
      }
      *(_BYTE *)(v8 + 35) &= ~8u;
      v18 = *(_BYTE *)(v8 + 35);
      if ( (v28 & 0x42) != 0 )
      {
        v25 = sub_14033C2A0(v8);
        v18 = *(_BYTE *)(v8 + 35);
        v16 = v25;
      }
      if ( *(__int64 *)(v8 + 40) < 0 )
        v19 = sub_14033AC10(v5);
      else
        v19 = -1LL;
      *(_BYTE *)(v8 + 35) = v18 & 0xF8 | 2;
      sub_140273FD0(v8, v13, v14, v15);
      if ( v19 != -1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
        v27 = 0;
        v17 = (volatile signed __int32 *)(48 * v19 - 0x220000000000LL + 24);
        while ( _interlockedbittestandset64(v17, 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v27);
          while ( *(__int64 *)v17 < 0 );
        }
        sub_140273FD0(48 * v19 - 0x220000000000LL, v20, v21, v22);
      }
      _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v16 )
        sub_1402E20D0(&StartContext, v16, 1LL);
      ++v3;
      goto LABEL_3;
    }
    if ( (unsigned int)sub_140229550() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_9;
      v26 = (v11 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_9;
      v26 = (v11 & 1) == 0;
    }
    if ( !v26 )
      v11 |= 0x8000000000000000uLL;
    goto LABEL_9;
  }
  return v3;
}

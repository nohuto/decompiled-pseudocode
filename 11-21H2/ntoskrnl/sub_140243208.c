/*
 * XREFs of sub_140243208 @ 0x140243208
 * Callers:
 *     sub_140281DE0 @ 0x140281DE0 (sub_140281DE0.c)
 * Callees:
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_14029BA28 @ 0x14029BA28 (sub_14029BA28.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1402E4724 @ 0x1402E4724 (sub_1402E4724.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_14033E11C @ 0x14033E11C (sub_14033E11C.c)
 */

void __fastcall sub_140243208(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  unsigned int v4; // esi
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 *v8; // r14
  int v9; // r15d
  unsigned __int64 v10; // r12
  ULONG_PTR v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int16 v15; // ax
  int v16; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 *v19; // [rsp+98h] [rbp+10h]
  unsigned int v20; // [rsp+A0h] [rbp+18h]
  unsigned int v21; // [rsp+A8h] [rbp+20h]

  if ( !a2 )
    return;
  v19 = a2;
  v2 = *(_QWORD *)(a1 + 136);
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 172);
  v18 = v2;
  v20 = v4;
  do
  {
    if ( (*((_BYTE *)v3 + 10) & 4) != 0 )
      goto LABEL_22;
    MmUnmapLockedPages((PVOID)v3[3], (PMDL)v3);
    v8 = v3 + 6;
    v9 = *((_DWORD *)v3 + 10) >> 12;
    v10 = 0LL;
    v21 = *((_DWORD *)v3 + 4);
    v7 = v21;
    v11 = v2 + 8LL * v21;
    if ( !v9 )
      goto LABEL_22;
    v12 = 0LL;
    do
    {
      v17 = *v8;
      v13 = 48 * v17 - 0x220000000000LL;
      if ( v7 < v4 )
      {
        if ( (v11 & 0xFFFFFFFFFFFFF000uLL) != v10 )
        {
          if ( v10 )
          {
            LOBYTE(v6) = 17;
            sub_140334790(v12, v6);
          }
          v12 = sub_140273AAC(v11);
          v10 = v11 & 0xFFFFFFFFFFFFF000uLL;
        }
        v14 = sub_1402738F0(v11, 0LL);
        v15 = sub_140317A10(v11);
        if ( v14 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( (v15 & 0x400) != 0 )
        {
          v16 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v16);
            while ( *(__int64 *)(v13 + 24) < 0 );
          }
          sub_1402E4724(v17, v11, -1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 )
            sub_14033E11C(a1, 0LL, 1LL);
          goto LABEL_17;
        }
        sub_14029BA28(v13);
        *v8 = -1LL;
LABEL_17:
        v4 = v20;
        goto LABEL_18;
      }
      sub_14029BA28(48 * v17 - 0x220000000000LL);
      *v8 = -1LL;
LABEL_18:
      v11 += 8LL;
      v7 = v21 + 1;
      ++v8;
      ++v21;
      --v9;
    }
    while ( v9 );
    v17 = v12;
    v3 = v19;
    if ( v10 )
    {
      LOBYTE(v6) = 17;
      sub_140334790(v17, v6);
    }
    v2 = v18;
LABEL_22:
    v3 = (__int64 *)*v3;
    v19 = v3;
  }
  while ( v3 );
}

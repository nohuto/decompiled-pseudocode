/*
 * XREFs of sub_1403EBAC8 @ 0x1403EBAC8
 * Callers:
 *     sub_140567630 @ 0x140567630 (sub_140567630.c)
 * Callees:
 *     sub_140251894 @ 0x140251894 (sub_140251894.c)
 *     MmIsAddressValid @ 0x14038DE50 (MmIsAddressValid.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_1403FABD0 @ 0x1403FABD0 (sub_1403FABD0.c)
 */

char __fastcall sub_1403EBAC8(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v6; // esi
  int v7; // r15d
  __int64 v8; // r14
  unsigned int v9; // edi
  ULONG *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  BOOL v13; // r8d
  int v14; // edx
  int v15; // r9d
  int v16; // ebx
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // r14
  int *v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  ULONG *v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  BOOL v26; // r8d
  int v27; // edx
  int v28; // r9d
  int v29; // ebx
  __int64 v30; // rcx
  ULONG *v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  int v34; // r8d
  __int64 v35; // rcx
  char result; // al
  ULONG MaxDataSize[2]; // [rsp+20h] [rbp-49h] BYREF
  ULONG v38[2]; // [rsp+40h] [rbp-29h] BYREF
  ULONG v39[2]; // [rsp+60h] [rbp-9h] BYREF
  PVOID VirtualAddress; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v43; // [rsp+E8h] [rbp+7Fh] BYREF

  _mm_lfence();
  v6 = 4;
  if ( dword_140C33EA0 )
    sub_1403D99B4((ULONG)&dword_140C33EA0, (PVOID)4);
  if ( qword_140C0DB60 )
  {
    *(_QWORD *)&qword_140C0E958 = qword_140C0DB60;
    sub_1403D99B4((ULONG)&qword_140C0E958, (PVOID)8);
  }
  v7 = 3;
  if ( (_DWORD)a4 == 257 && dword_140C0DB58 )
  {
    v8 = qword_140C0DB48;
    v9 = 0;
    do
    {
      _mm_lfence();
      if ( MmIsAddressValid((PVOID)((v8 + v9) & 0xFFFFFFFFFFFFF000uLL)) )
      {
        v10 = MaxDataSize;
        v11 = 4LL;
        v12 = qword_140D05410 + ((((v8 + v9) & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
        do
        {
          *(_QWORD *)v10 = v12;
          v10 += 2;
          v12 = qword_140D05410 + ((v12 >> 9) & 0x7FFFFFFFF8LL);
          --v11;
        }
        while ( v11 );
        v13 = 0;
        v14 = 3;
        do
        {
          v15 = v14;
          if ( v13 )
          {
            *(_QWORD *)&MaxDataSize[2 * v14] = 0LL;
          }
          else
          {
            if ( !v14 )
              break;
            v13 = **(char **)&MaxDataSize[2 * v14] < 0;
          }
          --v14;
        }
        while ( v15 );
        v16 = 4;
        do
        {
          v17 = *(_QWORD *)&MaxDataSize[2 * (v16 - 1)];
          if ( !v17 )
            break;
          sub_1403D99B4(v17, (PVOID)8);
          --v16;
        }
        while ( v16 );
      }
      v9 += 4096;
    }
    while ( v9 < dword_140C0DB58 );
    dword_140C0DB58 = 4096;
  }
  v18 = &qword_140C0DB48;
  v19 = 2LL;
  v20 = &dword_140C0DB58;
  do
  {
    v21 = (unsigned int)*v20;
    if ( (_DWORD)v21 )
      sub_1403D99B4(*v18, (PVOID)v21);
    ++v20;
    ++v18;
    --v19;
  }
  while ( v19 );
  if ( a3 )
  {
    sub_1403D99B4(a3 & 0xFFFFF000, (PVOID)0x1000);
    v22 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    sub_1403D99B4((a3 & 0xFFFFF000) + 4096, (PVOID)0x1000);
    _mm_lfence();
    if ( MmIsAddressValid((PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL)) )
    {
      v23 = v38;
      v24 = 4LL;
      v25 = qword_140D05410 + (((a3 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *(_QWORD *)v23 = v25;
        v23 += 2;
        v25 = qword_140D05410 + ((v25 >> 9) & 0x7FFFFFFFF8LL);
        --v24;
      }
      while ( v24 );
      v26 = 0;
      v27 = 3;
      do
      {
        v28 = v27;
        if ( v26 )
        {
          *(_QWORD *)&v38[2 * v27] = 0LL;
        }
        else
        {
          if ( !v27 )
            break;
          v26 = **(char **)&v38[2 * v27] < 0;
        }
        --v27;
      }
      while ( v28 );
      v29 = 4;
      do
      {
        v30 = *(_QWORD *)&v38[2 * (v29 - 1)];
        if ( !v30 )
          break;
        sub_1403D99B4(v30, (PVOID)8);
        --v29;
      }
      while ( v29 );
    }
    _mm_lfence();
    if ( MmIsAddressValid((PVOID)v22) )
    {
      v31 = v39;
      v32 = 4LL;
      v33 = qword_140D05410 + ((v22 >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *(_QWORD *)v31 = v33;
        v31 += 2;
        v33 = qword_140D05410 + ((v33 >> 9) & 0x7FFFFFFFF8LL);
        --v32;
      }
      while ( v32 );
      do
      {
        v34 = v7;
        if ( (_DWORD)v32 )
        {
          *(_QWORD *)&v39[2 * v7] = 0LL;
        }
        else
        {
          if ( !v7 )
            goto LABEL_47;
          LODWORD(v32) = **(char **)&v39[2 * v7] < 0;
        }
        --v7;
      }
      while ( v34 );
      do
      {
LABEL_47:
        v35 = *(_QWORD *)&v39[2 * (v6 - 1)];
        if ( !v35 )
          break;
        sub_1403D99B4(v35, (PVOID)8);
        --v6;
      }
      while ( v6 );
    }
    if ( (PVOID)a3 == qword_140E01850 )
      sub_1403D99B4((ULONG)&qword_140E01850, (PVOID)8);
    if ( a3 == *(_QWORD *)&qword_140E01868 )
      sub_1403D99B4((ULONG)&qword_140E01868, (PVOID)8);
    sub_140251894(&VirtualAddress, &v43);
    if ( MmIsAddressValid(VirtualAddress) && a3 == *(_QWORD *)VirtualAddress )
      sub_1403D99B4((ULONG)VirtualAddress, (PVOID)8);
  }
  result = sub_1403FABD0(a1, a2, a3, a4);
  if ( *(_QWORD *)&qword_140D06848 )
    return sub_1403D99B4(qword_140D06848, (PVOID)0xA68);
  return result;
}

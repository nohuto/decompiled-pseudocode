/*
 * XREFs of sub_14031C290 @ 0x14031C290
 * Callers:
 *     sub_140247F34 @ 0x140247F34 (sub_140247F34.c)
 *     sub_14031B810 @ 0x14031B810 (sub_14031B810.c)
 * Callees:
 *     sub_1402189A0 @ 0x1402189A0 (sub_1402189A0.c)
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_140235D34 @ 0x140235D34 (sub_140235D34.c)
 *     sub_140236E68 @ 0x140236E68 (sub_140236E68.c)
 *     sub_14023CB20 @ 0x14023CB20 (sub_14023CB20.c)
 *     sub_14023CB68 @ 0x14023CB68 (sub_14023CB68.c)
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_140277C9C @ 0x140277C9C (sub_140277C9C.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140580CE0 @ 0x140580CE0 (sub_140580CE0.c)
 *     sub_1405845D4 @ 0x1405845D4 (sub_1405845D4.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 *     sub_14096836C @ 0x14096836C (sub_14096836C.c)
 */

__int64 __fastcall sub_14031C290(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  int v3; // r15d
  ULONG_PTR v5; // r12
  int v6; // esi
  int v7; // r14d
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  PMDL v12; // r8
  ULONG_PTR v13; // rdi
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // r11
  int v17; // ecx
  int v18; // eax
  unsigned __int64 v19; // r8
  char v20; // al
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebx
  unsigned __int64 v27; // rdx
  PVOID MappedSystemVa; // r9
  char v29; // dl
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rsi
  int v33; // ebx
  int v34; // ebx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // [rsp+60h] [rbp+8h] BYREF
  int v41; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 72) & 0xF;
  v7 = *(_DWORD *)(a1 + 96);
  *a2 = 0;
  v40 = v2;
  if ( (v2 & 4) == 0 && v6 == 1 )
  {
    ++dword_140C52A80;
    return 3221225477LL;
  }
  v9 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v40) >> 12) & 0xFFFFFFFFFFLL;
  v10 = 0x10000000000LL;
  if ( v9 > qword_140C50840 || (v11 = 48 * v9, (*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0) )
  {
    v13 = 0LL;
    goto LABEL_9;
  }
  v12 = MemoryDescriptorList;
  v13 = v11 - 0x220000000000LL;
  if ( MemoryDescriptorList )
  {
    if ( ((*(_QWORD *)(v13 + 40) >> 60) & 7) == 1 )
    {
      v27 = v11 / 0x30;
      if ( MemoryDescriptorList )
      {
        while ( 1 )
        {
          MappedSystemVa = v12->MappedSystemVa;
          if ( v27 >= (unsigned __int64)MappedSystemVa )
          {
            if ( (PVOID)(v27 - (unsigned __int64)MappedSystemVa) < v12->StartVa )
            {
              ++dword_140C52AAC;
              return 3221225477LL;
            }
            v12 = *(PMDL *)&v12->Size;
          }
          else
          {
            v12 = v12->Next;
          }
          if ( !v12 )
          {
            v10 = 0x10000000000LL;
            break;
          }
        }
      }
    }
  }
  v14 = *(_QWORD *)(v13 + 40);
  if ( v14 < 0 )
    goto LABEL_9;
  if ( (v14 & 0x10000000000LL) != 0 )
  {
    LODWORD(v40) = 0;
    v41 = 0;
    if ( (unsigned int)sub_140235D34(v11 - 0x220000000000LL, (int *)&v40, &v41) == 3 || (_DWORD)v40 != 6 )
      goto LABEL_81;
    goto LABEL_8;
  }
  v15 = (__int64)(*(_QWORD *)(v11 - 0x21FFFFFFFFF8LL) << 25) >> 16;
  if ( v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL || (v14 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
  {
LABEL_8:
    v10 = 0x10000000000LL;
LABEL_9:
    v16 = 0x3FFFFFFFFFFFFFFFLL;
    goto LABEL_10;
  }
  v29 = *(_BYTE *)(v11 - 0x21FFFFFFFFDELL);
  if ( (v29 & 0x20) != 0 )
  {
    v16 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(v11 - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 0 && *(_WORD *)(v11 - 0x21FFFFFFFFE0LL) )
      goto LABEL_77;
  }
  else
  {
    v16 = 0x3FFFFFFFFFFFFFFFLL;
  }
  if ( (v29 & 8) == 0 && ((*(_QWORD *)v13 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
  {
LABEL_81:
    ++dword_140C52AA8;
    return 3221225477LL;
  }
LABEL_77:
  v10 = 0x10000000000LL;
LABEL_10:
  v17 = 0;
  if ( v5 >= 0xFFFF800000000000uLL )
    v18 = (unsigned __int8)byte_140C53F50[((v5 >> 39) & 0x1FF) - 256];
  else
    v18 = 0;
  if ( v6 == 6 && v18 == 12 )
    v17 = 1;
  v19 = 0x8000000000000000uLL;
  if ( v7 == 3 )
  {
    if ( v5 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    if ( v2 < 0 )
    {
      if ( (v2 & 0x800) != 0 )
        return 3221225496LL;
      goto LABEL_38;
    }
LABEL_15:
    if ( (v2 & 0x800) != 0 )
    {
      if ( (v2 & 0x42) == 0 && v6 == 1 && !sub_140236E68(v2, v5) )
      {
        sub_14023CB68(a1);
        v34 = sub_14031C860(2uLL, v5);
        sub_14023CB20(a1);
        if ( v34 < 0 )
        {
          ++dword_140C52A78;
          return (unsigned int)v34;
        }
        goto LABEL_48;
      }
      goto LABEL_17;
    }
LABEL_38:
    if ( v7 != 3 && (v6 != 6 || !v17) )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v13 )
    {
      v25 = *(_QWORD *)(v13 + 40);
      if ( v25 >= 0 )
      {
        if ( (dword_140D06880 & 0x4000) != 0 && (((unsigned __int64)v25 >> 60) & 7) == 3 )
          sub_14023CC50(v13, 8);
        return 0LL;
      }
    }
    goto LABEL_46;
  }
  if ( v7 )
    goto LABEL_15;
  if ( v17 )
  {
    if ( !v13 )
      return 0LL;
    if ( *(__int64 *)(v13 + 40) < 0 && (sub_140277C9C(v13) || (v30 & 0x20000000000000LL) != 0) )
    {
      v31 = *(_QWORD *)(v13 + 16);
      if ( (v31 & 0x400) == 0 )
        goto LABEL_95;
      if ( qword_140C50780 && (v31 & 0x10) == 0 )
        v31 &= ~qword_140C50780;
      if ( (*(_DWORD *)(*(_QWORD *)(v31 >> 16) + 56LL) & 0x20) != 0 )
      {
LABEL_95:
        v32 = sub_1402189A0(*(_QWORD *)(a1 + 24), 0);
        if ( v32 )
        {
          sub_14023CB68(a1);
          v33 = sub_14096836C(v32, *(_QWORD *)(a1 + 24));
          sub_14023CB20(a1);
          if ( v33 < 0 )
          {
            ++dword_140C52AA4;
            return (unsigned int)v33;
          }
          goto LABEL_48;
        }
        v10 = 0x10000000000LL;
        v16 = 0x3FFFFFFFFFFFFFFFLL;
      }
    }
    v19 = 0x8000000000000000uLL;
    goto LABEL_18;
  }
LABEL_17:
  if ( !v13 )
    return 0LL;
LABEL_18:
  v20 = *(_BYTE *)(v13 + 34);
  if ( (v20 & 0x20) != 0 && (v20 & 8) == 0 && (v16 & *(_QWORD *)(v13 + 24)) == 0 )
    return 0LL;
  v21 = *(_QWORD *)(v13 + 40);
  if ( (((unsigned __int64)v21 >> 60) & 7) == 1 || (v21 & v10) != 0 || *(__int64 *)(v13 + 8) <= 0 )
  {
    if ( v7 || v21 >= 0 )
      return 0LL;
    v23 = *(_QWORD *)(a1 + 88);
    LODWORD(v24) = 0;
    if ( v23 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
      {
        v35 = sub_140234F14(v23, v19 | *(_QWORD *)(v13 + 8));
        v24 = 0LL;
        if ( v35 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v36 + 1680) + 344LL) > v35[12] )
            goto LABEL_113;
          LODWORD(v24) = 1;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
    {
      if ( (_DWORD)v24 )
        goto LABEL_46;
      return 0LL;
    }
    if ( !(_DWORD)v24 )
    {
      if ( (v2 & 0x200) == 0 )
        return 0LL;
      goto LABEL_47;
    }
  }
LABEL_46:
  if ( v7 == 3 )
  {
    if ( (v2 & v19) != 0 )
      return 3221225541LL;
    v37 = *(_QWORD *)(a1 + 88);
    if ( v37 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
      {
        v38 = sub_140234F14(v37, v19 | *(_QWORD *)(v13 + 8));
        if ( v38 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v39 + 1680) + 344LL) <= v38[12] )
            goto LABEL_47;
LABEL_113:
          result = sub_1405845D4(a1, v24);
          if ( (int)result >= 0 )
            goto LABEL_48;
          ++dword_140C52AA0;
          return result;
        }
      }
    }
    if ( (v2 & 0x200) != 0 || (v10 & *(_QWORD *)(v13 + 40)) == 0 && *(__int64 *)(v13 + 8) > 0 )
      goto LABEL_47;
    if ( (unsigned int)sub_140580CE0(v5) )
    {
      ++*(_QWORD *)(a1 + 112);
      v3 = 1;
      goto LABEL_47;
    }
    return 3221225477LL;
  }
LABEL_47:
  v26 = sub_140316400(v5, *(_QWORD *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL, 0);
  if ( v26 >= 0 )
  {
LABEL_48:
    *a2 = 1;
    return 0LL;
  }
  if ( v3 )
    --*(_QWORD *)(a1 + 112);
  if ( *(_BYTE *)(a1 + 76) != 2
    && (KeGetPcr()[36].Unused0[2] & 0x10001) == 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 1380LL) & 0xC) == 0 )
  {
    sub_14023CB68(a1);
    sub_1405BCAF8(*(_QWORD *)(a1 + 104), (unsigned int)v26);
    sub_14023CB20(a1);
    goto LABEL_48;
  }
  ++dword_140C52AA4;
  return 3221225495LL;
}

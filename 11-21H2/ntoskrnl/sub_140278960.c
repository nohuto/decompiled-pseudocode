/*
 * XREFs of sub_140278960 @ 0x140278960
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_140278460 @ 0x140278460 (sub_140278460.c)
 *     sub_1405A5F5C @ 0x1405A5F5C (sub_1405A5F5C.c)
 * Callees:
 *     sub_140235D34 @ 0x140235D34 (sub_140235D34.c)
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_140235E40 @ 0x140235E40 (sub_140235E40.c)
 *     sub_14027924C @ 0x14027924C (sub_14027924C.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B54C @ 0x14027B54C (sub_14027B54C.c)
 *     sub_14027B604 @ 0x14027B604 (sub_14027B604.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140278960(__int64 a1, __int64 a2, char a3, int a4)
{
  int v5; // r14d
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // r12
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // r15d
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int16 v37; // bp
  unsigned __int64 v38; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v41; // r9
  int v42; // eax
  bool v43; // zf
  unsigned __int64 v44; // rax
  int v46; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-50h]
  __int64 v48[9]; // [rsp+30h] [rbp-48h] BYREF
  int v50; // [rsp+88h] [rbp+10h] BYREF
  int v51; // [rsp+90h] [rbp+18h]

  v5 = a3 & 1;
  v51 = v5;
  v9 = 1LL;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v12 = 17;
  v13 = v10 | 0x8000000000000000uLL;
  v47 = v11;
  if ( (*(_BYTE *)(a2 + 35) & 8) != 0 )
  {
    if ( a4 )
      ++dword_140C29DE0;
    else
      ++dword_140C29F20;
    return v9;
  }
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x28u) )
  {
    if ( (a3 & 1) != 0 )
    {
      v14 = sub_140235E40(a2);
      v15 = sub_140235E10(v14);
      if ( v14 != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v5 = v51;
    }
    else
    {
      v46 = 0;
      v50 = 0;
      v15 = sub_140235D34(a2, &v46, &v50);
    }
    if ( v15 != -1 )
      return qword_14001C780[v15];
    v11 = v47;
  }
  if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) != a1 )
  {
    if ( a4 )
      ++dword_140C29DC4;
    else
      ++dword_140C29EA4;
    return v9;
  }
  if ( (a3 & 2) == 0 )
  {
    v15 = sub_14027924C(a1, v11);
    if ( v15 != -1 )
      return qword_14001C780[v15];
  }
  v16 = *(_QWORD *)(a2 + 40);
  if ( v16 < 0 )
  {
    if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 || v13 == qword_140C50668 || v13 == qword_140C50670 )
    {
      if ( a4 )
        ++dword_140C29E18;
      else
        ++dword_140C29F10;
      return v9;
    }
    if ( v5 && (v16 & 0x20000000000000LL) != 0 )
    {
      if ( a4 )
        ++dword_140C29E0C;
      else
        ++dword_140C29F14;
      return v9;
    }
    v44 = *(unsigned __int16 *)(a2 + 32);
    if ( (unsigned int)v44 > 1 || v44 > (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    {
      if ( a4 )
        ++dword_140C29E1C;
      else
        ++dword_140C29F1C;
      return v9;
    }
    if ( (*(_BYTE *)a2 & 1) == 0 )
    {
      if ( a4 )
        ++dword_140C29E20;
      else
        ++dword_140C29F18;
      return v9;
    }
    if ( (v16 & 0x10000000000LL) == 0 && *(__int64 *)(a2 + 8) > 0 )
    {
      if ( a4 )
        ++dword_140C29E24;
      else
        ++dword_140C29F24;
      return v9;
    }
    return 0LL;
  }
  if ( v13 == -8LL )
  {
    if ( a4 )
      ++dword_140C29E30;
    else
      ++dword_140C29F50;
    return v9;
  }
  if ( v13 >= 0xFFFF800000000000uLL )
  {
    v11 = 0x140000000uLL;
    if ( byte_140C53F50[((v13 >> 39) & 0x1FF) - 256] == 5 )
    {
      if ( a4 )
        ++dword_140C29E3C;
      else
        ++dword_140C29F64;
      return v9;
    }
  }
  if ( (((unsigned __int64)v16 >> 60) & 7) == 1 || (v17 = v16 & 0xFFFFFFFFFFLL, v17 == 0x3FFFFFFFFELL) )
  {
    if ( a4 )
      ++dword_140C29E40;
    else
      ++dword_140C29F08;
    return v9;
  }
  if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++dword_140C29F6C;
    return v9;
  }
  v18 = (__int64)(v13 << 25) >> 16;
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    if ( (unsigned int)sub_14027B54C(a2, v11) )
    {
      v26 = *(unsigned __int16 *)(a2 + 32);
      if ( (unsigned int)v26 > 1 || v26 > (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
      {
        if ( a4 )
          ++dword_140C29E7C;
        else
          ++dword_140C29F38;
        return v9;
      }
      return 0LL;
    }
    if ( sub_14027B604(a1, (__int64)(v13 << 25) >> 16) )
      return 0LL;
    v33 = sub_14027B080((__int64)(v13 << 25) >> 16, v27, v28, v29);
    if ( v33 != 5 )
    {
      if ( v18 < qword_140D069A8 || v18 > qword_140D069A8 + (qword_140D06B38 << 12) )
      {
        if ( v33 == 1
          || v18 >= 0xFFFFF68000000000uLL
          && v18 <= 0xFFFFF6FFFFFFFFFFuLL
          && (unsigned int)sub_14027B080((__int64)(v18 << 25) >> 16, v30, v31, v32) == 1 )
        {
          if ( a4 )
            ++dword_140C29E4C;
          else
            ++dword_140C29EF4;
        }
        else if ( v33 == 12 )
        {
          if ( a4 )
            ++dword_140C29E50;
          else
            ++dword_140C29EF8;
        }
        else if ( v33 == 9 )
        {
          if ( a4 )
            ++dword_140C29E54;
          else
            ++dword_140C29EFC;
        }
        else if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( a4 )
            ++dword_140C29E5C;
          else
            ++dword_140C29EF0;
        }
        else if ( a4 )
        {
          ++dword_140C29E58;
        }
        else
        {
          ++dword_140C29F00;
        }
      }
      else if ( a4 )
      {
        ++dword_140C29E48;
      }
      else
      {
        ++dword_140C29F28;
      }
      return v9;
    }
    if ( (*(_BYTE *)(a2 + 35) & 0x10) != 0 || *(_WORD *)(a2 + 32) > 1u )
    {
      if ( a4 )
        ++dword_140C29E28;
      else
        ++dword_140C29F48;
      return v9;
    }
    if ( (byte_140C506CE & 1) == 0 )
    {
      if ( a4 )
        ++dword_140C29E2C;
      else
        ++dword_140C29F4C;
      return v9;
    }
    if ( !v51 )
    {
      ++dword_140C29F78;
      v12 = sub_1402F2700(a2);
      if ( (*(_BYTE *)(a2 + 34) & 7) != 6
        || _bittest64((const signed __int64 *)(a2 + 40), 0x28u)
        || (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != v13
        || (unsigned int)sub_14027B080((__int64)(v13 << 25) >> 16, v34, v35, v36) != 5 )
      {
        ++dword_140C29F5C;
        goto LABEL_125;
      }
    }
    v48[0] = sub_140317A10(v13);
    v37 = v48[0];
    if ( (v48[0] & 1) == 0 )
    {
      if ( !a4 )
      {
        ++dword_140C29F54;
        goto LABEL_125;
      }
      goto LABEL_116;
    }
    v38 = sub_140317A10(v48);
    if ( v47 == ((v38 >> 12) & 0xFFFFFFFFFFLL) )
    {
      if ( (v37 & 0x200) != 0 )
      {
        if ( a4 )
          ++dword_140C29E38;
        else
          ++dword_140C29F58;
      }
      else
      {
        v9 = 0LL;
      }
    }
    else
    {
      if ( a4 )
      {
LABEL_116:
        ++dword_140C29E34;
        goto LABEL_125;
      }
      ++dword_140C29F54;
    }
LABEL_125:
    if ( v12 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v12 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v41 = *((_QWORD *)CurrentPrcb + 4375);
            v42 = ~(unsigned __int16)(-1LL << (v12 + 1));
            v43 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
            *(_DWORD *)(v41 + 20) &= v42;
            if ( v43 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
    }
    return v9;
  }
  if ( PsInitialSystemProcess && v47 == *((_QWORD *)PsInitialSystemProcess + 5) >> 12 )
  {
    if ( a4 )
      ++dword_140C29E60;
    else
      ++dword_140C29ED8;
    return v9;
  }
  v19 = 0xFFFFF6FB40000000uLL;
  v20 = 0xFFFFF6FB5FFFFFF8uLL;
  LODWORD(v21) = 0;
  do
  {
    if ( v13 >= v19 && v13 <= v20 )
    {
      if ( *(_WORD *)(a2 + 32) <= 1u )
      {
        if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
          return 0LL;
        if ( a4 )
          ++dword_140C29E68;
        else
          ++dword_140C29EE4;
      }
      else if ( a4 )
      {
        ++dword_140C29E64;
      }
      else
      {
        ++dword_140C29EDC;
      }
      return v9;
    }
    v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = (unsigned int)(v21 + 1);
  }
  while ( (unsigned int)v21 < 3 );
  if ( v17 == v47 )
  {
    v9 = 0LL;
    if ( v13 == 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( *(_WORD *)(a2 + 32) > 1u )
      {
        if ( a4 )
          ++dword_140C29E7C;
        else
          ++dword_140C29F38;
        return 1LL;
      }
    }
    else
    {
      if ( a4 )
        ++dword_140C29E6C;
      else
        ++dword_140C29F68;
      return 1LL;
    }
    return v9;
  }
  v22 = *(_QWORD *)(a2 + 24);
  v23 = v22 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v22 & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
  {
    if ( (v22 & 0xFFFFFFFFFFLL) == 0 )
    {
      if ( a4 )
        ++dword_140C29E84;
      else
        ++dword_140C29F04;
      return v9;
    }
    v25 = *(unsigned __int16 *)(a2 + 32);
    if ( (unsigned int)v25 > 1 || v25 > v23 )
    {
      if ( a4 )
        ++dword_140C29E88;
      else
        ++dword_140C29EEC;
      return v9;
    }
    return 0LL;
  }
  if ( (unsigned int)sub_14027B080(v18, 0x3FFFFFFFFFFFFFFFLL, v17, v21) == 6 )
  {
    if ( *(_WORD *)(a2 + 32) <= 1u )
    {
      if ( v23 < 0x10000 )
        return 0LL;
      if ( a4 )
        ++dword_140C29E74;
      else
        ++dword_140C29EE8;
    }
    else if ( a4 )
    {
      ++dword_140C29E70;
    }
    else
    {
      ++dword_140C29EE0;
    }
  }
  else if ( (unsigned int)sub_14027B54C(a2, v24) )
  {
    if ( *(_WORD *)(a2 + 32) <= 1u )
      return 0LL;
    if ( a4 )
      ++dword_140C29E78;
    else
      ++dword_140C29F70;
  }
  else if ( a4 )
  {
    ++dword_140C29E80;
  }
  else
  {
    ++dword_140C29F3C;
  }
  return v9;
}

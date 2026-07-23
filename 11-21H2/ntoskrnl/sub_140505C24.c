/*
 * XREFs of sub_140505C24 @ 0x140505C24
 * Callers:
 *     sub_140506578 @ 0x140506578 (sub_140506578.c)
 *     sub_140506860 @ 0x140506860 (sub_140506860.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140505C24(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  __int64 v4; // rcx
  char v5; // al
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rax

  v2 = *(_WORD *)(a1 + 40);
  if ( (unsigned __int16)(v2 - 1) <= 4u || v2 == 1024 || (v2 & 0xFC00) == 0x400 && (v2 & 0x3FF) != 0 )
  {
    v4 = *(_QWORD *)a2 | 4LL;
    *(_BYTE *)(a2 + 10) = 8;
  }
  else
  {
    v4 = *(_QWORD *)a2 | 4LL;
    if ( (v2 & 0xEFFC) == 0xC )
    {
      *(_BYTE *)(a2 + 10) = 1;
LABEL_7:
      *(_BYTE *)(a2 + 13) = v2 & 3;
      v4 |= 0x20uLL;
      goto LABEL_23;
    }
    if ( (v2 & 0xEFF0) == 0x10 )
    {
      *(_BYTE *)(a2 + 10) = 2;
      goto LABEL_7;
    }
    if ( (v2 & 0xEF00) == 0x100 )
    {
      *(_BYTE *)(a2 + 10) = 1;
    }
    else
    {
      if ( (v2 & 0xE800) != 0x800 )
      {
        *(_BYTE *)(a2 + 10) = 0;
        goto LABEL_23;
      }
      *(_BYTE *)(a2 + 10) = 4;
    }
    v4 |= 0x28uLL;
    v5 = v2 & 3;
    v6 = (unsigned __int8)v2 >> 4;
    *(_BYTE *)(a2 + 13) = v5;
    switch ( v6 )
    {
      case 3:
        *(_BYTE *)(a2 + 11) = 1;
        break;
      case 4:
        *(_BYTE *)(a2 + 11) = 2;
        break;
      case 5:
        *(_BYTE *)(a2 + 11) = 3;
        break;
      default:
        *(_BYTE *)(a2 + 11) = 0;
        break;
    }
  }
LABEL_23:
  v7 = v4 | 0x10;
  *(_QWORD *)a2 = v7;
  v8 = *(_QWORD *)(a1 + 40);
  if ( (v8 & 0x200000000000000LL) == 0 )
  {
    *(_BYTE *)(a2 + 12) &= 1u;
    v8 = *(_QWORD *)(a1 + 40);
  }
  if ( (v8 & 0x4000000000000000LL) != 0 )
  {
    *(_BYTE *)(a2 + 12) &= 4u;
    v8 = *(_QWORD *)(a1 + 40);
  }
  if ( (v8 & 0x2000000000000000LL) == 0 )
    *(_BYTE *)(a2 + 12) &= 8u;
  if ( (*(_BYTE *)(a1 + 20) & 2) != 0 )
  {
    *(_QWORD *)a2 = v7 | 0x1000;
    *(_QWORD *)(a2 + 184) = *(_QWORD *)(a1 + 28);
  }
  return 0LL;
}

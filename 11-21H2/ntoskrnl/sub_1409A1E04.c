/*
 * XREFs of sub_1409A1E04 @ 0x1409A1E04
 * Callers:
 *     sub_1409A5C10 @ 0x1409A5C10 (sub_1409A5C10.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409A20D0 @ 0x1409A20D0 (sub_1409A20D0.c)
 *     sub_1409A25D0 @ 0x1409A25D0 (sub_1409A25D0.c)
 *     sub_1409A29D4 @ 0x1409A29D4 (sub_1409A29D4.c)
 *     sub_1409A2BAC @ 0x1409A2BAC (sub_1409A2BAC.c)
 *     sub_1409A2D68 @ 0x1409A2D68 (sub_1409A2D68.c)
 *     sub_1409A2E54 @ 0x1409A2E54 (sub_1409A2E54.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409A1E04(__int64 a1)
{
  void **v1; // r14
  void **i; // rbx
  int v4; // ecx
  void **v5; // r15
  unsigned int v6; // ecx
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  void **v12; // rax
  _OWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v1 = (void **)(a1 + 96);
  for ( i = *(void ***)(a1 + 96); i != v1; i = (void **)*i )
  {
    v4 = *((_DWORD *)i + 150);
    v5 = i;
    if ( (v4 & 4) != 0 )
      goto LABEL_14;
    if ( (v4 & 1) != 0 )
    {
      v6 = v4 & 0xFFFFFFFC | 2;
      *((_DWORD *)i + 150) = v6;
      if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
      {
        *((_DWORD *)i + 149) = 0;
        v6 |= 0x40u;
      }
      v7 = 3LL;
    }
    else
    {
      if ( (v4 & 0x10) == 0 )
        goto LABEL_12;
      v6 = v4 & 0xFFFFFFEF;
      *((_DWORD *)i + 150) = v6;
      if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
      {
        *((_DWORD *)i + 149) = 0;
        v6 |= 0x40u;
      }
      v7 = 4LL;
    }
    *((_DWORD *)i + 150) = v6 | 0x20;
    sub_1409A29D4(a1, 0LL, i, v7);
LABEL_12:
    v4 = *((_DWORD *)i + 150);
    if ( (v4 & 0x20) != 0 )
    {
      *((_DWORD *)i + 150) = v4 & 0xFFFFFFDF;
      sub_1409A20D0(a1, i);
      v4 = *((_DWORD *)i + 150);
    }
LABEL_14:
    if ( (v4 & 0x44) == 0x40 )
    {
      *((_DWORD *)i + 150) = v4 & 0xFFFFFFBF;
      if ( (unsigned __int8)sub_1409A2BAC(a1, i) )
      {
        *((_DWORD *)i + 150) |= 0x40u;
        *(_DWORD *)(a1 + 4) |= 0x1000u;
      }
    }
    v8 = *((_DWORD *)i + 150);
    if ( (v8 & 4) != 0 )
    {
      if ( (v8 & 2) != 0 )
      {
        *((_DWORD *)i + 150) = v8 | 8;
        sub_1409A29D4(a1, 0LL, i, 5LL);
      }
      v9 = (__int64)i[5];
      if ( v9 )
      {
        v15 = 0LL;
        memset(v14, 0, sizeof(v14));
        sub_1409A2D68((unsigned int)v14, a1, (_DWORD)i, 2, v9, 0);
        sub_14042A5E0(i[3], v10);
        sub_1409A2E54(v14, 0LL);
      }
      v11 = *i;
      v12 = (void **)i[1];
      i = v12;
      if ( *((void ***)*v5 + 1) != v5 || *v12 != v5 )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = v12;
      --*(_DWORD *)(a1 + 116);
      ExFreePoolWithTag(v5, 0x446D7454u);
    }
  }
  sub_1409A25D0(a1, 0LL);
  sub_1409A25D0(a1, 1LL);
  sub_1409A25D0(a1, 2LL);
  return sub_1409A25D0(a1, 3LL);
}

/*
 * XREFs of sub_140AA5BCC @ 0x140AA5BCC
 * Callers:
 *     sub_140A805A8 @ 0x140A805A8 (sub_140A805A8.c)
 *     sub_140A80D10 @ 0x140A80D10 (sub_140A80D10.c)
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 *     sub_140A8BD60 @ 0x140A8BD60 (sub_140A8BD60.c)
 *     sub_140A8C014 @ 0x140A8C014 (sub_140A8C014.c)
 *     sub_140A8C08C @ 0x140A8C08C (sub_140A8C08C.c)
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 *     sub_140A8C54C @ 0x140A8C54C (sub_140A8C54C.c)
 *     sub_140A8C5D4 @ 0x140A8C5D4 (sub_140A8C5D4.c)
 *     sub_140A8CDBC @ 0x140A8CDBC (sub_140A8CDBC.c)
 *     sub_140A8CE34 @ 0x140A8CE34 (sub_140A8CE34.c)
 *     sub_140A8CEB8 @ 0x140A8CEB8 (sub_140A8CEB8.c)
 *     sub_140A8D070 @ 0x140A8D070 (sub_140A8D070.c)
 *     sub_140A8D2FC @ 0x140A8D2FC (sub_140A8D2FC.c)
 *     sub_140A90FE0 @ 0x140A90FE0 (sub_140A90FE0.c)
 *     sub_140A91260 @ 0x140A91260 (sub_140A91260.c)
 *     sub_140A9C190 @ 0x140A9C190 (sub_140A9C190.c)
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140602294 @ 0x140602294 (sub_140602294.c)
 *     sub_1406022DC @ 0x1406022DC (sub_1406022DC.c)
 *     sub_140A81AE8 @ 0x140A81AE8 (sub_140A81AE8.c)
 */

__int64 __fastcall sub_140AA5BCC(_QWORD *a1)
{
  bool v1; // zf
  unsigned __int64 v3; // rdi
  char *v4; // rcx
  char *v5; // rax
  char **v6; // rdx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  KIRQL v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 6) == 0;
  v13 = 0;
  if ( v1 )
  {
    sub_140602294(&v13);
    v3 = *a1;
    if ( *a1 )
    {
      sub_14042A5E0(a1, *a1);
      *a1 = 0LL;
      sub_140A81AE8((_QWORD *)(qword_140C1ADF8 + 16LL * (unsigned __int8)(-125 * (v3 >> 12))), v3);
    }
    sub_1406022DC(v13);
  }
  if ( !*((_DWORD *)a1 + 5) )
  {
    sub_140602294(&v13);
    if ( !*((_DWORD *)a1 + 5) )
    {
      v4 = (char *)(a1 + 4);
      v5 = (char *)a1[4];
      v6 = (char **)a1[5];
      if ( *((_QWORD **)v5 + 1) != a1 + 4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      *((_QWORD *)v5 + 1) = v6;
      a1[5] = a1 + 4;
      *(_QWORD *)v4 = v4;
      if ( *(char **)v5 == v5 )
      {
        v7 = (_QWORD *)(qword_140C1ADF8 + 16LL * (unsigned int)((v5 - (_BYTE *)qword_140C1AE00) >> 4));
        *v7 = 0LL;
        v7[1] = 0LL;
      }
    }
    sub_1406022DC(v13);
  }
  v8 = *((unsigned __int8 *)a1 + 16);
  v9 = (_QWORD *)a1[4];
  KeReleaseSpinLockFromDpcLevel(a1 + 1);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v1 = ((unsigned int)result & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= result;
        if ( v1 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  if ( v9 == a1 + 4 )
  {
    *((_DWORD *)a1 + 7) |= 0x80000000;
    return sub_14042A5E0(a1, *a1);
  }
  return result;
}

/*
 * XREFs of sub_14076C544 @ 0x14076C544
 * Callers:
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     RtlCompareUnicodeStrings @ 0x1407CD7A0 (RtlCompareUnicodeStrings.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14076C544(__int64 a1, __int64 a2, const WCHAR *a3, int a4, char a5, signed __int64 a6)
{
  _BYTE *v6; // r15
  bool v7; // cf
  int v9; // esi
  int v10; // r14d
  void *Pool2; // r13
  int v13; // edi
  const WCHAR *v14; // r14
  const WCHAR *v15; // rsi
  __int64 v16; // rcx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  unsigned int v28; // [rsp+A8h] [rbp+48h] BYREF
  int v29; // [rsp+B8h] [rbp+58h]

  v29 = a4;
  v6 = (_BYTE *)a6;
  v7 = a5 != 0;
  a5 = -a5;
  v9 = a2;
  v28 = 0;
  v10 = -v7;
  v25 = 0;
  Handle = 0LL;
  *(_BYTE *)a6 = 0;
  if ( !a2 )
  {
    v13 = sub_14077F2EC(qword_140D00AC0, *(_QWORD *)(a1 + 48), 16, 0, 983103, 0, (__int64)&Handle, 0LL);
    if ( v13 < 0 )
      goto LABEL_21;
    v9 = (int)Handle;
  }
  v28 = 512;
  Pool2 = (void *)ExAllocatePool2(256LL, 512LL, 1970499664LL);
  if ( Pool2 )
  {
    v13 = sub_14077CD90(
            qword_140D00AC0,
            *(_QWORD *)(a1 + 48),
            v9,
            v10 + 3,
            (__int64)&v25,
            (__int64)Pool2,
            (__int64)&v28,
            0);
    if ( v13 != -1073741789 )
      goto LABEL_4;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(256LL, v28, 1970499664LL);
    if ( Pool2 )
    {
      v13 = sub_14077CD90(
              qword_140D00AC0,
              *(_QWORD *)(a1 + 48),
              v9,
              v10 + 3,
              (__int64)&v25,
              (__int64)Pool2,
              (__int64)&v28,
              0);
LABEL_4:
      if ( v13 < 0 )
      {
        if ( v13 == -1073741275 )
        {
          v13 = 0;
          if ( a3 )
          {
            for ( *v6 = 1; *a3; a3 += v24 + 1 )
            {
              v24 = -1LL;
              do
                ++v24;
              while ( a3[v24] );
            }
          }
        }
        goto LABEL_20;
      }
      if ( v25 != 7 )
      {
        v13 = -1073741823;
LABEL_20:
        ExFreePoolWithTag(Pool2, 0);
        goto LABEL_21;
      }
      if ( a3 && v29 == v28 )
      {
        v14 = a3;
        v15 = (const WCHAR *)Pool2;
        if ( *a3 )
        {
          while ( *v15 )
          {
            v16 = -1LL;
            do
              ++v16;
            while ( v14[v16] );
            v17 = v16 + 1;
            v18 = -1LL;
            do
              ++v18;
            while ( v15[v18] );
            v19 = (unsigned int)(v18 + 1);
            if ( v17 != (_DWORD)v19
              || (a6 = v17, v27 = v19, RtlCompareUnicodeStrings(v14, v17, v15, (unsigned int)v19, 1u)) )
            {
              *v6 = 1;
              break;
            }
            v14 += a6;
            v15 += v27;
            if ( !*v14 )
              break;
          }
        }
        if ( *v6 )
          goto LABEL_34;
        if ( !*v14 && !*v15 )
          goto LABEL_20;
      }
      *v6 = 1;
LABEL_34:
      v21 = (char *)Pool2;
      if ( v28 )
      {
        do
        {
          if ( !*(_WORD *)v21 )
            break;
          v22 = -1LL;
          do
            ++v22;
          while ( *(_WORD *)&v21[2 * v22] );
          v21 += 2 * v22 + 2;
        }
        while ( 2 * ((v21 - (_BYTE *)Pool2) >> 1) < (unsigned __int64)v28 );
      }
      if ( a3 )
      {
        while ( *a3 )
        {
          v23 = -1LL;
          do
            ++v23;
          while ( a3[v23] );
          a3 += v23 + 1;
        }
      }
      goto LABEL_20;
    }
  }
  v13 = -1073741670;
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v13;
}

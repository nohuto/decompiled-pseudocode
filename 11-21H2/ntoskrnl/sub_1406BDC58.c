/*
 * XREFs of sub_1406BDC58 @ 0x1406BDC58
 * Callers:
 *     sub_1406BDAE4 @ 0x1406BDAE4 (sub_1406BDAE4.c)
 * Callees:
 *     sub_14024263C @ 0x14024263C (sub_14024263C.c)
 *     sub_1402426B4 @ 0x1402426B4 (sub_1402426B4.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077D29C @ 0x14077D29C (sub_14077D29C.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     sub_140789460 @ 0x140789460 (sub_140789460.c)
 */

__int64 __fastcall sub_1406BDC58(int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, __int64 a6, int *a7, __int16 a8)
{
  int v8; // ebx
  int v11; // r13d
  __int64 v12; // r15
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  int v17; // r10d
  const wchar_t *v18; // rax
  int v19; // eax
  int v20; // edx
  int v22; // edx
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v25; // [rsp+50h] [rbp-10h]

  v8 = 0;
  v25 = 0LL;
  Handle = 0LL;
  v23 = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
  {
    v8 = -1073741811;
    goto LABEL_25;
  }
  v11 = *a7;
  if ( !*a7 )
  {
    v12 = 0LL;
    goto LABEL_6;
  }
  v12 = a6;
  if ( !a6 )
    return (unsigned int)-1073741811;
LABEL_6:
  *a7 = 0;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 || !sub_1402426B4(a4) )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    v8 = sub_140789460(v17, v13, v15, v16, 33554433, 0, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_25;
    v17 = a1;
  }
  if ( a4 == 8 || a4 == 13 || a4 <= 19 && a4 > 17 )
  {
    if ( !a3 )
      LODWORD(a3) = (_DWORD)Handle;
LABEL_15:
    v18 = sub_14024263C(v14, a4);
    if ( !v18 )
    {
      v8 = -1073741264;
      goto LABEL_25;
    }
    LODWORD(v23) = v11;
    v19 = sub_14077D29C(a1, a3, (_DWORD)v18, (unsigned int)&v23 + 4, v12, (__int64)&v23, 0LL);
    if ( v19 != -1073741772 && v19 != -1073741444 )
    {
      if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741789 )
      {
        v8 = v19;
        goto LABEL_25;
      }
      v20 = HIDWORD(v23);
      if ( ((unsigned int)v23 >= 2 || HIDWORD(v23) != 1)
        && (HIDWORD(v23) != 7 || (unsigned int)v23 >= 2)
        && (HIDWORD(v23) != 4 || (_DWORD)v23 == 4) )
      {
        if ( (unsigned int)v23 > 0x40 && a4 == 8 )
        {
          v8 = -1073741595;
        }
        else
        {
          *a7 = v23;
          *a5 = v20;
          if ( v19 || !v11 )
            v8 = -1073741789;
        }
        goto LABEL_25;
      }
    }
    goto LABEL_30;
  }
  v22 = (int)Handle;
  if ( a3 )
    v22 = a3;
  v8 = sub_14077EF20(v17, v22, 0, 1, 0);
  if ( v8 >= 0 )
  {
    LODWORD(a3) = (_DWORD)v25;
    goto LABEL_15;
  }
LABEL_30:
  v8 = -1073741275;
LABEL_25:
  if ( v25 )
    ZwClose(v25);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}

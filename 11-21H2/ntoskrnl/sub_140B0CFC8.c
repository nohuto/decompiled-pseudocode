/*
 * XREFs of sub_140B0CFC8 @ 0x140B0CFC8
 * Callers:
 *     sub_140B0CDAC @ 0x140B0CDAC (sub_140B0CDAC.c)
 * Callees:
 *     strchr @ 0x1403E2AA0 (strchr.c)
 *     RtlCharToInteger @ 0x14082D330 (RtlCharToInteger.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B0D254 @ 0x140B0D254 (sub_140B0D254.c)
 */

bool __fastcall sub_140B0CFC8(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int *a7)
{
  unsigned int v7; // esi
  char v8; // di
  int v9; // r13d
  unsigned int v10; // r12d
  int v12; // edx
  bool v13; // zf
  char v14; // cl
  _BYTE *v15; // r15
  unsigned __int64 v16; // rsi
  CHAR *Pool2; // rax
  CHAR *v18; // r14
  CHAR *v19; // rcx
  __int64 v20; // r15
  CHAR v21; // al
  CHAR *v22; // rax
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-58h]
  ULONG Value; // [rsp+24h] [rbp-54h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-50h]
  unsigned int v29; // [rsp+88h] [rbp+10h]
  unsigned int v30; // [rsp+90h] [rbp+18h]
  unsigned int v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v7 = 0;
  Value = 0;
  v8 = 0;
  v9 = 0;
  v29 = 0;
  v10 = 0;
  v12 = *a7;
  v25 = *a7;
  if ( a5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v13 = v8 == 0;
            if ( v8 )
              return v13;
            if ( v9 )
              break;
            if ( *a2 != 123 )
              goto LABEL_36;
LABEL_7:
            ++a2;
            v9 = 1;
          }
          if ( v9 == 1 )
            break;
          if ( v9 != 2 )
          {
            if ( !*a2 && v10 == a3 && v7 == a4 )
            {
              *a7 = v12 + v7 + v10;
              return v8 == 0;
            }
            goto LABEL_36;
          }
          if ( *a2 == 46 )
            goto LABEL_7;
          if ( *a2 == 125 )
          {
LABEL_44:
            ++a2;
            v9 = 3;
          }
          else
          {
LABEL_36:
            v8 = 1;
          }
        }
        v14 = *a2;
        if ( *a2 == 125 )
          goto LABEL_44;
        if ( v10 > a3 || v7 > a4 || (v27 = v12 + v7 + v10, v27 >= a6) )
        {
          v8 = 1;
          return v8 == 0;
        }
        v15 = a2;
        if ( v14 )
        {
          do
          {
            if ( strchr(".}", v14) )
              break;
            v14 = *++a2;
          }
          while ( *a2 );
          v12 = v25;
          a3 = v30;
          a4 = v31;
        }
        v16 = a2 - v15 + 1;
        if ( a2 - v15 != -1 )
          break;
        v7 = v29;
        v8 = 1;
      }
      Pool2 = (CHAR *)ExAllocatePool2(256LL, a2 - v15 + 1, 0x74694D45u);
      v18 = Pool2;
      if ( Pool2 && v16 <= 0x7FFFFFFF )
      {
        if ( (unsigned __int64)(a2 - v15) > 0x7FFFFFFE )
        {
          *Pool2 = 0;
        }
        else
        {
          v19 = Pool2;
          v20 = v15 - Pool2;
          while ( v16 != 1 )
          {
            v21 = v19[v20];
            if ( !v21 )
              break;
            *v19++ = v21;
            --v16;
          }
          v22 = v19 - 1;
          if ( v16 )
            v22 = v19;
          *v22 = 0;
          if ( v16 )
          {
            if ( v10 < v30 )
            {
              v7 = v29;
              if ( (int)sub_140B0D254(a1, v18, &Value) < 0 )
                goto LABEL_45;
              v23 = v10 + v25;
              ++v10;
LABEL_30:
              v9 = 2;
              *(_DWORD *)(a5 + 4 * v23) = Value;
            }
            else
            {
              v7 = v29;
              if ( RtlCharToInteger(v18, 0x10u, &Value) >= 0 )
              {
                v23 = v27;
                v7 = ++v29;
                goto LABEL_30;
              }
LABEL_45:
              v8 = 1;
            }
            ExFreePoolWithTag(v18, 0x74694D45u);
            goto LABEL_32;
          }
        }
      }
      v7 = v29;
      v8 = 1;
LABEL_32:
      v12 = v25;
      a3 = v30;
      a4 = v31;
    }
  }
  return 0;
}

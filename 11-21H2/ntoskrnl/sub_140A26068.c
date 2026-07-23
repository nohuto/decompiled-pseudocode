/*
 * XREFs of sub_140A26068 @ 0x140A26068
 * Callers:
 *     sub_140A25F18 @ 0x140A25F18 (sub_140A25F18.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14069946C @ 0x14069946C (sub_14069946C.c)
 *     sub_1406CB3B4 @ 0x1406CB3B4 (sub_1406CB3B4.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A26068(__int64 a1, __int64 a2, void *a3, __int64 a4, __int64 a5, int a6)
{
  char *Pool2; // rdi
  int v7; // r12d
  int v10; // ebx
  HANDLE v11; // rdx
  __int64 v12; // rcx
  ULONG v13; // r15d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG i; // esi
  int v18; // eax
  ULONG v19; // eax
  _BYTE v21[8]; // [rsp+40h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v24; // [rsp+58h] [rbp-8h] BYREF

  v24 = 0LL;
  Pool2 = 0LL;
  KeyHandle = 0LL;
  v7 = 0;
  if ( (_WORD)a6 )
    return (unsigned int)-1073741811;
  if ( a3 )
    goto LABEL_6;
  v10 = sub_14077C924(a1, a2, 5, 1, 0, (__int64)&v24);
  if ( v10 < 0 )
    goto LABEL_41;
  v11 = v24;
  if ( !v24 )
LABEL_6:
    v11 = a3;
  if ( a1 )
    v12 = *(_QWORD *)(a1 + 224);
  else
    v12 = 0LL;
  v10 = sub_14077FFEC(v12, (__int64)v11, (__int64)L"BaseContainers", 0, 8u, (__int64)&KeyHandle);
  if ( v10 >= 0 )
  {
    Pool2 = (char *)ExAllocatePool2(256LL, 400LL, 1380994640LL);
    if ( Pool2 )
    {
      v13 = 0;
      while ( 1 )
      {
        Handle = 0LL;
        a6 = 200;
        v14 = sub_1406CB3B4(KeyHandle, v13, Pool2, (unsigned int *)&a6);
        v10 = v14;
        if ( v14 == -2147483622 )
          break;
        if ( v14 != -1073741789 )
        {
          if ( v14 < 0 )
            goto LABEL_41;
          v15 = a1 ? *(_QWORD *)(a1 + 224) : 0LL;
          v10 = sub_14077FFEC(v15, (__int64)KeyHandle, (__int64)Pool2, 0, 1u, (__int64)&Handle);
          if ( v10 < 0 )
            goto LABEL_41;
          for ( i = 0; ; ++i )
          {
            do
            {
              a6 = 200;
              v18 = sub_14069946C(v16, Handle, i, Pool2, (__int64)&a6, (__int64)v21, 0LL, 0LL);
              v10 = v18;
              if ( v18 == -2147483622 )
              {
                v10 = 0;
                goto LABEL_33;
              }
            }
            while ( v18 == -1073741789 );
            if ( v18 < 0 )
              goto LABEL_33;
            v7 = sub_14042A5E0(a1, Pool2);
            if ( v7 )
              break;
          }
          if ( v7 != 1 && v7 != 2 )
          {
            if ( v7 == 3 )
              v10 = -1073741248;
            else
              v10 = -1073741595;
          }
LABEL_33:
          if ( Handle )
            ZwClose(Handle);
          if ( v10 < 0 )
            goto LABEL_41;
          if ( v7 == 2 )
            goto LABEL_43;
          v19 = v13 + 1;
          v13 = 0;
          if ( v7 != 1 )
            v13 = v19;
        }
      }
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    goto LABEL_43;
  }
LABEL_41:
  if ( v10 == -1073741444 )
    v10 = -1073741772;
LABEL_43:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v24 )
    ZwClose(v24);
  return (unsigned int)v10;
}

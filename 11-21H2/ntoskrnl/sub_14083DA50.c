/*
 * XREFs of sub_14083DA50 @ 0x14083DA50
 * Callers:
 *     sub_14083D790 @ 0x14083D790 (sub_14083D790.c)
 *     sub_140A27198 @ 0x140A27198 (sub_140A27198.c)
 * Callees:
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14083DA50(
        __int64 a1,
        const WCHAR *a2,
        char a3,
        __int64 a4,
        __int64 a5,
        _WORD *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int v10; // ebx
  const wchar_t *v11; // rax
  int v12; // r14d
  __int64 v13; // rcx
  int v14; // eax
  _WORD *Pool2; // rdi
  unsigned int v16; // eax
  unsigned int v17; // eax
  wchar_t *v19; // rax
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21[8]; // [rsp+38h] [rbp-40h] BYREF

  v21[0] = 0LL;
  *a8 = 0;
  Handle = 0LL;
  if ( a7 )
    *a6 = 0;
  v10 = sub_14078014C(a1, 5, (__int64)v21);
  if ( v10 >= 0 )
  {
    v11 = a2;
    v12 = 0;
    if ( a2 )
    {
      while ( *v11 )
      {
        if ( *v11 == 92 )
          break;
        if ( (unsigned int)++v12 > 2 )
          break;
        v19 = wcschr(v11, 0x5Cu);
        if ( v19 )
        {
          v11 = v19 + 1;
          if ( v11 )
            continue;
        }
        goto LABEL_5;
      }
      v10 = -1073741811;
    }
    else
    {
LABEL_5:
      v13 = 0LL;
      if ( a1 )
        v13 = *(_QWORD *)(a1 + 224);
      v14 = sub_14077FFEC(v13, v21[0], (__int64)a2, 0, 8u, (__int64)&Handle);
      v10 = v14;
      if ( v14 == -1073741444 )
      {
        v10 = -1073741595;
      }
      else if ( v14 >= 0 )
      {
        Pool2 = (_WORD *)ExAllocatePool2(256LL, 440LL, 1380994640LL);
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = v12 + 1;
          sub_1402E0340(Pool2 + 2, 0xC8uLL, a2, 0LL, 0LL, 2304);
          *((_BYTE *)Pool2 + 404) = a3;
          *((_QWORD *)Pool2 + 51) = a4;
          *((_QWORD *)Pool2 + 52) = a5;
          *((_QWORD *)Pool2 + 53) = a6;
          *((_DWORD *)Pool2 + 108) = a7;
          *((_DWORD *)Pool2 + 109) = 0;
          v10 = sub_14083EAEC(a1, Handle, sub_14083E410, Pool2);
          if ( v10 >= 0 )
          {
            v16 = *((_DWORD *)Pool2 + 109);
            *a8 = v16;
            if ( v16 )
            {
              v17 = v16 + 1;
              *a8 = v17;
              if ( a6 && a7 >= v17 )
                a6[v17 - 1] = 0;
              else
                v10 = -1073741789;
            }
          }
          ExFreePoolWithTag(Pool2, 0);
        }
        else
        {
          v10 = -1073741801;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v10;
}

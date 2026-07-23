/*
 * XREFs of sub_1407741A4 @ 0x1407741A4
 * Callers:
 *     sub_140763C50 @ 0x140763C50 (sub_140763C50.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     wcsstr @ 0x1403E3540 (wcsstr.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407734D8 @ 0x1407734D8 (sub_1407734D8.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_1409B6A58 @ 0x1409B6A58 (sub_1409B6A58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407741A4(int a1, __int64 a2, int a3, unsigned int a4, void *Src, _DWORD *a6)
{
  wchar_t *v8; // r13
  int v9; // eax
  unsigned int v10; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v13; // rsi
  int v14; // eax
  size_t v15; // r15
  wchar_t *v16; // r12
  char v17; // cl
  wchar_t *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  const wchar_t *v21; // rcx
  const wchar_t *v22; // rax
  unsigned int v23; // edx
  wchar_t *v24; // rax
  unsigned int Size; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int Size_4; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h] BYREF
  wchar_t *Str; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *v29; // [rsp+68h] [rbp-98h]
  void *v30; // [rsp+70h] [rbp-90h]
  _QWORD v31[20]; // [rsp+80h] [rbp-80h] BYREF

  Size_4 = a4;
  v8 = 0LL;
  Size = *a6;
  v30 = Src;
  v27 = 0;
  v9 = sub_14077CD90(qword_140D00AC0, a1, 0, a4, (__int64)&v27, (__int64)Src, (__int64)&Size, 0);
  v10 = v9;
  if ( a3 == 1 )
  {
    if ( v9 < 0 )
    {
      if ( v9 != -1073741789 )
        return v10;
    }
    else if ( v27 != 1 )
    {
      return (unsigned int)-1073741584;
    }
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, Size, 1869181008LL);
    v13 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( v10 != -1073741789 )
    {
      memmove(Pool2, Src, Size);
      goto LABEL_13;
    }
    v19 = sub_14077CD90(qword_140D00AC0, a1, 0, Size_4, (__int64)&v27, (__int64)Pool2, (__int64)&Size, 0);
    v10 = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -1073741789 )
        *a6 = Size;
    }
    else
    {
      if ( v27 == 1 )
      {
LABEL_13:
        Size_4 = Size;
        Str = v13;
        v29 = v13;
        v14 = sub_1407734D8(v13, Size, &Str, &Size_4);
        v15 = Size_4;
        v16 = Str;
        if ( v14 )
        {
          v29 = Str;
          v18 = wcsstr(Str, L";(");
          v8 = v18;
          if ( v18 )
          {
            v20 = ((unsigned int)v15 >> 1) - 2;
            if ( v16[v20] == 41 )
            {
              *v18 = 0;
              v8 = v18 + 2;
              v16[v20] = 0;
              memset(&v31[1], 0, 0x98uLL);
              v21 = v8;
              v31[0] = v8;
              for ( Size_4 = 1; ; Size_4 = v23 + 1 )
              {
                v24 = wcschr(v21, 0x2Cu);
                if ( !v24 )
                  break;
                *v24 = 0;
                v22 = v24 + 1;
                v23 = Size_4;
                if ( Size_4 >= 0x13 )
                {
                  v17 = 1;
                  goto LABEL_15;
                }
                v31[Size_4] = v22;
                v21 = v22;
              }
            }
          }
        }
        v17 = 0;
LABEL_15:
        if ( *a6 < (unsigned int)v15 )
        {
          v10 = -1073741789;
        }
        else if ( v8 )
        {
          if ( v17 )
            v10 = -1073741619;
          else
            v10 = sub_1409B6A58((_DWORD)v29, 0, 0, 0, 1, (__int64)v31, (__int64)v30, *a6, (__int64)a6);
        }
        else
        {
          memmove(v30, v16, v15);
        }
        *a6 = v15;
        goto LABEL_19;
      }
      v10 = -1073741584;
    }
LABEL_19:
    ExFreePoolWithTag(v13, 0);
    return v10;
  }
  if ( v9 >= 0 )
  {
    if ( v27 == a3 )
    {
LABEL_6:
      *a6 = Size;
      return v10;
    }
    return (unsigned int)-1073741584;
  }
  if ( v9 == -1073741789 )
    goto LABEL_6;
  return v10;
}

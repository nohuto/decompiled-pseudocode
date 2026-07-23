/*
 * XREFs of sub_1407872FC @ 0x1407872FC
 * Callers:
 *     sub_140785A3C @ 0x140785A3C (sub_140785A3C.c)
 *     sub_140A2B08C @ 0x140A2B08C (sub_140A2B08C.c)
 * Callees:
 *     sub_1406DBB10 @ 0x1406DBB10 (sub_1406DBB10.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140787558 @ 0x140787558 (sub_140787558.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407872FC(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r12
  _DWORD *v9; // rsi
  __int64 v11; // r14
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 Pool2; // rax
  void *v19; // r15
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned int v25; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v26[3]; // [rsp+64h] [rbp-Ch] BYREF
  int v29; // [rsp+C8h] [rbp+58h] BYREF

  v8 = a5;
  v9 = a8;
  v11 = a6;
  v12 = 0;
  v29 = 0;
  *a5 = 0;
  *v9 = 0;
  v25 = 0;
  v26[0] = 0;
  if ( v11 )
  {
    v13 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  if ( v14 < 2 )
  {
    return (unsigned int)-1073741264;
  }
  else
  {
    switch ( v14 )
    {
      case 0xAu:
        v20 = *(_QWORD *)a4 - 0x101A47EFB725F130LL;
        if ( *(_QWORD *)a4 == 0x101A47EFB725F130LL )
          v20 = *(_QWORD *)(a4 + 8) + 0x531461739FFD0E5BLL;
        if ( !v20 )
        {
          v21 = sub_14077DA5C(a1, a2, 3, a3, 0LL, (__int64)&qword_14000EBA0, (__int64)v8, v11, v13, (__int64)&v29, 0);
          v12 = v21;
          if ( !v21 || v21 == -1073741789 )
            *v9 = v29;
        }
        break;
      case 4u:
        v15 = *(_QWORD *)a4 - 0x414BB814026E516ELL;
        if ( *(_QWORD *)a4 == 0x414BB814026E516ELL )
          v15 = *(_QWORD *)(a4 + 8) - 0x2248EF6F6D85CD83LL;
        if ( !v15 )
        {
          *v9 = 16;
          *v8 = 13;
          if ( v13 < 0x10 )
            v12 = -1073741789;
          else
            v12 = sub_140787558(a1, a2, v11);
        }
        break;
      case 5u:
        v22 = *(_QWORD *)a4 - 0x414BB814026E516ELL;
        if ( *(_QWORD *)a4 == 0x414BB814026E516ELL )
          v22 = *(_QWORD *)(a4 + 8) - 0x2248EF6F6D85CD83LL;
        if ( !v22 )
        {
          v23 = sub_1406DBB10(a1, a2, (_WORD *)v11, v13 >> 1, &v25);
          v12 = v23;
          if ( v23 == -1073741772 )
          {
            v12 = -1073741275;
          }
          else if ( !v23 || v23 == -1073741789 )
          {
            v24 = 2LL * v25;
            if ( v24 > 0xFFFFFFFF )
            {
              v12 = -1073741595;
            }
            else
            {
              *v9 = v24;
              *v8 = 18;
            }
          }
        }
        break;
      case 2u:
        v17 = *(_QWORD *)a4 - 0x48273F8A8C7ED206LL;
        if ( *(_QWORD *)a4 == 0x48273F8A8C7ED206LL )
          v17 = *(_QWORD *)(a4 + 8) - 0x6CFCAE1F9EAEABB3LL;
        if ( !v17 )
        {
          Pool2 = ExAllocatePool2(256LL, 400LL, 1380994640LL);
          v19 = (void *)Pool2;
          if ( Pool2 )
          {
            v12 = sub_14077DA5C(
                    a1,
                    a2,
                    3,
                    a3,
                    0LL,
                    (__int64)&qword_140010AD8,
                    (__int64)v26,
                    Pool2,
                    400,
                    (__int64)&v29,
                    0);
            if ( v12 >= 0 )
            {
              if ( v26[0] != 18
                || (v12 = sub_14077DA5C(
                            a1,
                            (__int64)v19,
                            1,
                            0,
                            0LL,
                            (__int64)&qword_140010A78,
                            (__int64)v8,
                            v11,
                            v13,
                            (__int64)&v29,
                            0),
                    v12 == -1073741772) )
              {
                v12 = -1073741275;
              }
            }
            ExFreePoolWithTag(v19, 0);
            if ( !v12 || v12 == -1073741789 )
              *v9 = v29;
          }
          else
          {
            v12 = -1073741801;
          }
        }
        break;
    }
  }
  return (unsigned int)v12;
}

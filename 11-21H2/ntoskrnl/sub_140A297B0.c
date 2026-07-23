/*
 * XREFs of sub_140A297B0 @ 0x140A297B0
 * Callers:
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14076E548 @ 0x14076E548 (sub_14076E548.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140A27CF4 @ 0x140A27CF4 (sub_140A27CF4.c)
 *     sub_140A28A2C @ 0x140A28A2C (sub_140A28A2C.c)
 *     sub_140A28D58 @ 0x140A28D58 (sub_140A28D58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A297B0(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *v6; // rdi
  int v7; // eax
  int v8; // ebx
  __int64 v10; // r14
  __int64 Pool2; // rax
  WCHAR *v12; // r12
  int v13; // ecx
  _WORD *v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+60h] [rbp-19h] BYREF
  int v17; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v18; // [rsp+68h] [rbp-11h] BYREF
  int v19; // [rsp+6Ch] [rbp-Dh] BYREF
  unsigned int v20; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v21; // [rsp+74h] [rbp-5h] BYREF
  __int64 v22; // [rsp+78h] [rbp-1h] BYREF
  PVOID P; // [rsp+80h] [rbp+7h] BYREF
  __int128 v24; // [rsp+88h] [rbp+Fh] BYREF

  P = 0LL;
  v21 = 0;
  v22 = 0LL;
  v20 = 0;
  v16 = 0;
  v24 = 0LL;
  v17 = 0;
  v6 = 0LL;
  v19 = 0;
  v18 = 0;
  v7 = sub_14076E548(a1, a2, 3, a3, (__int64)&qword_140010A00, &P, &v21, &v22, &v20);
  v8 = v7;
  if ( v7 == -1073741275 )
  {
    v8 = 0;
LABEL_3:
    if ( (unsigned int)sub_14077DA5C(
                         a1,
                         a2,
                         3,
                         a3,
                         0LL,
                         (__int64)&qword_140010A60,
                         (__int64)&v19,
                         0LL,
                         0,
                         (__int64)&v18,
                         0) == -1073741789 )
    {
      sub_14077198C(a1, a2, 3, 0LL, 0LL, (__int64)&qword_140010A60, 0, 0LL, 0, 0);
      sub_14077198C(a1, a2, 3, 0LL, 0LL, (__int64)qword_140039B70, 0, 0LL, 0, 0);
      sub_14077198C(a1, a2, 3, 0LL, 0LL, (__int64)qword_140037C78, 0, 0LL, 0, 0);
    }
    goto LABEL_5;
  }
  if ( v7 < 0 )
    goto LABEL_5;
  v10 = v22;
  if ( !v22 )
    goto LABEL_3;
  Pool2 = ExAllocatePool2(256LL, 400LL, 1380994640LL);
  v12 = (WCHAR *)Pool2;
  if ( Pool2 )
  {
    v8 = sub_14077DA5C(a1, a2, 3, a3, 0LL, (__int64)&qword_140010AD8, (__int64)&v19, Pool2, 400, (__int64)&v18, 0);
    if ( v8 >= 0 )
    {
      if ( v19 == 18 && v18 >= 2 )
      {
        v8 = sub_140A28D58(a1, v12, (__int64)&v24);
        if ( v8 >= 0 )
        {
          v16 = sub_140A28A2C(v10);
          v13 = 0;
          if ( ((*(_DWORD *)(v10 + 8) >> 3) & 7) != 7 )
            v13 = dword_140047930[(*(_DWORD *)(v10 + 8) >> 3) & 7];
          v17 = v13;
          v14 = (_WORD *)ExAllocatePool2(256LL, 114LL, 1380994640LL);
          v6 = v14;
          if ( v14 )
          {
            v8 = sub_140A27CF4((int *)&v24, v16, v17, v14);
            if ( v8 >= 0 )
            {
              v15 = -1LL;
              do
                ++v15;
              while ( v6[v15] );
              v8 = sub_14077198C(a1, a2, 3, a3, 0LL, (__int64)&qword_140010A60, 18, (__int64)v6, 2 * (int)v15 + 2, 0);
              if ( v8 >= 0 )
              {
                v8 = sub_14077198C(a1, a2, 3, a3, 0LL, (__int64)qword_140039B70, 7, (__int64)&v16, 4u, 0);
                if ( v8 >= 0 )
                  v8 = sub_14077198C(a1, a2, 3, a3, 0LL, (__int64)qword_140037C78, 7, (__int64)&v17, 4u, 0);
              }
            }
          }
          else
          {
            v8 = -1073741801;
          }
        }
      }
      else
      {
        v8 = -1073741823;
      }
    }
    ExFreePoolWithTag(v12, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v8 = -1073741801;
  }
LABEL_5:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v8;
}

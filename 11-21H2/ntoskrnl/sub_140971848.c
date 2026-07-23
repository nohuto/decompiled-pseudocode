/*
 * XREFs of sub_140971848 @ 0x140971848
 * Callers:
 *     sub_140971650 @ 0x140971650 (sub_140971650.c)
 * Callees:
 *     sub_14021803C @ 0x14021803C (sub_14021803C.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402DBF90 @ 0x1402DBF90 (sub_1402DBF90.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054ED80 @ 0x14054ED80 (sub_14054ED80.c)
 *     sub_14056A188 @ 0x14056A188 (sub_14056A188.c)
 *     sub_1405994CC @ 0x1405994CC (sub_1405994CC.c)
 *     sub_1405A2D30 @ 0x1405A2D30 (sub_1405A2D30.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140760554 @ 0x140760554 (sub_140760554.c)
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 *     sub_140761F24 @ 0x140761F24 (sub_140761F24.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_1409782F8 @ 0x1409782F8 (sub_1409782F8.c)
 */

__int64 __fastcall sub_140971848(ULONG64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 *v7; // r15
  int v8; // r14d
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v13; // ebx
  __int64 v14; // r9
  int v15; // esi
  int v16; // ebx
  int v17; // eax
  ULONG_PTR v18; // r10
  ULONG_PTR v19; // r10
  unsigned __int64 v20; // rax
  ULONG64 v21; // r10
  int v22; // ecx
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-69h] BYREF
  __int128 v24; // [rsp+48h] [rbp-61h] BYREF
  __int64 v25; // [rsp+58h] [rbp-51h]
  unsigned __int64 v26; // [rsp+60h] [rbp-49h] BYREF
  UNICODE_STRING v27; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING v28; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING v29; // [rsp+88h] [rbp-21h] BYREF
  _OWORD v30[3]; // [rsp+98h] [rbp-11h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v26 = 0LL;
  BugCheckParameter2 = 0LL;
  v25 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v8 = 0;
  v29 = 0LL;
  v28 = 0LL;
  memset(v30, 0, sizeof(v30));
  v24 = 0LL;
  if ( (unsigned int)sub_1402FDD20(v3) )
  {
    v9 = sub_140313C70(v3);
    v11 = v9 + 8 * (((v10 >> 12) + ((v10 & 0xFFF) != 0) + 511LL) & 0xFFFFFFFFFFFFFE00uLL);
    if ( !(unsigned int)sub_1402DBF90(
                          v11,
                          v11 + 8 * (((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0) - 1LL),
                          0,
                          12) )
      return 3221225626LL;
  }
  v13 = 0x40000000;
  if ( (unsigned int)sub_14027B080(*(_QWORD *)(a1 + 48)) == 1 )
  {
    v13 = 1073741825;
    sub_14030D5C0(xmmword_140C533C8, 0LL, (__int64)v30, v14);
    v7 = sub_1405A2D30(a1);
  }
  v15 = v13 | 0x10000000;
  if ( !(unsigned int)sub_14056A188(a1) )
    v15 = v13;
  v16 = sub_140760554(a2, 0LL, 0LL, &v27, &v29, &v28);
  if ( v16 >= 0 )
  {
    v17 = sub_14075FC44((__int64)a2, 0LL, 0LL, a3, v15, &BugCheckParameter2, &v26);
    v16 = v17;
    if ( v17 != -1073741411 )
    {
      if ( v17 != -1073741554 )
      {
        if ( v17 < 0 )
          goto LABEL_36;
        v19 = BugCheckParameter2;
        v8 = 1;
        if ( (v15 & 1) == 0
          || _bittest((const signed __int32 *)(a1 + 104), 0x1Bu)
          && _bittest((const signed __int32 *)(BugCheckParameter2 + 104), 0x1Bu) )
        {
          if ( !(unsigned int)sub_1409782F8(*(_QWORD *)(BugCheckParameter2 + 136), a1) )
          {
            v25 = 0LL;
            v24 = v19;
            sub_140761F24(a1, (__int64)sub_140973200, (__int64)&v24);
            if ( *((_QWORD *)&v24 + 1) )
            {
              v16 = -1073740758;
            }
            else
            {
              v16 = sub_14054ED80(*(_QWORD *)(a1 + 48));
              if ( v16 >= 0 )
              {
                v18 = BugCheckParameter2;
                goto LABEL_27;
              }
            }
LABEL_32:
            v19 = BugCheckParameter2;
            goto LABEL_33;
          }
          v16 = -1073740945;
        }
        else
        {
          v16 = -1073740620;
        }
LABEL_33:
        sub_140761234(v19, *(_QWORD *)(v19 + 112), a2, (__int64)&v28, (__int64)&v27, 1);
LABEL_34:
        if ( v8 )
          MmUnloadSystemImage(BugCheckParameter2);
        goto LABEL_36;
      }
      v18 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 196) & 0x20) != 0 )
      {
        if ( *(_QWORD *)(BugCheckParameter2 + 280) != a1 )
        {
          v16 = -1073741791;
          goto LABEL_36;
        }
        if ( !*(_QWORD *)(BugCheckParameter2 + 112) )
        {
          v16 = -1073740758;
          goto LABEL_36;
        }
LABEL_27:
        v20 = sub_140287970(*(_QWORD *)(v18 + 112));
        v16 = sub_140971068(v21, a1, v20, v15);
        v22 = v8;
        if ( v16 >= 0 )
        {
          if ( (dword_140D06880 & 0x40000) != 0 )
            *(_DWORD *)(BugCheckParameter2 + 104) |= 0x2100u;
          v8 = 0;
        }
        if ( !v22 )
          goto LABEL_34;
        goto LABEL_32;
      }
    }
  }
LABEL_36:
  if ( v7 )
  {
    sub_14021803C((__int64)&qword_140C533D8);
    sub_1405994CC(v7);
    sub_1402D0930((__int64)v30, 0LL);
  }
  return (unsigned int)v16;
}

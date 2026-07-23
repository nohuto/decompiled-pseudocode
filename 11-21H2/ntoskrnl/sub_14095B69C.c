/*
 * XREFs of sub_14095B69C @ 0x14095B69C
 * Callers:
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 *     sub_14095B624 @ 0x14095B624 (sub_14095B624.c)
 *     sub_14095B658 @ 0x14095B658 (sub_14095B658.c)
 *     sub_14095BD0C @ 0x14095BD0C (sub_14095BD0C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407734D8 @ 0x1407734D8 (sub_1407734D8.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_1409C78B8 @ 0x1409C78B8 (sub_1409C78B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14095B69C(__int64 a1, int a2, char a3)
{
  void *v4; // r12
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // r14d
  __int64 i; // rdx
  __int64 Pool2; // rax
  void *v14; // r13
  int v15; // eax
  __int16 v16; // ax
  __int64 v17; // rax
  void *v18; // r15
  int v19; // eax
  __int16 v20; // ax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  __int16 v24; // ax
  __int64 v25; // rdx
  __int64 j; // rdx
  __int64 v27; // rax
  void *v28; // rsi
  int v29; // eax
  __int64 v30; // rax
  _WORD *v31; // rdi
  int k; // eax
  __int64 v33; // rax
  int v34; // eax
  const WCHAR *v35; // rdx
  int v37; // [rsp+68h] [rbp-69h] BYREF
  unsigned int v38; // [rsp+6Ch] [rbp-65h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-61h] BYREF
  unsigned int v40; // [rsp+74h] [rbp-5Dh] BYREF
  char v41; // [rsp+78h] [rbp-59h]
  unsigned int v42; // [rsp+7Ch] [rbp-55h] BYREF
  unsigned int v43; // [rsp+80h] [rbp-51h] BYREF
  int v44; // [rsp+84h] [rbp-4Dh] BYREF
  const WCHAR *v45; // [rsp+88h] [rbp-49h] BYREF
  __int64 v46; // [rsp+90h] [rbp-41h]
  __int128 v47; // [rsp+98h] [rbp-39h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-19h] BYREF
  int v50; // [rsp+C8h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-1h] BYREF
  UNICODE_STRING v52; // [rsp+E0h] [rbp+Fh] BYREF
  __int128 v53; // [rsp+F0h] [rbp+1Fh] BYREF

  v41 = a3;
  v46 = a1;
  v40 = 0;
  v45 = 0LL;
  v43 = 0;
  v4 = 0LL;
  v38 = 0;
  v39 = 0;
  v44 = 0;
  v37 = 0;
  v52 = 0LL;
  v53 = 0LL;
  DestinationString = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                return (unsigned int)-1073741823;
              v11 = 6;
            }
            else
            {
              v11 = 5;
            }
          }
          else
          {
            v11 = 4;
          }
        }
        else
        {
          v11 = 3;
        }
      }
      else
      {
        v11 = 2;
      }
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  v42 = 512;
  for ( i = 512LL; ; i = v42 )
  {
    Pool2 = ExAllocatePool2(256LL, i, 538996816LL);
    v14 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v15 = sub_14077DA5C(
            *(__int64 *)&qword_140D00AC0,
            *(_QWORD *)(a1 + 8),
            1,
            0,
            0LL,
            (__int64)&qword_140010A30,
            (__int64)&v37,
            Pool2,
            v42,
            (__int64)&v42,
            0);
    if ( v15 != -1073741789 )
      break;
    ExFreePoolWithTag(v14, 0);
  }
  if ( v15 >= 0 && v37 == 8210 )
  {
    v16 = v42;
  }
  else
  {
    ExFreePoolWithTag(v14, 0);
    v16 = 0;
    v14 = 0LL;
    v42 = 0;
  }
  LOWORD(v49) = v16;
  WORD1(v49) = v16;
  *((_QWORD *)&v49 + 1) = v14;
  v38 = 512;
  v17 = ExAllocatePool2(256LL, 512LL, 538996816LL);
  v18 = (void *)v17;
  if ( v17 )
  {
    while ( 1 )
    {
      v19 = sub_14077DA5C(
              *(__int64 *)&qword_140D00AC0,
              *(_QWORD *)(a1 + 8),
              1,
              0,
              0LL,
              (__int64)&qword_1400109E8,
              (__int64)&v37,
              v17,
              v38,
              (__int64)&v38,
              0);
      if ( v19 != -1073741789 )
        break;
      ExFreePoolWithTag(v18, 0);
      v17 = ExAllocatePool2(256LL, v38, 538996816LL);
      v18 = (void *)v17;
      if ( !v17 )
        goto LABEL_26;
    }
    if ( v19 >= 0 && v37 == 8210 )
    {
      v20 = v38;
    }
    else
    {
      ExFreePoolWithTag(v18, 0);
      v20 = 0;
      v18 = 0LL;
      v38 = 0;
    }
    v21 = 64LL;
    LOWORD(v48) = v20;
    v39 = 64;
    WORD1(v48) = v20;
    *((_QWORD *)&v48 + 1) = v18;
    while ( 1 )
    {
      v22 = ExAllocatePool2(256LL, v21, 538996816LL);
      v4 = (void *)v22;
      if ( !v22 )
        break;
      v23 = sub_14077DA5C(
              *(__int64 *)&qword_140D00AC0,
              *(_QWORD *)(a1 + 8),
              1,
              0,
              0LL,
              (__int64)qword_1400182A0,
              (__int64)&v37,
              v22,
              v39,
              (__int64)&v39,
              0);
      if ( v23 != -1073741789 )
      {
        if ( v23 >= 0 && v37 == 18 )
        {
          v24 = v39;
        }
        else
        {
          ExFreePoolWithTag(v4, 0);
          v24 = 0;
          v4 = 0LL;
          v39 = 0;
        }
        v25 = *(_QWORD *)(a1 + 8);
        LOWORD(v47) = v24;
        WORD1(v47) = v24;
        v44 = 16;
        *((_QWORD *)&v47 + 1) = v4;
        if ( (int)sub_14077DA5C(
                    *(__int64 *)&qword_140D00AC0,
                    v25,
                    1,
                    0,
                    0LL,
                    (__int64)&stru_140010A18,
                    (__int64)&v37,
                    (__int64)&v53,
                    16,
                    (__int64)&v44,
                    0) < 0
          || v37 != 13
          || v44 != 16 )
        {
          v53 = 0LL;
        }
        v43 = 32;
        for ( j = 32LL; ; j = v43 )
        {
          v27 = ExAllocatePool2(256LL, j, 538996816LL);
          v28 = (void *)v27;
          if ( !v27 )
            goto LABEL_35;
          v29 = sub_14077DA5C(
                  *(__int64 *)&qword_140D00AC0,
                  *(_QWORD *)(a1 + 8),
                  1,
                  0,
                  0LL,
                  (__int64)qword_140017560,
                  (__int64)&v37,
                  v27,
                  v43,
                  (__int64)&v43,
                  0);
          if ( v29 != -1073741789 )
            break;
          ExFreePoolWithTag(v28, 0);
        }
        if ( v29 < 0 || v37 != 18 )
        {
          ExFreePoolWithTag(v28, 0);
          v28 = 0LL;
          v43 = 0;
        }
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v28);
        v40 = 32;
        v30 = ExAllocatePool2(256LL, 32LL, 538996816LL);
        v31 = (_WORD *)v30;
        if ( !v30 )
        {
LABEL_54:
          v10 = -1073741670;
LABEL_70:
          if ( v28 )
            ExFreePoolWithTag(v28, 0);
          goto LABEL_72;
        }
        for ( k = sub_14077DA5C(
                    *(__int64 *)&qword_140D00AC0,
                    *(_QWORD *)(a1 + 8),
                    1,
                    0,
                    0LL,
                    (__int64)&qword_14000DF78,
                    (__int64)&v37,
                    v30,
                    v40,
                    (__int64)&v40,
                    0);
              ;
              k = sub_14077DA5C(
                    *(__int64 *)&qword_140D00AC0,
                    *(_QWORD *)(v46 + 8),
                    1,
                    0,
                    0LL,
                    (__int64)&qword_14000DF78,
                    (__int64)&v37,
                    v33,
                    v40,
                    (__int64)&v40,
                    0) )
        {
          v10 = k;
          if ( k != -1073741789 )
            break;
          ExFreePoolWithTag(v31, 0);
          v33 = ExAllocatePool2(256LL, v40, 538996816LL);
          v31 = (_WORD *)v33;
          if ( !v33 )
            goto LABEL_54;
        }
        if ( k < 0 )
          goto LABEL_67;
        if ( v37 == 25 )
        {
          v34 = sub_1407734D8(v31, v40, &v45, &v50);
          v37 = 18;
          v35 = v31;
          if ( v34 )
            v35 = v45;
          goto LABEL_68;
        }
        if ( v37 == 18 )
        {
          v35 = v31;
        }
        else
        {
LABEL_67:
          v10 = 0;
          ExFreePoolWithTag(v31, 0);
          v40 = 0;
          v31 = 0LL;
          v35 = 0LL;
        }
LABEL_68:
        RtlInitUnicodeString(&v52, v35);
        sub_1409C78B8(
          v46,
          (unsigned int)&v52,
          (unsigned int)&v49,
          (unsigned int)&v48,
          (__int64)&v47,
          (__int64)&v53,
          (__int64)&DestinationString,
          v11,
          v41);
        if ( v31 )
          ExFreePoolWithTag(v31, 0);
        goto LABEL_70;
      }
      ExFreePoolWithTag(v4, 0);
      v21 = v39;
    }
LABEL_35:
    v10 = -1073741670;
LABEL_72:
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
  else
  {
LABEL_26:
    v10 = -1073741670;
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v10;
}

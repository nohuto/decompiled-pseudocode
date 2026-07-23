/*
 * XREFs of sub_140914324 @ 0x140914324
 * Callers:
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140225E68 @ 0x140225E68 (sub_140225E68.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14053F0D4 @ 0x14053F0D4 (sub_14053F0D4.c)
 *     sub_14065B900 @ 0x14065B900 (sub_14065B900.c)
 *     sub_14067E828 @ 0x14067E828 (sub_14067E828.c)
 *     sub_14069F024 @ 0x14069F024 (sub_14069F024.c)
 *     sub_14069F1F4 @ 0x14069F1F4 (sub_14069F1F4.c)
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_140721B68 @ 0x140721B68 (sub_140721B68.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C3490 @ 0x1407C3490 (sub_1407C3490.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140920D44 @ 0x140920D44 (sub_140920D44.c)
 *     sub_140920E78 @ 0x140920E78 (sub_140920E78.c)
 *     sub_140920F1C @ 0x140920F1C (sub_140920F1C.c)
 *     sub_140921018 @ 0x140921018 (sub_140921018.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 */

__int64 __fastcall sub_140914324(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        PPRIVILEGE_SET *a7,
        char a8)
{
  __int64 v11; // r13
  _DWORD *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PPRIVILEGE_SET v16; // rbx
  int v17; // edi
  __int16 v18; // dx
  __int16 v19; // dx
  char v20; // r8
  _DWORD *v21; // r9
  __int16 v22; // r10
  int v23; // esi
  int v24; // r9d
  int v25; // eax
  __int64 v26; // rcx
  ULONG_PTR v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v35; // [rsp+40h] [rbp-C0h]
  PPRIVILEGE_SET v36[2]; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  PPRIVILEGE_SET v42; // [rsp+80h] [rbp-80h]
  __int128 v43; // [rsp+88h] [rbp-78h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+98h] [rbp-68h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  _LIST_ENTRY ListHead; // [rsp+B8h] [rbp-48h] BYREF
  PPRIVILEGE_SET *v48; // [rsp+C8h] [rbp-38h]
  __int16 v49[176]; // [rsp+D0h] [rbp-30h] BYREF

  v40 = a3;
  v45 = a6;
  v48 = a7;
  v46 = a4;
  memset(v49, 0, sizeof(v49));
  v39 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v38 = 0LL;
  v43 = 0LL;
  WORD1(v43) = -1;
  ListHead = 0LL;
  v35 = 0;
  *(_OWORD *)Privileges = 0LL;
  sub_14069F1F4((char *)v49);
  v11 = 0LL;
  v12 = 0LL;
  sub_1407C97FC(&v39);
  v41 = 0LL;
  sub_1407C97FC(&v38);
  v42 = 0LL;
  InitializeListHead(&ListHead);
  v16 = *a7;
  *a7 = 0LL;
  v36[0] = v16;
  if ( a3 == 2 )
    sub_14071B6EC();
  else
    sub_140AB4370(v14, v13, v15);
  v17 = sub_1407C05F4((__int64)&v43, *(_QWORD *)(a1 + 8));
  if ( v17 >= 0 )
  {
    sub_140721B68((__int64)&v43);
    v35 = 1;
    v17 = sub_140AB43C0(a1, 0LL);
    if ( v17 >= 0 )
    {
      v18 = WORD1(v43);
      if ( SWORD1(v43) <= 0 )
        goto LABEL_33;
      do
      {
        v11 = sub_140721CE0((__int64)&v43, v18);
        if ( *(_DWORD *)(v11 + 40) != -1 )
          v20 = 1;
        v18 = v22 + v19;
      }
      while ( v18 > 0 );
      v12 = v21;
      if ( v20 )
      {
        if ( v16
          || (v16 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), 0LL), (v36[0] = v16) != 0LL) )
        {
          if ( (unsigned int)sub_140921018(&v43, v16) == -1073741735 || v16->Control > a2 )
          {
            v42 = v16;
            v16 = 0LL;
            v36[0] = 0LL;
          }
        }
        v17 = sub_140920F1C(v49, &v43, a1, v16);
        if ( v17 >= 0 )
        {
          if ( v16 )
          {
            LODWORD(v12) = v16->Control;
            v42 = v16;
            v16 = 0LL;
            v36[0] = 0LL;
          }
          v17 = sub_14065B900(v49);
          if ( v17 < 0 )
          {
            v12 = 0LL;
          }
          else
          {
            v23 = (int)v12;
            if ( (unsigned int)v12 >= a2 )
            {
LABEL_26:
              v25 = sub_140920D44((unsigned int)&v43, (unsigned int)v49, v23, 0, (__int64)v36);
              v16 = v36[0];
              if ( v25 >= 0 )
                v16 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), (__int64)v36[0]);
              v17 = sub_140225E68(&v49[4], v40, v46, a5, v45);
              v12 = 0LL;
              if ( v17 >= 0 )
                v17 = 0;
            }
            else
            {
              while ( !sub_14053F0D4() || (unsigned int)(v23 - (_DWORD)v12) < 0xA || !a8 )
              {
                v17 = sub_14065B900(v49);
                if ( v17 < 0 )
                {
                  v12 = 0LL;
                  goto LABEL_36;
                }
                if ( ++v23 >= a2 )
                  goto LABEL_26;
              }
              LOBYTE(v24) = 1;
              v17 = sub_140920D44((unsigned int)&v43, (unsigned int)v49, v23, v24, (__int64)v36);
              v12 = 0LL;
              if ( v17 < 0 )
              {
                v16 = v36[0];
              }
              else
              {
                v16 = 0LL;
                v17 = -1073741267;
                *v48 = v36[0];
              }
            }
          }
        }
      }
      else
      {
LABEL_33:
        v11 = *((_QWORD *)&v43 + 1);
        v12 = (_DWORD *)sub_14067E828(*((__int64 *)&v43 + 1), (__int64)&v39, 0);
        v17 = sub_1406BF278(*(_QWORD *)(v11 + 32), v12, a2, &BugCheckParameter4);
        if ( v17 >= 0 )
        {
          if ( (_DWORD)BugCheckParameter4 == -1 )
          {
            v17 = -2147483622;
          }
          else
          {
            v27 = *(_QWORD *)(v11 + 32);
            if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
              v28 = sub_1406BF400(v27, (unsigned int)BugCheckParameter4, &v38);
            else
              v28 = sub_1407C9820(v27, BugCheckParameter4, (unsigned int *)&v38);
            v41 = v28;
            v17 = sub_1407C3490(*(_QWORD *)(v11 + 32), v28, a3, v46, a5, (unsigned int *)v45, 0LL, 0LL);
            if ( v17 >= 0 )
              v17 = 0;
          }
        }
      }
    }
  }
LABEL_36:
  sub_14069F024((__int64)v49);
  if ( v41 )
  {
    v26 = *(_QWORD *)(v11 + 32);
    if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
      sub_1406BF450(v26, &v38);
    else
      sub_1407C97C0(v26, (unsigned int *)&v38);
  }
  if ( v12 )
  {
    v29 = *(_QWORD *)(v11 + 32);
    if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
      sub_1406BF450(v29, &v39);
    else
      sub_1407C97C0(v29, (unsigned int *)&v39);
  }
  if ( v35 )
    sub_140721BAC((__int64)&v43);
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  if ( v16 )
    sub_140920E78(v16);
  if ( v42 )
    sub_140920E78(v42);
  sub_140346C60(&ListHead);
  sub_140AB4260(v31, v30, v32, v33);
  return (unsigned int)v17;
}

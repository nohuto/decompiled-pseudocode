/*
 * XREFs of sub_1407743C8 @ 0x1407743C8
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_140859618 @ 0x140859618 (sub_140859618.c)
 * Callees:
 *     sub_140259BE4 @ 0x140259BE4 (sub_140259BE4.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D30A0 @ 0x1402D30A0 (sub_1402D30A0.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BCE90 @ 0x1406BCE90 (sub_1406BCE90.c)
 *     sub_1406E636C @ 0x1406E636C (sub_1406E636C.c)
 *     sub_1406E7CD4 @ 0x1406E7CD4 (sub_1406E7CD4.c)
 *     sub_140748300 @ 0x140748300 (sub_140748300.c)
 *     sub_140749DA0 @ 0x140749DA0 (sub_140749DA0.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_140766914 @ 0x140766914 (sub_140766914.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 *     sub_14077386C @ 0x14077386C (sub_14077386C.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_140789460 @ 0x140789460 (sub_140789460.c)
 *     sub_1408605C8 @ 0x1408605C8 (sub_1408605C8.c)
 *     sub_140934EA4 @ 0x140934EA4 (sub_140934EA4.c)
 *     sub_140946FEC @ 0x140946FEC (sub_140946FEC.c)
 *     sub_1409569F4 @ 0x1409569F4 (sub_1409569F4.c)
 *     sub_14095B48C @ 0x14095B48C (sub_14095B48C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407743C8(__int64 BugCheckParameter2, __int64 a2)
{
  char v4; // r12
  char v5; // r13
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ecx
  __int64 *v16; // rsi
  __int64 v17; // rdi
  PVOID v18; // r15
  int v20; // eax
  PVOID *v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // r14
  unsigned __int8 i; // bl
  __int64 v29; // r15
  __int64 *v30; // rsi
  BOOL v31; // r9d
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  PVOID v37; // rsi
  int v38; // eax
  const WNF_STATE_NAME *v39; // rbx
  unsigned int v40; // esi
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rdx
  void *Pool2; // rbx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rdx
  int v48; // r11d
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rdx
  unsigned int v52; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v53; // [rsp+64h] [rbp-9Ch] BYREF
  char v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+6Ch] [rbp-94h] BYREF
  int v56; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v58; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v59; // [rsp+84h] [rbp-7Ch] BYREF
  int v60; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v62; // [rsp+98h] [rbp-68h] BYREF
  LOGICAL v63; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h]
  PVOID v65; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v69; // [rsp+D8h] [rbp-28h]
  __int64 v70[8]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+120h] [rbp+20h] BYREF

  v54 = 0;
  v62 = 0LL;
  v55 = 0;
  v58 = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  v59 = 0;
  v67 = 0LL;
  v52 = 0;
  v56 = 0;
  v63 = 0;
  memset(v70, 0, sizeof(v70));
  v6 = 6LL;
  DestinationString = 0LL;
  v69 = 6LL;
  v53 = 0;
  v68 = 0LL;
  v60 = 0;
  SourceString[0] = 0;
  P = 0LL;
  Object = 0LL;
  v65 = 0LL;
  if ( !*(_BYTE *)(BugCheckParameter2 + 688) || *(_BYTE *)(a2 + 4) )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 48);
    *(_BYTE *)(BugCheckParameter2 + 688) = 0;
    v7 = sub_14077F2EC(qword_140D00AC0, v8, 16, 0, 131097, 0, (__int64)&Handle, 0LL);
    if ( v7 < 0 )
      goto LABEL_34;
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 48LL) & 0x2000000) != 0
      && ((int)sub_14077DA5C(
                 qword_140D00AC0,
                 *(_QWORD *)(BugCheckParameter2 + 48),
                 1,
                 (_DWORD)Handle,
                 0LL,
                 (__int64)qword_14000E520,
                 (__int64)&v60,
                 (__int64)&v58,
                 4,
                 (__int64)&v53,
                 0) < 0
       || v60 != 7
       || v53 != 4
       || !v58) )
    {
      v41 = 53;
LABEL_116:
      v42 = 0;
      goto LABEL_117;
    }
    if ( *(_DWORD *)(BugCheckParameter2 + 660) == -1 )
    {
      if ( qword_140C54EC0
        && (int)sub_14077DA5C(
                  qword_140D00AC0,
                  *(_QWORD *)(BugCheckParameter2 + 48),
                  1,
                  (_DWORD)Handle,
                  0LL,
                  (__int64)qword_14000E168,
                  (__int64)&v60,
                  (__int64)&v58,
                  4,
                  (__int64)&v53,
                  0) >= 0
        && v58 <= 0xFF
        && (int)sub_14042A5E0(v58, &v59) >= 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 660) = v59;
      }
      v22 = *(_DWORD *)(BugCheckParameter2 + 660);
      if ( v22 == -1 )
      {
        v23 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( !v23 )
        {
          *(_DWORD *)(BugCheckParameter2 + 660) = -2;
          goto LABEL_7;
        }
        v22 = *(_DWORD *)(v23 + 660);
        *(_DWORD *)(BugCheckParameter2 + 660) = v22;
      }
      if ( v22 != -2 )
      {
        v43 = *(_QWORD *)(BugCheckParameter2 + 48);
        v58 = v22;
        sub_14077198C(
          *(__int64 *)&qword_140D00AC0,
          v43,
          1,
          (__int64)Handle,
          0LL,
          (__int64)qword_14003B898,
          7,
          (__int64)&v58,
          4u,
          0);
      }
    }
LABEL_7:
    v9 = sub_14077DA5C(
           qword_140D00AC0,
           *(_QWORD *)(BugCheckParameter2 + 48),
           1,
           (_DWORD)Handle,
           0LL,
           (__int64)qword_140010AA0,
           (__int64)&v60,
           (__int64)&v67,
           8,
           (__int64)&v53,
           0);
    if ( ((int)(v9 + 0x80000000) < 0 || v9 == -1073741789) && (int)sub_140946FEC(&v68) >= 0 )
    {
      if ( v9 != -1073741789 && v60 == 16 && v53 == 8 && !byte_140C097C4 && v68 == v67 )
        goto LABEL_33;
      sub_14077198C(
        *(__int64 *)&qword_140D00AC0,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        (__int64)Handle,
        0LL,
        (__int64)qword_140010AA0,
        0,
        0LL,
        0,
        0);
    }
    v10 = *(_QWORD *)(BugCheckParameter2 + 48);
    v52 = 78;
    if ( (int)sub_14077CD90(
                qword_140D00AC0,
                v10,
                (_DWORD)Handle,
                9,
                (__int64)&v56,
                (__int64)SourceString,
                (__int64)&v52,
                0) < 0
      || v56 != 1
      || !v52 )
    {
LABEL_14:
      v13 = *(_QWORD *)(BugCheckParameter2 + 48);
      v52 = 4;
      if ( (int)sub_14077CD90(qword_140D00AC0, v13, (_DWORD)Handle, 11, (__int64)&v56, (__int64)&v55, (__int64)&v52, 0) < 0
        || v56 != 4
        || v52 != 4 )
      {
        v55 = 0;
      }
      v70[0] = BugCheckParameter2;
      v7 = 0;
      v70[1] = a2;
      v52 = 512;
      P = (PVOID)ExAllocatePool2(256LL, 512LL, 1852141648LL);
      if ( !P )
      {
        v7 = -1073741670;
        goto LABEL_29;
      }
      if ( (v55 & 0x80000) == 0 )
        goto LABEL_19;
      if ( v62 )
      {
        v36 = sub_14077386C(&P, &v52, 0, (__int64)qword_14000ED38, (__int64)SourceString, (__int64)v62, 1, 0, v4, v70);
        v7 = v36;
        if ( v36 != -1073741275 && v36 != -1073741772 && v36 < 0 )
        {
LABEL_29:
          v15 = *(_DWORD *)(BugCheckParameter2 + 396);
          if ( (v15 & 0x1000) != 0 )
          {
LABEL_89:
            v7 = 0;
            goto LABEL_34;
          }
          if ( v7 >= 0 )
          {
            if ( *(_QWORD *)(v70[5] + 8) )
            {
              sub_140765114(BugCheckParameter2, 19, -1073741438);
              goto LABEL_33;
            }
          }
          else
          {
            if ( v7 != -1073741772 )
              goto LABEL_34;
            if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100) == 0 )
            {
LABEL_33:
              v7 = -1073741823;
              goto LABEL_34;
            }
            sub_140764FE4(BugCheckParameter2);
            v15 = *(_DWORD *)(BugCheckParameter2 + 396);
            v5 = 1;
          }
          if ( (v15 & 0x20000000) == 0 )
          {
            v25 = sub_14077386C(
                    &P,
                    &v52,
                    18,
                    (__int64)&qword_14000FC88,
                    *(_QWORD *)(BugCheckParameter2 + 48),
                    (__int64)Handle,
                    0,
                    4,
                    v4,
                    v70);
            v7 = v25;
            if ( v25 == -1073741275 || v25 == -1073741772 )
            {
              sub_14076FB70(BugCheckParameter2, 0x20000000);
            }
            else if ( v25 < 0 )
            {
              goto LABEL_34;
            }
          }
          if ( v62 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
          {
            v26 = sub_14077386C(
                    &P,
                    &v52,
                    18,
                    (__int64)&qword_14000EA28,
                    (__int64)SourceString,
                    (__int64)v62,
                    1,
                    5,
                    v4,
                    v70);
            v7 = v26;
            if ( v26 == -1073741275 || v26 == -1073741772 )
            {
              sub_14076FB70(BugCheckParameter2, 0x40000000);
            }
            else if ( v26 < 0 )
            {
              goto LABEL_34;
            }
          }
          v7 = sub_1406E7CD4(v70, (__int64)Handle);
          if ( v7 >= 0 )
          {
            v27 = 0LL;
            Object = sub_1402D30A0(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 32), 0x65706E50u);
            for ( i = 0; i < 6u; ++i )
            {
              if ( i == 3 )
              {
                v65 = sub_1402D30A0(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 32), 0x65706E50u);
                if ( v5 )
                {
                  if ( !v70[5] )
                    sub_1402DE844(BugCheckParameter2, 773);
                }
              }
              v29 = v70[i + 2];
              v30 = (__int64 *)v29;
              if ( v29 )
              {
                do
                {
                  v35 = sub_140749DA0(BugCheckParameter2, *v30, *(_QWORD *)(*(_QWORD *)(*v30 + 48) + 8LL), i);
                  *(_DWORD *)(*v30 + 16) |= 0x400u;
                  if ( v35 < 0 )
                  {
                    if ( i == 3 )
                    {
                      sub_140259BE4(*(_QWORD *)(BugCheckParameter2 + 32), *((_QWORD *)Object + 3), v27, 0);
                      v42 = v48;
                      *(_DWORD *)(BugCheckParameter2 + 392) = v48;
                      v41 = 31;
                      goto LABEL_117;
                    }
                  }
                  else
                  {
                    if ( i == 3 )
                      v27 = *((_QWORD *)v65 + 3);
                    sub_1402DE844(BugCheckParameter2, 773);
                  }
                  v30 = (__int64 *)v30[1];
                }
                while ( v30 );
              }
              if ( !i )
              {
                if ( v29 )
                {
                  v49 = *(_QWORD *)(BugCheckParameter2 + 48);
                  v53 = 4;
                  v50 = sub_14077CD90(
                          qword_140D00AC0,
                          v49,
                          (_DWORD)Handle,
                          11,
                          (__int64)&v56,
                          (__int64)&v55,
                          (__int64)&v53,
                          0);
                  if ( v50 >= 0 && v56 == 4 && v53 == 4 && (v55 & 0x80000) != 0 )
                  {
                    v51 = *(_QWORD *)(BugCheckParameter2 + 48);
                    v55 &= ~0x80000u;
                    sub_14076FE20(*(__int64 *)&qword_140D00AC0, v51, (__int64)Handle, 0xBu, 4u, (__int64)&v55, 4u, 0);
                  }
                }
              }
            }
            v31 = !v27 || v5;
            sub_140259BE4(*(_QWORD *)(BugCheckParameter2 + 32), *((_QWORD *)Object + 3), v27, v31);
            v32 = sub_1406BCE90(
                    *(_QWORD *)(BugCheckParameter2 + 32),
                    (ACL *)Handle,
                    (__int64)SourceString,
                    (__int64)v62,
                    v5);
            if ( v32 < 0 )
            {
              v42 = v32;
              v41 = 50;
LABEL_117:
              sub_140765430(BugCheckParameter2, 0, v41, v42);
              v7 = -1073741106;
              goto LABEL_34;
            }
            if ( (int)sub_1406E636C(
                        *(_QWORD *)(BugCheckParameter2 + 32),
                        v33,
                        (_DWORD *)(BugCheckParameter2 + 448),
                        (_DWORD *)(BugCheckParameter2 + 452)) >= 0 )
            {
              sub_1408605C8(
                BugCheckParameter2,
                *(unsigned int *)(BugCheckParameter2 + 448),
                *(unsigned int *)(BugCheckParameter2 + 452));
            }
            else
            {
              *(_DWORD *)(BugCheckParameter2 + 448) = -1;
              *(_DWORD *)(BugCheckParameter2 + 452) = -16;
            }
            sub_140772044(v34, *(_QWORD *)(BugCheckParameter2 + 48), 23);
            if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) == 0
              || (v7 = sub_14095B48C(BugCheckParameter2), v7 >= 0) )
            {
              if ( dword_140C44634 && *(_QWORD *)(BugCheckParameter2 + 720) )
              {
                v7 = sub_1409569F4(BugCheckParameter2);
                goto LABEL_34;
              }
              goto LABEL_89;
            }
          }
LABEL_34:
          v6 = 6LL;
          goto LABEL_35;
        }
        while ( 1 )
        {
          v37 = P;
          v38 = sub_14077DA5C(
                  qword_140D00AC0,
                  (unsigned int)SourceString,
                  2,
                  (_DWORD)v62,
                  0LL,
                  (__int64)&dword_14000ED20,
                  (__int64)&v63,
                  (__int64)P,
                  v52,
                  (__int64)&v53,
                  0);
          if ( v38 != -1073741789 )
            break;
          if ( v53 <= v52 )
          {
            v7 = -1073741823;
            goto LABEL_29;
          }
          ExFreePoolWithTag(v37, 0);
          v52 = v53;
          P = (PVOID)ExAllocatePool2(256LL, v53, 1852141648LL);
          if ( !P )
          {
            v7 = -1073741670;
            goto LABEL_160;
          }
        }
        v7 = v38;
        if ( v38 < 0 )
        {
          if ( v38 == -1073741772 || v38 == -1073741275 )
            v7 = 0;
LABEL_160:
          if ( v7 < 0 )
            goto LABEL_29;
        }
        else if ( v63 == 4099 && (v53 & 7) == 0 && v53 )
        {
          v39 = (const WNF_STATE_NAME *)P;
          v40 = v53 >> 3;
          do
          {
            ZwUpdateWnfStateData(v39++, 0LL, 0, 0LL, 0LL, 0, 0);
            --v40;
          }
          while ( v40 );
          v41 = 56;
          goto LABEL_116;
        }
      }
      if ( !v70[2] )
      {
        v46 = *(_QWORD *)(BugCheckParameter2 + 48);
        v53 = 4;
        if ( (int)sub_14077CD90(
                    qword_140D00AC0,
                    v46,
                    (_DWORD)Handle,
                    11,
                    (__int64)&v56,
                    (__int64)&v55,
                    (__int64)&v53,
                    0) >= 0
          && v56 == 4
          && v53 == 4
          && (v55 & 0x80000) != 0 )
        {
          v47 = *(_QWORD *)(BugCheckParameter2 + 48);
          v55 &= ~0x80000u;
          sub_14076FE20(*(__int64 *)&qword_140D00AC0, v47, (__int64)Handle, 0xBu, 4u, (__int64)&v55, 4u, 0);
        }
      }
LABEL_19:
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x4000000) == 0
        && ((v24 = sub_14077386C(
                     &P,
                     &v52,
                     19,
                     (__int64)&qword_14000E008,
                     *(_QWORD *)(BugCheckParameter2 + 48),
                     (__int64)Handle,
                     0,
                     1,
                     v4,
                     v70),
             v7 = v24,
             v24 == -1073741275)
         || v24 == -1073741772) )
      {
        sub_14076FB70(BugCheckParameter2, 0x4000000);
      }
      else if ( v7 < 0 )
      {
        goto LABEL_29;
      }
      if ( v62 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
      {
        v14 = sub_14077386C(&P, &v52, 19, (__int64)&qword_14000EA10, (__int64)SourceString, (__int64)v62, 1, 2, v4, v70);
        v7 = v14;
        if ( v14 == -1073741275 || v14 == -1073741772 )
        {
          sub_14076FB70(BugCheckParameter2, 0x8000000);
        }
        else if ( v14 < 0 )
        {
          goto LABEL_29;
        }
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x10000000) != 0 )
      {
        v7 = -1073741772;
      }
      else
      {
        v20 = sub_14077386C(&P, &v52, 5, 0LL, *(_QWORD *)(BugCheckParameter2 + 48), (__int64)Handle, 0, 3, v4, v70);
        v7 = v20;
        if ( v20 == -1073741275 || v20 == -1073741772 )
        {
          v7 = -1073741772;
          sub_14076FB70(BugCheckParameter2, 0x10000000);
        }
      }
      goto LABEL_29;
    }
    RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( !(_DWORD)InitSafeBootMode )
    {
LABEL_13:
      sub_140789460(qword_140D00AC0, (unsigned int)SourceString, v11, v12, 131097, 0, (__int64)&v62, 0LL);
      goto LABEL_14;
    }
    if ( (unsigned __int8)sub_140934EA4(&DestinationString) )
    {
      v4 = v54;
      goto LABEL_13;
    }
    v52 = 256;
    Pool2 = (void *)ExAllocatePool2(256LL, 256LL, 1852141648LL);
    if ( Pool2 )
    {
      v45 = sub_14077CD90(
              qword_140D00AC0,
              *(_QWORD *)(BugCheckParameter2 + 48),
              (_DWORD)Handle,
              1,
              (__int64)&v56,
              (__int64)Pool2,
              (__int64)&v52,
              0);
      if ( v45 == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(256LL, v52, 1852141648LL);
      }
      else if ( v45 >= 0 )
      {
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
        sub_140748300(&DestinationString, 0);
        goto LABEL_145;
      }
    }
    sub_140748300(&DestinationString, 0);
    if ( !Pool2 )
      goto LABEL_33;
LABEL_145:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_33;
  }
  v7 = -1073741823;
LABEL_35:
  v16 = &v70[2];
  do
  {
    v17 = *v16;
    if ( *v16 )
    {
      do
      {
        v21 = (PVOID *)v17;
        v17 = *(_QWORD *)(v17 + 8);
        if ( byte_140C4629A )
          sub_140766914(*v21);
        ObfDereferenceObject(*v21);
        ExFreePoolWithTag(v21, 0);
      }
      while ( v17 );
      v6 = v69;
    }
    ++v16;
    v69 = --v6;
  }
  while ( v6 );
  v18 = Object;
  if ( Handle )
    ZwClose(Handle);
  if ( v62 )
    ZwClose(v62);
  if ( v18 )
    ObfDereferenceObjectWithTag(v18, 0x65706E50u);
  if ( v65 )
    ObfDereferenceObjectWithTag(v65, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v7;
}

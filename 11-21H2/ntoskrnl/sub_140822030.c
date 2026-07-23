/*
 * XREFs of sub_140822030 @ 0x140822030
 * Callers:
 *     sub_1408226C0 @ 0x1408226C0 (sub_1408226C0.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     sub_140853230 @ 0x140853230 (sub_140853230.c)
 *     sub_140856A54 @ 0x140856A54 (sub_140856A54.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140822030(
        __int64 a1,
        __int64 a2,
        UNICODE_STRING *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        _DWORD *a10,
        __int64 a11)
{
  WCHAR *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  wchar_t *Pool2; // r14
  __int64 v19; // rax
  int v20; // ebx
  HANDLE v21; // rax
  _DWORD *v22; // r12
  _DWORD *v23; // r13
  _DWORD *v24; // r15
  PVOID *v25; // rdi
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r13
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  const WCHAR *v35; // rdx
  __int64 v36; // r8
  __int128 *v37; // rcx
  __int64 v38; // rdx
  wchar_t *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  __int16 v42; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v43; // [rsp+38h] [rbp-C8h]
  _DWORD *v44; // [rsp+40h] [rbp-C0h]
  _DWORD *v45; // [rsp+48h] [rbp-B8h]
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int128 v51; // [rsp+70h] [rbp-90h] BYREF
  __int128 v52; // [rsp+80h] [rbp-80h] BYREF
  __int128 v53; // [rsp+90h] [rbp-70h] BYREF
  __int128 v54; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-50h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-18h] BYREF
  __int64 *v58; // [rsp+F8h] [rbp-8h]
  __int64 v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  __int64 v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  _DWORD v63[2]; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING *v64; // [rsp+128h] [rbp+28h]
  int v65; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING *v66; // [rsp+138h] [rbp+38h]
  int v67; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING *v68; // [rsp+148h] [rbp+48h]
  int v69; // [rsp+150h] [rbp+50h] BYREF
  int *v70; // [rsp+158h] [rbp+58h]
  int v71; // [rsp+160h] [rbp+60h] BYREF
  int *v72; // [rsp+168h] [rbp+68h]
  int v73; // [rsp+170h] [rbp+70h] BYREF
  int *v74; // [rsp+178h] [rbp+78h]
  int v75; // [rsp+180h] [rbp+80h] BYREF
  __int128 *v76; // [rsp+188h] [rbp+88h]
  int v77; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING *v78; // [rsp+198h] [rbp+98h]
  int v79; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 *v80; // [rsp+1A8h] [rbp+A8h]
  _QWORD v81[148]; // [rsp+270h] [rbp+170h] BYREF

  v60 = a5;
  v43 = (_DWORD *)a6;
  v61 = a7;
  v14 = 0LL;
  v44 = (_DWORD *)a8;
  v58 = a9;
  v45 = a10;
  v62 = a11;
  v15 = -1LL;
  *(_QWORD *)&v52 = 0LL;
  DWORD2(v52) = 0;
  *(_QWORD *)&v51 = 0LL;
  DWORD2(v51) = 0;
  *(_QWORD *)&v53 = 0LL;
  DWORD2(v53) = 0;
  v16 = -1LL;
  v59 = a4;
  memset(&ObjectAttributes, 0, 44);
  v42 = 0;
  v48 = 0;
  DestinationString = 0LL;
  v46 = 0;
  v47 = 0;
  v54 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  do
    ++v16;
  while ( *(_WORD *)(a1 + 2 * v16) );
  v17 = (unsigned int)(2 * v16 + 18);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v17, 1350005829LL);
  v19 = 2LL;
  v55 = 2LL;
  if ( !Pool2 )
  {
    v20 = -1073741801;
    goto LABEL_11;
  }
  v20 = sub_1402E1280(Pool2, (unsigned int)v17, L"%ws\\Filters", a1);
  if ( !v20 )
  {
    RtlInitUnicodeString(&DestinationString, Pool2);
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v20 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
    v21 = KeyHandle;
    if ( v20 < 0 )
      v21 = 0LL;
    KeyHandle = v21;
    if ( a2 )
    {
      do
        ++v15;
      while ( *(_WORD *)(a2 + 2 * v15) );
      v39 = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)(2 * v15 + 18), 1350005829LL);
      v14 = v39;
      if ( !v39 )
      {
        v20 = -1073741801;
        goto LABEL_10;
      }
      v20 = sub_1402E1280(v39, (unsigned int)(2 * v15 + 18), L"%ws\\Filters", a2);
      if ( v20 )
        goto LABEL_10;
      RtlInitUnicodeString(&DestinationString, v14);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v20 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      v21 = KeyHandle;
    }
    if ( v21 || Handle )
    {
      memset(v81, 0, 0x498uLL);
      v26 = (__int64 *)&v54;
      v27 = 2LL;
      v52 = 0LL;
      v51 = 0LL;
      v53 = 0LL;
      do
      {
        *v26++ = ExAllocatePool2(256LL, 134LL, 1182233669LL);
        --v27;
      }
      while ( v27 );
      v22 = v45;
      *v45 = 1024;
      v28 = ExAllocatePool2(256LL, 1024LL, 1350005829LL);
      *v58 = v28;
      if ( v28 )
      {
        v64 = a3;
        v81[0] = sub_1408166C0;
        v29 = 4LL;
        LODWORD(v81[4]) = 1;
        v63[0] = 1;
        v81[3] = v63;
        v81[7] = sub_1408166C0;
        v81[2] = L"ExeFilter";
        v81[5] = &v42;
        v81[10] = &v65;
        v81[9] = L"PackageIdFilter";
        v81[12] = &v42;
        v66 = a3 + 1;
        v81[17] = &v67;
        v81[16] = L"PackageRelativeAppIdFilter";
        v81[19] = &v42;
        v68 = a3 + 2;
        v81[24] = &v69;
        v81[23] = L"EventIdFilterIn";
        v70 = &v46;
        v81[31] = &v71;
        v81[30] = L"StackWalkFilterIn";
        v72 = &v47;
        v81[38] = &v73;
        v81[37] = L"Enabled";
        v74 = &v48;
        LODWORD(v53) = *v22;
        v81[45] = &v75;
        v81[44] = L"SchematizedFilters";
        v76 = &v53;
        v81[52] = &v77;
        v81[51] = L"ContainerFilter";
        LODWORD(v81[11]) = 1;
        v65 = 1;
        v81[14] = sub_1408166C0;
        LODWORD(v81[18]) = 1;
        v67 = 1;
        v81[21] = sub_1408166C0;
        LODWORD(v81[25]) = 4;
        v69 = 4;
        v81[28] = sub_1408166C0;
        LODWORD(v81[32]) = 4;
        v71 = 4;
        v81[35] = sub_1408166C0;
        LODWORD(v81[39]) = 4;
        v73 = 4;
        *((_QWORD *)&v53 + 1) = v28;
        v81[42] = sub_1408166C0;
        LODWORD(v81[46]) = 3;
        v75 = 3;
        v81[49] = sub_1408166C0;
        LODWORD(v81[53]) = 1;
        v30 = v54;
        v81[54] = &v42;
        v78 = a3 + 3;
        v31 = 8LL;
        v77 = 1;
        if ( (_QWORD)v54 )
        {
          LODWORD(v51) = 128;
          *((_QWORD *)&v51 + 1) = v54 + 4;
          v31 = 9LL;
          v81[56] = sub_1408166C0;
          v81[59] = &v79;
          v81[58] = L"EventIds";
          v80 = &v51;
          LODWORD(v81[60]) = 3;
          v79 = 3;
        }
        v32 = *((_QWORD *)&v54 + 1);
        if ( *((_QWORD *)&v54 + 1) )
        {
          LODWORD(v52) = 128;
          v33 = 7 * v31;
          *((_QWORD *)&v52 + 1) = *((_QWORD *)&v54 + 1) + 4LL;
          v34 = 16 * v31;
          v81[v33] = sub_1408166C0;
          v81[v33 + 3] = &v63[(unsigned __int64)v34 / 4];
          v63[(unsigned __int64)v34 / 4] = 3;
          v81[v33 + 2] = L"StackWalkIds";
          (&v64)[(unsigned __int64)v34 / 8] = (UNICODE_STRING *)&v52;
          LODWORD(v81[v33 + 4]) = 3;
        }
        v20 = sub_140781F40(0x40000000, (const WCHAR *)KeyHandle, (__int64)v81, 0LL);
        if ( v20 < 0 )
          goto LABEL_10;
        v35 = (const WCHAR *)Handle;
        if ( Handle )
        {
          v81[5] = a3->Buffer;
          LODWORD(v81[6]) = a3->Length;
          v81[12] = a3[1].Buffer;
          LODWORD(v81[13]) = a3[1].Length;
          v81[19] = a3[2].Buffer;
          LODWORD(v81[20]) = a3[2].Length;
          v81[26] = &v46;
          v81[33] = &v47;
          v81[40] = &v48;
          v81[47] = *((_QWORD *)&v53 + 1);
          LODWORD(v81[48]) = v53;
          v81[54] = a3[3].Buffer;
          LODWORD(v81[55]) = a3[3].Length;
          v40 = 8LL;
          if ( v30 )
          {
            v81[61] = *((_QWORD *)&v51 + 1);
            LODWORD(v81[62]) = v51;
            v40 = 9LL;
          }
          if ( v32 )
          {
            v41 = 7 * v40;
            v81[v41 + 5] = *((_QWORD *)&v52 + 1);
            LODWORD(v81[v41 + 6]) = v52;
          }
          v20 = sub_140781F40(0x40000000, v35, (__int64)v81, 0LL);
          if ( v20 < 0 )
            v20 = 0;
        }
        if ( v30 )
        {
          *(_BYTE *)v30 = v46 != 0;
          *(_WORD *)(v30 + 2) = (unsigned int)v51 >> 1;
        }
        if ( v32 )
        {
          *(_BYTE *)v32 = v47 != 0;
          *(_WORD *)(v32 + 2) = (unsigned int)v52 >> 1;
        }
        v22 = v45;
        *v45 = v53;
        if ( v48 )
        {
          v36 = v59 - (_QWORD)&v54;
          v37 = &v54;
          v38 = 2LL;
          do
          {
            *(_QWORD *)((char *)v37 + v36) = *(_QWORD *)v37;
            *(_QWORD *)v37 = 0LL;
            v37 = (__int128 *)((char *)v37 + 8);
            --v38;
          }
          while ( v38 );
          v24 = v43;
          sub_140853230((_DWORD)Pool2, (_DWORD)v14, (unsigned int)L"EventNameFilter", v60, (__int64)v43);
          v23 = v44;
          sub_140853230((_DWORD)Pool2, (_DWORD)v14, (unsigned int)L"StackNameFilter", v61, (__int64)v44);
          sub_140856A54(Pool2, v14, v62);
          v19 = 2LL;
          goto LABEL_13;
        }
        do
        {
          RtlFreeUnicodeString(a3++);
          --v29;
        }
        while ( v29 );
        *v22 = 0;
      }
      else
      {
        v20 = -1073741801;
      }
      v19 = 2LL;
      goto LABEL_12;
    }
  }
LABEL_10:
  v19 = 2LL;
LABEL_11:
  v22 = v45;
LABEL_12:
  v23 = v44;
  v24 = v43;
LABEL_13:
  v25 = (PVOID *)&v54;
  do
  {
    if ( *v25 )
    {
      ExFreePoolWithTag(*v25, 0);
      v19 = v55;
    }
    ++v25;
    v55 = --v19;
  }
  while ( v19 );
  if ( v20 < 0 )
  {
    *v24 = 0;
    *v23 = 0;
    *v22 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
}

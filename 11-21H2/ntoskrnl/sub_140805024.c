/*
 * XREFs of sub_140805024 @ 0x140805024
 * Callers:
 *     sub_140804E80 @ 0x140804E80 (sub_140804E80.c)
 *     sub_14094E490 @ 0x14094E490 (sub_14094E490.c)
 * Callees:
 *     sub_1402D199C @ 0x1402D199C (sub_1402D199C.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067AB94 @ 0x14067AB94 (sub_14067AB94.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1406997B8 @ 0x1406997B8 (sub_1406997B8.c)
 *     sub_14069A1F8 @ 0x14069A1F8 (sub_14069A1F8.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140805024(_QWORD *a1, void *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *v5; // r13
  NTSTATUS v7; // eax
  unsigned int *v8; // r14
  int v9; // ebx
  const wchar_t **v10; // rsi
  const wchar_t *v11; // rbx
  __int64 v12; // rcx
  wchar_t **v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // eax
  NTSTATUS v17; // eax
  HANDLE v18; // rax
  __int64 v20; // rdx
  const WCHAR *v21; // rsi
  wchar_t *v22; // rax
  const wchar_t *v23; // rdi
  wchar_t *v24; // rax
  unsigned int v25; // esi
  char *v26; // r15
  const wchar_t *v27; // r12
  unsigned int v28; // r13d
  wchar_t *v29; // rax
  wchar_t *v30; // rdi
  __int64 v31; // rcx
  int v32; // esi
  int v33; // edx
  __int64 *v34; // r15
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rdx
  const wchar_t *v39; // rdi
  __int64 v40; // rax
  unsigned int MaximumLength; // ebx
  wchar_t *v42; // r12
  unsigned int v43; // r13d
  unsigned int v44; // ebx
  const wchar_t *v45; // r15
  wchar_t *v46; // rax
  wchar_t *v47; // rsi
  __int64 v48; // rax
  const wchar_t *v49; // r9
  unsigned int v50; // edi
  __int64 v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // rdi
  const wchar_t *v54; // rsi
  __int64 v55; // rax
  UNICODE_STRING v56; // xmm0
  unsigned int v57; // edx
  _WORD *v58; // rcx
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v61; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  int v64; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v65[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE v67; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Pool2; // [rsp+C8h] [rbp-38h]
  HANDLE KeyHandle; // [rsp+D0h] [rbp-30h] BYREF
  const wchar_t *v70; // [rsp+D8h] [rbp-28h]
  _QWORD *v71; // [rsp+E0h] [rbp-20h]
  _QWORD *v72; // [rsp+E8h] [rbp-18h]
  _BYTE v73[76]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v74; // [rsp+13Ch] [rbp+3Ch]

  v3 = 0;
  v72 = a3;
  *a3 = 0LL;
  v5 = a3;
  v71 = a1;
  P = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v67 = 0LL;
  v64 = 0;
  v65[0] = 0;
  DestinationString = 0LL;
  Pool2 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v7 = sub_14067B838(a2, L"KeyRoot", 0, &P);
  v8 = (unsigned int *)P;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_15;
  if ( !sub_1402D199C(P) )
    goto LABEL_22;
  v10 = (const wchar_t **)&off_140A3A530;
  v11 = (const wchar_t *)((char *)v8 + v8[2]);
  while ( wcsicmp(*v10, v11) )
  {
    ++v3;
    v10 += 4;
    if ( v3 >= 7 )
      goto LABEL_34;
  }
  v13 = &(&off_140A3A530)[4 * v3];
  if ( !v13 )
  {
LABEL_34:
    if ( wcsicmp(v11, L"SYSTEM") )
    {
      if ( wcsicmp(v11, L"SOFTWARE") )
      {
        if ( wcsicmp(v11, L"HARDWARE") )
        {
          v9 = -1073741772;
          goto LABEL_15;
        }
        v22 = L"\\Registry\\Machine\\HARDWARE";
      }
      else
      {
        v22 = L"\\Registry\\Machine\\SOFTWARE";
      }
      *(_DWORD *)&DestinationString.Length = 3538996;
    }
    else
    {
      *(_DWORD *)&DestinationString.Length = 3276848;
      v22 = L"\\Registry\\Machine\\SYSTEM";
    }
    DestinationString.Buffer = v22;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    goto LABEL_10;
  }
  v14 = *((unsigned int *)v13 + 4);
  v15 = *a1;
  if ( (_DWORD)v14 )
  {
    v16 = sub_14077F2EC(*(__int64 *)&qword_140D00AC0, *(_QWORD *)(v15 + 48), v14, 0, 131097, 0, (__int64)&Handle, 0LL);
LABEL_10:
    v9 = v16;
    if ( v16 < 0 )
      goto LABEL_15;
    goto LABEL_11;
  }
  v20 = *((unsigned int *)v13 + 3);
  if ( !(_DWORD)v20 )
  {
    v9 = -1073741595;
    goto LABEL_15;
  }
  if ( (_DWORD)v20 == 7 )
  {
    v64 = 78;
    v9 = sub_14077CD90(
           *(__int64 *)&qword_140D00AC0,
           *(_QWORD *)(v15 + 48),
           0LL,
           9,
           (__int64)v65,
           (__int64)v73,
           (__int64)&v64,
           0);
    if ( v9 < 0 )
      goto LABEL_15;
    if ( v65[0] != 1 )
      goto LABEL_22;
    v20 = *((unsigned int *)v13 + 3);
    v74 = 0;
    v21 = (const WCHAR *)v73;
  }
  else
  {
    v21 = v13[3];
  }
  v9 = sub_1406997B8(v12, v20, v14, 131097, (__int64)&Handle);
  if ( v9 < 0 )
    goto LABEL_15;
  if ( v21 )
  {
    RtlInitUnicodeString(&DestinationString, v21);
    ObjectAttributes.RootDirectory = Handle;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v9 < 0 )
      goto LABEL_15;
    ZwClose(Handle);
    Handle = KeyHandle;
  }
LABEL_11:
  ExFreePoolWithTag(v8, 0);
  P = 0LL;
  v17 = sub_14067B838(a2, L"KeyPath", 0, &P);
  v8 = (unsigned int *)P;
  v9 = v17;
  if ( v17 < 0 )
  {
    if ( v17 != -1073741772 )
      goto LABEL_15;
    v18 = Handle;
    v9 = 0;
    v67 = Handle;
    Handle = 0LL;
    goto LABEL_14;
  }
  if ( !sub_1402D199C(P) )
    goto LABEL_22;
  v70 = (const wchar_t *)((char *)v8 + v8[2]);
  v23 = v70;
  v24 = wcschr(v70, 0x24u);
  if ( v24 )
  {
    v25 = 0;
    do
    {
      ++v25;
      v24 = wcschr(v24 + 1, 0x24u);
    }
    while ( v24 );
    v61 = v25;
    if ( v25 )
    {
      Pool2 = (PVOID)ExAllocatePool2(256LL, 8LL * v25, 1667526736LL);
      v26 = (char *)Pool2;
      if ( !Pool2 )
        goto LABEL_52;
      v27 = v23;
      v28 = 0;
      if ( *v23 )
      {
        do
        {
          if ( v28 >= v25 )
            break;
          v29 = wcschr(v27, 0x5Cu);
          v30 = v29;
          if ( v29 )
          {
            *v29 = 0;
            v31 = v29 - v27;
          }
          else
          {
            v31 = -1LL;
            do
              ++v31;
            while ( v27[v31] );
          }
          v32 = 2 * v31;
          v33 = 2 * v31;
          if ( *v27 == 36 )
          {
            v34 = (__int64 *)&v26[8 * v28];
            v35 = sub_14069A1F8((__int64)v71, v27 + 1, v34);
            v9 = v35;
            if ( v35 < 0 )
            {
              if ( v35 != -1073741772 )
                goto LABEL_15;
              v9 = 0;
              v33 = v32;
            }
            else
            {
              v36 = *v34;
              v33 = v32;
              v37 = *(_DWORD *)(*v34 + 32);
              if ( v37 )
              {
                if ( v37 <= 2 )
                {
                  v33 = *(_DWORD *)(v36 + 36) - 2;
                }
                else
                {
                  v33 = v32;
                  if ( v37 == 7 )
                  {
                    v38 = -1LL;
                    do
                      ++v38;
                    while ( *(_WORD *)(*(_QWORD *)(v36 + 40) + 2 * v38) );
                    v33 = 2 * v38;
                  }
                }
              }
            }
            v26 = (char *)Pool2;
            ++v28;
          }
          if ( (unsigned __int64)(v33 + (unsigned int)UnicodeString.MaximumLength) + 2 >= 0xFFFE )
          {
            v9 = -2147483643;
            goto LABEL_15;
          }
          UnicodeString.MaximumLength += v33 + 2;
          if ( v30 )
          {
            *v30 = 92;
            v39 = v30 + 1;
          }
          else
          {
            v40 = -1LL;
            do
              ++v40;
            while ( v27[v40] );
            v39 = &v27[v40];
          }
          v27 = v39;
          v25 = v61;
        }
        while ( *v39 );
        if ( v9 < 0 )
          goto LABEL_15;
        v23 = v70;
      }
      MaximumLength = UnicodeString.MaximumLength;
      UnicodeString.Length = UnicodeString.MaximumLength - 2;
      v42 = (wchar_t *)ExAllocatePool2(256LL, UnicodeString.MaximumLength, 1667526736LL);
      UnicodeString.Buffer = v42;
      if ( !v42 )
      {
LABEL_52:
        v9 = -1073741670;
        goto LABEL_15;
      }
      v43 = MaximumLength;
      v44 = 0;
      v45 = v23;
      LODWORD(P) = 0;
      if ( *v23 )
      {
        while ( v44 < v25 )
        {
          v46 = wcschr(v45, 0x5Cu);
          v47 = v46;
          if ( v46 )
          {
            *v46 = 0;
            v48 = v46 - v45;
          }
          else
          {
            v48 = -1LL;
            do
              ++v48;
            while ( v45[v48] );
          }
          v49 = v45;
          if ( v45 != v23 )
          {
            if ( v43 <= 2 )
              goto LABEL_22;
            *v42++ = 92;
            v43 -= 2;
          }
          v50 = 2 * v48;
          if ( *v45 == 36 )
          {
            LODWORD(P) = v44 + 1;
            v51 = *((_QWORD *)Pool2 + v44);
            if ( v51 )
            {
              v52 = *(_DWORD *)(v51 + 32);
              if ( v52 )
              {
                if ( v52 <= 2 )
                {
                  v49 = *(const wchar_t **)(v51 + 40);
                  v50 = *(_DWORD *)(v51 + 36) - 2;
                }
                else if ( v52 == 7 )
                {
                  v49 = *(const wchar_t **)(v51 + 40);
                  v53 = -1LL;
                  do
                    ++v53;
                  while ( v49[v53] );
                  v50 = 2 * v53;
                }
              }
            }
          }
          if ( v43 <= v50 )
            goto LABEL_22;
          memmove(v42, v49, v50);
          v43 -= v50;
          v42 += (unsigned __int64)v50 >> 1;
          if ( v47 )
          {
            *v47 = 92;
            v54 = v47 + 1;
          }
          else
          {
            v55 = -1LL;
            do
              ++v55;
            while ( v45[v55] );
            v54 = &v45[v55];
          }
          v45 = v54;
          if ( !*v54 )
            break;
          v44 = (unsigned int)P;
          v23 = v70;
          v25 = v61;
        }
      }
      if ( v43 == 2 )
      {
        v56 = UnicodeString;
        v5 = v72;
        *v42 = 0;
        DestinationString = v56;
        goto LABEL_107;
      }
LABEL_22:
      v9 = -1073741823;
      goto LABEL_15;
    }
  }
  v57 = v8[3];
  v58 = (_WORD *)((char *)v8 + v8[2]);
  LODWORD(P) = 0;
  sub_14067AB94(v58, v57, (int *)&P);
  DestinationString.Length = (unsigned __int16)P;
  DestinationString.MaximumLength = *((_WORD *)v8 + 6);
  DestinationString.Buffer = (wchar_t *)((char *)v8 + v8[2]);
LABEL_107:
  ObjectAttributes.RootDirectory = Handle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v67 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&v67, 0x20019u, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    v18 = v67;
LABEL_14:
    *v5 = v18;
  }
LABEL_15:
  RtlFreeUnicodeString(&UnicodeString);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}

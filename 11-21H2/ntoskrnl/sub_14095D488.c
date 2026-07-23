/*
 * XREFs of sub_14095D488 @ 0x14095D488
 * Callers:
 *     sub_1408264C0 @ 0x1408264C0 (sub_1408264C0.c)
 *     sub_14095DAF0 @ 0x14095DAF0 (sub_14095DAF0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14069946C @ 0x14069946C (sub_14069946C.c)
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_14094A7D4 @ 0x14094A7D4 (sub_14094A7D4.c)
 *     sub_14095D038 @ 0x14095D038 (sub_14095D038.c)
 *     sub_14095DC2C @ 0x14095DC2C (sub_14095DC2C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14095D488(__int64 a1, unsigned int a2, UNICODE_STRING *a3, const UNICODE_STRING *a4)
{
  char v4; // r15
  unsigned int v6; // r13d
  void *v7; // r12
  __int64 v8; // r14
  _WORD *v9; // rsi
  UNICODE_STRING *v10; // rdi
  int v11; // eax
  int v12; // ebx
  BOOLEAN v14; // al
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG v17; // r15d
  int v18; // eax
  unsigned int v19; // r13d
  unsigned __int64 v20; // rax
  const wchar_t *v21; // r13
  const WCHAR *v22; // rdi
  ULONG *v23; // r14
  unsigned int v24; // eax
  unsigned int v25; // ecx
  const WCHAR *v26; // rdi
  unsigned __int64 v27; // rax
  ULONG v28; // eax
  int v29; // r15d
  int v30; // eax
  unsigned __int16 Length; // ax
  const void **p_UnicodeString; // rdx
  wchar_t *Buffer; // r9
  const WCHAR *v34; // rdx
  unsigned int v35; // ecx
  const WCHAR *v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  unsigned int v39; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v40; // [rsp+4Ch] [rbp-75h]
  unsigned int v41; // [rsp+50h] [rbp-71h]
  const WCHAR *v42; // [rsp+58h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-61h] BYREF
  int v44; // [rsp+70h] [rbp-51h] BYREF
  ULONG v45; // [rsp+74h] [rbp-4Dh]
  HANDLE KeyHandle; // [rsp+78h] [rbp-49h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-31h] BYREF
  __int64 v49; // [rsp+98h] [rbp-29h]
  __int64 Pool2; // [rsp+A0h] [rbp-21h]
  UNICODE_STRING v51; // [rsp+A8h] [rbp-19h] BYREF
  UNICODE_STRING v52; // [rsp+B8h] [rbp-9h] BYREF
  PVOID P[10]; // [rsp+C8h] [rbp+7h] BYREF

  v4 = a2;
  Handle = 0LL;
  v39 = 0;
  LODWORD(v42) = 0;
  v41 = 0;
  Pool2 = 0LL;
  DestinationString = 0LL;
  v6 = 0;
  v40 = 0;
  v7 = 0LL;
  v49 = 0LL;
  LODWORD(v8) = 0;
  KeyHandle = 0LL;
  v9 = 0LL;
  P[0] = 0LL;
  v51 = 0LL;
  v44 = 0;
  v10 = a3;
  UnicodeString = 0LL;
  v52 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v52, 0LL);
  v11 = sub_14077FFEC(0LL, a1, (__int64)L"Setup\\ResolveFilePaths", 0, 0x20019u, (__int64)&Handle);
  v12 = v11;
  if ( v11 == -1073741772 )
  {
    LODWORD(v10) = 0;
LABEL_3:
    v12 = (int)v10;
    goto LABEL_4;
  }
  if ( v11 >= 0 )
  {
    v12 = sub_14095D038(v10, &DestinationString);
    if ( v12 < 0 )
    {
      v12 = 0;
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    if ( (v4 & 2) != 0 )
    {
      if ( v10 && (v14 = RtlEqualUnicodeString(v10, &stru_140A37C58, 1u), v10 = 0LL, !v14)
        || (UNICODE_STRING *)DestinationString.Buffer != v10
        && !RtlEqualUnicodeString(&DestinationString, &stru_140A37FF0, 1u) )
      {
LABEL_21:
        if ( (int)sub_1406994BC(v15, (int)Handle, 0, 0, (__int64)v10, (__int64)&v39, (__int64)&v42) >= 0 )
        {
          v8 = (unsigned int)v42;
          v40 = (unsigned int)v42;
          v6 = 2 * v39 + 2;
          v41 = v6;
          if ( 2 * v39 != -2 )
          {
            Pool2 = ExAllocatePool2(256LL, v6, 1650749520LL);
            v7 = (void *)Pool2;
            if ( !Pool2 )
            {
              v12 = -1073741670;
              goto LABEL_4;
            }
          }
          if ( (_DWORD)v8 )
          {
            v49 = ExAllocatePool2(256LL, v8, 1650749520LL);
            v9 = (_WORD *)v49;
            if ( !v49 )
            {
LABEL_27:
              v12 = -1073741670;
LABEL_87:
              if ( v7 )
                ExFreePoolWithTag(v7, 0);
LABEL_89:
              if ( v9 )
                ExFreePoolWithTag(v9, 0);
              goto LABEL_4;
            }
          }
        }
        v17 = (unsigned int)v10;
LABEL_29:
        v45 = v17;
        LODWORD(v42) = v6 >> 1;
        v39 = v8;
        v18 = sub_14069946C(v16, Handle, v17, v7, (__int64)&v42, (__int64)&v44, v9, (__int64)&v39);
        if ( v18 == -2147483622 )
          goto LABEL_87;
        if ( v18 == -1073741789 )
        {
          if ( (unsigned int)v42 > v6 >> 1 )
          {
            v19 = 2 * (_DWORD)v42;
            v41 = 2 * (_DWORD)v42;
            if ( v7 )
              ExFreePoolWithTag(v7, 0);
            Pool2 = ExAllocatePool2(256LL, v19, 1650749520LL);
            v7 = (void *)Pool2;
            if ( !Pool2 )
            {
              v12 = -1073741670;
              goto LABEL_89;
            }
          }
          if ( v39 <= (unsigned int)v8 )
            goto LABEL_39;
          v8 = v39;
          v40 = v39;
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          v49 = ExAllocatePool2(256LL, v8, 1650749520LL);
          v9 = (_WORD *)v49;
          if ( v49 )
          {
LABEL_39:
            --v17;
            goto LABEL_84;
          }
          goto LABEL_27;
        }
        if ( v18 < 0 )
          goto LABEL_86;
        if ( v44 != 7 )
          goto LABEL_84;
        if ( v39 < 4 )
          goto LABEL_84;
        v20 = (unsigned __int64)v39 >> 1;
        if ( v9[v20 - 1] )
          goto LABEL_84;
        if ( v9[v20 - 2] )
          goto LABEL_84;
        v18 = sub_14077FFEC(0LL, a1, (__int64)v7, 0, 0x2001Fu, (__int64)&KeyHandle);
        if ( v18 == -1073741772 )
          goto LABEL_84;
        if ( v18 < 0 )
        {
LABEL_86:
          v12 = v18;
          goto LABEL_87;
        }
        v21 = v9;
        if ( !*v9 )
          goto LABEL_83;
        while ( 1 )
        {
          v22 = &word_140867F00;
          if ( wcsicmp(v21, L" ") )
            v22 = v21;
          v42 = v22;
          if ( sub_14067B838(KeyHandle, v22, 0, P) >= 0 )
            break;
LABEL_79:
          v38 = -1LL;
          do
            ++v38;
          while ( v21[v38] );
          v21 += v38 + 1;
          if ( !*v21 )
          {
LABEL_82:
            v9 = (_WORD *)v49;
            v7 = (void *)Pool2;
            LODWORD(v8) = v40;
            v17 = v45;
LABEL_83:
            ZwClose(KeyHandle);
            if ( v12 < 0 )
              goto LABEL_87;
LABEL_84:
            v6 = v41;
            ++v17;
            goto LABEL_29;
          }
        }
        v23 = (ULONG *)P[0];
        v24 = *((_DWORD *)P[0] + 1);
        if ( v24 )
        {
          if ( v24 <= 2 )
          {
            v35 = *((_DWORD *)P[0] + 3);
            v36 = (const WCHAR *)((char *)P[0] + *((unsigned int *)P[0] + 2));
            if ( v35 - 3 > 0xFFFB || v36[((unsigned __int64)v35 >> 1) - 1] )
              goto LABEL_78;
            RtlInitUnicodeString(&v51, v36);
            UnicodeString.Length = 0;
            v37 = sub_14095DC2C(
                    &v51,
                    a2,
                    a3,
                    (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                    a4,
                    &UnicodeString);
            v12 = v37;
            if ( v37 == -1073741275 || v37 == -1073741637 )
            {
              v12 = 0;
              goto LABEL_78;
            }
            if ( v37 < 0 )
              goto LABEL_78;
            v34 = v22;
            Buffer = UnicodeString.Buffer;
            v28 = UnicodeString.Length + 2;
          }
          else
          {
            if ( v24 != 7 )
              goto LABEL_78;
            v25 = *((_DWORD *)P[0] + 3);
            v26 = (const WCHAR *)((char *)P[0] + *((unsigned int *)P[0] + 2));
            if ( v25 - 4 > 0xFFFA )
              goto LABEL_78;
            v27 = (unsigned __int64)v25 >> 1;
            if ( v26[v27 - 1] || v26[v27 - 2] )
              goto LABEL_78;
            LOWORD(v28) = 0;
            v29 = 0;
            v52.Length = 0;
            if ( *v26 )
            {
              while ( 1 )
              {
                RtlInitUnicodeString(&v51, v26);
                UnicodeString.Length = 0;
                v30 = sub_14095DC2C(
                        &v51,
                        a2,
                        a3,
                        (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                        a4,
                        &UnicodeString);
                v12 = v30;
                if ( v30 == -1073741275 || v30 == -1073741637 )
                {
                  Length = 0;
                  UnicodeString.Length = 0;
                }
                else
                {
                  if ( v30 < 0 )
                    goto LABEL_78;
                  Length = UnicodeString.Length;
                  ++v29;
                }
                p_UnicodeString = (const void **)&UnicodeString;
                if ( !Length )
                  p_UnicodeString = (const void **)&v51;
                v12 = sub_14094A7D4(&v52, p_UnicodeString, 0LL, 1);
                if ( v12 < 0 )
                  goto LABEL_78;
                v26 += ((unsigned __int64)v51.Length >> 1) + 1;
                if ( !*v26 )
                {
                  LOWORD(v28) = v52.Length;
                  break;
                }
              }
            }
            if ( !v29 )
              goto LABEL_78;
            Buffer = v52.Buffer;
            v34 = v42;
            v28 = (unsigned __int16)v28;
          }
          v12 = sub_1406D5A30(KeyHandle, v34, v23[1], Buffer, v28);
        }
LABEL_78:
        ExFreePoolWithTag(v23, 0);
        if ( v12 < 0 )
          goto LABEL_82;
        goto LABEL_79;
      }
    }
    else
    {
      v10 = 0LL;
    }
    if ( (v4 & 1) == 0
      || !a4
      || (UNICODE_STRING *)DestinationString.Buffer == v10
      || RtlEqualUnicodeString(a4, &DestinationString, 1u) )
    {
      goto LABEL_3;
    }
    goto LABEL_21;
  }
LABEL_4:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v52);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}

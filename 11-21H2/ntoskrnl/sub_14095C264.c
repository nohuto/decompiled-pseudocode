/*
 * XREFs of sub_14095C264 @ 0x14095C264
 * Callers:
 *     sub_14095C264 @ 0x14095C264 (sub_14095C264.c)
 *     sub_14095C804 @ 0x14095C804 (sub_14095C804.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     sub_14069946C @ 0x14069946C (sub_14069946C.c)
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     sub_1406CB3B4 @ 0x1406CB3B4 (sub_1406CB3B4.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14095C264 @ 0x14095C264 (sub_14095C264.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14095C264(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v10; // esi
  char *Pool2; // rdi
  void *v12; // r15
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  ULONG v16; // esi
  ULONG v17; // eax
  unsigned int v18; // r12d
  ULONG i; // r13d
  int v20; // eax
  __int64 v21; // rcx
  ULONG v22; // r14d
  __int64 v23; // rsi
  unsigned int v24; // r12d
  const wchar_t **v25; // r14
  __int64 v26; // rdx
  __int16 v27; // ax
  ULONG v28; // ecx
  __int64 v29; // rcx
  HANDLE v30; // rdx
  int v31; // eax
  ULONG v32; // r13d
  __int64 v33; // r14
  ULONG v35; // [rsp+40h] [rbp-69h] BYREF
  ULONG v36; // [rsp+44h] [rbp-65h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-61h] BYREF
  ULONG v38; // [rsp+4Ch] [rbp-5Dh] BYREF
  unsigned int v39; // [rsp+50h] [rbp-59h]
  ULONG ResultLength; // [rsp+54h] [rbp-55h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-41h]
  int v44; // [rsp+6Ch] [rbp-3Dh] BYREF
  int v45; // [rsp+70h] [rbp-39h] BYREF
  ULONG v46; // [rsp+74h] [rbp-35h] BYREF
  HANDLE v47; // [rsp+78h] [rbp-31h] BYREF
  PVOID P; // [rsp+80h] [rbp-29h]
  __int64 v49; // [rsp+88h] [rbp-21h]
  __int64 v50; // [rsp+90h] [rbp-19h]
  __int64 KeyInformation; // [rsp+98h] [rbp-11h] BYREF
  int v52; // [rsp+A0h] [rbp-9h]

  v49 = a6;
  v10 = 0;
  v50 = a8;
  Pool2 = 0LL;
  KeyHandle = 0LL;
  KeyInformation = 0LL;
  v52 = 0;
  v12 = 0LL;
  v47 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v44 = 0;
  v45 = 0;
  v35 = 0;
  v38 = 0;
  v39 = 0;
  v36 = 0;
  v46 = 0;
  ResultLength = 0;
  v43 = a7;
  v13 = sub_14077FFEC(0LL, a1, a2, 8u, 0x20019u, (__int64)&KeyHandle);
  if ( v13 >= 0 )
  {
    if ( ZwQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength) >= 0 )
    {
      if ( (KeyInformation & 0x200000000LL) != 0 )
      {
        v13 = -2147483603;
        goto LABEL_83;
      }
      v10 = (KeyInformation & 0x100000000LL) != 0;
    }
    v14 = sub_140772A24(0LL, a3, a4, v10, 0x6001Fu, 0LL, (__int64)&v47, (__int64)&v45);
    v16 = 0;
    v13 = v14;
    if ( v14 >= 0 )
    {
      if ( (int)sub_1406994BC(v15, (int)KeyHandle, 0, (int)&v35, 0LL, (__int64)&v38, (__int64)&v36) < 0 )
      {
        v18 = 0;
      }
      else
      {
        v17 = v38;
        if ( v35 > v38 )
          v17 = v35;
        v18 = 2 * v17 + 2;
        v39 = v18;
        if ( 2 * v17 != -2 )
        {
          Pool2 = (char *)ExAllocatePool2(256LL, v18, 1650749520LL);
          if ( !Pool2 )
          {
            v13 = -1073741670;
            goto LABEL_83;
          }
        }
      }
      if ( (!v36 || (v12 = (void *)ExAllocatePool2(256LL, v36, 1650749520LL)) != 0LL)
        && (!v49 || !a7 || (P = (PVOID)ExAllocatePool2(256LL, 8LL * a7, 1650749520LL)) != 0LL) )
      {
        for ( i = 0; ; ++i )
        {
          v38 = i;
          v37 = v18 >> 1;
          v20 = sub_1406CB3B4(KeyHandle, i, Pool2, &v37);
          if ( v20 == -2147483622 )
          {
            if ( v13 >= 0 )
            {
              v32 = v36;
              while ( 1 )
              {
                v37 = v18 >> 1;
                v36 = v32;
                v20 = sub_14069946C(v21, KeyHandle, v16, Pool2, (__int64)&v37, (__int64)&v46, v12, (__int64)&v36);
                if ( v20 == -2147483622 )
                  break;
                if ( v20 == -1073741789 )
                {
                  if ( v37 > v18 >> 1 )
                  {
                    v18 = 2 * v37;
                    if ( Pool2 )
                      ExFreePoolWithTag(Pool2, 0);
                    Pool2 = (char *)ExAllocatePool2(256LL, v18, 1650749520LL);
                    if ( !Pool2 )
                      goto LABEL_57;
                  }
                  v33 = v36;
                  if ( v36 > v32 )
                  {
                    v32 = v36;
                    if ( v12 )
                      ExFreePoolWithTag(v12, 0);
                    v12 = (void *)ExAllocatePool2(256LL, v33, 1650749520LL);
                    if ( !v12 )
                      goto LABEL_16;
                  }
                  --v16;
                }
                else
                {
                  if ( v20 < 0 )
                    goto LABEL_76;
                  if ( v45 != 2
                    || (ResultLength = 0,
                        (unsigned int)sub_14077FC64(v47, (const WCHAR *)Pool2, 0LL, 0LL, &ResultLength) != -1073741789) )
                  {
                    v13 = sub_1406D5A30(v47, (const WCHAR *)Pool2, v46, v12, v36);
                    if ( v13 < 0 )
                      goto LABEL_77;
                  }
                }
                ++v16;
              }
            }
            goto LABEL_77;
          }
          if ( v20 == -1073741789 )
          {
            v18 = 2 * v37;
            v39 = 2 * v37;
            if ( Pool2 )
              ExFreePoolWithTag(Pool2, 0);
            Pool2 = (char *)ExAllocatePool2(256LL, v18, 1650749520LL);
            if ( Pool2 )
            {
              --i;
              continue;
            }
LABEL_57:
            v13 = -1073741670;
            goto LABEL_79;
          }
          if ( v20 < 0 )
            goto LABEL_76;
          v22 = 0;
          v35 = 0;
          if ( !v49 )
            goto LABEL_43;
          v23 = v37;
          if ( !v37 )
            goto LABEL_42;
          v24 = 0;
          if ( !v43 )
            goto LABEL_41;
          v25 = (const wchar_t **)v49;
          while ( wcsnicmp(*v25, (const wchar_t *)Pool2, (unsigned int)(v23 - 1)) )
          {
LABEL_37:
            ++v24;
            ++v25;
            if ( v24 >= v43 )
              goto LABEL_40;
          }
          v26 = (__int64)&(*v25)[v23];
          v27 = *(_WORD *)(v26 - 2);
          if ( v27 )
            break;
          LODWORD(v23) = 0;
LABEL_40:
          i = v38;
          v22 = v35;
LABEL_41:
          v18 = v39;
          if ( !(_DWORD)v23 )
          {
            v16 = 0;
            continue;
          }
LABEL_42:
          v16 = 0;
LABEL_43:
          if ( !v50 )
            goto LABEL_50;
          v20 = sub_14077FFEC(0LL, v50, (__int64)Pool2, 0, 0x20019u, (__int64)&Handle);
          if ( v20 == -1073741772 )
          {
            Handle = 0LL;
            continue;
          }
          if ( v20 < 0 )
          {
LABEL_76:
            v13 = v20;
            goto LABEL_77;
          }
          v13 = sub_1406994BC(v29, (int)Handle, (int)&v44, 0, 0LL, 0LL, 0LL);
          if ( v13 >= 0 )
          {
            if ( !v44 )
            {
              ZwClose(Handle);
              v30 = 0LL;
              Handle = 0LL;
              goto LABEL_51;
            }
LABEL_50:
            v30 = Handle;
LABEL_51:
            v31 = sub_14095C264(
                    (_DWORD)KeyHandle,
                    (_DWORD)Pool2,
                    (_DWORD)v47,
                    (_DWORD)Pool2,
                    0,
                    (unsigned __int64)P & -(__int64)(v22 != 0),
                    v22,
                    (__int64)v30);
            v13 = v31;
            if ( v31 == -2147483603 )
            {
              v13 = 0;
              continue;
            }
            if ( v31 >= 0 )
              continue;
          }
          goto LABEL_77;
        }
        if ( v27 == 92 && P )
        {
          v28 = v35;
          *((_QWORD *)P + v35) = v26;
          v35 = v28 + 1;
        }
        goto LABEL_37;
      }
LABEL_16:
      v13 = -1073741670;
LABEL_77:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
LABEL_79:
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
LABEL_83:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v47 )
    ZwClose(v47);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v13;
}

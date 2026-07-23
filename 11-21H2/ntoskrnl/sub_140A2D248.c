/*
 * XREFs of sub_140A2D248 @ 0x140A2D248
 * Callers:
 *     sub_140697A7C @ 0x140697A7C (sub_140697A7C.c)
 *     sub_140697B34 @ 0x140697B34 (sub_140697B34.c)
 *     sub_140A22CA4 @ 0x140A22CA4 (sub_140A22CA4.c)
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
 * Callees:
 *     IoGetStackLimits @ 0x1402AB940 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     ZwQuerySecurityObject @ 0x14041E3C0 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x14041EDA0 (ZwSetSecurityObject.c)
 *     sub_1406CB3B4 @ 0x1406CB3B4 (sub_1406CB3B4.c)
 *     sub_1406CB590 @ 0x1406CB590 (sub_1406CB590.c)
 *     sub_1406CF2EC @ 0x1406CF2EC (sub_1406CF2EC.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_140772D80 @ 0x140772D80 (sub_140772D80.c)
 *     sub_14078003C @ 0x14078003C (sub_14078003C.c)
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A2D248(char *a1, const WCHAR *a2, char *a3, const WCHAR *a4, char a5, __int64 a6, char a7)
{
  __int64 Pool2; // r15
  ULONG v9; // edi
  void *v10; // rsi
  void *v11; // r13
  int v14; // ebx
  ULONG v15; // eax
  unsigned __int64 v16; // rdi
  __int64 v17; // r14
  ULONG v18; // eax
  unsigned int v19; // r12d
  int v20; // eax
  ULONG v21; // edx
  ULONG v22; // r8d
  int v23; // eax
  ULONG i; // [rsp+50h] [rbp-61h] BYREF
  ULONG v26; // [rsp+54h] [rbp-5Dh] BYREF
  ULONG Index; // [rsp+58h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-51h] BYREF
  ULONG LengthNeeded; // [rsp+68h] [rbp-49h] BYREF
  __int64 v30; // [rsp+6Ch] [rbp-45h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-31h] BYREF
  __int64 v33; // [rsp+88h] [rbp-29h]
  unsigned __int64 HighLimit; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 LowLimit; // [rsp+98h] [rbp-19h] BYREF
  char *v36; // [rsp+A0h] [rbp-11h]
  __int64 KeyInformation; // [rsp+A8h] [rbp-9h] BYREF
  int v38; // [rsp+B0h] [rbp-1h]

  v33 = a6;
  KeyHandle = 0LL;
  Handle = 0LL;
  Pool2 = 0LL;
  ResultLength = 0;
  v9 = 0;
  LengthNeeded = 0;
  v10 = 0LL;
  v11 = 0LL;
  Index = 0;
  i = 0;
  v26 = 0;
  v30 = 0LL;
  HighLimit = 0LL;
  LowLimit = 0LL;
  KeyInformation = 0LL;
  v38 = 0;
  v36 = a3;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v14 = -1073741670;
    goto LABEL_74;
  }
  v14 = sub_14078003C(a1, a2, 8u, 0x20019u, &KeyHandle, v33);
  if ( v14 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (KeyInformation & 0x200000000LL) != 0 )
      {
        v14 = -2147483603;
        goto LABEL_74;
      }
      v9 = (KeyInformation & 0x100000000LL) != 0;
    }
    if ( a5 )
    {
      while ( ZwQuerySecurityObject(KeyHandle, 4u, (PSECURITY_DESCRIPTOR)Pool2, LengthNeeded, &LengthNeeded) == -1073741789 )
      {
        if ( Pool2 )
          ExFreePoolWithTag((PVOID)Pool2, 0);
        Pool2 = ExAllocatePool2(256LL, LengthNeeded, 1279739218LL);
        if ( !Pool2 )
          goto LABEL_28;
      }
    }
    v14 = sub_140772D80(v36, a4, v9, 0x6001Fu, (void *)(Pool2 & -(__int64)(a5 != 0)), 0, &Handle, (PULONG)&v30 + 1, v33);
    if ( v14 >= 0 )
    {
      if ( a5 && Pool2 && HIDWORD(v30) == 2 )
        ZwSetSecurityObject(Handle, 4u, (PSECURITY_DESCRIPTOR)Pool2);
      if ( (unsigned int)sub_1406CB590(KeyHandle, 0LL, &Index, 0LL, &i, &v26) )
      {
        LODWORD(v16) = 0;
        LODWORD(v17) = 0;
        goto LABEL_34;
      }
      v15 = Index;
      if ( Index <= i )
        v15 = i;
      if ( v15 )
      {
        if ( v15 + 1 < v15 )
          goto LABEL_32;
        ++v15;
      }
      v16 = 2LL * v15;
      if ( v16 <= 0xFFFFFFFF )
      {
        v17 = v26;
        if ( (_DWORD)v16 )
        {
          v10 = (void *)ExAllocatePool2(256LL, (unsigned int)v16, 1279739218LL);
          if ( !v10 )
          {
LABEL_28:
            v14 = -1073741801;
            goto LABEL_74;
          }
        }
        v14 = 0;
        if ( (_DWORD)v17 )
        {
          v11 = (void *)ExAllocatePool2(256LL, v17, 1279739218LL);
          if ( !v11 )
          {
LABEL_31:
            v14 = -1073741801;
LABEL_72:
            if ( v10 )
              ExFreePoolWithTag(v10, 0);
            goto LABEL_74;
          }
        }
LABEL_34:
        v18 = 0;
LABEL_35:
        for ( i = v18; ; v18 = i )
        {
          v19 = (unsigned int)v16 >> 1;
          Index = (unsigned int)v16 >> 1;
          v20 = sub_1406CB3B4(KeyHandle, v18, (char *)v10, &Index);
          if ( v20 == -2147483622 )
            break;
          if ( v20 != -1073741789 )
          {
            if ( !v20 )
            {
              *((_WORD *)v10 + ((unsigned __int64)(unsigned int)v16 >> 1) - 1) = 0;
              v20 = sub_140A2D248((_DWORD)KeyHandle, (_DWORD)v10, (_DWORD)Handle, (_DWORD)v10, a5, v33, a7);
              if ( !v20 || v20 == -2147483603 )
              {
                v18 = i + 1;
                goto LABEL_35;
              }
            }
            v14 = v20;
            break;
          }
          v16 = 2LL * Index;
          if ( v16 > 0xFFFFFFFF )
          {
LABEL_47:
            v14 = -1073741675;
            goto LABEL_70;
          }
          v14 = 0;
          if ( v10 )
            ExFreePoolWithTag(v10, 0);
          v10 = (void *)ExAllocatePool2(256LL, (unsigned int)v16, 1279739218LL);
          if ( !v10 )
          {
LABEL_68:
            v14 = -1073741801;
            goto LABEL_70;
          }
        }
        if ( v14 >= 0 )
        {
          Index = 0;
          v21 = 0;
          while ( 1 )
          {
            i = v19;
            v26 = v17;
            v23 = sub_1406CF2EC(KeyHandle, v21, v10, &i, &v30, v11, &v26);
            if ( v23 == -2147483622 )
              break;
            if ( v23 == -1073741789 )
            {
              if ( i > v19 )
              {
                v16 = 2LL * i;
                if ( v16 > 0xFFFFFFFF )
                  goto LABEL_47;
                v14 = 0;
                if ( v10 )
                  ExFreePoolWithTag(v10, 0);
                v10 = (void *)ExAllocatePool2(256LL, (unsigned int)v16, 1279739218LL);
                if ( !v10 )
                  goto LABEL_68;
              }
              if ( v26 > (unsigned int)v17 )
              {
                v17 = v26;
                if ( v11 )
                  ExFreePoolWithTag(v11, 0);
                v11 = (void *)ExAllocatePool2(256LL, v17, 1279739218LL);
                if ( !v11 )
                  goto LABEL_31;
              }
            }
            else
            {
              if ( v23
                || (v22 = v30,
                    *((_WORD *)v10 + ((unsigned __int64)(unsigned int)v16 >> 1) - 1) = 0,
                    (v23 = sub_1406D5A30(Handle, (const WCHAR *)v10, v22, v11, v26)) != 0) )
              {
                v14 = v23;
                break;
              }
              ++Index;
            }
            v21 = Index;
            v19 = (unsigned int)v16 >> 1;
          }
        }
LABEL_70:
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
        goto LABEL_72;
      }
LABEL_32:
      v14 = -1073741675;
    }
  }
LABEL_74:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v14;
}

/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x18000A110
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180009D1C (RtlpQueryRegistryValues.c)
 * Callees:
 *     RtlpQueryRegistryDirect @ 0x18000A450 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x18000A50C (RtlpValidateKeyTrust.c)
 *     RtlExpandEnvironmentStrings_U @ 0x1800330C0 (RtlExpandEnvironmentStrings_U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

NTSTATUS __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        __int64 a5,
        PVOID Environment,
        char a7)
{
  int v7; // ebx
  __int64 v10; // r9
  _DWORD *v11; // r12
  __int64 v12; // r11
  unsigned int v13; // r13d
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // edi
  char *v17; // r15
  wchar_t *Buffer; // rsi
  int v19; // ecx
  __int64 v20; // rdx
  NTSTATUS result; // eax
  int v22; // eax
  bool v23; // zf
  unsigned int v24; // ecx
  unsigned int v25; // edx
  int v26; // edi
  ULONG v27; // r9d
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  _WORD *v30; // rcx
  unsigned int v31; // ecx
  wchar_t *v32; // rax
  unsigned __int64 v33; // r13
  int v34; // ecx
  wchar_t *i; // rdi
  __int64 v37; // rdx
  unsigned int v38; // r12d
  int RegistryDirect; // eax
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-28h] BYREF
  _UNICODE_STRING Source; // [rsp+50h] [rbp-18h] BYREF
  ULONG ReturnedLength; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v46; // [rsp+C0h] [rbp+58h]
  _DWORD *v47; // [rsp+C8h] [rbp+60h]

  v47 = a4;
  v7 = 0;
  v46 = a3;
  v10 = (unsigned int)*a4;
  v11 = (_DWORD *)a3;
  v12 = a1;
  *a4 = 0;
  v13 = *(_DWORD *)(a3 + 4);
  v14 = *(unsigned __int8 *)(a2 + 32);
  if ( v13 )
  {
    v15 = *(_DWORD *)(a3 + 8);
    if ( v15 != -1 )
    {
      v16 = *(_DWORD *)(a3 + 12);
      if ( v16 || v13 != v14 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v17 = *(char **)(a2 + 16);
LABEL_6:
          Buffer = (wchar_t *)((char *)v11 + v15);
          goto LABEL_7;
        }
        v24 = *(_DWORD *)(a3 + 16);
        v25 = v16 + v15;
        if ( !v16 )
          v25 = v24 + 20;
        v26 = v24 + 2;
        v17 = (char *)((v25 + a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v24 + 2 >= 2 )
        {
          ReturnedLength = a3 + v10;
          if ( (int)a3 + (int)v10 - (int)v17 < v26 )
          {
            result = -1073741789;
            *a4 = v26 + (_DWORD)v17 - a3;
            return result;
          }
          memmove(v17, (const void *)(a3 + 20), v24);
          v27 = ReturnedLength;
          v12 = a1;
          *(_WORD *)&v17[v11[4]] = 0;
          v13 = v11[1];
          v28 = v26;
          v16 = v11[3];
          v29 = (unsigned __int64)&v17[v28 + 7];
          v15 = v11[2];
          a3 = v29 & 0xFFFFFFFFFFFFFFF8uLL;
          v46 = a3;
          v10 = v27 - (unsigned int)a3;
          goto LABEL_6;
        }
        return -1073741764;
      }
    }
  }
  if ( !v14 )
  {
    v23 = (*(_BYTE *)(a2 + 8) & 4) == 0;
    goto LABEL_23;
  }
  v16 = *(_DWORD *)(a2 + 48);
  v13 = v14;
  v17 = *(char **)(a2 + 16);
  Buffer = *(wchar_t **)(a2 + 40);
  if ( !v16 )
  {
    v30 = *(_WORD **)(a2 + 40);
    if ( v14 - 1 <= 1 )
    {
      if ( !Buffer )
        return -1073741764;
      while ( *v30++ )
        ;
      v16 = (_DWORD)v30 - (_DWORD)Buffer;
    }
    else if ( v14 == 7 )
    {
      if ( !Buffer )
        return -1073741764;
      if ( *Buffer )
      {
        do
        {
          while ( *v30++ )
            ;
        }
        while ( *v30 );
      }
      v16 = (_DWORD)v30 - (_DWORD)Buffer + 2;
    }
  }
LABEL_7:
  v19 = *(_DWORD *)(a2 + 8);
  if ( (v19 & 0x20) == 0 )
    goto LABEL_10;
  if ( (v19 & 0x100) == 0 )
  {
    if ( (v19 & 0x80u) == 0 || v13 - 1 > 1 && v13 != 7 )
      goto LABEL_10;
    v23 = (v19 & 4) == 0;
LABEL_23:
    if ( v23 )
      return 0;
    else
      return -1073741772;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v13 )
    return -1073741788;
LABEL_10:
  if ( (v19 & 0x10) == 0 )
  {
    if ( v13 == 7 )
    {
      v33 = (unsigned __int64)Buffer + v16 - 4;
      v34 = 0;
      for ( i = Buffer; (unsigned __int64)i < v33; Buffer = i )
      {
        while ( *i++ )
          ;
        v37 = *(unsigned int *)(a2 + 8);
        v38 = (_DWORD)i - (_DWORD)Buffer;
        if ( (v37 & 0x20) != 0 )
        {
          if ( a7 )
          {
            v34 = RtlpValidateKeyTrust(v12, v37, a3, v10);
            if ( v34 < 0 )
              return v34;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, Buffer, v38, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, wchar_t *, _QWORD, __int64, _QWORD))a2)(
                             v17,
                             1LL,
                             Buffer,
                             v38,
                             a5,
                             *(_QWORD *)(a2 + 24));
        }
        v34 = 0;
        if ( RegistryDirect != -1073741789 )
          v34 = RegistryDirect;
        if ( v34 < 0 )
          break;
        v12 = a1;
      }
      return v34;
    }
    if ( v13 == 2 && v16 - 2 <= 0xFFFA )
    {
      v31 = v16 - 2;
      v32 = Buffer;
      if ( v16 != 2 )
      {
        while ( *v32 != 37 )
        {
          ++v32;
          v31 -= 2;
          if ( !v31 )
            goto LABEL_13;
        }
        Source.Buffer = Buffer;
        Source.MaximumLength = v16;
        Source.Length = v16 - 2;
        Destination.Buffer = (wchar_t *)a3;
        Destination.Length = 0;
        if ( (int)v10 <= 0 )
        {
          Destination.MaximumLength = 0;
        }
        else if ( (unsigned __int64)(int)v10 > 0xFFFE )
        {
          Destination.MaximumLength = -2;
          *(_WORD *)(a3 + 65532) = 0;
        }
        else
        {
          Destination.MaximumLength = v10;
          *(_WORD *)(a3 + 2 * ((unsigned __int64)(int)v10 >> 1) - 2) = 0;
        }
        result = RtlExpandEnvironmentStrings_U(Environment, &Source, &Destination, &ReturnedLength);
        v13 = 1;
        if ( result < 0 )
        {
          if ( result == -1073741789 )
          {
            *v47 = ReturnedLength + v46 - (_DWORD)v11;
            if ( Destination.MaximumLength != 0xFFFE && ReturnedLength <= 0xFFFC )
              return result;
          }
          else if ( result != -2147483643 )
          {
            return result;
          }
        }
        else
        {
          Buffer = Destination.Buffer;
          v16 = Destination.Length + 2;
        }
      }
    }
  }
LABEL_13:
  v20 = *(unsigned int *)(a2 + 8);
  if ( (v20 & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(a1, v20, a3, v10);
      if ( result < 0 )
        return result;
    }
    v22 = RtlpQueryRegistryDirect(v13, Buffer, v16, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(char *, _QWORD, wchar_t *, _QWORD, __int64, _QWORD))a2)(
            v17,
            v13,
            Buffer,
            v16,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v22 != -1073741789 )
    return v22;
  return v7;
}

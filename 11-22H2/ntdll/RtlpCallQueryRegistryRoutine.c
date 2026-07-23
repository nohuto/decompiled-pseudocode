/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x180009260
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180008E4C (RtlpQueryRegistryValues.c)
 * Callees:
 *     RtlpValidateKeyTrust @ 0x180009598 (RtlpValidateKeyTrust.c)
 *     RtlpQueryRegistryDirect @ 0x1800095E8 (RtlpQueryRegistryDirect.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180059AD0 (RtlExpandEnvironmentStrings_U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

NTSTATUS __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        wchar_t *a3,
        _DWORD *a4,
        __int64 a5,
        PVOID Environment,
        char a7)
{
  int v8; // ebx
  __int64 v9; // r8
  wchar_t *v11; // rdx
  __int64 v12; // r10
  unsigned int v13; // r14d
  int v14; // ecx
  int v15; // eax
  char *v16; // r12
  wchar_t *Buffer; // rsi
  unsigned int v18; // edi
  int v19; // ecx
  __int64 v20; // rdx
  NTSTATUS result; // eax
  int v22; // eax
  bool v23; // cf
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // ecx
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  unsigned int v29; // ecx
  wchar_t *v30; // rax
  _WORD *v31; // rcx
  unsigned __int64 v32; // r13
  int v33; // ecx
  wchar_t *i; // rdi
  __int64 v36; // rdx
  unsigned int v37; // r14d
  int RegistryDirect; // eax
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-28h] BYREF
  _UNICODE_STRING Source; // [rsp+50h] [rbp-18h] BYREF
  ULONG ReturnedLength; // [rsp+B8h] [rbp+50h] BYREF
  wchar_t *v45; // [rsp+C0h] [rbp+58h]
  _DWORD *v46; // [rsp+C8h] [rbp+60h]

  v46 = a4;
  v8 = 0;
  v9 = (unsigned int)*a4;
  *a4 = 0;
  v11 = a3;
  v12 = a1;
  v45 = a3;
  v13 = *(unsigned __int8 *)(a2 + 32);
  if ( *((_DWORD *)a3 + 1) )
  {
    v14 = *((_DWORD *)a3 + 2);
    if ( v14 != -1 )
    {
      v15 = *((_DWORD *)a3 + 3);
      if ( v15 || *((_DWORD *)a3 + 1) != v13 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v16 = *(char **)(a2 + 16);
LABEL_6:
          v13 = *((_DWORD *)a3 + 1);
          Buffer = (wchar_t *)((char *)a3 + *((unsigned int *)a3 + 2));
          v18 = *((_DWORD *)a3 + 3);
          goto LABEL_7;
        }
        if ( v15 )
          v24 = (unsigned int)(v14 + v15);
        else
          v24 = (unsigned int)(*((_DWORD *)a3 + 4) + 20);
        v25 = *((_DWORD *)a3 + 4);
        v16 = (char *)(((unsigned __int64)a3 + v24 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v26 = v25 + 2;
        v27 = (int)(v25 + 2);
        if ( v27 >= 2 )
        {
          ReturnedLength = (_DWORD)a3 + v9;
          if ( (int)a3 + (int)v9 - (int)v16 < v26 )
          {
            result = -1073741789;
            *a4 = v26 + (_DWORD)v16 - (_DWORD)a3;
            return result;
          }
          memmove(v16, a3 + 10, v25);
          v28 = *((unsigned int *)a3 + 4);
          v12 = a1;
          v11 = (wchar_t *)((unsigned __int64)&v16[v27 + 7] & 0xFFFFFFFFFFFFFFF8uLL);
          v45 = v11;
          v9 = ReturnedLength - (unsigned int)v11;
          *(_WORD *)&v16[v28] = 0;
          goto LABEL_6;
        }
        return -1073741764;
      }
    }
  }
  if ( !*(_BYTE *)(a2 + 32) )
  {
    v23 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v23 ? 0xC0000034 : 0;
  }
  v18 = *(_DWORD *)(a2 + 48);
  v16 = *(char **)(a2 + 16);
  Buffer = *(wchar_t **)(a2 + 40);
  if ( !v18 )
  {
    v31 = *(_WORD **)(a2 + 40);
    if ( v13 - 1 <= 1 )
    {
      if ( !Buffer )
        return -1073741764;
      while ( *v31++ )
        ;
      v18 = (_DWORD)v31 - (_DWORD)Buffer;
    }
    else if ( v13 == 7 )
    {
      if ( !Buffer )
        return -1073741764;
      if ( *Buffer )
      {
        do
        {
          while ( *v31++ )
            ;
        }
        while ( *v31 );
      }
      v18 = (_DWORD)v31 - (_DWORD)Buffer + 2;
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
    v23 = (v19 & 4) != 0;
    return v23 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v13 )
    return -1073741788;
LABEL_10:
  if ( (v19 & 0x10) == 0 )
  {
    if ( v13 == 7 )
    {
      v32 = (unsigned __int64)Buffer + v18 - 4;
      v33 = 0;
      for ( i = Buffer; (unsigned __int64)i < v32; Buffer = i )
      {
        while ( *i++ )
          ;
        v36 = *(unsigned int *)(a2 + 8);
        v37 = (_DWORD)i - (_DWORD)Buffer;
        if ( (v36 & 0x20) != 0 )
        {
          if ( a7 )
          {
            v33 = RtlpValidateKeyTrust(v12, v36, v9);
            if ( v33 < 0 )
              return v33;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, Buffer, v37, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, wchar_t *, _QWORD, __int64, _QWORD))a2)(
                             v16,
                             1LL,
                             Buffer,
                             v37,
                             a5,
                             *(_QWORD *)(a2 + 24));
        }
        v33 = 0;
        if ( RegistryDirect != -1073741789 )
          v33 = RegistryDirect;
        if ( v33 < 0 )
          break;
        v12 = a1;
      }
      return v33;
    }
    if ( v13 == 2 && v18 - 2 <= 0xFFFA )
    {
      v29 = v18 - 2;
      v30 = Buffer;
      if ( v18 != 2 )
      {
        while ( *v30 != 37 )
        {
          ++v30;
          v29 -= 2;
          if ( !v29 )
            goto LABEL_13;
        }
        Source.Buffer = Buffer;
        Source.MaximumLength = v18;
        Source.Length = v18 - 2;
        Destination.Buffer = v11;
        Destination.Length = 0;
        if ( (int)v9 <= 0 )
        {
          Destination.MaximumLength = 0;
        }
        else if ( (unsigned __int64)(int)v9 > 0xFFFE )
        {
          Destination.MaximumLength = -2;
          v11[32766] = 0;
        }
        else
        {
          Destination.MaximumLength = v9;
          v11[((unsigned __int64)(int)v9 >> 1) - 1] = 0;
        }
        result = RtlExpandEnvironmentStrings_U(Environment, &Source, &Destination, &ReturnedLength);
        v13 = 1;
        if ( result < 0 )
        {
          if ( result == -1073741789 )
          {
            *v46 = ReturnedLength + (_DWORD)v45 - (_DWORD)a3;
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
          v18 = Destination.Length + 2;
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
      result = RtlpValidateKeyTrust(a1, v20, v9);
      if ( result < 0 )
        return result;
    }
    v22 = RtlpQueryRegistryDirect(v13, Buffer, v18, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(char *, _QWORD, wchar_t *, _QWORD, __int64, _QWORD))a2)(
            v16,
            v13,
            Buffer,
            v18,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v22 != -1073741789 )
    return v22;
  return v8;
}

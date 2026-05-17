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

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v7; // ebx
  __int64 v10; // r9
  _DWORD *v11; // r12
  __int64 v12; // r11
  unsigned int v13; // r13d
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // edi
  char *v17; // r15
  _WORD *v18; // rsi
  int v19; // ecx
  __int64 v20; // rdx
  __int64 result; // rax
  unsigned int v22; // eax
  bool v23; // zf
  unsigned int v24; // ecx
  unsigned int v25; // edx
  int v26; // edi
  unsigned int v27; // r9d
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  _WORD *v30; // rcx
  unsigned int v31; // ecx
  _WORD *v32; // rax
  unsigned __int64 v33; // r13
  int v34; // ecx
  _WORD *i; // rdi
  __int64 v37; // rdx
  unsigned int v38; // r12d
  int RegistryDirect; // eax
  unsigned __int16 v42; // [rsp+40h] [rbp-28h] BYREF
  __int16 v43; // [rsp+42h] [rbp-26h]
  _WORD *v44; // [rsp+48h] [rbp-20h]
  _WORD v45[4]; // [rsp+50h] [rbp-18h] BYREF
  _WORD *v46; // [rsp+58h] [rbp-10h]
  unsigned int v48; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v49; // [rsp+C0h] [rbp+58h]
  _DWORD *v50; // [rsp+C8h] [rbp+60h]

  v50 = a4;
  v7 = 0;
  v49 = a3;
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
          v18 = (_WORD *)((char *)v11 + v15);
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
          v48 = a3 + v10;
          if ( (int)a3 + (int)v10 - (int)v17 < v26 )
          {
            result = 3221225507LL;
            *a4 = v26 + (_DWORD)v17 - a3;
            return result;
          }
          memmove(v17, (const void *)(a3 + 20), v24);
          v27 = v48;
          v12 = a1;
          *(_WORD *)&v17[v11[4]] = 0;
          v13 = v11[1];
          v28 = v26;
          v16 = v11[3];
          v29 = (unsigned __int64)&v17[v28 + 7];
          v15 = v11[2];
          a3 = v29 & 0xFFFFFFFFFFFFFFF8uLL;
          v49 = a3;
          v10 = v27 - (unsigned int)a3;
          goto LABEL_6;
        }
        return 3221225532LL;
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
  v18 = *(_WORD **)(a2 + 40);
  if ( !v16 )
  {
    v30 = *(_WORD **)(a2 + 40);
    if ( v14 - 1 <= 1 )
    {
      if ( !v18 )
        return 3221225532LL;
      while ( *v30++ )
        ;
      v16 = (_DWORD)v30 - (_DWORD)v18;
    }
    else if ( v14 == 7 )
    {
      if ( !v18 )
        return 3221225532LL;
      if ( *v18 )
      {
        do
        {
          while ( *v30++ )
            ;
        }
        while ( *v30 );
      }
      v16 = (_DWORD)v30 - (_DWORD)v18 + 2;
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
      return 0LL;
    else
      return 3221225524LL;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v13 )
    return 3221225508LL;
LABEL_10:
  if ( (v19 & 0x10) == 0 )
  {
    if ( v13 == 7 )
    {
      v33 = (unsigned __int64)v18 + v16 - 4;
      v34 = 0;
      for ( i = v18; (unsigned __int64)i < v33; v18 = i )
      {
        while ( *i++ )
          ;
        v37 = *(unsigned int *)(a2 + 8);
        v38 = (_DWORD)i - (_DWORD)v18;
        if ( (v37 & 0x20) != 0 )
        {
          if ( a7 )
          {
            v34 = RtlpValidateKeyTrust(v12, v37, a3, v10);
            if ( v34 < 0 )
              return (unsigned int)v34;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, v18, v38, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, _WORD *, _QWORD, __int64, _QWORD))a2)(
                             v17,
                             1LL,
                             v18,
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
      return (unsigned int)v34;
    }
    if ( v13 == 2 && v16 - 2 <= 0xFFFA )
    {
      v31 = v16 - 2;
      v32 = v18;
      if ( v16 != 2 )
      {
        while ( *v32 != 37 )
        {
          ++v32;
          v31 -= 2;
          if ( !v31 )
            goto LABEL_13;
        }
        v46 = v18;
        v45[1] = v16;
        v45[0] = v16 - 2;
        v44 = (_WORD *)a3;
        v42 = 0;
        if ( (int)v10 <= 0 )
        {
          v43 = 0;
        }
        else if ( (unsigned __int64)(int)v10 > 0xFFFE )
        {
          v43 = -2;
          *(_WORD *)(a3 + 65532) = 0;
        }
        else
        {
          v43 = v10;
          *(_WORD *)(a3 + 2 * ((unsigned __int64)(int)v10 >> 1) - 2) = 0;
        }
        result = RtlExpandEnvironmentStrings_U(a6, v45, &v42, &v48);
        v13 = 1;
        if ( (int)result < 0 )
        {
          if ( (_DWORD)result == -1073741789 )
          {
            *v50 = v48 + v49 - (_DWORD)v11;
            if ( v43 != -2 && v48 <= 0xFFFC )
              return result;
          }
          else if ( (_DWORD)result != -2147483643 )
          {
            return result;
          }
        }
        else
        {
          v18 = v44;
          v16 = v42 + 2;
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
      if ( (int)result < 0 )
        return result;
    }
    v22 = RtlpQueryRegistryDirect(v13, v18, v16, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(char *, _QWORD, _WORD *, _QWORD, __int64, _QWORD))a2)(
            v17,
            v13,
            v18,
            v16,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v22 != -1073741789 )
    return v22;
  return v7;
}

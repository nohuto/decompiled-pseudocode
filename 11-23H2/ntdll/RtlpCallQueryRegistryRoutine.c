/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x180009040
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180008C2C (RtlpQueryRegistryValues.c)
 * Callees:
 *     RtlpValidateKeyTrust @ 0x180009378 (RtlpValidateKeyTrust.c)
 *     RtlpQueryRegistryDirect @ 0x1800093C8 (RtlpQueryRegistryDirect.c)
 *     RtlExpandEnvironmentStrings_U @ 0x1800599B0 (RtlExpandEnvironmentStrings_U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // r10
  unsigned int v13; // r14d
  int v14; // ecx
  int v15; // eax
  char *v16; // r12
  _WORD *v17; // rsi
  unsigned int v18; // edi
  int v19; // ecx
  __int64 v20; // rdx
  __int64 result; // rax
  unsigned int v22; // eax
  bool v23; // cf
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // ecx
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  unsigned int v29; // ecx
  _WORD *v30; // rax
  _WORD *v31; // rcx
  unsigned __int64 v32; // r13
  int v33; // ecx
  _WORD *i; // rdi
  __int64 v36; // rdx
  unsigned int v37; // r14d
  int RegistryDirect; // eax
  unsigned __int16 v41; // [rsp+40h] [rbp-28h] BYREF
  __int16 v42; // [rsp+42h] [rbp-26h]
  _WORD *v43; // [rsp+48h] [rbp-20h]
  _WORD v44[4]; // [rsp+50h] [rbp-18h] BYREF
  _WORD *v45; // [rsp+58h] [rbp-10h]
  unsigned int v47; // [rsp+B8h] [rbp+50h] BYREF
  _DWORD *v48; // [rsp+C0h] [rbp+58h]
  _DWORD *v49; // [rsp+C8h] [rbp+60h]

  v49 = a4;
  v8 = 0;
  v9 = (unsigned int)*a4;
  *a4 = 0;
  v11 = (unsigned __int64)a3;
  v12 = a1;
  v48 = a3;
  v13 = *(unsigned __int8 *)(a2 + 32);
  if ( a3[1] )
  {
    v14 = a3[2];
    if ( v14 != -1 )
    {
      v15 = a3[3];
      if ( v15 || a3[1] != v13 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v16 = *(char **)(a2 + 16);
LABEL_6:
          v13 = a3[1];
          v17 = (_WORD *)((char *)a3 + (unsigned int)a3[2]);
          v18 = a3[3];
          goto LABEL_7;
        }
        if ( v15 )
          v24 = (unsigned int)(v14 + v15);
        else
          v24 = (unsigned int)(a3[4] + 20);
        v25 = a3[4];
        v16 = (char *)(((unsigned __int64)a3 + v24 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v26 = v25 + 2;
        v27 = (int)(v25 + 2);
        if ( v27 >= 2 )
        {
          v47 = (_DWORD)a3 + v9;
          if ( (int)a3 + (int)v9 - (int)v16 < v26 )
          {
            result = 3221225507LL;
            *a4 = v26 + (_DWORD)v16 - (_DWORD)a3;
            return result;
          }
          memmove(v16, a3 + 5, v25);
          v28 = (unsigned int)a3[4];
          v12 = a1;
          v11 = (unsigned __int64)&v16[v27 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v48 = (_DWORD *)v11;
          v9 = v47 - (unsigned int)v11;
          *(_WORD *)&v16[v28] = 0;
          goto LABEL_6;
        }
        return 3221225532LL;
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
  v17 = *(_WORD **)(a2 + 40);
  if ( !v18 )
  {
    v31 = *(_WORD **)(a2 + 40);
    if ( v13 - 1 <= 1 )
    {
      if ( !v17 )
        return 3221225532LL;
      while ( *v31++ )
        ;
      v18 = (_DWORD)v31 - (_DWORD)v17;
    }
    else if ( v13 == 7 )
    {
      if ( !v17 )
        return 3221225532LL;
      if ( *v17 )
      {
        do
        {
          while ( *v31++ )
            ;
        }
        while ( *v31 );
      }
      v18 = (_DWORD)v31 - (_DWORD)v17 + 2;
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
    return 3221225508LL;
LABEL_10:
  if ( (v19 & 0x10) == 0 )
  {
    if ( v13 == 7 )
    {
      v32 = (unsigned __int64)v17 + v18 - 4;
      v33 = 0;
      for ( i = v17; (unsigned __int64)i < v32; v17 = i )
      {
        while ( *i++ )
          ;
        v36 = *(unsigned int *)(a2 + 8);
        v37 = (_DWORD)i - (_DWORD)v17;
        if ( (v36 & 0x20) != 0 )
        {
          if ( a7 )
          {
            v33 = RtlpValidateKeyTrust(v12, v36, v9);
            if ( v33 < 0 )
              return (unsigned int)v33;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, v17, v37, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, _WORD *, _QWORD, __int64, _QWORD))a2)(
                             v16,
                             1LL,
                             v17,
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
      return (unsigned int)v33;
    }
    if ( v13 == 2 && v18 - 2 <= 0xFFFA )
    {
      v29 = v18 - 2;
      v30 = v17;
      if ( v18 != 2 )
      {
        while ( *v30 != 37 )
        {
          ++v30;
          v29 -= 2;
          if ( !v29 )
            goto LABEL_13;
        }
        v45 = v17;
        v44[1] = v18;
        v44[0] = v18 - 2;
        v43 = (_WORD *)v11;
        v41 = 0;
        if ( (int)v9 <= 0 )
        {
          v42 = 0;
        }
        else if ( (unsigned __int64)(int)v9 > 0xFFFE )
        {
          v42 = -2;
          *(_WORD *)(v11 + 65532) = 0;
        }
        else
        {
          v42 = v9;
          *(_WORD *)(v11 + 2 * ((unsigned __int64)(int)v9 >> 1) - 2) = 0;
        }
        result = RtlExpandEnvironmentStrings_U(a6, v44, &v41, &v47);
        v13 = 1;
        if ( (int)result < 0 )
        {
          if ( (_DWORD)result == -1073741789 )
          {
            *v49 = v47 + (_DWORD)v48 - (_DWORD)a3;
            if ( v42 != -2 && v47 <= 0xFFFC )
              return result;
          }
          else if ( (_DWORD)result != -2147483643 )
          {
            return result;
          }
        }
        else
        {
          v17 = v43;
          v18 = v41 + 2;
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
      if ( (int)result < 0 )
        return result;
    }
    v22 = RtlpQueryRegistryDirect(v13, v17, v18, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(char *, _QWORD, _WORD *, _QWORD, __int64, _QWORD))a2)(
            v16,
            v13,
            v17,
            v18,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v22 != -1073741789 )
    return v22;
  return v8;
}

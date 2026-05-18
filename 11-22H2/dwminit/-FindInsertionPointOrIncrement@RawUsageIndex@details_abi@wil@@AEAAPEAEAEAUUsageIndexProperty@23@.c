/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18000BD20
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000C7B0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1800025DA (_invalid_parameter_noinfo.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000C190 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x18000E2C4 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  _DWORD *v6; // rdi
  char v7; // bl
  int v8; // r12d
  unsigned __int8 *v9; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  char v15; // al
  _WORD *v16; // rax
  _DWORD *v17; // rax
  unsigned __int64 v18; // rsi
  size_t v19; // rdi
  __int64 v20; // rax
  unsigned __int8 *v21; // r8
  int v22; // ecx
  unsigned __int8 *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // esi
  unsigned __int8 *v27; // r8
  bool v28; // zf
  _WORD *v30; // rax
  _DWORD *v31; // rax
  int v32; // r8d
  unsigned __int8 *v33; // [rsp+20h] [rbp-50h]
  __int16 v34; // [rsp+28h] [rbp-48h] BYREF
  char v35; // [rsp+2Ah] [rbp-46h]
  int v36; // [rsp+2Ch] [rbp-44h]
  unsigned __int16 v37; // [rsp+30h] [rbp-40h]
  void *v38[2]; // [rsp+38h] [rbp-38h]
  __int16 v39; // [rsp+48h] [rbp-28h] BYREF
  char v40; // [rsp+4Ah] [rbp-26h]
  int v41; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v42; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  unsigned __int8 *v44; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = (_DWORD *)((char *)a2 + 4);
  v7 = 0;
  v34 = *((_WORD *)this + 3);
  v8 = -1;
  v35 = *((_BYTE *)this + 8);
  v9 = a3;
  v36 = 0;
  v37 = 0;
  *(_OWORD *)v38 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - (_QWORD)a3) % *((_QWORD *)this + 2);
    v13 = (*((_QWORD *)this + 4) - (_QWORD)a3) / *((_QWORD *)this + 2);
    v14 = (unsigned int)*v6;
    if ( v14 <= v13 || (_DWORD)v14 == (_DWORD)v13 )
      goto LABEL_13;
    v15 = *((_BYTE *)a2 + 2);
    *v6 = v13;
    if ( v15 == 1 )
    {
      v16 = (_WORD *)*((_QWORD *)a2 + 2);
      if ( v16 )
      {
        *v16 = v13;
LABEL_13:
        v18 = (unsigned int)*v6;
        v19 = Size;
        v20 = *((_QWORD *)this + 2) * (unsigned int)v18;
        *(_OWORD *)Buf2 = 0LL;
        v41 = 0;
        v42 = 0;
        v33 = &v9[v20];
        v39 = *((_WORD *)this + 3);
        v40 = *((_BYTE *)this + 8);
        while ( v18 )
        {
          v21 = (unsigned __int8 *)*((_QWORD *)this + 4);
          v44 = &v9[*((_QWORD *)this + 2) * (v18 >> 1)];
          wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v39, &v44, v21);
          if ( v19 == v42 )
            v22 = memcmp_0(Buf1, Buf2[1], v19);
          else
            v22 = v19 - v42;
          if ( v22 <= 0 )
          {
            v18 >>= 1;
          }
          else
          {
            v9 = v44;
            v18 += -1LL - (v18 >> 1);
          }
        }
        if ( v9 < v33 )
        {
          v23 = (unsigned __int8 *)*((_QWORD *)this + 4);
          v44 = v9;
          wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v34, &v44, v23);
          if ( v19 == v37 )
            v8 = memcmp_0(Buf1, v38[1], v19);
          else
            v8 = v19 - v37;
          goto LABEL_43;
        }
        return v9;
      }
    }
    else
    {
      if ( v15 != 2 )
        goto LABEL_13;
      v17 = (_DWORD *)*((_QWORD *)a2 + 2);
      if ( v17 )
      {
        if ( v6 )
        {
          *v17 = v13;
          goto LABEL_13;
        }
        v13 = 0LL;
        *v17 = 0;
      }
    }
    *(_DWORD *)_o__errno(v13, v12) = 22;
    invalid_parameter_noinfo();
    goto LABEL_13;
  }
  v26 = 0;
  if ( !*v6 )
    return v9;
  while ( 1 )
  {
    v27 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v44 = v9;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v34, &v44, v27) )
      break;
    if ( Size == v37 )
    {
      v8 = memcmp_0(Buf1, v38[1], Size);
    }
    else
    {
      v25 = (unsigned int)Size - v37;
      v8 = Size - v37;
    }
    v28 = v8 == 0;
    if ( v8 <= 0 )
      goto LABEL_44;
    v9 = v44;
    if ( (unsigned int)++v26 >= *v6 )
      return v9;
  }
  if ( *v6 != v26 )
  {
    v28 = *((_BYTE *)a2 + 2) == 1;
    *v6 = v26;
    if ( v28 )
    {
      v30 = (_WORD *)*((_QWORD *)a2 + 2);
      if ( v30 )
      {
        *v30 = v26;
        goto LABEL_43;
      }
    }
    else
    {
      if ( *((_BYTE *)a2 + 2) != 2 )
        goto LABEL_43;
      v31 = (_DWORD *)*((_QWORD *)a2 + 2);
      if ( v31 )
      {
        if ( v6 )
        {
          *v31 = v26;
          goto LABEL_43;
        }
        *v31 = 0;
      }
    }
    *(_DWORD *)((__int64 (*)(void))_o__errno)() = 22;
    invalid_parameter_noinfo();
  }
LABEL_43:
  v28 = v8 == 0;
LABEL_44:
  if ( !v28 )
    return v9;
  LOBYTE(v24) = v35;
  if ( v35 )
  {
    v32 = v36 + a6;
    if ( v36 != v36 + a6 )
    {
      if ( v35 == 1 )
      {
        if ( v38[0] )
        {
          *(_WORD *)v38[0] = v32;
          goto LABEL_55;
        }
      }
      else
      {
        if ( v35 != 2 )
          goto LABEL_55;
        if ( v38[0] )
        {
          *(_DWORD *)v38[0] = v32;
          goto LABEL_55;
        }
      }
      *(_DWORD *)_o__errno(v25, v24) = 22;
      invalid_parameter_noinfo();
    }
LABEL_55:
    v7 = 1;
    goto LABEL_56;
  }
  if ( *((_BYTE *)this + 56) )
    goto LABEL_55;
LABEL_56:
  *((_BYTE *)this + 56) = v7;
  return 0LL;
}

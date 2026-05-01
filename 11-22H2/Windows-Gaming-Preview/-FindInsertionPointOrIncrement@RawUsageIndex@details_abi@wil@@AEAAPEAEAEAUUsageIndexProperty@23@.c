/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x1800055F4
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800058D8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180005124 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     _invalid_parameter_noinfo @ 0x18004C59E (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x18004CE64 (memcmp_0.c)
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
  _WORD *v15; // rax
  _DWORD *v16; // rax
  unsigned __int64 v17; // rsi
  size_t v18; // rdi
  __int64 v19; // rax
  unsigned __int8 *v20; // r8
  int v21; // ecx
  unsigned __int8 *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // esi
  unsigned __int8 *v26; // r8
  bool v27; // zf
  _WORD *v29; // rax
  _DWORD *v30; // rax
  bool v31; // di
  int v32; // r8d
  char *v33; // rax
  unsigned __int8 *v34; // [rsp+20h] [rbp-50h]
  __int16 v35; // [rsp+28h] [rbp-48h] BYREF
  char v36; // [rsp+2Ah] [rbp-46h]
  int v37; // [rsp+2Ch] [rbp-44h]
  unsigned __int16 v38; // [rsp+30h] [rbp-40h]
  void *v39[2]; // [rsp+38h] [rbp-38h]
  __int16 v40; // [rsp+48h] [rbp-28h] BYREF
  char v41; // [rsp+4Ah] [rbp-26h]
  int v42; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v43; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  unsigned __int8 *v45; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = (_DWORD *)((char *)a2 + 4);
  v7 = 0;
  v35 = *((_WORD *)this + 3);
  v8 = -1;
  v36 = *((_BYTE *)this + 8);
  v9 = a3;
  v37 = 0;
  v38 = 0;
  *(_OWORD *)v39 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - (_QWORD)a3) % *((_QWORD *)this + 2);
    v13 = (*((_QWORD *)this + 4) - (_QWORD)a3) / *((_QWORD *)this + 2);
    v14 = (unsigned int)*v6;
    if ( v14 <= v13 || (_DWORD)v14 == (_DWORD)v13 )
      goto LABEL_13;
    v27 = *((_BYTE *)a2 + 2) == 1;
    *v6 = v13;
    if ( v27 )
    {
      v15 = (_WORD *)*((_QWORD *)a2 + 2);
      if ( v15 )
      {
        *v15 = v13;
LABEL_13:
        v17 = (unsigned int)*v6;
        v18 = Size;
        v19 = *((_QWORD *)this + 2) * (unsigned int)v17;
        *(_OWORD *)Buf2 = 0LL;
        v42 = 0;
        v43 = 0;
        v34 = &v9[v19];
        v40 = *((_WORD *)this + 3);
        v41 = *((_BYTE *)this + 8);
        while ( v17 )
        {
          v20 = (unsigned __int8 *)*((_QWORD *)this + 4);
          v45 = &v9[*((_QWORD *)this + 2) * (v17 >> 1)];
          wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v40, &v45, v20);
          if ( v18 == v43 )
            v21 = memcmp_0(Buf1, Buf2[1], v18);
          else
            v21 = v18 - v43;
          if ( v21 <= 0 )
          {
            v17 >>= 1;
          }
          else
          {
            v9 = v45;
            v17 += -1LL - (v17 >> 1);
          }
        }
        if ( v9 < v34 )
        {
          v22 = (unsigned __int8 *)*((_QWORD *)this + 4);
          v45 = v9;
          wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v35, &v45, v22);
          if ( v18 == v38 )
            v8 = memcmp_0(Buf1, v39[1], v18);
          else
            v8 = v18 - v38;
          goto LABEL_43;
        }
        return v9;
      }
    }
    else
    {
      if ( *((_BYTE *)a2 + 2) != 2 )
        goto LABEL_13;
      v16 = (_DWORD *)*((_QWORD *)a2 + 2);
      if ( v16 )
      {
        if ( v6 )
        {
          *v16 = v13;
          goto LABEL_13;
        }
        v13 = 0LL;
        *v16 = 0;
      }
    }
    *(_DWORD *)_o__errno(v13, v12) = 22;
    invalid_parameter_noinfo();
    goto LABEL_13;
  }
  v25 = 0;
  if ( !*v6 )
    return v9;
  while ( 1 )
  {
    v26 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v45 = v9;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v35, &v45, v26) )
      break;
    if ( Size == v38 )
    {
      v8 = memcmp_0(Buf1, v39[1], Size);
    }
    else
    {
      v24 = (unsigned int)Size - v38;
      v8 = Size - v38;
    }
    v27 = v8 == 0;
    if ( v8 <= 0 )
      goto LABEL_44;
    v9 = v45;
    if ( (unsigned int)++v25 >= *v6 )
      return v9;
  }
  if ( *v6 != v25 )
  {
    v27 = *((_BYTE *)a2 + 2) == 1;
    *v6 = v25;
    if ( v27 )
    {
      v29 = (_WORD *)*((_QWORD *)a2 + 2);
      if ( v29 )
      {
        *v29 = v25;
        goto LABEL_43;
      }
    }
    else
    {
      if ( *((_BYTE *)a2 + 2) != 2 )
        goto LABEL_43;
      v30 = (_DWORD *)*((_QWORD *)a2 + 2);
      if ( v30 )
      {
        if ( v6 )
        {
          *v30 = v25;
          goto LABEL_43;
        }
        *v30 = 0;
      }
    }
    *(_DWORD *)((__int64 (*)(void))_o__errno)() = 22;
    invalid_parameter_noinfo();
  }
LABEL_43:
  v27 = v8 == 0;
LABEL_44:
  if ( !v27 )
    return v9;
  LOBYTE(v23) = v36;
  v31 = v36 != 0;
  if ( !v36 )
    goto LABEL_54;
  v32 = v37 + a6;
  if ( v37 == v37 + a6 )
    goto LABEL_54;
  if ( v36 == 1 )
  {
    if ( v39[0] )
    {
      *(_WORD *)v39[0] = v32;
      goto LABEL_54;
    }
LABEL_52:
    *(_DWORD *)_o__errno(v24, v23) = 22;
    invalid_parameter_noinfo();
    goto LABEL_54;
  }
  if ( v36 != 2 )
    goto LABEL_54;
  if ( !v39[0] )
    goto LABEL_52;
  *(_DWORD *)v39[0] = v32;
LABEL_54:
  v33 = (char *)this + 56;
  if ( v31 || *v33 )
    v7 = 1;
  *v33 = v7;
  return 0LL;
}

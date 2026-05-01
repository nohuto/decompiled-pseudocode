/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180005454
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005730 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180004F98 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     _invalid_parameter_noinfo @ 0x18004B6AE (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x18004BF77 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  char v6; // bl
  int v7; // r12d
  void *v8; // r13
  unsigned __int8 *v9; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  _WORD *v16; // rax
  unsigned __int64 v17; // rsi
  size_t v18; // rdi
  __int64 v19; // rax
  unsigned __int8 *v20; // r8
  int v21; // ecx
  unsigned __int8 *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // esi
  size_t v26; // r13
  unsigned __int8 *v27; // r8
  bool v28; // zf
  _WORD *v30; // rax
  _DWORD *v31; // rax
  bool v32; // di
  int v33; // r8d
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
  v6 = 0;
  v35 = *((_WORD *)this + 3);
  v7 = -1;
  v8 = a4;
  v36 = *((_BYTE *)this + 8);
  v9 = a3;
  v37 = 0;
  v38 = 0;
  *(_OWORD *)v39 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - (_QWORD)a3) / *((_QWORD *)this + 2);
    v13 = (*((_QWORD *)this + 4) - (_QWORD)a3) % *((_QWORD *)this + 2);
    v14 = *((unsigned int *)a2 + 1);
    if ( v14 > v12 && (_DWORD)v14 != (_DWORD)v12 )
    {
      v28 = *((_BYTE *)a2 + 2) == 1;
      *((_DWORD *)a2 + 1) = v12;
      if ( v28 )
      {
        v15 = (unsigned __int16)v12;
        v16 = (_WORD *)*((_QWORD *)a2 + 2);
        if ( v16 )
        {
          *v16 = v15;
          goto LABEL_11;
        }
LABEL_9:
        *(_DWORD *)_o__errno(v15, v13) = 22;
        invalid_parameter_noinfo();
        goto LABEL_11;
      }
      if ( *((_BYTE *)a2 + 2) != 2 )
        goto LABEL_11;
      v15 = *((_QWORD *)a2 + 2);
      if ( !v15 )
        goto LABEL_9;
      *(_DWORD *)v15 = v12;
    }
LABEL_11:
    v17 = *((unsigned int *)a2 + 1);
    v18 = Size;
    v19 = v17 * *((_QWORD *)this + 2);
    *(_OWORD *)Buf2 = 0LL;
    v42 = 0;
    v43 = 0;
    v34 = &v9[v19];
    v40 = *((_WORD *)this + 3);
    v41 = *((_BYTE *)this + 8);
    if ( v17 )
    {
      do
      {
        v20 = (unsigned __int8 *)*((_QWORD *)this + 4);
        v45 = &v9[(v17 >> 1) * *((_QWORD *)this + 2)];
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
      while ( v17 );
      v8 = Buf1;
    }
    if ( v9 < v34 )
    {
      v22 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v45 = v9;
      wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v35, &v45, v22);
      if ( v18 == v38 )
        v7 = memcmp_0(v8, v39[1], v18);
      else
        v7 = v18 - v38;
      goto LABEL_41;
    }
    return v9;
  }
  v25 = 0;
  if ( !*((_DWORD *)a2 + 1) )
    return v9;
  v26 = Size;
  while ( 1 )
  {
    v27 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v45 = v9;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v35, &v45, v27) )
      break;
    if ( v26 == v38 )
      v7 = memcmp_0(Buf1, v39[1], v26);
    else
      v7 = v26 - v38;
    v28 = v7 == 0;
    if ( v7 <= 0 )
      goto LABEL_42;
    v9 = v45;
    if ( (unsigned int)++v25 >= *((_DWORD *)a2 + 1) )
      return v9;
  }
  if ( *((_DWORD *)a2 + 1) != v25 )
  {
    v28 = *((_BYTE *)a2 + 2) == 1;
    *((_DWORD *)a2 + 1) = v25;
    if ( v28 )
    {
      v30 = (_WORD *)*((_QWORD *)a2 + 2);
      if ( v30 )
      {
        *v30 = v25;
        goto LABEL_41;
      }
    }
    else
    {
      if ( *((_BYTE *)a2 + 2) != 2 )
        goto LABEL_41;
      v31 = (_DWORD *)*((_QWORD *)a2 + 2);
      if ( v31 )
      {
        *v31 = v25;
        goto LABEL_41;
      }
    }
    *(_DWORD *)((__int64 (*)(void))_o__errno)() = 22;
    invalid_parameter_noinfo();
  }
LABEL_41:
  v28 = v7 == 0;
LABEL_42:
  if ( !v28 )
    return v9;
  LOBYTE(v23) = v36;
  v32 = v36 != 0;
  if ( !v36 )
    goto LABEL_52;
  v33 = v37 + a6;
  if ( v37 == v37 + a6 )
    goto LABEL_52;
  if ( v36 == 1 )
  {
    if ( v39[0] )
    {
      *(_WORD *)v39[0] = v33;
      goto LABEL_52;
    }
LABEL_50:
    *(_DWORD *)_o__errno(v24, v23) = 22;
    invalid_parameter_noinfo();
    goto LABEL_52;
  }
  if ( v36 != 2 )
    goto LABEL_52;
  if ( !v39[0] )
    goto LABEL_50;
  *(_DWORD *)v39[0] = v33;
LABEL_52:
  if ( v32 || *((_BYTE *)this + 56) )
    v6 = 1;
  *((_BYTE *)this + 56) = v6;
  return 0LL;
}

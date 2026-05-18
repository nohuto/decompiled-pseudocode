/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000C7B0
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18000C638 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1800025DA (_invalid_parameter_noinfo.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18000BD20 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000C190 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18000DA18 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x18000E2C4 (memcmp_0.c)
 *     memmove_0 @ 0x18000E2DC (memmove_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  char *v10; // rdi
  char v11; // r13
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // esi
  unsigned int v17; // r14d
  unsigned int v18; // esi
  unsigned __int8 *v19; // r8
  char v21; // r14
  __int64 v22; // rcx
  int v23; // r13d
  _WORD *v24; // rsi
  __int64 v26; // rax
  char v27; // dl
  unsigned __int64 v28; // rdx
  __int64 v29; // r15
  unsigned __int64 v30; // r8
  char *v31; // rcx
  size_t v32; // rdx
  size_t v33; // r8
  unsigned __int8 *v34; // r8
  int v35; // eax
  void *Src; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v37; // [rsp+38h] [rbp-48h] BYREF
  char v38; // [rsp+3Ah] [rbp-46h]
  unsigned int v39; // [rsp+3Ch] [rbp-44h]
  unsigned __int16 v40; // [rsp+40h] [rbp-40h]
  void *Buf2[2]; // [rsp+48h] [rbp-38h]
  __int16 v42; // [rsp+58h] [rbp-28h] BYREF
  char v43; // [rsp+5Ah] [rbp-26h]
  unsigned int v44; // [rsp+5Ch] [rbp-24h]
  __int16 v45; // [rsp+60h] [rbp-20h]
  __int128 v46; // [rsp+68h] [rbp-18h]
  char v47; // [rsp+C0h] [rbp+40h]

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v37 = *((_WORD *)this + 1);
  v10 = (char *)(v6 + 10);
  v11 = 0;
  v38 = *((_BYTE *)this + 4);
  v39 = 0;
  v40 = 0;
  *(_OWORD *)Buf2 = 0LL;
  v47 = 0;
  while ( 1 )
  {
    v19 = (unsigned __int8 *)*((_QWORD *)this + 4);
    Src = v10;
    if ( !wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v37,
            (unsigned __int8 **)&Src,
            v19) )
    {
      v10 = (char *)Src;
      *((_QWORD *)this + 4) = Src;
      goto LABEL_34;
    }
    if ( Size == v40 )
      v13 = (unsigned int)memcmp_0(Buf1, Buf2[1], Size);
    else
      v13 = (unsigned int)Size - v40;
    if ( (v13 & 0x80000000) != 0LL )
    {
      Src = v10;
      goto LABEL_34;
    }
    if ( !(_DWORD)v13 )
      break;
    v10 = (char *)Src;
    if ( *((_QWORD *)this + 2) )
    {
      v14 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
      v15 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) % *((_QWORD *)this + 2);
      v16 = v39;
      if ( v39 > v14 && v39 != (_DWORD)v14 )
      {
        v16 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
        v39 = v16;
        if ( v38 == 1 )
        {
          v13 = (unsigned __int64)Buf2[0];
          if ( Buf2[0] )
          {
            *(_WORD *)Buf2[0] = v14;
            goto LABEL_18;
          }
        }
        else
        {
          if ( v38 != 2 )
            goto LABEL_18;
          if ( Buf2[0] )
          {
            *(_DWORD *)Buf2[0] = v14;
            goto LABEL_18;
          }
        }
        *(_DWORD *)_o__errno(v13, v15) = 22;
        invalid_parameter_noinfo();
      }
LABEL_18:
      v10 += *((_QWORD *)this + 2) * v16;
    }
    else
    {
      v17 = v39;
      v18 = 0;
      v42 = *((_WORD *)this + 3);
      v43 = *((_BYTE *)this + 8);
      v44 = 0;
      v45 = 0;
      v46 = 0LL;
      if ( v39 )
      {
        v11 = 0;
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v42,
                  (unsigned __int8 **)&Src,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v18;
        }
        while ( v18 < v17 );
        v10 = (char *)Src;
      }
      if ( v17 != v18 )
      {
        v39 = v18;
        if ( v38 == 1 )
        {
          if ( !Buf2[0] )
            goto LABEL_31;
          *(_WORD *)Buf2[0] = v18;
        }
        else if ( v38 == 2 )
        {
          if ( Buf2[0] )
          {
            *(_DWORD *)Buf2[0] = v18;
          }
          else
          {
LABEL_31:
            *(_DWORD *)_o__errno(v13, v12) = 22;
            invalid_parameter_noinfo();
          }
        }
      }
    }
  }
  Src = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
          this,
          (struct wil::details_abi::UsageIndexProperty *)&v37,
          (unsigned __int8 *)Src,
          a4,
          a5,
          a6);
  v10 = (char *)Src;
  if ( !Src )
    return 1;
  v11 = 1;
  v47 = 1;
LABEL_34:
  v21 = v38;
  v22 = 0LL;
  if ( v11 )
  {
    v24 = Buf2[0];
    v23 = v39;
  }
  else
  {
    v23 = 1;
    v39 = 1;
    v24 = 0LL;
    v40 = Size;
    Buf2[0] = 0LL;
    Buf2[1] = Buf1;
    if ( v37 )
      v22 = v37;
    else
      v22 = (unsigned __int16)Size + 2LL;
    if ( v38 == 1 )
    {
      v22 += 2LL;
    }
    else if ( v38 == 2 )
    {
      v22 += 4LL;
    }
  }
  v26 = *((unsigned __int16 *)this + 3);
  v27 = *((_BYTE *)this + 8);
  v44 = a6;
  v45 = a5;
  v42 = v26;
  v43 = v27;
  *(_QWORD *)&v46 = 0LL;
  *((_QWORD *)&v46 + 1) = a4;
  if ( !(_WORD)v26 )
    v26 = (unsigned __int16)a5 + 2LL;
  if ( v27 == 1 )
  {
    v26 += 2LL;
  }
  else if ( v27 == 2 )
  {
    v26 += 4LL;
  }
  v28 = *((_QWORD *)this + 5);
  v29 = v26 + v22;
  v30 = *((_QWORD *)this + 4);
  if ( ((v28 - v30) & -(__int64)(v30 < v28)) >= v26 + v22 )
  {
    v31 = &v10[v29];
    v32 = v28 - v29 - (_QWORD)v10;
    v33 = v30 - (_QWORD)v10;
    if ( !v33 )
      goto LABEL_62;
    if ( v31 && v10 )
    {
      if ( v32 >= v33 )
      {
        memmove_0(v31, v10, v33);
        goto LABEL_62;
      }
      *(_DWORD *)_o__errno(v31, v32) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v31, v32) = 22;
    }
    invalid_parameter_noinfo();
LABEL_62:
    v34 = (unsigned __int8 *)(v29 + *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = v34;
    if ( v47 )
    {
      if ( v21 )
      {
        v35 = v23 + 1;
        if ( v21 == 1 )
        {
          if ( v24 )
          {
            *v24 = v35;
            goto LABEL_72;
          }
        }
        else
        {
          if ( v21 != 2 )
            goto LABEL_72;
          if ( v24 )
          {
            *(_DWORD *)v24 = v35;
            goto LABEL_72;
          }
        }
        *(_DWORD *)_o__errno(v31, v32) = 22;
        invalid_parameter_noinfo();
      }
    }
    else
    {
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v37,
        (unsigned __int8 **)&Src,
        v34);
    }
LABEL_72:
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v42,
      (unsigned __int8 **)&Src,
      *((unsigned __int8 **)this + 4));
    *((_BYTE *)this + 56) = 1;
    return 1;
  }
  return 0;
}

/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800663A8
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180066294 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1800661D0 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800666E8 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18006671C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x1800669FC (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180066C74 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180069820 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     _invalid_parameter_noinfo @ 0x18009690A (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  void *v8; // r14
  unsigned __int8 *v10; // rbx
  char v11; // si
  unsigned __int8 *v12; // r8
  bool v13; // al
  unsigned int v14; // r15d
  unsigned __int64 v15; // r12
  int v16; // eax
  __int64 v17; // r10
  unsigned __int8 *InsertionPointOrIncrement; // rax
  int v19; // r14d
  unsigned __int64 Size; // rax
  char v21; // r10
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rdx
  unsigned __int8 *v27; // rcx
  size_t v28; // r9
  size_t v29; // r8
  char *v30; // r8
  unsigned __int64 v32; // rax
  unsigned int v33; // ecx
  unsigned int v34; // r15d
  unsigned int v35; // r14d
  unsigned __int8 *v36; // [rsp+30h] [rbp-50h] BYREF
  __int16 v37; // [rsp+38h] [rbp-48h] BYREF
  char v38; // [rsp+3Ah] [rbp-46h]
  unsigned int v39; // [rsp+3Ch] [rbp-44h]
  __int16 v40; // [rsp+40h] [rbp-40h]
  __int128 v41; // [rsp+48h] [rbp-38h]
  __int16 v42; // [rsp+58h] [rbp-28h] BYREF
  char v43; // [rsp+5Ah] [rbp-26h]
  unsigned int v44; // [rsp+5Ch] [rbp-24h]
  __int16 v45; // [rsp+60h] [rbp-20h]
  __int128 v46; // [rsp+68h] [rbp-18h]
  unsigned __int8 *v47; // [rsp+C0h] [rbp+40h] BYREF
  void *v48; // [rsp+C8h] [rbp+48h]
  void *v49; // [rsp+D8h] [rbp+58h]

  v49 = a4;
  v48 = a2;
  v6 = *((_QWORD *)this + 3);
  v8 = a2;
  if ( !v6 )
    return 0;
  v37 = *((_WORD *)this + 1);
  v10 = (unsigned __int8 *)(v6 + 10);
  v11 = 0;
  v38 = *((_BYTE *)this + 4);
  v39 = 0;
  v40 = 0;
  v41 = 0LL;
  while ( 1 )
  {
    v12 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v36 = v10;
    v13 = wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v37, &v36, v12);
    v14 = a6;
    v15 = a5;
    if ( !v13 )
    {
      v10 = v36;
      *((_QWORD *)this + 4) = v36;
      goto LABEL_9;
    }
    v16 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v37, v8, a3);
    v17 = 0LL;
    if ( v16 < 0 )
    {
      v36 = v10;
      goto LABEL_8;
    }
    if ( !v16 )
      break;
    v10 = v36;
    v47 = v36;
    if ( *((_QWORD *)this + 2) )
    {
      v32 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
      v33 = v39;
      if ( v39 > v32 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v37, v32);
        v33 = v39;
      }
      v10 += *((_QWORD *)this + 2) * v33;
    }
    else
    {
      v34 = v39;
      v35 = 0;
      v42 = *((_WORD *)this + 3);
      v43 = *((_BYTE *)this + 8);
      v44 = 0;
      v45 = 0;
      v46 = 0LL;
      if ( v39 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v42,
                  &v47,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v35;
        }
        while ( v35 < v34 );
        v10 = v47;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v37, v35);
      v8 = v48;
    }
  }
  InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                this,
                                (struct wil::details_abi::UsageIndexProperty *)&v37,
                                v36,
                                v49,
                                v15,
                                v14);
  v17 = 0LL;
  v36 = InsertionPointOrIncrement;
  v10 = InsertionPointOrIncrement;
  if ( !InsertionPointOrIncrement )
    return 1;
  v11 = 1;
LABEL_8:
  if ( !v11 )
  {
LABEL_9:
    v19 = 1;
    *((_QWORD *)&v41 + 1) = v48;
    v39 = 1;
    v40 = a3;
    *(_QWORD *)&v41 = 0LL;
    wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v37);
    goto LABEL_10;
  }
  v19 = v39;
LABEL_10:
  v42 = *((_WORD *)this + 3);
  v43 = *((_BYTE *)this + 8);
  v44 = v14;
  v45 = v15;
  *(_QWORD *)&v46 = v17;
  *((_QWORD *)&v46 + 1) = v49;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v42);
  v22 = *((_QWORD *)this + 5);
  v23 = *((_QWORD *)this + 4);
  v25 = v24 + Size;
  v26 = v22 - v23;
  if ( ((v22 - v23) & -(__int64)(v23 < v22)) < v25 )
    return 0;
  v27 = &v10[v25];
  v28 = v22 - v25 - (_QWORD)v10;
  v29 = v23 - (_QWORD)v10;
  if ( v29 )
  {
    if ( v27 && v10 )
    {
      if ( v28 >= v29 )
      {
        memmove_0(v27, v10, v29);
LABEL_30:
        v21 = 0;
        goto LABEL_12;
      }
      *(_DWORD *)_o__errno(v27, v26, v29, v28) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v27, v26, v29, v28) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_30;
  }
LABEL_12:
  v30 = (char *)(v25 + *((_QWORD *)this + 4));
  *((_QWORD *)this + 4) = v30;
  if ( v11 )
  {
    if ( v38 != v21 )
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v37, v19 + 1);
  }
  else
  {
    wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v37, (char **)&v36, v30);
  }
  wil::details_abi::UsageIndexProperty::Write(
    (wil::details_abi::UsageIndexProperty *)&v42,
    (char **)&v36,
    *((char **)this + 4));
  *((_BYTE *)this + 56) = 1;
  return 1;
}

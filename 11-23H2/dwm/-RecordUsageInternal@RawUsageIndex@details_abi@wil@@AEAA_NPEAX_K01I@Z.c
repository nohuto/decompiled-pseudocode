/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x140001A7C
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x140001820 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x140001638 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x140001D60 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x140001D94 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x140001ECC (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x140002034 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memmove_s @ 0x14000750C (memmove_s.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x14000C0D0 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  void *v8; // rsi
  unsigned __int8 *v10; // rdi
  char v11; // r14
  unsigned __int8 *v12; // r8
  bool v13; // al
  unsigned int v14; // r15d
  unsigned __int64 v15; // r12
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int8 *InsertionPointOrIncrement; // rax
  int v21; // esi
  unsigned __int64 Size; // rax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rdx
  unsigned __int8 *v27; // r8
  unsigned int v29; // r15d
  unsigned int v30; // esi
  unsigned __int8 *v31; // [rsp+30h] [rbp-50h] BYREF
  __int16 v32; // [rsp+38h] [rbp-48h] BYREF
  char v33; // [rsp+3Ah] [rbp-46h]
  unsigned int v34; // [rsp+3Ch] [rbp-44h]
  __int16 v35; // [rsp+40h] [rbp-40h]
  __int128 v36; // [rsp+48h] [rbp-38h]
  __int16 v37; // [rsp+58h] [rbp-28h] BYREF
  char v38; // [rsp+5Ah] [rbp-26h]
  unsigned int v39; // [rsp+5Ch] [rbp-24h]
  __int16 v40; // [rsp+60h] [rbp-20h]
  __int128 v41; // [rsp+68h] [rbp-18h]
  unsigned __int8 *v42; // [rsp+C0h] [rbp+40h] BYREF
  void *v43; // [rsp+C8h] [rbp+48h]
  void *v44; // [rsp+D8h] [rbp+58h]

  v44 = a4;
  v43 = a2;
  v6 = *((_QWORD *)this + 3);
  v8 = a2;
  if ( !v6 )
    return 0;
  v32 = *((_WORD *)this + 1);
  v10 = (unsigned __int8 *)(v6 + 10);
  v11 = 0;
  v33 = *((_BYTE *)this + 4);
  v34 = 0;
  v35 = 0;
  v36 = 0LL;
  while ( 1 )
  {
    v12 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v31 = v10;
    v13 = wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v32, &v31, v12);
    v14 = a6;
    v15 = a5;
    if ( !v13 )
    {
      v10 = v31;
      *((_QWORD *)this + 4) = v31;
      goto LABEL_13;
    }
    v16 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v32, v8, a3);
    v17 = 0LL;
    if ( v16 < 0 )
    {
      v31 = v10;
      goto LABEL_12;
    }
    if ( !v16 )
      break;
    v10 = v31;
    v42 = v31;
    if ( *((_QWORD *)this + 2) )
    {
      v18 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
      v19 = v34;
      if ( v34 > v18 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v32, v18);
        v19 = v34;
      }
      v10 += *((_QWORD *)this + 2) * v19;
    }
    else
    {
      v29 = v34;
      v30 = 0;
      v37 = *((_WORD *)this + 3);
      v38 = *((_BYTE *)this + 8);
      v39 = 0;
      v40 = 0;
      v41 = 0LL;
      if ( v34 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v37,
                  &v42,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v30;
        }
        while ( v30 < v29 );
        v10 = v42;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v32, v30);
      v8 = v43;
    }
  }
  InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                this,
                                (struct wil::details_abi::UsageIndexProperty *)&v32,
                                v31,
                                v44,
                                v15,
                                v14);
  v17 = 0LL;
  v31 = InsertionPointOrIncrement;
  v10 = InsertionPointOrIncrement;
  if ( !InsertionPointOrIncrement )
    return 1;
  v11 = 1;
LABEL_12:
  if ( !v11 )
  {
LABEL_13:
    v21 = 1;
    *((_QWORD *)&v36 + 1) = v43;
    v34 = 1;
    v35 = a3;
    *(_QWORD *)&v36 = 0LL;
    wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v32);
    goto LABEL_14;
  }
  v21 = v34;
LABEL_14:
  v37 = *((_WORD *)this + 3);
  v38 = *((_BYTE *)this + 8);
  v39 = v14;
  v40 = v15;
  *(_QWORD *)&v41 = v17;
  *((_QWORD *)&v41 + 1) = v44;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v37);
  v23 = *((_QWORD *)this + 4);
  v25 = v24 + Size;
  v26 = *((_QWORD *)this + 5);
  if ( ((v26 - v23) & -(__int64)(v23 < v26)) < v25 )
    return 0;
  memmove_s(&v10[v25], v26 - v25 - (_QWORD)v10, v10, v23 - (_QWORD)v10);
  v27 = (unsigned __int8 *)(v25 + *((_QWORD *)this + 4));
  *((_QWORD *)this + 4) = v27;
  if ( v11 )
  {
    if ( v33 )
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v32, v21 + 1);
  }
  else
  {
    wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v32, &v31, v27);
  }
  wil::details_abi::UsageIndexProperty::Write(
    (wil::details_abi::UsageIndexProperty *)&v37,
    &v31,
    *((unsigned __int8 **)this + 4));
  *((_BYTE *)this + 56) = 1;
  return 1;
}

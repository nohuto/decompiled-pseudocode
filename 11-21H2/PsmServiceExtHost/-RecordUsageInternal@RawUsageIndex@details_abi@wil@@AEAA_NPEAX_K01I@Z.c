/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18003FAB4
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18003F864 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18003F554 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18003FD84 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18003FDB8 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18003FE74 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x1800401CC (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1800814AC (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
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
  char *v10; // rdi
  char v11; // r13
  unsigned __int8 *v12; // r8
  bool v13; // al
  unsigned int v14; // esi
  unsigned __int64 v15; // r14
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // r8
  void *v21; // r15
  unsigned __int64 Size; // rax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int8 *v27; // r8
  unsigned __int8 *InsertionPointOrIncrement; // rax
  unsigned int v30; // esi
  __int16 v31; // [rsp+30h] [rbp-49h] BYREF
  char v32; // [rsp+32h] [rbp-47h]
  unsigned int v33; // [rsp+34h] [rbp-45h]
  __int16 v34; // [rsp+38h] [rbp-41h]
  __int128 v35; // [rsp+40h] [rbp-39h]
  __int16 v36; // [rsp+50h] [rbp-29h] BYREF
  char v37; // [rsp+52h] [rbp-27h]
  unsigned int v38; // [rsp+54h] [rbp-25h]
  __int16 v39; // [rsp+58h] [rbp-21h]
  __int64 v40; // [rsp+60h] [rbp-19h]
  void *v41; // [rsp+68h] [rbp-11h]
  __int16 v42; // [rsp+70h] [rbp-9h] BYREF
  char v43; // [rsp+72h] [rbp-7h]
  int v44; // [rsp+74h] [rbp-5h]
  __int16 v45; // [rsp+78h] [rbp-1h]
  __int128 v46; // [rsp+80h] [rbp+7h]
  void *Source; // [rsp+D0h] [rbp+57h] BYREF
  void *v48; // [rsp+E8h] [rbp+6Fh]

  v48 = a4;
  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v31 = *((_WORD *)this + 1);
  v10 = (char *)(v6 + 10);
  v11 = 0;
  v32 = *((_BYTE *)this + 4);
  v33 = 0;
  v34 = 0;
  v35 = 0LL;
  while ( 1 )
  {
    v12 = (unsigned __int8 *)*((_QWORD *)this + 4);
    Source = v10;
    v13 = wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v31,
            (unsigned __int8 **)&Source,
            v12);
    v14 = a6;
    v15 = a5;
    if ( !v13 )
    {
      v10 = (char *)Source;
      *((_QWORD *)this + 4) = Source;
LABEL_11:
      v33 = 1;
      v34 = a3;
      *(_QWORD *)&v35 = 0LL;
      *((_QWORD *)&v35 + 1) = a2;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v31);
      v21 = v48;
      goto LABEL_12;
    }
    v16 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v31, a2, a3);
    if ( v16 < 0 )
    {
      Source = v10;
      goto LABEL_11;
    }
    if ( !v16 )
      break;
    v17 = *((_QWORD *)this + 2);
    v10 = (char *)Source;
    if ( v17 )
    {
      v18 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / v17;
      v19 = v33;
      if ( v33 > v18 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v31, v18);
        v17 = *((_QWORD *)this + 2);
        v19 = v33;
      }
      v10 += v17 * v19;
    }
    else
    {
      v30 = 0;
      v42 = *((_WORD *)this + 3);
      v43 = *((_BYTE *)this + 8);
      v44 = 0;
      v45 = 0;
      v46 = 0LL;
      if ( v33 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v42,
                  (unsigned __int8 **)&Source,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v30;
        }
        while ( v30 < v33 );
        v10 = (char *)Source;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v31, v30);
    }
  }
  v21 = v48;
  InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                this,
                                (struct wil::details_abi::UsageIndexProperty *)&v31,
                                (unsigned __int8 *)Source,
                                v48,
                                v15,
                                v14);
  v20 = 0LL;
  Source = InsertionPointOrIncrement;
  v10 = (char *)InsertionPointOrIncrement;
  if ( !InsertionPointOrIncrement )
    return 1;
  v11 = 1;
LABEL_12:
  v36 = *((_WORD *)this + 3);
  v37 = *((_BYTE *)this + 8);
  v38 = v14;
  v39 = v15;
  v40 = v20;
  v41 = v21;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v36);
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
    if ( v32 )
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v31, v33 + 1);
  }
  else
  {
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v31,
      (unsigned __int8 **)&Source,
      v27);
  }
  wil::details_abi::UsageIndexProperty::Write(
    (wil::details_abi::UsageIndexProperty *)&v36,
    (unsigned __int8 **)&Source,
    *((unsigned __int8 **)this + 4));
  *((_BYTE *)this + 56) = 1;
  return 1;
}

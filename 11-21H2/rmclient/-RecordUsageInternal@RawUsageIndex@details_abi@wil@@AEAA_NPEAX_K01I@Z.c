/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180010260
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18001015C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18000D620 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18000DBB8 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x18000E698 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000F948 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x180010E74 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180011850 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180011D54 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *v11; // rdi
  char v12; // r14
  int v13; // eax
  __int16 v15; // cx
  __int64 Size; // rax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int8 *v21; // r8
  const void *v23; // [rsp+30h] [rbp-40h] BYREF
  __int16 v24; // [rsp+38h] [rbp-38h]
  __int128 v25; // [rsp+40h] [rbp-30h]
  __int16 v26; // [rsp+50h] [rbp-20h] BYREF
  char v27; // [rsp+52h] [rbp-1Eh]
  unsigned int v28; // [rsp+54h] [rbp-1Ch]
  __int16 v29; // [rsp+58h] [rbp-18h]
  __int64 v30; // [rsp+60h] [rbp-10h]
  void *v31; // [rsp+68h] [rbp-8h]
  void *Source; // [rsp+A0h] [rbp+30h] BYREF

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v11 = (unsigned __int8 *)(v6 + 10);
    LOWORD(v23) = *((_WORD *)this + 1);
    v12 = 0;
    BYTE2(v23) = *((_BYTE *)this + 4);
    Source = v11;
    HIDWORD(v23) = 0;
    v24 = 0;
    v25 = 0LL;
    while ( 1 )
    {
      if ( !wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v23,
              (unsigned __int8 **)&Source,
              *((unsigned __int8 **)this + 4)) )
      {
        v11 = (unsigned __int8 *)Source;
        *((_QWORD *)this + 4) = Source;
        goto LABEL_8;
      }
      v13 = wil::details_abi::UsageIndexProperty::Compare(&v23, a2, a3);
      if ( v13 < 0 )
      {
        Source = v11;
        goto LABEL_8;
      }
      if ( !v13 )
        break;
      v11 = wil::details_abi::RawUsageIndex::SkipValues(
              this,
              (struct wil::details_abi::UsageIndexProperty *)&v23,
              (unsigned __int8 *)Source);
      Source = v11;
    }
    Source = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
               this,
               (struct wil::details_abi::UsageIndexProperty *)&v23,
               (unsigned __int8 *)Source,
               a4,
               a5,
               a6);
    v11 = (unsigned __int8 *)Source;
    if ( !Source )
      return 1;
    v12 = 1;
LABEL_8:
    if ( !v12 )
    {
      *(_QWORD *)&v25 = 0LL;
      HIDWORD(v23) = 1;
      v24 = a3;
      *((_QWORD *)&v25 + 1) = a2;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v23);
    }
    v15 = *((_WORD *)this + 3);
    v30 = 0LL;
    v26 = v15;
    LOBYTE(v15) = *((_BYTE *)this + 8);
    v28 = a6;
    v27 = v15;
    v29 = a5;
    v31 = a4;
    Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v26);
    v17 = *((_QWORD *)this + 4);
    v19 = v18 + Size;
    v20 = *((_QWORD *)this + 5);
    if ( ((v20 - v17) & -(__int64)(v17 < v20)) >= v19 )
    {
      memmove_s(&v11[v19], v20 - v19 - (_QWORD)v11, v11, v17 - (_QWORD)v11);
      v21 = (unsigned __int8 *)(v19 + *((_QWORD *)this + 4));
      *((_QWORD *)this + 4) = v21;
      if ( v12 )
      {
        if ( BYTE2(v23) )
          wil::details_abi::UsageIndexProperty::UpdateCount(
            (wil::details_abi::UsageIndexProperty *)&v23,
            HIDWORD(v23) + 1);
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v23,
          (unsigned __int8 **)&Source,
          v21);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v26,
        (unsigned __int8 **)&Source,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}

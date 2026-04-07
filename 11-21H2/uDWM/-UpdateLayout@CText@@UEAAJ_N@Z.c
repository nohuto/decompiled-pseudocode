/*
 * XREFs of ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x180027ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180018DCC (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180028070 (-ValidateResources@CText@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::UpdateLayout(CText *this, char a2)
{
  __int64 v2; // r9
  int v5; // r14d
  unsigned int v6; // esi
  unsigned int v7; // edx
  int v8; // r8d
  int v9; // edi
  __int64 v10; // rax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  char *v22; // [rsp+30h] [rbp-20h] BYREF
  int v23; // [rsp+38h] [rbp-18h]
  unsigned int v24; // [rsp+3Ch] [rbp-14h]
  __int16 v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+80h] [rbp+30h] BYREF
  __int64 v27; // [rsp+90h] [rbp+40h]

  v2 = *((_QWORD *)this + 3);
  v5 = 0;
  if ( !v2 )
    goto LABEL_18;
  v6 = *((_DWORD *)this + 34);
  v7 = *((_DWORD *)this + 35);
  v8 = *((_DWORD *)this + 37);
  v9 = *((_DWORD *)this + 36);
  if ( __PAIR64__(v7, v6) == 0x7FFFFFFF7FFFFFFFLL && v9 == 0x7FFFFFFF && v8 == 0x7FFFFFFF )
    goto LABEL_18;
  v10 = *((_QWORD *)this + 16);
  v26 = v10;
  if ( v7 == 0x7FFFFFFF )
  {
    v19 = 0;
    if ( v6 != 0x7FFFFFFF )
      v19 = v6;
    v6 = v19;
    LODWORD(v27) = v19;
  }
  else
  {
    v11 = *(_DWORD *)(v2 + 128);
    if ( v6 != 0x7FFFFFFF )
    {
      LODWORD(v27) = v6;
      v12 = v11 - v7 - v6;
      goto LABEL_6;
    }
    v6 = v11 - v10 - v7;
    LODWORD(v27) = v6;
  }
  v12 = v26;
LABEL_6:
  if ( v8 == 0x7FFFFFFF )
  {
    v13 = 0;
    if ( v9 != 0x7FFFFFFF )
      v13 = v9;
    v9 = v13;
    HIDWORD(v27) = v13;
  }
  else
  {
    v20 = *(_DWORD *)(v2 + 132);
    if ( v9 != 0x7FFFFFFF )
    {
      HIDWORD(v27) = v9;
      v14 = v20 - v9 - v8;
      goto LABEL_11;
    }
    v9 = v20 - *((_DWORD *)this + 33) - v8;
    HIDWORD(v27) = v9;
  }
  v14 = HIDWORD(v26);
LABEL_11:
  if ( v12 <= 0 )
    v12 = 0;
  LODWORD(v26) = v12;
  if ( v14 <= 0 )
    v14 = 0;
  HIDWORD(v26) = v14;
  v15 = (*(__int64 (__fastcall **)(CText *, __int64 *))(*(_QWORD *)this + 96LL))(this, &v26);
  v5 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x116u);
    v16 = v5;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x53u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1BAu);
    return v16;
  }
  if ( v6 != *((_DWORD *)this + 30) || v9 != *((_DWORD *)this + 31) )
  {
    *((_QWORD *)this + 15) = v27;
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
  }
LABEL_18:
  if ( a2 )
  {
    v24 = -1;
    v23 = *((_DWORD *)this + 20);
    v22 = (char *)this + 32;
    v25 = 0;
    while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v22) )
    {
      v21 = *(_QWORD *)(*((_QWORD *)v22 + 2) + 8LL * v24);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, 2LL);
    }
  }
  v16 = v5;
  if ( v5 < 0 )
    goto LABEL_35;
  (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  v17 = CText::ValidateResources(this);
  v16 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x1BBu);
  return v16;
}

/*
 * XREFs of ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180019650
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001C720 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180018DCC (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateLayout(CRenderDataVisual *this, char a2)
{
  __int64 v2; // r9
  int v5; // r14d
  unsigned int v6; // esi
  unsigned int v7; // edx
  int v8; // r8d
  int v9; // edi
  __int64 v10; // rax
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rcx
  char *v20; // [rsp+30h] [rbp-20h] BYREF
  int v21; // [rsp+38h] [rbp-18h]
  unsigned int v22; // [rsp+3Ch] [rbp-14h]
  __int16 v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+80h] [rbp+30h] BYREF
  __int64 v25; // [rsp+90h] [rbp+40h]

  v2 = *((_QWORD *)this + 3);
  v5 = 0;
  if ( !v2 )
    goto LABEL_20;
  v6 = *((_DWORD *)this + 34);
  v7 = *((_DWORD *)this + 35);
  v8 = *((_DWORD *)this + 37);
  v9 = *((_DWORD *)this + 36);
  if ( __PAIR64__(v7, v6) == 0x7FFFFFFF7FFFFFFFLL && v9 == 0x7FFFFFFF && v8 == 0x7FFFFFFF )
    goto LABEL_20;
  v10 = *((_QWORD *)this + 16);
  v24 = v10;
  if ( v7 == 0x7FFFFFFF )
  {
    v11 = 0;
    if ( v6 != 0x7FFFFFFF )
      v11 = v6;
    v6 = v11;
    LODWORD(v25) = v11;
    goto LABEL_7;
  }
  v17 = *(_DWORD *)(v2 + 128);
  if ( v6 == 0x7FFFFFFF )
  {
    v6 = v17 - v10 - v7;
    LODWORD(v25) = v6;
LABEL_7:
    v12 = v24;
    goto LABEL_8;
  }
  LODWORD(v25) = v6;
  v12 = v17 - v7 - v6;
LABEL_8:
  if ( v8 == 0x7FFFFFFF )
  {
    v13 = 0;
    if ( v9 != 0x7FFFFFFF )
      v13 = v9;
    v9 = v13;
    HIDWORD(v25) = v13;
  }
  else
  {
    v18 = *(_DWORD *)(v2 + 132);
    if ( v9 != 0x7FFFFFFF )
    {
      HIDWORD(v25) = v9;
      v14 = v18 - v9 - v8;
      goto LABEL_13;
    }
    v9 = v18 - *((_DWORD *)this + 33) - v8;
    HIDWORD(v25) = v9;
  }
  v14 = HIDWORD(v24);
LABEL_13:
  if ( v12 <= 0 )
    v12 = 0;
  LODWORD(v24) = v12;
  if ( v14 <= 0 )
    v14 = 0;
  HIDWORD(v24) = v14;
  v15 = (*(__int64 (__fastcall **)(CRenderDataVisual *, __int64 *))(*(_QWORD *)this + 96LL))(this, &v24);
  v5 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x116u);
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x53u);
    return (unsigned int)v5;
  }
  if ( v6 != *((_DWORD *)this + 30) || v9 != *((_DWORD *)this + 31) )
  {
    *((_QWORD *)this + 15) = v25;
    (*(void (__fastcall **)(CRenderDataVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
  }
LABEL_20:
  if ( a2 )
  {
    v22 = -1;
    v21 = *((_DWORD *)this + 20);
    v20 = (char *)this + 32;
    v23 = 0;
    while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v20) )
    {
      v19 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 8LL * v22);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 24LL))(v19, 2LL);
    }
  }
  if ( v5 < 0 )
    goto LABEL_35;
  (*(void (__fastcall **)(CRenderDataVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  return (unsigned int)v5;
}

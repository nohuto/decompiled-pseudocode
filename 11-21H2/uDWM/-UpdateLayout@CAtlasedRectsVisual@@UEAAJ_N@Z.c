/*
 * XREFs of ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x18000BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateLayout(CAtlasedRectsVisual *this)
{
  int v2; // ebp
  __int64 v3; // rcx
  unsigned int v4; // esi
  unsigned int v5; // r8d
  int v6; // edx
  int v7; // edi
  unsigned __int64 v8; // r10
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  char v13; // si
  char v14; // al
  char v15; // cl
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  __int64 v22; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 34);
    v5 = *((_DWORD *)this + 35);
    v6 = *((_DWORD *)this + 37);
    v7 = *((_DWORD *)this + 36);
    if ( __PAIR64__(v5, v4) != 0x7FFFFFFF7FFFFFFFLL || v7 != 0x7FFFFFFF || v6 != 0x7FFFFFFF )
    {
      v21 = *((_QWORD *)this + 16);
      v8 = HIDWORD(v21);
      if ( v5 == 0x7FFFFFFF )
      {
        v19 = 0;
        if ( v4 != 0x7FFFFFFF )
          v19 = v4;
        v4 = v19;
        LODWORD(v22) = v19;
      }
      else
      {
        v9 = *(_DWORD *)(v3 + 128);
        if ( v4 == 0x7FFFFFFF )
        {
          v4 = v9 - v21 - v5;
          LODWORD(v22) = v4;
        }
        else
        {
          LODWORD(v22) = v4;
          LODWORD(v21) = v9 - v5 - v4;
        }
      }
      if ( v6 == 0x7FFFFFFF )
      {
        v20 = 0;
        if ( v7 != 0x7FFFFFFF )
          v20 = v7;
        v7 = v20;
        HIDWORD(v22) = v20;
      }
      else
      {
        v10 = *(_DWORD *)(v3 + 132);
        if ( v7 == 0x7FFFFFFF )
        {
          v7 = v10 - v8 - v6;
          HIDWORD(v22) = v7;
        }
        else
        {
          HIDWORD(v22) = v7;
          HIDWORD(v21) = v10 - v7 - v6;
        }
      }
      if ( (int)v21 <= 0 )
        LODWORD(v21) = 0;
      if ( SHIDWORD(v21) <= 0 )
        HIDWORD(v21) = 0;
      v11 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *, unsigned __int64 *))(*(_QWORD *)this + 96LL))(this, &v21);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x116u);
LABEL_38:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x88u);
        return (unsigned int)v2;
      }
      if ( v4 != *((_DWORD *)this + 30) || v7 != *((_DWORD *)this + 31) )
      {
        *((_QWORD *)this + 15) = v22;
        (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
      }
    }
  }
  LODWORD(v12) = -1;
  v13 = 0;
  while ( 1 )
  {
    v14 = v13;
    v15 = v13;
    if ( !v13 )
      v14 = 1;
    v13 = v14;
    v16 = v12 + 1;
    v12 = 0LL;
    if ( v15 )
      v12 = v16;
    if ( (unsigned int)v12 >= *((_DWORD *)this + 18) )
      break;
    v17 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v12);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, 2LL);
  }
  if ( v2 < 0 )
    goto LABEL_38;
  (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  return (unsigned int)v2;
}

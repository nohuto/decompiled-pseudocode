/*
 * XREFs of ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180050B00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateLayout(CAtlasedRectsVisual *this)
{
  __int64 v1; // r9
  int v3; // ebp
  unsigned int v4; // esi
  unsigned int v5; // r8d
  int v6; // edx
  int v7; // edi
  __int64 v8; // rax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdi
  char v15; // si
  char v16; // al
  char v17; // cl
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+60h] [rbp+18h]

  v1 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( !v1 )
    goto LABEL_16;
  v4 = *((_DWORD *)this + 34);
  v5 = *((_DWORD *)this + 35);
  v6 = *((_DWORD *)this + 37);
  v7 = *((_DWORD *)this + 36);
  if ( __PAIR64__(v5, v4) == 0x7FFFFFFF7FFFFFFFLL && v7 == 0x7FFFFFFF && v6 == 0x7FFFFFFF )
    goto LABEL_16;
  v8 = *((_QWORD *)this + 16);
  v22 = v8;
  if ( v5 == 0x7FFFFFFF )
  {
    v20 = 0;
    if ( v4 != 0x7FFFFFFF )
      v20 = v4;
    v4 = v20;
    LODWORD(v23) = v20;
  }
  else
  {
    v9 = *(_DWORD *)(v1 + 128);
    if ( v4 != 0x7FFFFFFF )
    {
      LODWORD(v23) = v4;
      v10 = v9 - v5 - v4;
      goto LABEL_6;
    }
    v4 = v9 - v8 - v5;
    LODWORD(v23) = v4;
  }
  v10 = v22;
LABEL_6:
  if ( v6 == 0x7FFFFFFF )
  {
    v21 = 0;
    if ( v7 != 0x7FFFFFFF )
      v21 = v7;
    v7 = v21;
    HIDWORD(v23) = v21;
    goto LABEL_36;
  }
  v11 = *(_DWORD *)(v1 + 132);
  if ( v7 == 0x7FFFFFFF )
  {
    v7 = v11 - *((_DWORD *)this + 33) - v6;
    HIDWORD(v23) = v7;
LABEL_36:
    v12 = HIDWORD(v22);
    goto LABEL_9;
  }
  HIDWORD(v23) = v7;
  v12 = v11 - v7 - v6;
LABEL_9:
  if ( v10 <= 0 )
    v10 = 0;
  LODWORD(v22) = v10;
  if ( v12 <= 0 )
    v12 = 0;
  HIDWORD(v22) = v12;
  v13 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *, __int64 *))(*(_QWORD *)this + 104LL))(this, &v22);
  v3 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x116u, 0LL);
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x87u, 0LL);
    return (unsigned int)v3;
  }
  if ( v4 != *((_DWORD *)this + 30) || v7 != *((_DWORD *)this + 31) )
  {
    *((_QWORD *)this + 15) = v23;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
  }
LABEL_16:
  LODWORD(v14) = -1;
  v15 = 0;
  while ( 1 )
  {
    v16 = v15;
    if ( !v15 )
      v16 = 1;
    v17 = -v15;
    v15 = v16;
    v14 = ((_DWORD)v14 + 1) & (unsigned int)-(v17 != 0);
    if ( (unsigned int)v14 >= *((_DWORD *)this + 18) )
      break;
    v19 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v14);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 24LL))(v19, 2LL);
  }
  if ( v3 < 0 )
    goto LABEL_38;
  (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  return (unsigned int)v3;
}

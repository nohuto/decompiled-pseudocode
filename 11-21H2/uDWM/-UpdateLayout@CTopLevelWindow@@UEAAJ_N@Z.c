/*
 * XREFs of ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x18000CC60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180018DCC (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLayout(CTopLevelWindow *this, char a2)
{
  __int64 *v4; // rsi
  int v5; // edi
  __int64 v6; // r11
  LONG v7; // r8d
  unsigned int v8; // r10d
  int v9; // r9d
  LONG v10; // edx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  int v15; // ecx
  LONG v16; // eax
  int v17; // eax
  int v18; // eax
  LONG v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  char *v22; // [rsp+30h] [rbp-20h] BYREF
  int v23; // [rsp+38h] [rbp-18h]
  unsigned int v24; // [rsp+3Ch] [rbp-14h]
  __int16 v25; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v27; // [rsp+80h] [rbp+30h] BYREF
  struct tagPOINT v28; // [rsp+90h] [rbp+40h] BYREF

  v4 = (__int64 *)((char *)this + 128);
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 34) + 96LL))(
         *((_QWORD *)this + 34),
         (char *)this + 128);
  if ( v5 >= 0 )
  {
    v6 = *((_QWORD *)this + 3);
    v5 = 0;
    if ( !v6 )
      goto LABEL_6;
    v7 = *((_DWORD *)this + 34);
    v8 = *((_DWORD *)this + 35);
    v9 = *((_DWORD *)this + 37);
    v10 = *((_DWORD *)this + 36);
    if ( __PAIR64__(v8, v7) == 0x7FFFFFFF7FFFFFFFLL && v10 == 0x7FFFFFFF && v9 == 0x7FFFFFFF )
      goto LABEL_6;
    v13 = *v4;
    v27 = *v4;
    if ( v8 == 0x7FFFFFFF )
    {
      v16 = 0;
      if ( v7 != 0x7FFFFFFF )
        v16 = v7;
      v28.x = v16;
    }
    else
    {
      v14 = *(_DWORD *)(v6 + 128);
      if ( v7 != 0x7FFFFFFF )
      {
        v28.x = v7;
        v15 = v14 - v8 - v7;
        goto LABEL_21;
      }
      v28.x = v14 - v13 - v8;
    }
    v15 = v27;
LABEL_21:
    if ( v9 == 0x7FFFFFFF )
    {
      v19 = 0;
      if ( v10 != 0x7FFFFFFF )
        v19 = v10;
    }
    else
    {
      v17 = *(_DWORD *)(v6 + 132);
      if ( v10 != 0x7FFFFFFF )
      {
        v28.y = v10;
        v18 = v17 - v10 - v9;
LABEL_28:
        if ( v15 <= 0 )
          v15 = 0;
        LODWORD(v27) = v15;
        if ( v18 <= 0 )
          v18 = 0;
        HIDWORD(v27) = v18;
        v20 = (*(__int64 (__fastcall **)(CTopLevelWindow *, __int64 *))(*(_QWORD *)this + 96LL))(this, &v27);
        v5 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x116u);
LABEL_11:
          v12 = 4789LL;
          goto LABEL_12;
        }
        CVisual::SetOffset(this, &v28);
LABEL_6:
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
        if ( v5 >= 0 )
          return 0LL;
        goto LABEL_11;
      }
      v19 = v17 - *((_DWORD *)this + 33) - v9;
    }
    v28.y = v19;
    v18 = HIDWORD(v27);
    goto LABEL_28;
  }
  v12 = 4787LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}

/*
 * XREFs of ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18000BD34
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18000B9A0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18005F908 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTimelineBase::UpdateBeforeTickWorker(CTimelineBase *this, struct WindowsAnimation *a2)
{
  _QWORD *v2; // r14
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-40h]
  __int64 v18; // [rsp+80h] [rbp+20h] BYREF

  v2 = (_QWORD *)((char *)this + 64);
  v18 = 0LL;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *v2 = 0LL;
  }
  if ( *((double *)this + 3) < 0.01 )
  {
    CTimelineBase::JumpToFinalValue(this);
    v9 = 0;
    goto LABEL_15;
  }
  if ( !*(_QWORD *)a2 )
  {
    v9 = -2147221008;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147221008, 0xB7u);
    goto LABEL_15;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct WindowsAnimation *, _QWORD *))(**(_QWORD **)a2 + 32LL))(
         *(_QWORD *)a2,
         a2,
         v2);
  v9 = v6;
  if ( v6 < 0 )
  {
    v17 = 185;
    goto LABEL_42;
  }
  v10 = *((_DWORD *)this + 14);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 128LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v17 = 211;
        goto LABEL_42;
      }
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18);
      v9 = v6;
      if ( v6 < 0 )
      {
        v17 = 212;
        goto LABEL_42;
      }
      goto LABEL_13;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 152LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v17 = 223;
        goto LABEL_42;
      }
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18);
      v9 = v6;
      if ( v6 < 0 )
      {
        v17 = 224;
        goto LABEL_42;
      }
      goto LABEL_13;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 128LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v17 = 235;
        goto LABEL_42;
      }
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18);
      v9 = v6;
      if ( v6 < 0 )
      {
        v17 = 236;
        goto LABEL_42;
      }
      goto LABEL_13;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 40LL))(
             *((_QWORD *)a2 + 1),
             v7,
             &v18);
      v9 = v6;
      if ( v6 < 0 )
      {
        v17 = 241;
        goto LABEL_42;
      }
      goto LABEL_13;
    }
    if ( v14 == 1 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 160LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v17 = 253;
        goto LABEL_42;
      }
      goto LABEL_13;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 64LL))(
         *((_QWORD *)a2 + 1),
         v7,
         v8,
         &v18);
  v9 = v6;
  if ( v6 < 0 )
  {
    v17 = 200;
    goto LABEL_42;
  }
LABEL_13:
  v15 = *((_QWORD *)a2 + 2);
  if ( v15 )
  {
LABEL_14:
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v15 + 24LL))(v15, *v2, v18);
    v9 = v6;
    if ( v6 >= 0 )
      goto LABEL_15;
    v17 = 262;
    goto LABEL_42;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, (char *)a2 + 16);
  v9 = v6;
  if ( v6 >= 0 )
  {
    v15 = *((_QWORD *)a2 + 2);
    goto LABEL_14;
  }
  v17 = 260;
LABEL_42:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v17);
LABEL_15:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v9;
}

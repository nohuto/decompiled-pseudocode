/*
 * XREFs of std::call_once__lambda_c15493341c6340c7048e00ce76563f22___ @ 0x18001CDE0
 * Callers:
 *     ?InitIfNecessary@LevelSettingsWrapper@Trace@@QEAAXXZ @ 0x18001D79C (-InitIfNecessary@LevelSettingsWrapper@Trace@@QEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0LevelSettings@Trace@@QEAA@PEBDI@Z @ 0x18001D114 (--0LevelSettings@Trace@@QEAA@PEBDI@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18001D2FC (--1_Init_once_completer@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once__lambda_c15493341c6340c7048e00ce76563f22___(union _RTL_RUN_ONCE *a1, __int64 a2)
{
  Trace::LevelSettings *v4; // rax
  __int64 v5; // rcx
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  BOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  Trace::LevelSettings *v9; // [rsp+50h] [rbp+18h]

  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v6 = a1;
    v7 = 4;
    v4 = (Trace::LevelSettings *)operator new(0x18uLL);
    v9 = v4;
    if ( v4 )
      v5 = Trace::LevelSettings::LevelSettings(
             v4,
             *(const char **)(*(_QWORD *)a2 + 8LL),
             *(_DWORD *)(*(_QWORD *)a2 + 16LL));
    else
      v5 = 0LL;
    **(_QWORD **)a2 = v5;
    v7 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v6);
  }
}

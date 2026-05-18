/*
 * XREFs of ?ResetLevels@LevelSettings@Trace@@QEAAXXZ @ 0x18001DB24
 * Callers:
 *     ??0LevelSettings@Trace@@QEAA@PEBDI@Z @ 0x18001D114 (--0LevelSettings@Trace@@QEAA@PEBDI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Trace::LevelSettings::ResetLevels(Trace::LevelSettings *this)
{
  *(_DWORD *)this = dword_1801C8038;
  *((_DWORD *)this + 1) = dword_1801C8058;
  *((_DWORD *)this + 2) = dword_1801C8078;
  *((_DWORD *)this + 3) = dword_1801C8098;
}

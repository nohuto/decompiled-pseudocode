/*
 * XREFs of ??1LegacyInputDispatcher@@QEAA@XZ @ 0x1C011F8E4
 * Callers:
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C011F8B0 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LegacyInputDispatcher::~LegacyInputDispatcher(LegacyInputDispatcher *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &LegacyInputDispatcher::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    Win32FreePool(v3);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
    Win32FreePool(v5);
}

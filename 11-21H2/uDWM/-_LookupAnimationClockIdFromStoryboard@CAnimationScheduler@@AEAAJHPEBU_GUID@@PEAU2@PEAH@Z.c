/*
 * XREFs of ?_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z @ 0x1800A7590
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x1800A7650 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationScheduler::_LookupAnimationClockIdFromStoryboard(
        CAnimationScheduler *this,
        int a2,
        const struct _GUID *a3,
        struct _GUID *a4,
        int *a5)
{
  unsigned int v5; // ecx
  int v8; // r9d
  _DWORD *i; // rdx
  __int64 v10; // rax

  v5 = 0;
  *a4 = GUID_NULL;
  if ( a5 )
    *a5 = 1;
  v8 = 0;
  for ( i = dword_180142010; ; i += 10 )
  {
    if ( *i == a2 )
    {
      v10 = *(_QWORD *)&dword_180142010[10 * v8 + 1] - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v10 )
        v10 = *(_QWORD *)&dword_180142010[10 * v8 + 3] - *(_QWORD *)GUID_NULL.Data4;
      if ( !v10 )
        break;
    }
    if ( (unsigned int)++v8 >= 0xB )
      return (unsigned int)CoCreateGuid(a4);
  }
  *a4 = *(struct _GUID *)&dword_180142010[10 * v8 + 5];
  if ( a5 )
    *a5 = dword_180142010[10 * v8 + 9];
  return v5;
}

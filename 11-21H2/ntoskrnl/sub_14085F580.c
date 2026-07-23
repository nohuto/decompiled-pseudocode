/*
 * XREFs of sub_14085F580 @ 0x14085F580
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140642868 @ 0x140642868 (sub_140642868.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14085F65C @ 0x14085F65C (sub_14085F65C.c)
 */

__int64 __fastcall sub_14085F580(int a1, int a2)
{
  unsigned int v3; // ebx
  KPROCESSOR_MODE v5; // dl
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax

  v3 = 0;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !v5 )
    return 3221225473LL;
  if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v5) )
    return 3221225506LL;
  if ( PsUILanguageComitted )
  {
    if ( a1 == (unsigned __int16)word_140D3CA00 )
      return 0LL;
    return 3221225473LL;
  }
  if ( qword_140D00C20 || (result = sub_14085F65C(&qword_140D00C20), (result & 0xC0000000) != 0xC0000000) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(qword_140D00C20, 1u);
    if ( a2 )
      PsUILanguageComitted = 1;
    if ( (_WORD)a1 != word_140D3CA00 )
    {
      word_140D3CA00 = a1;
      word_140D3CA04 = a1;
      v3 = sub_140642868();
    }
    ExReleaseResourceLite(qword_140D00C20);
    sub_1402F9540((__int64)KeGetCurrentThread());
    return v3;
  }
  return result;
}

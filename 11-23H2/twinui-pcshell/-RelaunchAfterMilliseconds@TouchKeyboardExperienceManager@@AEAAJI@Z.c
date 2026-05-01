/*
 * XREFs of ?RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z @ 0x18020B414
 * Callers:
 *     _lambda_4efd027938208ec783bf057b80dc7741_::operator() @ 0x180207794 (_lambda_4efd027938208ec783bf057b80dc7741_--operator().c)
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_ea84869255a99aa3914583e116944a22___ @ 0x180205C24 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_ea84869255a99aa3914583e116944a22___.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::RelaunchAfterMilliseconds(
        TouchKeyboardExperienceManager *this,
        __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 *v6; // [rsp+20h] [rbp-28h]
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_DWORD *)this + 243);
  *(_QWORD *)&v7 = this;
  DWORD2(v7) = a2;
  v3 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_ea84869255a99aa3914583e116944a22___(
         (__int64)this,
         a2,
         v2,
         (unsigned int)a2,
         v6,
         &v7);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1044,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}

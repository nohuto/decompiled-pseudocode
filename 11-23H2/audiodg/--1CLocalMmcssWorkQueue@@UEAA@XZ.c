/*
 * XREFs of ??1CLocalMmcssWorkQueue@@UEAA@XZ @ 0x140074764
 * Callers:
 *     ??_GCLocalMmcssWorkQueue@@UEAAPEAXI@Z @ 0x1400749C0 (--_GCLocalMmcssWorkQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x140075150 (-UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ.c)
 */

void __fastcall CLocalMmcssWorkQueue::~CLocalMmcssWorkQueue(CLocalMmcssWorkQueue *this)
{
  bool v1; // zf
  int v3; // eax
  DWORD v4; // ecx
  HRESULT v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 24) == 0;
  *(_QWORD *)this = &CLocalMmcssWorkQueue::`vftable';
  if ( !v1 )
  {
    v3 = CLocalMmcssWorkQueue::UnRegisterWorkQueueWithMmcss(this);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x104,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    v5 = RtwqUnlockWorkQueue(v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x109,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v5);
  }
  *((_DWORD *)this + 3) = -1073741823;
}

/*
 * XREFs of ??_GCLocalMmcssWorkQueue@@UEAAPEAXI@Z @ 0x14006C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??1CLocalMmcssWorkQueue@@UEAA@XZ @ 0x14006C0B8 (--1CLocalMmcssWorkQueue@@UEAA@XZ.c)
 */

CLocalMmcssWorkQueue *__fastcall CLocalMmcssWorkQueue::`scalar deleting destructor'(
        CLocalMmcssWorkQueue *this,
        char a2)
{
  CLocalMmcssWorkQueue::~CLocalMmcssWorkQueue(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

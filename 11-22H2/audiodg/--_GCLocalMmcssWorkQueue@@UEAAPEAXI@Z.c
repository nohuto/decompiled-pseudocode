/*
 * XREFs of ??_GCLocalMmcssWorkQueue@@UEAAPEAXI@Z @ 0x140074A10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CLocalMmcssWorkQueue@@UEAA@XZ @ 0x1400747B4 (--1CLocalMmcssWorkQueue@@UEAA@XZ.c)
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

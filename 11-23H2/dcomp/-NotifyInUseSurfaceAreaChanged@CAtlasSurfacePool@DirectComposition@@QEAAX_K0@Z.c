/*
 * XREFs of ?NotifyInUseSurfaceAreaChanged@CAtlasSurfacePool@DirectComposition@@QEAAX_K0@Z @ 0x1800354A0
 * Callers:
 *     ?SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ @ 0x180038200 (-SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CAtlasSurfacePool::NotifyInUseSurfaceAreaChanged(
        DirectComposition::CAtlasSurfacePool *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // al
  char v4; // al
  bool v5; // zf

  v3 = *((_BYTE *)this + 172);
  *((_QWORD *)this + 23) += a2 - a3;
  v4 = v3 | 2;
  v5 = *((_QWORD *)this + 23) == 0LL;
  *((_BYTE *)this + 172) = v4;
  if ( v5 && (v4 & 1) != 0 )
    *((_DWORD *)this + 42) = GetTickCount();
}

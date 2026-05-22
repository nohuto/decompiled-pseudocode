/*
 * XREFs of ??0CAtlasSurfacePool@DirectComposition@@QEAA@PEAVCSurfaceManager@1@AEBVSizeU@1@W4DXGI_FORMAT@@_N3@Z @ 0x180034834
 * Callers:
 *     ?Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3PEAPEAV12@@Z @ 0x180034780 (-Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@.c)
 * Callees:
 *     ?CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180026B30 (-CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

DirectComposition::CAtlasSurfacePool *__fastcall DirectComposition::CAtlasSurfacePool::CAtlasSurfacePool(
        DirectComposition::CAtlasSurfacePool *this,
        struct DirectComposition::CSurfaceManager *a2,
        const struct DirectComposition::SizeU *a3,
        enum DXGI_FORMAT a4,
        bool a5,
        bool a6)
{
  CMILRefCountImpl *v7; // rcx
  __int64 v8; // rax
  char v9; // dl
  DWORD TickCount; // eax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx

  v7 = (DirectComposition::CAtlasSurfacePool *)((char *)this + 8);
  *(_QWORD *)this = &DirectComposition::CAtlasSurfacePool::`vftable';
  *(_DWORD *)v7 = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = a2;
  v8 = *(_QWORD *)a3;
  v9 = *((_BYTE *)this + 172);
  *((_DWORD *)this + 48) = -1;
  *((_QWORD *)this + 19) = v8;
  *((_DWORD *)this + 40) = a4;
  *((_DWORD *)this + 45) = 1;
  *((_BYTE *)this + 172) = (4 * a5) | a6 & 0xFB | v9 & 0xFA;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  CMILRefCountImpl::AddReference(v7);
  TickCount = GetTickCount();
  v11 = (_QWORD *)*((_QWORD *)this + 18);
  *((_DWORD *)this + 41) = TickCount;
  *((_DWORD *)this + 42) = TickCount;
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(v11[16] + 24LL) + 96LL));
  v12 = v11 + 26;
  if ( (*((_BYTE *)this + 172) & 1) != 0 )
    v12 = v11 + 31;
  *v12 += (unsigned int)(*((_DWORD *)this + 38) * *((_DWORD *)this + 39));
  DirectComposition::CSurfaceManager::CapMaximumAllocations((DirectComposition::CSurfaceManager *)v11, 0);
  return this;
}

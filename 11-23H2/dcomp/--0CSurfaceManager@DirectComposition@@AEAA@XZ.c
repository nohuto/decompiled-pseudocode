/*
 * XREFs of ??0CSurfaceManager@DirectComposition@@AEAA@XZ @ 0x18001B868
 * Callers:
 *     ?Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z @ 0x18001B7CC (-Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z.c)
 * Callees:
 *     ??0SizeU@DirectComposition@@QEAA@XZ @ 0x18008E9A0 (--0SizeU@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CSurfaceManager *__fastcall DirectComposition::CSurfaceManager::CSurfaceManager(
        DirectComposition::CSurfaceManager *this)
{
  DirectComposition::SizeU *v1; // rdi
  __int64 v3; // rsi
  DirectComposition::CSurfaceManager *result; // rax

  *(_QWORD *)this = &DirectComposition::CSurfaceManager::`vftable';
  v1 = (DirectComposition::CSurfaceManager *)((char *)this + 136);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  v3 = 5LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  do
  {
    DirectComposition::SizeU::SizeU(v1);
    v1 = (DirectComposition::SizeU *)((char *)v1 + 8);
    --v3;
  }
  while ( v3 );
  result = this;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  return result;
}

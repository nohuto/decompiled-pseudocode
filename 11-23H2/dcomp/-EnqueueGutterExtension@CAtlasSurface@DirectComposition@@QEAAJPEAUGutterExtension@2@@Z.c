/*
 * XREFs of ?EnqueueGutterExtension@CAtlasSurface@DirectComposition@@QEAAJPEAUGutterExtension@2@@Z @ 0x180027E74
 * Callers:
 *     ?ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ @ 0x180027B98 (-ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UGutterExtension@DirectComposition@@$0A@@@QEAAJPEFBUGutterExtension@DirectComposition@@I@Z @ 0x1800731B8 (-AddMultipleAndSet@-$DynArray@UGutterExtension@DirectComposition@@$0A@@@QEAAJPEFBUGutterExtensio.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurface::EnqueueGutterExtension(
        DirectComposition::CAtlasSurface *this,
        struct DirectComposition::GutterExtension *a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = *((_DWORD *)this + 18) + (*((_DWORD *)this + 22) & 1);
  *((_DWORD *)a2 + 1) += *((_DWORD *)this + 19) + ((*((_DWORD *)this + 22) >> 2) & 1);
  *(_DWORD *)a2 += v2;
  v3 = *((_QWORD *)this + 8);
  result = DynArray<DirectComposition::GutterExtension,0>::AddMultipleAndSet(v3 + 208);
  if ( (int)result >= 0 && *(_DWORD *)(v3 + 232) == 1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 144) + 128LL);
    *(_QWORD *)(v3 + 240) = *(_QWORD *)(v5 + 336);
    *(_QWORD *)(v5 + 336) = v3;
  }
  return result;
}

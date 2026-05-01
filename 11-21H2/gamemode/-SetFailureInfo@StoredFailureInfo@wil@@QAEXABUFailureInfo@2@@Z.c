/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z @ 0x10002C3F
 * Callers:
 *     ??0ResultException@wil@@QAE@ABUFailureInfo@1@@Z @ 0x10002DCD (--0ResultException@wil@@QAE@ABUFailureInfo@1@@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QAEXXZ @ 0x100026BA (-reset@shared_buffer@details@wil@@QAEXXZ.c)
 *     ?create@shared_buffer@details@wil@@QAE_NPBXI@Z @ 0x100026F1 (-create@shared_buffer@details@wil@@QAE_NPBXI@Z.c)
 *     ?ResultStringSize@details@wil@@YGIPBD@Z @ 0x10002BF9 (-ResultStringSize@details@wil@@YGIPBD@Z.c)
 *     ?ResultStringSize@details@wil@@YGIPB_W@Z @ 0x10002C17 (-ResultStringSize@details@wil@@YGIPB_W@Z.c)
 *     ??$WriteResultString@PB_W@details@wil@@YGPAEPAE0PB_WPAPB_W@Z @ 0x10004576 (--$WriteResultString@PB_W@details@wil@@YGPAEPAE0PB_WPAPB_W@Z.c)
 *     ??$WriteResultString@PBD@details@wil@@YGPAEPAE0PBDPAPBD@Z @ 0x100045E6 (--$WriteResultString@PBD@details@wil@@YGPAEPAE0PBDPAPBD@Z.c)
 *     _memset @ 0x10007471 (_memset.c)
 */

void __thiscall wil::StoredFailureInfo::SetFailureInfo(
        volatile signed __int32 **this,
        const struct wil::FailureInfo *a2)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi
  unsigned int v5; // edi
  unsigned int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // eax
  volatile signed __int32 **v12; // edx
  volatile signed __int32 *v13; // edi
  char *v14; // eax
  volatile signed __int32 *v15; // esi
  _DWORD *v16; // esi
  int v17; // edi
  void *v18; // eax
  void *v19; // eax
  void *v20; // eax
  void *v21; // eax
  void *v22; // eax
  void *v23; // eax
  void *v24; // eax
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax

  qmemcpy(this, a2, 0x58u);
  v2 = wil::details::ResultStringSize(*((_WORD **)a2 + 18));
  v3 = wil::details::ResultStringSize(*((_WORD **)a2 + 15)) + v2;
  v4 = wil::details::ResultStringSize(*((_WORD **)a2 + 5)) + v3;
  v5 = wil::details::ResultStringSize(*((const char **)a2 + 17)) + v4;
  v6 = wil::details::ResultStringSize(*((const char **)a2 + 14)) + v5;
  v7 = wil::details::ResultStringSize(*((const char **)a2 + 12)) + v6;
  v8 = wil::details::ResultStringSize(*((const char **)a2 + 9)) + v7;
  v9 = wil::details::ResultStringSize(*((const char **)a2 + 8)) + v8;
  v10 = wil::details::ResultStringSize(*((const char **)a2 + 7)) + v9;
  v11 = wil::details::ResultStringSize(*((const char **)a2 + 19));
  v12 = this;
  v13 = (volatile signed __int32 *)(v11 + v10);
  v14 = (char *)(this + 22);
  v15 = this[22];
  if ( !v15 || *v15 != 1 || this[23] < v13 )
  {
    wil::details::shared_buffer::reset(this + 22);
    wil::details::shared_buffer::create(this + 22, 0, v13);
    v12 = this;
    v14 = (char *)(this + 22);
    v15 = this[22];
  }
  v16 = v15 != 0 ? (_DWORD *)(v15 + 1) : 0;
  v17 = v16 != 0 ? (unsigned int)v16 + *((_DWORD *)v14 + 1) : 0;
  if ( v16 )
  {
    v18 = (void *)wil::details::WriteResultString<wchar_t const *>(v16, *((void **)a2 + 5), (int)(v12 + 5));
    v19 = (void *)wil::details::WriteResultString<char const *>(v18, *((void **)a2 + 7), (int)(this + 7));
    v20 = (void *)wil::details::WriteResultString<char const *>(v19, *((void **)a2 + 8), (int)(this + 8));
    v21 = (void *)wil::details::WriteResultString<char const *>(v20, *((void **)a2 + 9), (int)(this + 9));
    v22 = (void *)wil::details::WriteResultString<char const *>(v21, *((void **)a2 + 12), (int)(this + 12));
    v23 = (void *)wil::details::WriteResultString<char const *>(v22, *((void **)a2 + 19), (int)(this + 19));
    v24 = (void *)wil::details::WriteResultString<char const *>(v23, *((void **)a2 + 17), (int)(this + 17));
    v25 = (void *)wil::details::WriteResultString<wchar_t const *>(v24, *((void **)a2 + 18), (int)(this + 18));
    v26 = (void *)wil::details::WriteResultString<char const *>(v25, *((void **)a2 + 14), (int)(this + 14));
    v27 = (void *)wil::details::WriteResultString<wchar_t const *>(v26, *((void **)a2 + 15), (int)(this + 15));
    memset(v27, 0, v17 - (_DWORD)v27);
  }
}

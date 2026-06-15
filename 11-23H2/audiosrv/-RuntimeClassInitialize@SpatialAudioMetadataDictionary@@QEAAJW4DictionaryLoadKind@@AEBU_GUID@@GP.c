/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBGPEAEI@Z @ 0x180147ECC
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x180147144 (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180147254 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 *     ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x180147B50 (-LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        const CHAR *a3,
        __int64 a4,
        void *a5,
        void *Src,
        size_t Size)
{
  void *v7; // r12
  int v8; // edi
  unsigned int v11; // ebx
  const int *v12; // rdx
  bool v13; // of
  unsigned __int64 v14; // rax
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edx
  __int64 v20; // r9
  unsigned __int8 *v21; // r8
  unsigned int v22; // eax
  int Dictionary; // eax
  const CHAR *v25; // [rsp+40h] [rbp-10h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h] BYREF
  int v27; // [rsp+88h] [rbp+38h] BYREF

  LOWORD(v27) = a4;
  v7 = a5;
  v8 = 0;
  v11 = 0;
  if ( Src )
  {
    if ( (Size & 1) != 0 )
    {
      v11 = -2147024809;
      if ( (unsigned int)dword_1801CD1E8 <= 2 )
        return v11;
      v27 = -2147024809;
      v12 = (const int *)&unk_1801953FE;
      LODWORD(Src) = 137;
      goto LABEL_19;
    }
    v14 = 2LL * ((unsigned int)Size >> 1);
    v13 = (((unsigned int)Size >> 1) * (unsigned __int128)2uLL) >> 64 != 0;
    *(_DWORD *)(a1 + 124) = (unsigned int)Size >> 1;
    if ( v13 )
      v14 = -1LL;
    v15 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)(a1 + 128) = v15;
    if ( !v15 )
    {
      v11 = -2147024882;
      goto LABEL_20;
    }
    memcpy_0(v15, Src, (unsigned int)Size);
  }
  else
  {
    Dictionary = SpatialAudioMetadataDictionary::LoadDictionary(a1, a2, (__int64)a3, a4, (__int64)a5);
    v11 = Dictionary;
    if ( Dictionary < 0 )
    {
      if ( (unsigned int)dword_1801CD1E8 <= 2 )
        return v11;
      v27 = Dictionary;
      v12 = &dword_1801953CC;
      LODWORD(Src) = 147;
LABEL_19:
      v25 = "SpatialAudioMetadataDictionary::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        a1,
        (int)v12,
        (__int64)a3,
        a4,
        &v25,
        (__int64)&Src,
        (__int64)&v27);
LABEL_20:
      if ( (unsigned int)dword_1801CD1E8 > 2 )
      {
        Src = v7;
        v25 = a3;
        v27 = v11;
        v26 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
          v16,
          byte_180195482,
          v17,
          v18,
          (__int64)&v26,
          (__int64)&v27,
          (__int64 *)&v25,
          (const WCHAR **)&Src);
      }
      return v11;
    }
  }
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v19 = 0;
    v20 = *(unsigned int *)(a1 + 124);
    v21 = (unsigned __int8 *)(*(_QWORD *)(a1 + 128) + 1LL);
    do
    {
      v22 = *v21;
      v21 += 2;
      *(_DWORD *)(a1 + 96) = v22 + v8 + 1;
      v8 += v22 + 1;
      if ( v19 <= v22 )
        v19 = v22;
      *(_DWORD *)(a1 + 100) = v19;
      --v20;
    }
    while ( v20 );
  }
  return v11;
}

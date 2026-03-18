/*
 * XREFs of GreMakeFontDir @ 0x1C02B99A8
 * Callers:
 *     NtGdiMakeFontDir @ 0x1C02ADFA0 (NtGdiMakeFontDir.c)
 * Callees:
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C000CD68 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C000D7F0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C000D8A8 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C000F3E4 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C000FAC4 (EngMapFontFileFDInternal.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0010458 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0011220 (EngUnmapFontFileFD.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C001F138 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     GreFillFontDir @ 0x1C02B95C8 (GreFillFontDir.c)
 */

__int64 __fastcall GreMakeFontDir(int a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned int v8; // edi
  __int64 v9; // r14
  struct _IFIMETRICS *v10; // rax
  struct _IFIMETRICS *v11; // r15
  void (__fastcall *v12)(struct _IFIMETRICS *, unsigned __int64); // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+48h] [rbp-79h] BYREF
  void *v16; // [rsp+50h] [rbp-71h] BYREF
  struct _FONTFILEVIEW *v17; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v19[16]; // [rsp+68h] [rbp-59h] BYREF
  ULONG_PTR iFile[16]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v21; // [rsp+140h] [rbp+7Fh] BYREF

  v3 = qword_1C033BDF8;
  v4 = 0;
  v18 = 0LL;
  v8 = 0;
  if ( !qword_1C033BDF8 || !UmfdHostLifeTimeManager::EnsureUmfdHost() )
    return 0LL;
  v15 = v3;
  memset(iFile, 0, 0x78uLL);
  iFile[10] = a3;
  v17 = (struct _FONTFILEVIEW *)iFile;
  v16 = 0LL;
  v21 = 0;
  if ( (unsigned int)EngMapFontFileFDInternal((__int64)iFile, &v16, &v21, 0) )
  {
    if ( (unsigned int)UmfdInsertFontFileViewForLookup(&v17, 1u) )
    {
      v9 = PDEVOBJ::LoadFontFile((PDEVOBJ *)&v15, 1u, (unsigned __int64 *)&v17, &v16, &v21, 0LL, gusLanguageID, 0);
      if ( v9 )
      {
        if ( v9 != 0xFFFFFFFFLL )
        {
          v10 = PDEVOBJ::QueryFont((PDEVOBJ *)&v15, 0LL, v9, 1u, &v18);
          v11 = v10;
          if ( v10 )
          {
            v8 = GreFillFontDir((__int64)v10, a1, a2);
            v12 = *(void (__fastcall **)(struct _IFIMETRICS *, unsigned __int64))(v3 + 3000);
            if ( v12 )
              v12(v11, v18);
          }
          v8 &= -((*(unsigned int (__fastcall **)(__int64))(v3 + 3032))(v9) != 0);
        }
      }
    }
    if ( LODWORD(iFile[8]) )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v19, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
      if ( UmfdFileviewLookup )
      {
        LODWORD(v15) = iFile[8];
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v13, &v15);
        LODWORD(iFile[8]) = 0;
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v19);
    }
    EngUnmapFontFileFD((ULONG_PTR)iFile);
    vUnreferenceFileviewSection((struct _FILEVIEW *)iFile);
    return v8;
  }
  return v4;
}

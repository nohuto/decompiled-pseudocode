/*
 * XREFs of ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C0F2C
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02C10B0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C000CD68 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C000FAC4 (EngMapFontFileFDInternal.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0010458 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0014A8C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0014F34 (--0MALLOCOBJ@@QEAA@K@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectHff(_OWORD *a1, struct PFF *a2)
{
  __int64 v3; // r14
  _OWORD *v4; // r15
  void **v5; // rbx
  unsigned int v6; // ebp
  char v7; // si
  unsigned __int64 v8; // r15
  void **v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rcx
  _BYTE *FontFile; // rax
  _QWORD v14[11]; // [rsp+40h] [rbp-58h] BYREF
  int v16; // [rsp+A8h] [rbp+10h] BYREF
  void **v17; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *((unsigned int *)a2 + 9);
  v4 = a1;
  v14[0] = *((_QWORD *)a2 + 11);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v17, 12 * v3);
  v5 = v17;
  if ( !v17 )
    goto LABEL_12;
  v6 = 0;
  v7 = 1;
  if ( (_DWORD)v3 )
  {
    v8 = 0LL;
    v9 = &v17[v3];
    while ( 1 )
    {
      v10 = *(_QWORD *)(v8 + *((_QWORD *)a2 + 25));
      if ( !*(_QWORD *)(v10 + 16) )
      {
        v18 = 0LL;
        v16 = 0;
        if ( !(unsigned int)EngMapFontFileFDInternal(v10, &v18, &v16, 0) )
          goto LABEL_12;
      }
      ++v6;
      v5[v8 / 8] = *(void **)(*(_QWORD *)(v8 + *((_QWORD *)a2 + 25)) + 16LL);
      v11 = *(_QWORD *)(v8 + *((_QWORD *)a2 + 25));
      v8 += 8LL;
      *(_DWORD *)v9 = *(_DWORD *)(v11 + 24);
      v9 = (void **)((char *)v9 + 4);
      if ( v6 >= (unsigned int)v3 )
      {
        v4 = a1;
        break;
      }
    }
  }
  if ( !(unsigned int)UmfdInsertFontFileViewForLookup(*((struct _FONTFILEVIEW ***)a2 + 25), *((_DWORD *)a2 + 9))
    || (FontFile = (_BYTE *)PDEVOBJ::LoadFontFile(
                              (PDEVOBJ *)v14,
                              *((_DWORD *)a2 + 9),
                              *((unsigned __int64 **)a2 + 25),
                              v5,
                              (unsigned int *)&v5[v3],
                              *((struct tagDESIGNVECTOR **)a2 + 5),
                              gusLanguageID,
                              0),
        FontFile == (_BYTE *)0xFFFFFFFFLL)
    || !FontFile )
  {
LABEL_12:
    v7 = 0;
    goto LABEL_13;
  }
  FontFile[12] = 1;
  *v4 = *(_OWORD *)FontFile;
  EngFreeMem(FontFile);
LABEL_13:
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&v17);
  return v7;
}

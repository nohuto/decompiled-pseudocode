/*
 * XREFs of ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0133EB8
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0133A6C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0078BB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C007C7E0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00AE284 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     GreUpdateSprite @ 0x1C00D5F08 (GreUpdateSprite.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C01340D4 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C013411C (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C0266740 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 */

__int64 __fastcall bSpDwmUpdateCursor(
        Gre::Base *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _BLENDFUNCTION *a6)
{
  unsigned int v6; // edi
  struct Gre::Base::SESSION_GLOBALS *v10; // r13
  struct DWMSPRITE *v11; // rbx
  struct SFMLOGICALSURFACE *v12; // rdi
  char v13; // al
  struct _EX_PUSH_LOCK *v14; // rdx
  int updated; // eax
  struct SFMLOGICALSURFACE *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r9
  struct DWMSPRITE *v20; // [rsp+88h] [rbp-29h] BYREF
  struct SFMLOGICALSURFACE *v21; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v22[8]; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v23[8]; // [rsp+A0h] [rbp-11h] BYREF
  _BYTE v24[48]; // [rsp+A8h] [rbp-9h] BYREF
  int v25; // [rsp+120h] [rbp+6Fh] BYREF
  int v26; // [rsp+124h] [rbp+73h]

  v26 = HIDWORD(a4);
  v25 = 33488896;
  v6 = 0;
  v20 = 0LL;
  v10 = Gre::Base::Globals(a1);
  DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v20, (HSPRITE)a1);
  v11 = v20;
  if ( v20 )
  {
    v12 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v20 + 18);
    LODWORD(v20) = 0;
    v21 = v12;
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v24, v12);
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v23, (struct DWMSPRITE *)((char *)v11 + 88));
    if ( !a3 || (v13 = 1, a2) )
      v13 = 0;
    v14 = (struct SFMLOGICALSURFACE *)((char *)v12 + 256);
    if ( v13 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v22, v14);
      *((_DWORD *)v11 + 35) &= ~4u;
      updated = bSpDwmUpdateSpriteShape(
                  *(HDEV *)(*((_QWORD *)v10 + 38) + 176LL),
                  v11,
                  v12,
                  a3,
                  a5,
                  (struct PALETTE *)a3[1].hdev,
                  (unsigned int *)&v20,
                  0LL,
                  &v21);
    }
    else
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v22, v14);
      updated = bSpDwmUpdateMaskCursor(
                  *(HDEV *)(*((_QWORD *)v10 + 38) + 176LL),
                  v11,
                  v12,
                  a2,
                  a3,
                  a5,
                  (unsigned int *)&v20,
                  &v21);
    }
    v6 = updated;
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v22);
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v23);
    if ( v6 )
    {
      if ( a6 )
        v25 = (int)*a6;
      v6 = GreUpdateSprite(
             *(HDEV *)(*((_QWORD *)v10 + 38) + 176LL),
             0LL,
             *(void **)v11,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL,
             0,
             (struct _BLENDFUNCTION *)&v25,
             0x21200002u,
             0LL,
             0LL,
             1,
             0,
             0);
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v23, (struct DWMSPRITE *)((char *)v11 + 88));
      v16 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v11 + 18);
      v17 = *((_QWORD *)v16 + 23);
      if ( v17 )
        v18 = *(_QWORD *)(v17 + 8);
      else
        v18 = 0LL;
      bSpDwmNotifyDirty(*(_QWORD *)v11, v16, (unsigned int)v20, v18);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v23);
    }
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v24);
    if ( v11 )
      DEC_SHARE_REF_CNT(v11);
  }
  return v6;
}

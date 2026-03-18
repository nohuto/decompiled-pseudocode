/*
 * XREFs of GreSetPaletteEntries @ 0x1C02B6290
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0091AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00921F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02BBDD4 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // esi
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  HDC v14; // rdi
  __int64 *v16[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v17[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)v16, a1);
  v8 = v16[0];
  if ( v16[0] )
  {
    v17[0] = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)v16, a2, a3, a4);
    GreAcquireHmgrSemaphore(v10, v9, v11, v12);
    v14 = (HDC)v8[5];
    while ( v14 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v16, v14);
      v13 = v16[0];
      if ( !v16[0] )
        break;
      *((_DWORD *)v16[0] + 79) |= 0xFu;
      v14 = (HDC)v13[123];
      XDCOBJ::vAltUnlockFast(v16);
    }
    GreReleaseHmgrSemaphore(v13);
    SEMOBJ::vUnlock((SEMOBJ *)v17);
    DEC_SHARE_REF_CNT(v8);
  }
  return v7;
}

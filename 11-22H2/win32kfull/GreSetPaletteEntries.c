/*
 * XREFs of GreSetPaletteEntries @ 0x1C02D2050
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C000741C (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005848C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02D8DF8 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // r14d
  Gre::Base *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rcx
  HDC v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v18, a1);
  v9 = v18;
  if ( v18 )
  {
    v19 = *((_QWORD *)Gre::Base::Globals(v8) + 5);
    GreAcquireSemaphore(v19);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v18, a2, a3, a4);
    GreAcquireHmgrSemaphore(v11, v10, v12, v13);
    v15 = *(HDC *)(v9 + 40);
    while ( v15 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)&v20, v15);
      v14 = (__int64 *)v20;
      if ( !v20 )
        break;
      *(_DWORD *)(v20 + 316) |= 0xFu;
      LODWORD(v18) = 0;
      v15 = (HDC)v14[123];
      v16 = *v14;
      HmgDecrementShareReferenceCountEx(v14, &v18);
      if ( (_DWORD)v18 )
        GrepDeleteDC(v16, 0x2000000LL);
    }
    GreReleaseHmgrSemaphore(v14);
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    if ( v9 )
      DEC_SHARE_REF_CNT(v9);
  }
  return v7;
}

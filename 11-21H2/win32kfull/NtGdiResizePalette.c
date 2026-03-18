/*
 * XREFs of NtGdiResizePalette @ 0x1C02B6830
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0091AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00921F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00DCDA0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C015EFF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AC700 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C02BB8D4 (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // ecx
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  HDC v12; // rdi
  __int64 *v13; // rcx
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  signed __int32 v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rax
  HDC v19; // rbx
  __int64 v21; // [rsp+50h] [rbp+7h] BYREF
  int v22; // [rsp+58h] [rbp+Fh]
  _QWORD v23[2]; // [rsp+60h] [rbp+17h] BYREF
  _QWORD v24[2]; // [rsp+70h] [rbp+27h] BYREF
  __int64 *v25[2]; // [rsp+80h] [rbp+37h] BYREF
  struct PALETTE *v26; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( a2 - 1 <= 0x3FF )
  {
    v3 = 0;
    v4 = 0;
    EPALOBJ::EPALOBJ((EPALOBJ *)&v26, a1);
    if ( v26 )
    {
      if ( v26 != ppalDefault )
      {
        v5 = *((_DWORD *)v26 + 6);
        if ( (v5 & 0x100) != 0 )
        {
          if ( (v5 & 0x800) != 0 && a2 != 256 )
            goto LABEL_30;
          v22 = 0;
          v21 = 0LL;
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v21, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
          {
            v27 = ghsemPalette;
            GreAcquireSemaphore(ghsemPalette);
            v6 = *((unsigned int *)v26 + 7);
            v7 = *(_DWORD *)(v21 + 28);
            if ( (unsigned int)v6 >= v7 )
              v6 = v7;
            memmove(*(void **)(v21 + 112), *((const void **)v26 + 14), 4 * v6);
            *(_DWORD *)(v21 + 24) = *((_DWORD *)v26 + 6);
            *(_QWORD *)(v21 + 40) = *((_QWORD *)v26 + 5);
            *(_QWORD *)(v21 + 48) = *((_QWORD *)v26 + 6);
            *(_DWORD *)(v21 + 56) = *((_DWORD *)v26 + 14);
            XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v21);
            GreAcquireHmgrSemaphore(v9, v8, v10, v11);
            v12 = *(HDC *)(v21 + 40);
            while ( v12 )
            {
              MDCOBJ::MDCOBJ((MDCOBJ *)v23, v12);
              if ( !v23[0] )
                goto LABEL_16;
              if ( *(_WORD *)(v23[0] + 12LL) > 1u )
              {
                TraceLoggingWriteUnsupportedGdiUsage(5);
LABEL_16:
                MDCOBJ::~MDCOBJ((MDCOBJ *)v23);
                goto LABEL_23;
              }
              v12 = *(HDC *)(v23[0] + 984LL);
              XDCOBJ::RestoreAttributes((XDCOBJ *)v23);
              v23[0] = 0LL;
              MDCOBJ::~MDCOBJ((MDCOBJ *)v23);
            }
            XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v26);
            v16 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
            *((_DWORD *)v26 + 8) = v16;
            v17 = *((_QWORD *)v26 + 15);
            if ( (struct PALETTE *)v17 != v26 )
              *(_DWORD *)(v17 + 32) = v16;
            v4 = XEPALOBJ::bSwap((XEPALOBJ *)&v21, &v26, v14, v15);
            if ( v4 )
            {
              v18 = v21;
              v12 = *(HDC *)(v21 + 40);
              if ( !v12 )
                goto LABEL_24;
              do
              {
                MDCOBJA::MDCOBJA((MDCOBJA *)v25, v12);
                v13 = v25[0];
                if ( !v25[0] )
                  break;
                v25[0][11] = (__int64)v26;
                *((_DWORD *)v13 + 79) |= 0xFu;
                v12 = (HDC)v13[123];
                XDCOBJ::vAltUnlockFast(v25);
              }
              while ( v12 );
            }
LABEL_23:
            v18 = v21;
LABEL_24:
            v19 = *(HDC *)(v18 + 40);
            while ( v19 != v12 )
            {
              MDCOBJ::MDCOBJ((MDCOBJ *)v24, v19);
              _InterlockedDecrement((volatile signed __int32 *)(v24[0] + 12LL));
              v19 = *(HDC *)(v24[0] + 984LL);
              MDCOBJ::~MDCOBJ((MDCOBJ *)v24);
            }
            GreReleaseHmgrSemaphore(v13);
            SEMOBJ::vUnlock((SEMOBJ *)&v27);
          }
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v21);
        }
      }
    }
    v3 = v4;
LABEL_30:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v26);
    return v3;
  }
  return 0LL;
}

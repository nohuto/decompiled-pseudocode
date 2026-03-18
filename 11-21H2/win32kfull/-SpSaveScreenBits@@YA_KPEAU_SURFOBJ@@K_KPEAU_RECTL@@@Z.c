/*
 * XREFs of ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C027D6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0279220 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027BAD4 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027BC24 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027CCDC (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

__int64 __fastcall SpSaveScreenBits(struct _SURFOBJ *a1, unsigned int a2, __int64 a3, struct _RECTL *a4)
{
  HDEV hdev; // rdi
  __int64 v5; // rbx
  __int64 v7; // rsi
  TRACKOBJ *v10; // rsi
  int v11; // r14d
  __int64 i; // rdi
  struct _RECTL v13; // xmm0
  __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  struct _SPRITESTATE *v16; // [rsp+38h] [rbp-41h]
  HDEV v17; // [rsp+40h] [rbp-39h]
  __int64 v18; // [rsp+48h] [rbp-31h]
  _BYTE v19[16]; // [rsp+50h] [rbp-29h] BYREF
  int v20; // [rsp+60h] [rbp-19h] BYREF
  HDEV v21; // [rsp+68h] [rbp-11h]
  struct _RECTL v22; // [rsp+70h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp+7h]

  hdev = a1->hdev;
  v5 = 0LL;
  v23 = 0LL;
  v20 = 0;
  v7 = a3;
  v18 = a3;
  v16 = (struct _SPRITESTATE *)(hdev + 20);
  v17 = hdev;
  if ( *((_QWORD *)hdev + 172) && gpto )
  {
    if ( a2 )
    {
      if ( a2 == 2 )
      {
LABEL_20:
        v5 = (*((__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, __int64, struct _RECTL *))hdev + 172))(
               a1,
               a2,
               v7,
               a4);
        goto LABEL_21;
      }
LABEL_19:
      v13 = *a4;
      v21 = a1->hdev;
      v22 = v13;
      v20 = GreTearDownSprites(v21, a4);
      goto LABEL_20;
    }
    v15 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    v10 = gpto;
    v11 = 0;
    if ( gpto )
    {
      while ( !v11 )
      {
        for ( i = *((_QWORD *)v10 + 3); i; i = *(_QWORD *)(i + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v19, (struct EWNDOBJ *)i, v16);
          if ( (*(_DWORD *)(i + 184) & 0x1000000) != 0
            && (unsigned int)bIntersect(i + 4, a4)
            && RGNOBJ::bInside((RGNOBJ *)(i + 56), a4) == 2 )
          {
            v11 = 1;
            UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v19);
            break;
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v19);
        }
        v10 = (TRACKOBJ *)*((_QWORD *)v10 + 1);
        if ( !v10 )
        {
          if ( !v11 )
            goto LABEL_17;
          break;
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
      hdev = v17;
      v7 = v18;
      goto LABEL_19;
    }
LABEL_17:
    SEMOBJ::vUnlock((SEMOBJ *)&v15);
  }
LABEL_21:
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)&v20);
  return v5;
}

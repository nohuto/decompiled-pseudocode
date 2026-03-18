/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0
 * Callers:
 *     GreIntersectClipRect @ 0x1C00CA500 (GreIntersectClipRect.c)
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0019220 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0019260 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0019EB0 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0022E08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     PopThreadGuardedObject @ 0x1C0023630 (PopThreadGuardedObject.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0024160 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0024B20 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0032680 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0062E78 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0090DF0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0097060 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJ *a2, struct _RECTL *a3, int a4)
{
  LONG left; // r9d
  LONG top; // edx
  int v9; // r15d
  unsigned int v10; // edi
  __int64 v12; // r14
  struct _ENTRY *EntryFromObject; // rax
  struct _SLIST_ENTRY *v14; // rbx
  __int64 v15; // rcx
  bool v16; // zf
  struct _SLIST_ENTRY *v17; // rcx
  LONG v18; // edi
  int v19; // r14d
  LONG v20; // r12d
  _DWORD *v21; // rbx
  int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  LONG v26; // edi
  int v27; // eax
  _BYTE v28[8]; // [rsp+20h] [rbp-E0h] BYREF
  PSLIST_ENTRY v29; // [rsp+28h] [rbp-D8h] BYREF
  int v30; // [rsp+30h] [rbp-D0h]
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+40h] [rbp-C0h]
  struct _RECTL v33; // [rsp+48h] [rbp-B8h] BYREF
  PSLIST_ENTRY v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+60h] [rbp-A0h]
  _BYTE v36[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h]
  _QWORD v38[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v39; // [rsp+E0h] [rbp-20h]
  struct _POINTL v40; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL v41; // [rsp+F8h] [rbp-8h] BYREF
  LONG x; // [rsp+100h] [rbp+0h]
  LONG bottom; // [rsp+104h] [rbp+4h]
  LONG v44; // [rsp+108h] [rbp+8h]
  LONG v45; // [rsp+10Ch] [rbp+Ch]

  left = a3->left;
  top = a3->top;
  v41.x = a3->right;
  x = v41.x;
  bottom = a3->bottom;
  v45 = bottom;
  v40.x = left;
  v40.y = top;
  v41.y = top;
  v44 = left;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v36);
  v9 = 0;
  if ( !v37 )
  {
    EngSetLastError(8u);
LABEL_3:
    v10 = 0;
    goto LABEL_4;
  }
  if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v36, a2, &v40)
    || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v36, a2, &v41, 3)
    || !(unsigned int)EPATHOBJ::bCloseFigure((EPATHOBJ *)v36) )
  {
    goto LABEL_3;
  }
  v30 = 0;
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v29, (struct EPATHOBJ *)v36, 1u, 0LL);
  if ( !v29 )
  {
    EngSetLastError(8u);
    v10 = 0;
    goto LABEL_38;
  }
  *((_DWORD *)this + 9) |= 0x10u;
  v10 = 0;
  v12 = *((_QWORD *)this + 20);
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  if ( v12 )
  {
    v32 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&ListEntry, 0x70u);
    v14 = ListEntry;
    if ( ListEntry )
    {
      *(_QWORD *)&v33.left = v12;
      v10 = RGNOBJ::iCombine((RGNOBJ *)&ListEntry, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&v29, a4);
      if ( v10 )
      {
        v14 = ListEntry;
        v15 = *(_QWORD *)&v33.left;
        ++LODWORD(ListEntry[2].Next);
        *((_QWORD *)this + 20) = v14;
        v16 = (*(_DWORD *)(v15 + 32))-- == 1;
        if ( v16 )
          REGION::vDeleteREGION((PSLIST_ENTRY)v15);
      }
      else
      {
        REGION::vDeleteREGION(ListEntry);
        v14 = 0LL;
      }
    }
    REGION::vDeleteREGION(v29);
    v16 = v32 == 1;
    goto LABEL_36;
  }
  if ( a4 != 1 )
  {
    v35 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v34, 0x70u);
    v14 = v34;
    *(_QWORD *)&v33.left = 0LL;
    if ( !v34 )
    {
LABEL_35:
      REGION::vDeleteREGION(v29);
      v16 = v35 == 1;
LABEL_36:
      v29 = 0LL;
      if ( v16 )
        REGION::vDeleteREGION(v14);
      goto LABEL_38;
    }
    v32 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&ListEntry, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&ListEntry);
    if ( ListEntry )
    {
      DC::vGet_sizlWindow(this, (struct tagSIZE *)&v33);
      v18 = v33.left;
      v19 = 0;
      v20 = v33.top;
      v21 = (_DWORD *)*((_QWORD *)this + 6);
      if ( *((_QWORD *)this + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v28);
        if ( (v21[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v19 = v21[640];
          v18 += v19;
          v9 = v21[641];
          v20 += v9;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v22);
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion(v23);
        }
      }
      v24 = *((_DWORD *)this + 10) & 1;
      v25 = *((_DWORD *)this + 2 * v24 + 254);
      v26 = v18 - v25;
      v33.left = v19 - v25;
      v27 = *((_DWORD *)this + 2 * v24 + 255);
      v33.top = v9 - v27;
      v33.bottom = v20 - v27;
      v33.right = v26;
      RGNOBJ::vSet((struct _RECTL **)&ListEntry, &v33);
      v10 = RGNOBJ::iCombine((RGNOBJ *)&v34, (struct RGNOBJ *)&ListEntry, (struct RGNOBJ *)&v29, a4);
      if ( v10 )
      {
        v14 = v34;
        ++LODWORD(v34[2].Next);
        *((_QWORD *)this + 20) = v14;
        goto LABEL_34;
      }
      v17 = v34;
    }
    else
    {
      v17 = v14;
    }
    REGION::vDeleteREGION(v17);
    v14 = 0LL;
LABEL_34:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&ListEntry);
    goto LABEL_35;
  }
  ++LODWORD(v29[2].Next);
  *((_QWORD *)this + 20) = v29;
  v10 = RGNOBJ::iComplexity((RGNOBJ *)&v29);
LABEL_38:
  if ( v30 == 1 )
  {
    REGION::vDeleteREGION(v29);
    v29 = 0LL;
  }
LABEL_4:
  EPATHOBJ::vUnlock((EPATHOBJ *)v36);
  if ( v39 )
    PopThreadGuardedObject(v38);
  return v10;
}

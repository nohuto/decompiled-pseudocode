/*
 * XREFs of GreSetMagicColors @ 0x1C0175868
 * Callers:
 *     SetSysColor @ 0x1C0062BAC (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C0175B20 (NtGdiSetMagicColors.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BAA4 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C001DADC (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C001DB44 (--1DLODCOBJ@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00628E0 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0080180 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0099D40 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00A6910 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C0175688 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  int v7; // r12d
  int v8; // r8d
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rax
  _QWORD *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v22; // [rsp+30h] [rbp-99h] BYREF
  struct PALETTE *v23; // [rsp+38h] [rbp-91h] BYREF
  HSEMAPHORE v24; // [rsp+40h] [rbp-89h] BYREF
  HSEMAPHORE v25; // [rsp+48h] [rbp-81h] BYREF
  HSEMAPHORE v26; // [rsp+50h] [rbp-79h] BYREF
  PERESOURCE v27; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v28[6]; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v29[32]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v30[80]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v31; // [rsp+148h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v28, a1);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( !v28[0] || a3 - 8 > 1 && a3 - 246 > 1 )
    goto LABEL_38;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v31);
  if ( (a2 & 0xFD000000) == 0 )
  {
    v31 = *(_QWORD *)(v28[0] + 48LL);
    v9 = v31;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v27, (struct PDEVOBJ *)&v31);
    v26 = *(HSEMAPHORE *)(v9 + 56);
    EngAcquireSemaphore(v26);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v30);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v29, (struct PDEVOBJ *)&v31);
    if ( !_bittest((const signed __int32 *)(v9 + 2140), 8u) )
    {
      if ( (*(_DWORD *)(v9 + 40) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v29, v10, v11);
        DLODCOBJ::~DLODCOBJ((DLODCOBJ *)v30);
        SEMOBJ::vUnlock((PERESOURCE *)&v26);
        NEEDGRELOCK::vUnlock(&v27, v18, v19);
        goto LABEL_36;
      }
      v12 = *(_QWORD *)(v9 + 1768);
      v13 = *(_QWORD **)v12;
      LODWORD(v10) = *(_DWORD *)(v12 + 16);
      while ( 1 )
      {
        v9 = v13[6];
        v31 = v9;
        if ( _bittest((const signed __int32 *)(v9 + 2140), 8u) )
          break;
        v13 = (_QWORD *)*v13;
        v10 = (unsigned int)(v10 - 1);
        if ( !(_DWORD)v10 )
          goto LABEL_35;
      }
      v7 = 1;
    }
    v22 = *(_QWORD *)(v9 + 1776);
    v25 = ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v24 = ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    v23 = ppalDefault;
    v14 = XEPALOBJ::ulDispatchGFPEFunction(&v23, *((_DWORD *)ppalDefault + 25), a2);
    v15 = v14;
    if ( v14 != -1 )
    {
      if ( v14 >= 0xA )
        v15 = v14 + 236;
      if ( v15 == a3 )
      {
        if ( !v7 )
        {
          v5 = 1;
          goto LABEL_29;
        }
      }
      else if ( v15 - 8 > 1 && v15 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v16 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v16 = 15780518;
        }
        else
        {
          v16 = 10789024;
          if ( a3 == 246 )
            v16 = 15793151;
        }
        v17 = bSetMagicColor((__int64)&v31, v22, a3, v16);
        goto LABEL_28;
      }
    }
    v17 = bSetMagicColor((__int64)&v31, v22, a3, a2);
    v5 = v17;
LABEL_28:
    v6 = v17;
LABEL_29:
    SEMOBJ::vUnlock((PERESOURCE *)&v24);
    if ( v6 && (*(_DWORD *)(v9 + 40) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v9 + 1736) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 1736))(
          *(_QWORD *)(*(_QWORD *)(v9 + 24) + 1768LL),
          &v22,
          0LL,
          0LL,
          *(_DWORD *)(v22 + 28));
      else
        v5 = 0;
    }
    SEMOBJ::vUnlock((PERESOURCE *)&v25);
    goto LABEL_35;
  }
LABEL_36:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v8);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v20);
  }
LABEL_38:
  DCOBJ::~DCOBJ((DCOBJ *)v28);
  return v5;
}

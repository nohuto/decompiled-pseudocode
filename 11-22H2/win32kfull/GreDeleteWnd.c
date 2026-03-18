/*
 * XREFs of GreDeleteWnd @ 0x1C0288120
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0275338 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEndPage @ 0x1C0278330 (NtGdiEndPage.c)
 *     EngDeleteWnd @ 0x1C0287F80 (EngDeleteWnd.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0283260 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x1C0287334 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vDelete@EWNDOBJ@@QEAAXXZ @ 0x1C0287360 (-vDelete@EWNDOBJ@@QEAAXXZ.c)
 */

void __fastcall GreDeleteWnd(EWNDOBJ *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  Gre::Base *v4; // rcx
  EWNDOBJ *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  EWNDOBJ *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // [rsp+20h] [rbp-29h] BYREF
  HDEV v16; // [rsp+30h] [rbp-19h]
  int v17; // [rsp+38h] [rbp-11h]
  _QWORD v18[2]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v19[40]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v20; // [rsp+78h] [rbp+2Fh]
  __int64 v21; // [rsp+80h] [rbp+37h]
  HDEV v22; // [rsp+B0h] [rbp+67h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v24; // [rsp+C0h] [rbp+77h] BYREF

  if ( EWNDOBJ::bValid(this) )
  {
    v3 = *(_QWORD **)(v2 + 168);
    v22 = *(HDEV *)(v3[4] + 48LL);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v18);
    v21 = 0LL;
    v20 = 0LL;
    v18[0] = 0LL;
    v15 = 0LL;
    v17 = 1;
    v4 = (Gre::Base *)*((unsigned int *)v22 + 10);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      Gre::Base::Globals(v4);
      *(_QWORD *)&v15 = *((_QWORD *)v22 + 6);
      v16 = v22;
      GreAcquireSemaphore(v15);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v15, 11LL);
    }
    v24 = *((_QWORD *)Gre::Base::Globals(v4) + 7);
    GreAcquireSemaphore(v24);
    v23 = *((_QWORD *)this + 25);
    GreAcquireSemaphore(v23);
    ((void (__fastcall *)(EWNDOBJ *, __int64))v3[5])(this, 32LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v23);
    v5 = (EWNDOBJ *)v3[3];
    if ( v5 == this )
    {
      v3[3] = *((_QWORD *)this + 20);
    }
    else
    {
      while ( v5 )
      {
        v6 = (_QWORD *)((char *)v5 + 160);
        v5 = (EWNDOBJ *)*((_QWORD *)v5 + 20);
        if ( v5 == this )
        {
          *v6 = *((_QWORD *)this + 20);
          break;
        }
      }
    }
    EWNDOBJ::vDelete(this);
    *((_DWORD *)this + 38) = 0;
    Win32FreePool(this);
    if ( !v3[3] )
    {
      v8 = *(_QWORD *)(SGDGetSessionState(v7) + 32);
      v9 = *(_QWORD **)(v8 + 23664);
      if ( v3 == v9 )
      {
        *(_QWORD *)(v8 + 23664) = v3[1];
      }
      else
      {
        while ( v9 )
        {
          v10 = v9 + 1;
          v9 = (_QWORD *)v9[1];
          if ( v9 == v3 )
          {
            *v10 = v3[1];
            break;
          }
        }
      }
      v11 = (EWNDOBJ *)v3[2];
      if ( v11 )
      {
        EWNDOBJ::vDelete(v11);
        *(_DWORD *)(v3[2] + 152LL) = 0;
        Win32FreePool((void *)v3[2]);
      }
      *(_DWORD *)v3 = 0;
      Win32FreePool(v3);
    }
    vSpWndobjChange(v22, 0LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v24);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v15, v12, v13, v14);
    if ( v18[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v18);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v19);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v22);
  }
}

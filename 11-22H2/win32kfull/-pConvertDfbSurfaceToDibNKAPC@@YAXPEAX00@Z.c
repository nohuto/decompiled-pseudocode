/*
 * XREFs of ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C02D53A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EB4C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C02D3640 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNLOCK@@QEAA@XZ @ 0x1C02D5304 (--0DCVISRGNLOCK@@QEAA@XZ.c)
 */

void __fastcall pConvertDfbSurfaceToDibNKAPC(HSURF a1, void *a2, void *a3)
{
  Gre::Base *v4; // rcx
  __int64 v5; // rax
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx
  Gre::Base *v7; // rbx
  _BYTE v8[32]; // [rsp+30h] [rbp-30h] BYREF
  Gre::Base *v9; // [rsp+50h] [rbp-10h]
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+88h] [rbp+28h] BYREF

  UserEnterUserCritSec(a1, a2, a3);
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v10);
  SURFREF::SURFREF((SURFREF *)v8, a1);
  v4 = v9;
  if ( v9 )
  {
    if ( (*((_DWORD *)v9 + 29) & 0x20) != 0 )
    {
      v5 = SGDGetSessionState(v9);
      ++*(_DWORD *)(*(_QWORD *)(v5 + 32) + 23424LL);
      *((_DWORD *)v9 + 29) &= ~0x20u;
      v4 = v9;
      if ( *((_WORD *)v9 + 50) == 3 )
      {
        v6 = Gre::Base::Globals(v9);
        v11 = *((_QWORD *)v6 + 15);
        GreAcquireSemaphore(v11);
        DCVISRGNLOCK::DCVISRGNLOCK((DCVISRGNLOCK *)&v10);
        v10 = *((_QWORD *)v6 + 14);
        GreAcquireSemaphore(v10);
        v7 = v9;
        DEC_SHARE_REF_CNT(v9);
        v9 = 0LL;
        pProcessDfbSurfaces2(v7, 1LL, 1LL);
        SEMOBJ::vUnlock((SEMOBJ *)&v10);
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v10);
        SEMOBJ::vUnlock((SEMOBJ *)&v11);
        v4 = v9;
      }
    }
    if ( v4 )
      DEC_SHARE_REF_CNT(v4);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  UserLeaveUserCritSec();
}

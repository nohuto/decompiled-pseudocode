/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0024160
 * Callers:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C00277CC (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0027DA0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003353C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C008EC08 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C008EE00 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00968C0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00A8FE0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00AB334 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00CC200 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00CC88C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNMEMOBJ::vPushThreadGuardedObject(RGNMEMOBJ *this)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v10 = gSessionId,
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        v10 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v4 = *(_QWORD **)this;
        if ( *(_QWORD *)this )
        {
          v5 = v4 + 6;
          if ( v4 != (_QWORD *)-48LL )
          {
            KeEnterCriticalRegion();
            v6 = 0LL;
            v7 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v7 )
              v6 = *v7;
            v4[8] = v4;
            v4[9] = CleanUpRegion;
            if ( v6 )
            {
              v8 = *(_QWORD *)(v6 + 88);
              v9 = (_QWORD *)(v6 + 88);
              if ( *(_QWORD *)(v8 + 8) != v6 + 88 )
                __fastfail(3u);
              *v5 = v8;
              v4[7] = v9;
              *(_QWORD *)(v8 + 8) = v5;
              *v9 = v5;
            }
            else
            {
              v4[7] = v4 + 6;
              *v5 = v5;
            }
            KeLeaveCriticalRegion();
          }
        }
      }
    }
  }
}

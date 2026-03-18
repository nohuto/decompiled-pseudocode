/*
 * XREFs of ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C01E5124
 * Callers:
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C01189BC (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C01E53CC (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C00742CC (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0074860 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

void __fastcall CreateAndPostTSFNotify(
        int a1,
        struct tagWND *a2,
        int a3,
        int a4,
        struct tagTHREADINFO *a5,
        PETHREAD *a6,
        unsigned int a7)
{
  struct tagQ **v11; // rbx
  struct tagNOTIFY *Notify; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  v11 = (struct tagQ **)a5;
  if ( *((_QWORD *)a5 + 54) )
  {
    if ( a5 != (struct tagTHREADINFO *)gptiRit )
    {
      Notify = CreateNotify(0LL, a1, a2, a3, a4, a6, a7, 1u);
      if ( Notify )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&a5);
        *((_DWORD *)Notify + 14) |= 0xCu;
        if ( !(unsigned int)PostEventMessageEx(
                              (struct tagTHREADINFO *)v11,
                              v11[54],
                              0xCu,
                              0LL,
                              0,
                              0LL,
                              (__int64)Notify,
                              0LL) )
        {
          if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
            __int2c();
          RemoveNotify((struct tagNOTIFY ***)Notify);
        }
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&a5, v13, v14);
      }
    }
  }
}

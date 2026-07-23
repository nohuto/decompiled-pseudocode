/*
 * XREFs of MiInitializeRetpoline @ 0x140B48688
 * Callers:
 *     MiInitSystem @ 0x140B47C18 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 *     RtlIsImageFullyRetpolined @ 0x14035F928 (RtlIsImageFullyRetpolined.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x1405B21D8 (RtlCreateRetpolineStubsFunctionTable.c)
 *     MmAcquireLoadLock @ 0x140704660 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407049E0 (MmReleaseLoadLock.c)
 *     MiMarkRetpolineBits @ 0x140A344F0 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140B9A900 (MiCreateRetpolineBitmap.c)
 *     MiLockRetpolineStubs @ 0x140B9A9F0 (MiLockRetpolineStubs.c)
 */

__int64 MiInitializeRetpoline()
{
  struct _KTHREAD *CurrentThread; // rbx
  int RetpolineStubsFunctionTable; // eax
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  qword_140C65978 = (__int64)&qword_140C65970;
  qword_140C65970 = &qword_140C65970;
  RetpolineStubsFunctionTable = dword_140C65984;
  if ( dword_140C65984 < 0 )
  {
    BugCheckParameter4 = 161LL;
    goto LABEL_18;
  }
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    RetpolineStubsFunctionTable = MiLockRetpolineStubs();
    if ( RetpolineStubsFunctionTable >= 0 )
    {
      qword_140C65968 = MiReservePtes((__int64)&qword_140C69A40, 1u);
      if ( qword_140C65968 )
      {
        RetpolineStubsFunctionTable = MiCreateRetpolineBitmap(&v4);
        if ( RetpolineStubsFunctionTable >= 0 )
        {
          MmAcquireLoadLock();
          RetpolineStubsFunctionTable = MiMarkRetpolineBits((__int64)PsNtosImageBase);
          if ( RetpolineStubsFunctionTable >= 0 )
          {
            if ( (unsigned int)RtlIsImageFullyRetpolined(PsHalImageBase)
              && (RetpolineStubsFunctionTable = MiMarkRetpolineBits((__int64)PsHalImageBase),
                  RetpolineStubsFunctionTable < 0) )
            {
              BugCheckParameter4 = 166LL;
            }
            else
            {
              MmReleaseLoadLock((__int64)CurrentThread);
              retpoline_image_bitmap = v4 - 0x1FFFF0000000LL;
              RetpolineStubsFunctionTable = RtlCreateRetpolineStubsFunctionTable(
                                              v4 - 0x1FFFF0000000LL,
                                              Base,
                                              dword_140C65980 << 12);
              if ( RetpolineStubsFunctionTable >= 0 )
              {
                dword_140C02514 = dword_140C6997C;
                dword_140C02518 = dword_140C65980 << 12;
                return 0LL;
              }
              BugCheckParameter4 = 167LL;
            }
          }
          else
          {
            BugCheckParameter4 = 165LL;
          }
        }
        else
        {
          BugCheckParameter4 = 164LL;
        }
      }
      else
      {
        RetpolineStubsFunctionTable = -1073741670;
        BugCheckParameter4 = 163LL;
      }
    }
    else
    {
      BugCheckParameter4 = 162LL;
    }
LABEL_18:
    KeBugCheckEx(
      0x1Au,
      0x1082uLL,
      ((unsigned __int64)qword_140C69980 >> 2) & 1,
      RetpolineStubsFunctionTable,
      BugCheckParameter4);
  }
  return 0LL;
}

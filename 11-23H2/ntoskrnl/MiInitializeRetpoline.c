/*
 * XREFs of MiInitializeRetpoline @ 0x140B44F88
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     RtlIsImageFullyRetpolined @ 0x140360118 (RtlIsImageFullyRetpolined.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x1405B26B8 (RtlCreateRetpolineStubsFunctionTable.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 *     MiMarkRetpolineBits @ 0x140A34730 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140B99900 (MiCreateRetpolineBitmap.c)
 *     MiLockRetpolineStubs @ 0x140B999F0 (MiLockRetpolineStubs.c)
 */

__int64 MiInitializeRetpoline()
{
  struct _KTHREAD *CurrentThread; // rbx
  int RetpolineStubsFunctionTable; // eax
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  qword_140C65878 = (__int64)&qword_140C65870;
  qword_140C65870 = &qword_140C65870;
  RetpolineStubsFunctionTable = dword_140C65884;
  if ( dword_140C65884 < 0 )
  {
    BugCheckParameter4 = 161LL;
    goto LABEL_18;
  }
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    RetpolineStubsFunctionTable = MiLockRetpolineStubs();
    if ( RetpolineStubsFunctionTable >= 0 )
    {
      qword_140C65868 = MiReservePtes((__int64)&qword_140C69940, 1u);
      if ( qword_140C65868 )
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
                                              dword_140C65880 << 12);
              if ( RetpolineStubsFunctionTable >= 0 )
              {
                dword_140C02514 = dword_140C6987C;
                dword_140C02518 = dword_140C65880 << 12;
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
      ((unsigned __int64)qword_140C69880 >> 2) & 1,
      RetpolineStubsFunctionTable,
      BugCheckParameter4);
  }
  return 0LL;
}

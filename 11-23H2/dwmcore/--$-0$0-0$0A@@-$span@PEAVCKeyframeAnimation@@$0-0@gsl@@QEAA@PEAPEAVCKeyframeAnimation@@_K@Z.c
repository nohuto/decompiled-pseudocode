/*
 * XREFs of ??$?0$0?0$0A@@?$span@PEAVCKeyframeAnimation@@$0?0@gsl@@QEAA@PEAPEAVCKeyframeAnimation@@_K@Z @ 0x1801BD870
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180103C6C (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 */

gsl::details *__fastcall gsl::span<CKeyframeAnimation *,-1>::span<CKeyframeAnimation *,-1>(
        gsl::details *a1,
        __int64 a2,
        __int64 a3)
{
  gsl::details *v5; // rcx
  bool v6; // zf

  gsl::details::extent_type<-1>::extent_type<-1>(a1, a3);
  v6 = *(_QWORD *)a1 == -1LL;
  *((_QWORD *)a1 + 1) = a2;
  if ( v6 || !a2 && *(_QWORD *)a1 )
  {
    gsl::details::terminate(v5);
    JUMPOUT(0x1801BD8B0LL);
  }
  return a1;
}

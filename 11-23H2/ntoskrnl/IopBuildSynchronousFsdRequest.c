/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x1407FD690
 * Callers:
 *     PnpQueryInterface @ 0x1407FD510 (PnpQueryInterface.c)
 *     IoBuildSynchronousFsdRequest @ 0x1407FD650 (IoBuildSynchronousFsdRequest.c)
 *     IopCreateArcName @ 0x14086FA68 (IopCreateArcName.c)
 *     HalpQueryPccInterface @ 0x140935C90 (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x1409B8A74 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14022EE70 (IopQueueThreadIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140371D90 (IopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v8; // rbx

  result = IopBuildAsynchronousFsdRequest(a1, a2, a3, a4, a5, a7);
  v8 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = a6;
    IopQueueThreadIrp(result);
    return v8;
  }
  return result;
}

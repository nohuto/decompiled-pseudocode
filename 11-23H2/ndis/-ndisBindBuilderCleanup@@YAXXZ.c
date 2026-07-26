/*
 * XREFs of ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C013C430
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01616A8 (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0161738 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C013B7A8 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 */

void ndisBindBuilderCleanup(void)
{
  PVOID v0; // rbx

  v0 = qword_1C00F5730;
  if ( qword_1C00F5730 )
  {
    NdisBindBuilderGlobal::~NdisBindBuilderGlobal((NdisBindBuilderGlobal *)qword_1C00F5730);
    ExFreePoolWithTag(v0, 0x4742444Eu);
    qword_1C00F5730 = 0LL;
  }
}

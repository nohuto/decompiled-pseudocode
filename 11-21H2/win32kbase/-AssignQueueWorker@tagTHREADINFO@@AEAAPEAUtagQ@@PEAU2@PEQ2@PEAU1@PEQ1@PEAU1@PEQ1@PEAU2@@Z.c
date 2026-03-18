/*
 * XREFs of ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x1C003A6D8
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x1C003A6D8 (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     ?AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1C00B7390 (-AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1C00BB720 (-AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 * Callees:
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x1C003A6D8 (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     ?RemoveThreadFromListWorker@tagTHREADINFO@@AEAA_NPEAUtagQ@@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x1C009A2D0 (-RemoveThreadFromListWorker@tagTHREADINFO@@AEAA_NPEAUtagQ@@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 */

ULONG_PTR __fastcall tagTHREADINFO::AssignQueueWorker(_QWORD *a1, ULONG_PTR a2, int a3, int a4, int a5)
{
  ULONG_PTR BugCheckParameter4; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdx
  _QWORD *v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rcx

  BugCheckParameter4 = *(_QWORD *)((char *)a1 + a5);
  if ( BugCheckParameter4 != a2 )
  {
    v8 = 0LL;
    if ( BugCheckParameter4
      && !(unsigned __int8)tagTHREADINFO::RemoveThreadFromListWorker(a1, *(_QWORD *)((char *)a1 + a5)) )
    {
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)a1, a2, BugCheckParameter4);
    }
    *(_QWORD *)((char *)a1 + a5) = a2;
    if ( a2 )
    {
      v9 = a3;
      v10 = *(_QWORD **)(a3 + a2);
      v11 = v10;
      if ( v10 )
      {
        while ( v11 != a1 )
        {
          v12 = a4;
          v11 = *(_QWORD **)((char *)v11 + a4);
          if ( !v11 )
            goto LABEL_6;
        }
      }
      else
      {
        v12 = a4;
LABEL_6:
        if ( !*(_QWORD *)((char *)a1 + v12) )
        {
          *(_QWORD *)((char *)a1 + v12) = v10;
          *(_QWORD *)(v9 + a2) = a1;
          if ( a5 == 432 )
          {
            v13 = *(__int64 **)(a1[54] + 112LL);
            if ( v13 )
              v8 = *v13;
            *(_QWORD *)(a1[56] + 32LL) = v8;
            goto LABEL_12;
          }
          return BugCheckParameter4;
        }
      }
      KeBugCheckEx(0x164u, 0x12uLL, a2, (ULONG_PTR)a1, 0LL);
    }
    if ( a5 == 432 )
    {
LABEL_12:
      if ( a2 == a1[82] )
        tagTHREADINFO::AssignQueueWorker((_DWORD)a1, 0, 480, 1496, 656);
    }
    return BugCheckParameter4;
  }
  return 0LL;
}

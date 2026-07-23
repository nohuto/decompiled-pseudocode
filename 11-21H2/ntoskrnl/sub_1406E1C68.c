/*
 * XREFs of sub_1406E1C68 @ 0x1406E1C68
 * Callers:
 *     sub_1407914BC @ 0x1407914BC (sub_1407914BC.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 *     sub_140A083CC @ 0x140A083CC (sub_140A083CC.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406E6DC0 @ 0x1406E6DC0 (sub_1406E6DC0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406E1C68(struct _EX_RUNDOWN_REF *P, char a2)
{
  _QWORD *Count; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  PVOID Ptr; // rcx
  PVOID v9; // rcx

  if ( a2 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    Count = (_QWORD *)P[7].Count;
    if ( Count )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *Count )
          {
            v4 = Count;
            Count = (_QWORD *)*Count;
            *v4 = 0LL;
          }
          if ( !Count[1] )
            break;
          v5 = Count;
          Count = (_QWORD *)Count[1];
          v5[1] = 0LL;
        }
        v6 = Count[2];
        sub_1406E6DC0(Count, P);
        v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 )
          break;
        Count = (_QWORD *)v7;
      }
    }
    P[7].Count = 0LL;
  }
  Ptr = P[8].Ptr;
  if ( Ptr )
    ZwClose(Ptr);
  v9 = P[9].Ptr;
  if ( v9 )
    ZwClose(v9);
  ExFreePoolWithTag(P, 0x20666E57u);
}

/*
 * XREFs of PiSwFindPdoAssociation @ 0x1408497E0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14081B5CC (PiSwIrpStartCreateWorker.c)
 *     PiSwGetChildPdo @ 0x1408495C0 (PiSwGetChildPdo.c)
 *     PiSwStopDestroy @ 0x14086A198 (PiSwStopDestroy.c)
 *     PiSwRemovePdoAssociation @ 0x140967C34 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiSwFindPdoAssociation(__int64 a1, __int64 a2, char a3)
{
  char v3; // r9
  _QWORD *v4; // r11
  _QWORD *v5; // rax
  unsigned __int64 v6; // r10
  __int64 v7; // rcx

  v3 = 0;
  v4 = (_QWORD *)(a1 + 128);
  v5 = *(_QWORD **)(a1 + 128);
  v6 = 0LL;
  while ( v5 != v4 )
  {
    v6 = (unsigned __int64)v5;
    if ( a3 )
      v7 = v5[4];
    else
      v7 = v5[5];
    if ( v7 == a2 )
    {
      v3 = 1;
      return v6 & -(__int64)(v3 != 0);
    }
    v5 = (_QWORD *)*v5;
  }
  return v6 & -(__int64)(v3 != 0);
}

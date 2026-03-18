/*
 * XREFs of ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C0135128
 * Callers:
 *     EngFillPath @ 0x1C0134C30 (EngFillPath.c)
 *     EngStrokeAndFillPath @ 0x1C02856C0 (EngStrokeAndFillPath.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJ *__fastcall RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(
        RGNMEMOBJ *a1,
        struct EPATHOBJ *a2,
        int a3,
        unsigned int a4,
        struct _RECTL *a5)
{
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  RGNMEMOBJ::RGNMEMOBJ(a1, 0, 0);
  *((_DWORD *)a1 + 4) = 0;
  if ( !a3 )
  {
    v9 = *((_QWORD *)a2 + 5);
LABEL_5:
    *(_QWORD *)a1 = v9;
    goto LABEL_6;
  }
  v9 = *(_QWORD *)a1;
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)a2 & 0x10) != 0 )
    {
      if ( a4 == 2 )
        v9 = *((_QWORD *)a2 + 4);
      else
        v9 = *((_QWORD *)a2 + 3);
    }
    else
    {
      v9 = *((_QWORD *)a2 + 2);
    }
    goto LABEL_5;
  }
LABEL_6:
  if ( !v9 )
  {
    v12 = 0;
    *((_DWORD *)a1 + 4) = 1;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v11, a2, a4, a5);
    *(_QWORD *)a1 = v11;
    RGNMEMOBJ::vPushThreadGuardedObject(a1);
    if ( v12 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
  }
  return a1;
}

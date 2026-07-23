/*
 * XREFs of sub_140832928 @ 0x140832928
 * Callers:
 *     PsSetCreateProcessNotifyRoutineEx @ 0x140832420 (PsSetCreateProcessNotifyRoutineEx.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x140832620 (PsSetCreateProcessNotifyRoutine.c)
 *     PsSetCreateProcessNotifyRoutineEx2 @ 0x140832760 (PsSetCreateProcessNotifyRoutineEx2.c)
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     sub_1403C773C @ 0x1403C773C (sub_1403C773C.c)
 *     sub_140832A20 @ 0x140832A20 (sub_140832A20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140832928(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v3; // esi
  int v5; // edx
  struct _EX_RUNDOWN_REF *v6; // rdi
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // r15
  struct _EX_RUNDOWN_REF *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // rdi
  volatile signed __int32 *v12; // rax

  v2 = a2;
  v3 = a2 & 2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v9 = 0LL;
    while ( 1 )
    {
      v10 = sub_140281870((signed __int64 *)&stru_140CF6440.Ptr + v9);
      v11 = v10;
      if ( v10 )
      {
        LODWORD(v2) = v2 & 0xFFFFFFFE;
        if ( v10[1].Count == a1
          && LODWORD(v10[2].Count) == (_DWORD)v2
          && sub_1403C7678((signed __int64 *)&stru_140CF6440.Ptr + v9, 0LL, (__int64)v10) )
        {
          v12 = &dword_140D3CD44;
          if ( v3 )
            v12 = &dword_140D3CD50;
          _InterlockedDecrement(v12);
          sub_140281930((signed __int64 *)&stru_140CF6440.Ptr + v9, (__int64)v11);
          sub_1402F9540((__int64)CurrentThread);
          ExWaitForRundownProtectionRelease(v11);
          ExFreePoolWithTag(v11, 0);
          return 0LL;
        }
        sub_140281930((signed __int64 *)&stru_140CF6440.Ptr + v9, (__int64)v11);
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= 0x40 )
      {
        sub_1402F9540((__int64)CurrentThread);
        return 3221225594LL;
      }
    }
  }
  if ( (a2 & 2) != 0 )
    v5 = 32;
  else
    v5 = 0;
  if ( !(unsigned int)sub_1403C773C(a1, v5) )
    return 3221225506LL;
  v6 = (struct _EX_RUNDOWN_REF *)sub_140832A20(a1, v2);
  if ( !v6 )
    return 3221225626LL;
  v7 = 0LL;
  while ( !sub_1403C7678((signed __int64 *)&stru_140CF6440.Ptr + v7, v6, 0LL) )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 0x40 )
    {
      ExFreePoolWithTag(v6, 0);
      return 3221225485LL;
    }
  }
  if ( v3 )
  {
    _InterlockedIncrement(&dword_140D3CD50);
    if ( (dword_140D3CA20 & 4) == 0 )
      _interlockedbittestandset(&dword_140D3CA20, 2u);
  }
  else
  {
    _InterlockedIncrement(&dword_140D3CD44);
    if ( (dword_140D3CA20 & 2) == 0 )
      _interlockedbittestandset(&dword_140D3CA20, 1u);
  }
  return 0LL;
}

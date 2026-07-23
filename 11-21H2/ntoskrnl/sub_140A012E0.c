/*
 * XREFs of sub_140A012E0 @ 0x140A012E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14093E830 @ 0x14093E830 (sub_14093E830.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140A012E0(int *a1, char a2)
{
  KPROCESSOR_MODE v5; // dl
  unsigned __int64 v6; // rax
  unsigned int v7; // eax
  unsigned __int64 v8; // r8
  unsigned int v9; // eax
  struct _KTHREAD *v10; // rax
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // [rsp+34h] [rbp-34h] BYREF
  _DWORD v14[2]; // [rsp+38h] [rbp-30h] BYREF
  int v15; // [rsp+40h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-18h]

  v13 = 0;
  v14[0] = 0;
  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *((_BYTE *)CurrentThread + 562);
  v6 = (unsigned __int64)(a1 + 1);
  if ( v5 )
  {
    if ( v6 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    v7 = *(_DWORD *)v6;
  }
  else
  {
    v7 = *(_DWORD *)v6;
  }
  v14[1] = v7;
  if ( v7 < 0x14 )
    return 3221225485LL;
  if ( v5 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)a1 + v7;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !SeSinglePrivilegeCheck(stru_140D3CA50, v5) )
      return 3221225569LL;
  }
  v15 = *a1;
  if ( v15 != 1 )
    return 3221225485LL;
  v13 = a1[2];
  v9 = a1[4];
  v14[0] = v9;
  if ( (a2 & 2) != 0 && v9 > 0xFFFF )
    return 3221225485LL;
  v10 = KeGetCurrentThread();
  --*((_WORD *)v10 + 242);
  ExAcquireFastMutexUnsafe(&stru_140C11680);
  v11 = 0;
  if ( (a2 & 1) != 0 )
  {
    v12 = v13;
    if ( v13 == -1 )
    {
      v13 = 0xFFFF;
    }
    else
    {
      if ( v13 > 0xFFFE )
        v12 = 65534;
      v13 = v12;
    }
    v11 = sub_14093E830(L"Timeout", (__int64)&qword_140042090, (__int64)&v13, 2, 1);
  }
  if ( v11 >= 0 && (a2 & 2) != 0 )
    v11 = sub_14093E830(L"BootNext", (__int64)&qword_140042090, (__int64)v14, 2, 1);
  ExReleaseFastMutexUnsafe(&stru_140C11680);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}

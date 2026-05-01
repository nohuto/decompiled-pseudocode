/*
 * XREFs of ?AddPositioner@PositionerPriority@@UEAAXW4SHELL_POSITIONER_TYPE@@@Z @ 0x1805B1B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PositionerPriority::AddPositioner(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rsi
  int *v5; // r8
  unsigned int v6; // r9d
  _DWORD *v7; // rax
  unsigned int i; // ecx
  __int64 v9; // rax

  v2 = a1 + 3;
  v3 = a2;
  AcquireSRWLockExclusive(a1 + 3);
  v5 = (int *)&g_exclusivePositioners;
  v6 = 0;
  v7 = &g_exclusivePositioners;
  while ( *v7 != (_DWORD)v3 )
  {
    ++v6;
    ++v7;
    if ( v6 >= 2 )
      goto LABEL_7;
  }
  for ( i = 0; i < 2; ++i )
  {
    v9 = *v5++;
    *((_BYTE *)&a1[4].Ptr + v9) = 0;
  }
LABEL_7:
  *((_BYTE *)&a1[4].Ptr + v3) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}

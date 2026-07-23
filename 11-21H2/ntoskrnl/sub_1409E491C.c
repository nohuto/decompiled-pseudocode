/*
 * XREFs of sub_1409E491C @ 0x1409E491C
 * Callers:
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1406EFB84 @ 0x1406EFB84 (sub_1406EFB84.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     sub_1409E4A50 @ 0x1409E4A50 (sub_1409E4A50.c)
 */

LONG __fastcall sub_1409E491C(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // rbp
  unsigned __int16 *v8; // rax
  unsigned int *v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // rdi
  PEPROCESS Process; // [rsp+30h] [rbp-38h] BYREF
  __int16 v14; // [rsp+80h] [rbp+18h]

  v4 = a4;
  Process = 0LL;
  HIBYTE(v14) = 0;
  KeWaitForSingleObject(&stru_140C15DC0, Executive, 0, 0, 0LL);
  v8 = sub_1406EFB84(a1, 2);
  if ( v8 )
  {
    v9 = (unsigned int *)(v8 + 2);
    v10 = (unsigned __int16)(4 * *v8 - 4) >> 2;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( PsLookupProcessByProcessId((HANDLE)*v9, &Process) >= 0 )
        {
          sub_1409E4A50((ULONG_PTR)Process);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
        }
        ++v9;
        --v11;
      }
      while ( v11 );
    }
  }
  LOBYTE(v14) = a3;
  if ( a2 == qword_140D05008 )
    *(_WORD *)(2 * v4 - 0x87FFFFFFC80LL) = v14;
  else
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1320LL) + 2 * v4 + 550) = v14;
  return KeReleaseMutex(&stru_140C15DC0, 0);
}

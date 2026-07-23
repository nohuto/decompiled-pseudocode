/*
 * XREFs of sub_140950744 @ 0x140950744
 * Callers:
 *     sub_14095E874 @ 0x14095E874 (sub_14095E874.c)
 * Callees:
 *     PsGetProcessImageFileName @ 0x140238FD0 (PsGetProcessImageFileName.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14056294C @ 0x14056294C (sub_14056294C.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     sub_1407DB6A4 @ 0x1407DB6A4 (sub_1407DB6A4.c)
 *     sub_1409506AC @ 0x1409506AC (sub_1409506AC.c)
 *     sub_1409572F0 @ 0x1409572F0 (sub_1409572F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_140950744(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  bool v3; // zf
  __int64 v5; // r12
  char v6; // r13
  int *v7; // rsi
  UNICODE_STRING *v8; // rbx
  const CHAR *ProcessImageFileName; // rax
  void *v10; // r15
  __int64 v11; // rcx
  _QWORD *v12; // r12
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  _STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v17; // [rsp+40h] [rbp-10h] BYREF
  PVOID P; // [rsp+98h] [rbp+48h] BYREF
  PEPROCESS Process; // [rsp+A0h] [rbp+50h] BYREF

  result = (_QWORD *)*a2;
  P = 0LL;
  v17 = 0LL;
  Process = 0LL;
  v3 = a2 == result;
  v5 = a1;
  while ( 1 )
  {
    v15 = result - 3;
    if ( v3 )
      break;
    v6 = 0;
    if ( PsLookupProcessByProcessId((HANDLE)*((unsigned int *)v15 + 4), &Process) >= 0 )
    {
      v7 = (int *)Process;
      if ( (int)sub_1407DB6A4((__int64)Process, &P) >= 0 )
      {
        v8 = (UNICODE_STRING *)P;
        if ( !*(_WORD *)P )
        {
          v6 = 1;
          DestinationString = 0LL;
          ExFreePoolWithTag(P, 0);
          v8 = &v17;
          P = &v17;
          ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)v7);
          RtlInitAnsiString(&DestinationString, ProcessImageFileName);
          RtlAnsiStringToUnicodeString(&v17, &DestinationString, 1u);
        }
      }
      else
      {
        v8 = 0LL;
        P = 0LL;
      }
      v10 = sub_1409506AC((ULONG_PTR)v7);
      sub_14056294C(v11, v7[272], (__int64)v8, v5, (__int64)v10);
      v12 = (_QWORD *)(*v15 - 8LL);
      if ( v15 != (_QWORD *)*v15 )
      {
        do
        {
          if ( *v12 )
            v13 = *(_QWORD *)(*(_QWORD *)(*v12 + 312LL) + 40LL);
          else
            v13 = 0LL;
          sub_1409572F0(a1, v13 + 40, v8);
          v14 = (_QWORD *)v12[1];
          v12 = v14 - 1;
        }
        while ( v15 != v14 );
        v7 = (int *)Process;
      }
      if ( v6 )
      {
        RtlFreeUnicodeString(v8);
      }
      else if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
      }
      if ( v10 )
        ExFreePoolWithTag(v10, 0x4F706E50u);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
      v5 = a1;
    }
    result = (_QWORD *)v15[3];
    v3 = a2 == result;
  }
  return result;
}

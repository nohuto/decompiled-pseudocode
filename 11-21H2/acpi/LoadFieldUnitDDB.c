/*
 * XREFs of LoadFieldUnitDDB @ 0x1C00683E8
 * Callers:
 *     Load @ 0x1C0022220 (Load.c)
 * Callees:
 *     ReadObject @ 0x1C000A950 (ReadObject.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     LoadDDB @ 0x1C00225B8 (LoadDDB.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall LoadFieldUnitDDB(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int Object; // eax
  unsigned int DDB; // ebx
  _SLIST_ENTRY *v8; // rax
  _SLIST_ENTRY *v9; // rdi
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  const void *v13; // r14
  const void *v14; // rdx
  int v15; // ecx
  __int128 v17; // [rsp+30h] [rbp-29h] BYREF
  __int128 v18; // [rsp+40h] [rbp-19h]
  _SLIST_ENTRY *v19; // [rsp+50h] [rbp-9h]
  _SLIST_ENTRY v20; // [rsp+58h] [rbp-1h] BYREF
  _SLIST_ENTRY v21; // [rsp+68h] [rbp+Fh]
  int v22; // [rsp+78h] [rbp+1Fh]

  v22 = 0;
  v17 = 0LL;
  WORD1(v17) = 3;
  v18 = 0LL;
  v19 = &v20;
  v20 = 0LL;
  DWORD2(v18) = 36;
  v21 = 0LL;
  Object = ReadObject(a1, a2, (__int64)&v17);
  DDB = Object;
  if ( !Object )
  {
    v8 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, HIDWORD(v20.Next));
    v9 = v8;
    if ( !v8 )
    {
      DDB = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v10 = 82;
LABEL_15:
      PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
      return DDB;
    }
    *v8 = v20;
    v8[1] = v21;
    LODWORD(v8[2].Next) = v22;
    DWORD2(v18) = HIDWORD(v20.Next) - 36;
    v19 = (_SLIST_ENTRY *)((char *)v8 + 36);
    v11 = ReadObject(a1, a2, (__int64)&v17);
    DDB = v11;
    if ( v11 )
    {
      if ( v11 == 32772 )
      {
        DDB = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError(a1, -1072431098);
        v14 = 0LL;
        v15 = 83;
        goto LABEL_11;
      }
    }
    else
    {
      if ( ghValidateTable )
      {
        v12 = ghValidateTable(v9, qword_1C0082968);
        v13 = (const void *)v12;
        if ( v12 )
        {
          DDB = -1072431079;
          LogError(-1072431079);
          AcpiDiagTraceAmlError(a1, -1072431079);
          v14 = v13;
          v15 = 84;
LABEL_11:
          PrintDebugMessage(v15, v14, 0LL, 0LL, 0LL);
          goto LABEL_12;
        }
      }
      DDB = LoadDDB((struct _SLIST_ENTRY *)a1, (__int64)v9, *(_QWORD *)(a1 + 80), a3);
    }
LABEL_12:
    HeapFree(v9);
    return DDB;
  }
  if ( Object == 32772 )
  {
    DDB = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v10 = 83;
    goto LABEL_15;
  }
  return DDB;
}
